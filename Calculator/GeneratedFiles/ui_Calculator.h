/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *display;
    QGridLayout *gridLayout;
    QPushButton *button_add;
    QPushButton *button_sub;
    QPushButton *button_equal;
    QPushButton *button_root;
    QPushButton *button_num_9;
    QPushButton *button_num_2;
    QPushButton *button_point;
    QPushButton *button_num_5;
    QPushButton *button_num_0;
    QPushButton *button_clean;
    QPushButton *button_num_6;
    QPushButton *button_right_bracket;
    QPushButton *button_num_7;
    QPushButton *button_num_3;
    QPushButton *button_num_1;
    QPushButton *button_num_8;
    QPushButton *button_power;
    QPushButton *button_back;
    QPushButton *button_num_4;
    QPushButton *button_pi;
    QPushButton *button_left_bracket;
    QPushButton *button_factorial;
    QPushButton *button_div;
    QPushButton *button_mul;
    QMenuBar *menuBar;
    QMenu *menuStart;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(571, 397);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorClass->sizePolicy().hasHeightForWidth());
        CalculatorClass->setSizePolicy(sizePolicy);
        CalculatorClass->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        display = new QLineEdit(centralWidget);
        display->setObjectName(QStringLiteral("display"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        display->setFont(font);

        verticalLayout->addWidget(display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        button_add = new QPushButton(centralWidget);
        buttonGroup = new QButtonGroup(CalculatorClass);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(button_add);
        button_add->setObjectName(QStringLiteral("button_add"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223 CN Bold"));
        font1.setBold(true);
        font1.setWeight(75);
        button_add->setFont(font1);

        gridLayout->addWidget(button_add, 2, 3, 1, 1);

        button_sub = new QPushButton(centralWidget);
        buttonGroup->addButton(button_sub);
        button_sub->setObjectName(QStringLiteral("button_sub"));
        button_sub->setFont(font1);

        gridLayout->addWidget(button_sub, 3, 3, 1, 1);

        button_equal = new QPushButton(centralWidget);
        buttonGroup->addButton(button_equal);
        button_equal->setObjectName(QStringLiteral("button_equal"));
        button_equal->setFont(font1);

        gridLayout->addWidget(button_equal, 5, 2, 1, 1);

        button_root = new QPushButton(centralWidget);
        buttonGroup->addButton(button_root);
        button_root->setObjectName(QStringLiteral("button_root"));
        button_root->setFont(font1);

        gridLayout->addWidget(button_root, 0, 1, 1, 1);

        button_num_9 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_9);
        button_num_9->setObjectName(QStringLiteral("button_num_9"));
        button_num_9->setFont(font1);

        gridLayout->addWidget(button_num_9, 4, 2, 1, 1);

        button_num_2 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_2);
        button_num_2->setObjectName(QStringLiteral("button_num_2"));
        button_num_2->setFont(font1);

        gridLayout->addWidget(button_num_2, 2, 1, 1, 1);

        button_point = new QPushButton(centralWidget);
        buttonGroup->addButton(button_point);
        button_point->setObjectName(QStringLiteral("button_point"));
        button_point->setFont(font1);

        gridLayout->addWidget(button_point, 5, 0, 1, 1);

        button_num_5 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_5);
        button_num_5->setObjectName(QStringLiteral("button_num_5"));
        button_num_5->setFont(font1);

        gridLayout->addWidget(button_num_5, 3, 1, 1, 1);

        button_num_0 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_0);
        button_num_0->setObjectName(QStringLiteral("button_num_0"));
        button_num_0->setFont(font1);

        gridLayout->addWidget(button_num_0, 5, 1, 1, 1);

        button_clean = new QPushButton(centralWidget);
        buttonGroup->addButton(button_clean);
        button_clean->setObjectName(QStringLiteral("button_clean"));
        button_clean->setFont(font1);

        gridLayout->addWidget(button_clean, 1, 3, 1, 1);

        button_num_6 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_6);
        button_num_6->setObjectName(QStringLiteral("button_num_6"));
        button_num_6->setFont(font1);

        gridLayout->addWidget(button_num_6, 3, 2, 1, 1);

        button_right_bracket = new QPushButton(centralWidget);
        buttonGroup->addButton(button_right_bracket);
        button_right_bracket->setObjectName(QStringLiteral("button_right_bracket"));
        button_right_bracket->setFont(font1);

        gridLayout->addWidget(button_right_bracket, 1, 1, 1, 1);

        button_num_7 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_7);
        button_num_7->setObjectName(QStringLiteral("button_num_7"));
        button_num_7->setFont(font1);

        gridLayout->addWidget(button_num_7, 4, 0, 1, 1);

        button_num_3 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_3);
        button_num_3->setObjectName(QStringLiteral("button_num_3"));
        button_num_3->setFont(font1);

        gridLayout->addWidget(button_num_3, 2, 2, 1, 1);

        button_num_1 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_1);
        button_num_1->setObjectName(QStringLiteral("button_num_1"));
        button_num_1->setFont(font1);

        gridLayout->addWidget(button_num_1, 2, 0, 1, 1);

        button_num_8 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_8);
        button_num_8->setObjectName(QStringLiteral("button_num_8"));
        button_num_8->setFont(font1);

        gridLayout->addWidget(button_num_8, 4, 1, 1, 1);

        button_power = new QPushButton(centralWidget);
        buttonGroup->addButton(button_power);
        button_power->setObjectName(QStringLiteral("button_power"));
        button_power->setFont(font1);

        gridLayout->addWidget(button_power, 0, 0, 1, 1);

        button_back = new QPushButton(centralWidget);
        buttonGroup->addButton(button_back);
        button_back->setObjectName(QStringLiteral("button_back"));
        button_back->setFont(font1);

        gridLayout->addWidget(button_back, 1, 2, 1, 1);

        button_num_4 = new QPushButton(centralWidget);
        buttonGroup->addButton(button_num_4);
        button_num_4->setObjectName(QStringLiteral("button_num_4"));
        button_num_4->setFont(font1);

        gridLayout->addWidget(button_num_4, 3, 0, 1, 1);

        button_pi = new QPushButton(centralWidget);
        buttonGroup->addButton(button_pi);
        button_pi->setObjectName(QStringLiteral("button_pi"));
        button_pi->setFont(font1);

        gridLayout->addWidget(button_pi, 0, 3, 1, 1);

        button_left_bracket = new QPushButton(centralWidget);
        buttonGroup->addButton(button_left_bracket);
        button_left_bracket->setObjectName(QStringLiteral("button_left_bracket"));
        button_left_bracket->setFont(font1);

        gridLayout->addWidget(button_left_bracket, 1, 0, 1, 1);

        button_factorial = new QPushButton(centralWidget);
        buttonGroup->addButton(button_factorial);
        button_factorial->setObjectName(QStringLiteral("button_factorial"));
        button_factorial->setFont(font1);

        gridLayout->addWidget(button_factorial, 0, 2, 1, 1);

        button_div = new QPushButton(centralWidget);
        buttonGroup->addButton(button_div);
        button_div->setObjectName(QStringLiteral("button_div"));
        button_div->setFont(font1);

        gridLayout->addWidget(button_div, 5, 3, 1, 1);

        button_mul = new QPushButton(centralWidget);
        buttonGroup->addButton(button_mul);
        button_mul->setObjectName(QStringLiteral("button_mul"));
        button_mul->setFont(font1);

        gridLayout->addWidget(button_mul, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 571, 26));
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        menuStart->setFont(font1);
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        menuBar->addAction(menuStart->menuAction());

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", nullptr));
        button_add->setText(QApplication::translate("CalculatorClass", "+", nullptr));
        button_sub->setText(QApplication::translate("CalculatorClass", "-", nullptr));
        button_equal->setText(QApplication::translate("CalculatorClass", "=", nullptr));
        button_root->setText(QApplication::translate("CalculatorClass", "\342\210\232", nullptr));
        button_num_9->setText(QApplication::translate("CalculatorClass", "9", nullptr));
        button_num_2->setText(QApplication::translate("CalculatorClass", "2", nullptr));
        button_point->setText(QApplication::translate("CalculatorClass", ".", nullptr));
        button_num_5->setText(QApplication::translate("CalculatorClass", "5", nullptr));
        button_num_0->setText(QApplication::translate("CalculatorClass", "0", nullptr));
        button_clean->setText(QApplication::translate("CalculatorClass", "C", nullptr));
        button_num_6->setText(QApplication::translate("CalculatorClass", "6", nullptr));
        button_right_bracket->setText(QApplication::translate("CalculatorClass", ")", nullptr));
        button_num_7->setText(QApplication::translate("CalculatorClass", "7", nullptr));
        button_num_3->setText(QApplication::translate("CalculatorClass", "3", nullptr));
        button_num_1->setText(QApplication::translate("CalculatorClass", "1", nullptr));
        button_num_8->setText(QApplication::translate("CalculatorClass", "8", nullptr));
        button_power->setText(QApplication::translate("CalculatorClass", "^", nullptr));
        button_back->setText(QApplication::translate("CalculatorClass", "<-", nullptr));
        button_num_4->setText(QApplication::translate("CalculatorClass", "4", nullptr));
        button_pi->setText(QApplication::translate("CalculatorClass", "\317\200", nullptr));
        button_left_bracket->setText(QApplication::translate("CalculatorClass", "(", nullptr));
        button_factorial->setText(QApplication::translate("CalculatorClass", "n!", nullptr));
        button_div->setText(QApplication::translate("CalculatorClass", "/", nullptr));
        button_mul->setText(QApplication::translate("CalculatorClass", "*", nullptr));
        menuStart->setTitle(QApplication::translate("CalculatorClass", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
