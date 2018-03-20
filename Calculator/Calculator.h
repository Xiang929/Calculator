#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include <QtWidgets/QMainWindow>
#include <QWidget>
#include <QKeyevent>
#include <QButtonGroup>
#include <QLineEdit>
#include <QRegExp>
#include <string>
#include <math.h>
#include<vector>
#include "ui_Calculator.h"

class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget *parent = Q_NULLPTR);
	void calculate(QString expreesion);
	void keyPressEvent(QKeyEvent *event);
	~Calculator();

	private slots:
	void Button_clicked(QAbstractButton *);
	void onTextChanged(QString text);

private:
	Ui::CalculatorClass *ui;
};
#endif

