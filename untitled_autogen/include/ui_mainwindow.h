/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuSNAP;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(332, 646);
        MainWindow->setStyleSheet(QString::fromUtf8("color: red;\n"
"background-color: black"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 210, 80, 24));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(230, 420, 23, 23));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(190, 470, 78, 22));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 130, 111, 16));
        lineEdit->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 130, 49, 16));
        label->setStyleSheet(QString::fromUtf8("color: \"red\""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(110, 160, 113, 16));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: #000000"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 160, 61, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: #ff0000"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 311, 20));
        label_3->setStyleSheet(QString::fromUtf8("color : red"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(180, 260, 91, 22));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(180, 280, 91, 22));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(180, 300, 91, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 30, 321, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 332, 21));
        menuSNAP = new QMenu(menubar);
        menuSNAP->setObjectName("menuSNAP");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::RightToolBarArea, toolBar);

        menubar->addAction(menuSNAP->menuAction());
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "S N A P", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "____________________________________________________________________", nullptr));
        menuSNAP->setTitle(QCoreApplication::translate("MainWindow", "SNAP", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
