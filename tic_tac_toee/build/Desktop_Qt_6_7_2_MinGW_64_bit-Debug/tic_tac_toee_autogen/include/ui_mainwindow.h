/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *first;
    QPushButton *second;
    QPushButton *third;
    QPushButton *fourth;
    QPushButton *fifth;
    QPushButton *sixth;
    QPushButton *seventh;
    QPushButton *eighth;
    QPushButton *ninth;
    QLabel *label_2;
    QLabel *Turn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(300, 140, 21, 391));
        horizontalFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalFrame_2 = new QFrame(centralwidget);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(460, 140, 21, 391));
        horizontalFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setGeometry(QRect(160, 260, 451, 21));
        verticalFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName("verticalLayout");
        verticalFrame_2 = new QFrame(centralwidget);
        verticalFrame_2->setObjectName("verticalFrame_2");
        verticalFrame_2->setGeometry(QRect(160, 400, 451, 21));
        verticalFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        first = new QPushButton(centralwidget);
        first->setObjectName("first");
        first->setGeometry(QRect(160, 140, 141, 121));
        QFont font;
        font.setPointSize(72);
        first->setFont(font);
        first->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"color: rgb(30, 30, 30);"));
        second = new QPushButton(centralwidget);
        second->setObjectName("second");
        second->setGeometry(QRect(320, 140, 141, 121));
        second->setFont(font);
        second->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"color: rgb(30, 30, 30);\n"
"border-color: rgb(30, 30, 30);"));
        third = new QPushButton(centralwidget);
        third->setObjectName("third");
        third->setGeometry(QRect(480, 140, 131, 121));
        third->setFont(font);
        third->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        fourth = new QPushButton(centralwidget);
        fourth->setObjectName("fourth");
        fourth->setGeometry(QRect(160, 280, 141, 121));
        fourth->setFont(font);
        fourth->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        fifth = new QPushButton(centralwidget);
        fifth->setObjectName("fifth");
        fifth->setGeometry(QRect(320, 280, 141, 121));
        fifth->setFont(font);
        fifth->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        sixth = new QPushButton(centralwidget);
        sixth->setObjectName("sixth");
        sixth->setGeometry(QRect(480, 280, 131, 121));
        sixth->setFont(font);
        sixth->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        seventh = new QPushButton(centralwidget);
        seventh->setObjectName("seventh");
        seventh->setGeometry(QRect(160, 420, 141, 111));
        seventh->setFont(font);
        seventh->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        eighth = new QPushButton(centralwidget);
        eighth->setObjectName("eighth");
        eighth->setGeometry(QRect(320, 420, 141, 111));
        eighth->setFont(font);
        eighth->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        ninth = new QPushButton(centralwidget);
        ninth->setObjectName("ninth");
        ninth->setGeometry(QRect(480, 420, 131, 111));
        ninth->setFont(font);
        ninth->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"border-color: rgb(36, 37, 38);\n"
"color: rgb(30, 30, 30);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 10, 141, 101));
        QFont font1;
        font1.setPointSize(36);
        label_2->setFont(font1);
        Turn = new QLabel(centralwidget);
        Turn->setObjectName("Turn");
        Turn->setGeometry(QRect(380, 20, 51, 91));
        QFont font2;
        font2.setPointSize(48);
        Turn->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        first->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        second->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(accessibility)
        third->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        third->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        third->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        fourth->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        fifth->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        sixth->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        seventh->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        eighth->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        ninth->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Turn:", nullptr));
        Turn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
