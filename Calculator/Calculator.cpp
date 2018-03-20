#include "Calculator.h"
#include "ui_Calculator.h"
#include "Stack.cpp"
#define ¦Ð 3.1415926

using namespace std;

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::CalculatorClass)
{
	ui->setupUi(this);
	QObject::connect(ui->buttonGroup,
		(void (QButtonGroup::*)(QAbstractButton *))&QButtonGroup::buttonClicked
		, this, &Calculator::Button_clicked);
	QObject::connect(ui->display, &QLineEdit::textChanged, this, &Calculator::onTextChanged);
	QRegExp rx("[0-9 +\\-*/\\(\\)\\^\\!\\.]{21}");
	QRegExpValidator *pValidator = new QRegExpValidator(rx, this);
	ui->display->setValidator(pValidator);
	ui->display->setFocusPolicy(Qt::StrongFocus);
}

Calculator::~Calculator()
{
	delete ui;
}

bool isNumber(QChar ch) {
	if (ch >= '0' && ch <= '9')
		return true;
	if (ch == '.' || ch == u'¦Ð')
		return true;
	return false;
}

bool isSymbol(QChar ch) {
	if (ch == '*' || ch == '+' || ch == '-' || ch == '/' ||
		ch == '^')
		return true;
	return false;
}

int operator_priority(QChar ch) {
	if (ch == '+' || ch == '-')
		return 0;
	if (ch == '*' || ch == '/')
		return 1;
	if (ch == '^' || ch == u'¡Ì' || ch == '!')
		return 2;
	if (ch == '(' || ch == ')')
		return -1;
	if (ch == '#')
		return -2;
	return -3;
}

bool point_flag(QString str) {
	int point_count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '.')
			point_count++;
		if (point_count > 1) {
			return false;
		}
	}
	return true;
}

bool judge_error(QString str) {
	bool pow_flag = true;
	int count_left_bracket = 0;
	int count_right_bracket = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			count_left_bracket++;
		if (str[i] == ')')
			count_right_bracket++;
		if (str[i] == '^' && str[i + 1] == '^') {
			pow_flag = false;
			return pow_flag;
		}
	}
	if (count_left_bracket == count_right_bracket)
		return true;
	else
		return false;
	return true;
}

int judge_accuracy(double result) {
	int count = 0;
	while (true) {
		if (abs(round(result) - result) < 0.000000000000001) {
			break;
		}
		else {
			result *= 10;
			count++;
		}
	}
	if (count >= 10)
		count = 7;
	return count;
}

QString factorial(double num) {
	QString result;
	int carry = 0;
	vector <int> arr(200, 0);
	arr[0] = 1;
	int k = 0;
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j <= k; j++) {
			arr[j] = arr[j] * i + carry;
			carry = arr[j] / 10;
			arr[j] %= 10;
		}
		while (carry) {
			k++;
			arr[k] = carry % 10;
			carry /= 10;
		}
	}
	for (int i = k; i >= 0; i--) {
		result += QString::number(arr[i]);
	}
	return result;
}

void Calculator::Button_clicked(QAbstractButton * object_button) {
	QString button_text = object_button->text();
	QString display_text = ui->display->text();

	if (display_text.length() > 100) {
		ui->display->setText("ERROR");
		return;
	}
	if (display_text == "ERROR") {
		ui->display->setText("");
		display_text.clear();
	}
	if (button_text == "C") {
		ui->display->setText("");
	}
	else if (button_text == "<-") {
		display_text.remove(display_text.length() - 1, display_text.length());
		ui->display->setText(display_text);
	}
	else if (button_text == "n!") {
		display_text += "!";
		ui->display->setText(display_text);
	}
	else if (button_text == "=") {
		calculate(display_text + "#");
	}
	else {
		display_text += button_text;
		ui->display->setText(display_text);
	}
}

void Calculator::onTextChanged(QString text) {
	QString str;
	if (text.length() > 1) {
		int len = text.length() - 1;
		if (isSymbol(text[len]) || text[len] == u'¦Ð') {
			if ((text[len] == u'¦Ð' && text[len - 1] == u'¦Ð')
				|| (isSymbol(text[len - 1]) || text[len - 1] == u'¡Ì')) {
				text.remove(text.length() - 1, text.length());
			}
			if (text[len - 1] == '(')
				text.remove(text.length() - 1, text.length());
		}
		if (text[len - 1] == ')') {
			if (text[len] == '(' || isNumber(text[len])) {
				text.remove(text.length() - 1, text.length());
			}
		}
		if (text[len] == '.') {
			str += text[len];
			while (len > 0 && isNumber(text[len--])) {
				str += text[len];
			}
			if (!point_flag(str))
				text.remove(text.length() - 1, text.length());
		}

	}
	else if (isSymbol(text[0]) || text[0] == ')') {
		text.remove(text.length() - 1, text.length());
	}
	ui->display->setText(text);
	return;
}

void Calculator::calculate(QString expression) {
	Stack<QChar> symbol;
	Stack<double> number;
	QChar top;
	double Alpha, Beta;
	double result;
	int accuracy;
	bool root_flag = true;
	if (!judge_error(expression)) {
		ui->display->setText("ERROR");
		return;
	}
	else {
		for (int i = 0; i < expression.length(); i++) {
			if (isNumber(expression[i])) {
				if (expression[i] == u'¦Ð' && i == 0) {
					number.push(3.1415926);
					continue;
				}
				double tempNumber = 0;
				QString tempString;
				if (i > 1 && expression[i - 1] == ')') {
					ui->display->setText("ERROR");
					return;
				}

				tempString += expression[i];
				while (isNumber(expression[++i])) {
					if (expression[i] == u'¦Ð' && !isNumber(expression[i + 1]))
						break;
					if (expression[i] == u'¦Ð' && isNumber(expression[i + 1])) {
						ui->display->setText("ERROR");
						return;
					}
					tempString += expression[i];
				}
				if (point_flag(tempString)) {
					tempNumber = tempString.toDouble();
					if (expression[i] == u'¦Ð' && tempNumber != 0)
						tempNumber *= ¦Ð;
					number.push(tempNumber);
					tempString.clear();
				}
				else {
					ui->display->setText("ERROR");
					return;
				}
			}
			if (!isNumber(expression[i])) {
				if (symbol.isEmpty()) {
					symbol.push(expression[i]);
					if (expression[i] == '#')
						symbol.pop();
				}
				else {
					symbol.get_top_element(top);

					if (operator_priority(expression[i]) > operator_priority(top)
						|| expression[i] == '(') {
						if (expression[i] == '(' && isNumber(expression[i - 1])) {
							ui->display->setText("ERROR");
							return;
						}
						symbol.push(expression[i]);
					}
					else {
						while (operator_priority(expression[i]) <= operator_priority(top)) {
							if (operator_priority(expression[i]) == operator_priority(top)
								&& top != '#' && (top != '(' || (top == '(' && expression[i] == '('))) {
								symbol.push(expression[i]);
								break;
							}
							while (top == u'¡Ì' && root_flag) {
								if (expression[i] == u'¡Ì')
									break;
								number.get_top_element(Alpha);
								number.pop();
								Alpha = sqrt(Alpha);
								number.push(Alpha);
								symbol.pop();
								if (!symbol.isEmpty()) {
									symbol.get_top_element(top);
									continue;
								}
								else {
									if (expression[i] == '#') {
										symbol.push(expression[i]);
										symbol.get_top_element(top);
									}
									else {
										symbol.push(expression[i]);
									}
									root_flag = false;
									break;
								}
							}
							if (!root_flag) {
								root_flag = true;
								if (expression[i] == '#' && top == '#')
									symbol.pop();
								break;
							}
							if (top == '!')
								break;
							if (expression[i] == '#' && top == '#') {
								symbol.pop();
								break;
							}
							if (top == '(' && expression[i] == ')') {
								symbol.pop();
								break;
							}
							else {
								number.get_top_element(Alpha);
								number.pop();
								number.get_top_element(Beta);
								number.pop();
							}
							if (top == '+') {
								Beta += Alpha;
								number.push(Beta);
							}
							else if (top == '-') {
								Beta -= Alpha;
								number.push(Beta);
							}
							else if (top == '*') {
								Beta *= Alpha;
								number.push(Beta);
							}
							else if (top == '/') {
								Beta /= Alpha;
								number.push(Beta);
							}
							else if (top == '^') {
								Beta = pow(Beta, Alpha);
								number.push(Beta);
							}
							symbol.pop();
							if (symbol.isEmpty())
								symbol.push(expression[i]);
							symbol.get_top_element(top);
						}
						if (top == '(' && expression[i] != ')') {
							symbol.push(expression[i]);
							symbol.get_top_element(top);
						}

					}
					if (top == '!') {
						number.get_top_element(Alpha);
						ui->display->setText(factorial(Alpha));
						return;
					}
				}
			}
		}
	}
	if (symbol.isEmpty()) {
		number.get_top_element(result);
		accuracy = judge_accuracy(result);
		ui->display->setText(QString::number(result, 10, accuracy));
	}
	else {
		ui->display->setText("ERROR");
		return;
	}
	return;
}

void Calculator::keyPressEvent(QKeyEvent *event) {
	if (event->key() == Qt::Key_Return) {
		QString display_text = ui->display->text();
		calculate(display_text + "#");
	}
}