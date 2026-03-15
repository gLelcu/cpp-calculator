/********************************************************************************
** Form generated from reading UI file 'gelato.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GELATO_H
#define UI_GELATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gelato2calc
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_impartire;
    QPushButton *pushButton_virgula;
    QPushButton *pushButton_inmultire;
    QPushButton *pushButton_5;
    QPlainTextEdit *plainTextEdit_result;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_adunare;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_8;
    QPushButton *pushButton_1;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_scadere;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_00;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gelato2calc)
    {
        if (gelato2calc->objectName().isEmpty())
            gelato2calc->setObjectName("gelato2calc");
        gelato2calc->resize(418, 466);
        gelato2calc->setStyleSheet(QString::fromUtf8("QMainWindow, QWidget {\n"
"    background-color: #fff0f5;\n"
"    font-family: Arial, sans-serif;\n"
"    color: #5c2d4a;\n"
"}\n"
"\n"
"QPlainTextEdit {\n"
"    background-color: #ffe4f0;\n"
"    border: 3px solid #f4a7c3;\n"
"    border-radius: 12px;\n"
"    padding: 10px;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #7a2d5a;\n"
"}\n"
"\n"
"QPushButton#pushButton_0,\n"
"QPushButton#pushButton_00,\n"
"QPushButton#pushButton_1,\n"
"QPushButton#pushButton_2,\n"
"QPushButton#pushButton_3,\n"
"QPushButton#pushButton_4,\n"
"QPushButton#pushButton_5,\n"
"QPushButton#pushButton_6,\n"
"QPushButton#pushButton_7,\n"
"QPushButton#pushButton_8,\n"
"QPushButton#pushButton_9 {\n"
"    background-color: #ffd6e8;\n"
"    border: 2px solid #f4a7c3;\n"
"    border-radius: 10px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #7a2d5a;\n"
"    min-width: 55px;\n"
"    min-height: 55px;\n"
"}\n"
"\n"
"QPushButton#pushButton_0:hover,\n"
"QPushButton#pushButton_00:hover,\n"
"QPushButton#push"
                        "Button_1:hover,\n"
"QPushButton#pushButton_2:hover,\n"
"QPushButton#pushButton_3:hover,\n"
"QPushButton#pushButton_4:hover,\n"
"QPushButton#pushButton_5:hover,\n"
"QPushButton#pushButton_6:hover,\n"
"QPushButton#pushButton_7:hover,\n"
"QPushButton#pushButton_8:hover,\n"
"QPushButton#pushButton_9:hover {\n"
"    background-color: #ffb3d1;\n"
"}\n"
"\n"
"QPushButton#pushButton_0:pressed,\n"
"QPushButton#pushButton_00:pressed,\n"
"QPushButton#pushButton_1:pressed,\n"
"QPushButton#pushButton_2:pressed,\n"
"QPushButton#pushButton_3:pressed,\n"
"QPushButton#pushButton_4:pressed,\n"
"QPushButton#pushButton_5:pressed,\n"
"QPushButton#pushButton_6:pressed,\n"
"QPushButton#pushButton_7:pressed,\n"
"QPushButton#pushButton_8:pressed,\n"
"QPushButton#pushButton_9:pressed {\n"
"    background-color: #f48fb1;\n"
"}\n"
"\n"
"QPushButton#pushButton_adunare,\n"
"QPushButton#pushButton_scadere,\n"
"QPushButton#pushButton_inmultire,\n"
"QPushButton#pushButton_impartire,\n"
"QPushButton#pushButton_mod {\n"
"    background-color: #"
                        "ff8fab;\n"
"    color: #ffffff;\n"
"    border: 2px solid #e05c7e;\n"
"    border-radius: 10px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    min-width: 55px;\n"
"    min-height: 55px;\n"
"}\n"
"\n"
"QPushButton#pushButton_adunare:hover,\n"
"QPushButton#pushButton_scadere:hover,\n"
"QPushButton#pushButton_inmultire:hover,\n"
"QPushButton#pushButton_impartire:hover,\n"
"QPushButton#pushButton_mod:hover {\n"
"    background-color: #ff6b96;\n"
"}\n"
"\n"
"QPushButton#pushButton_adunare:pressed,\n"
"QPushButton#pushButton_scadere:pressed,\n"
"QPushButton#pushButton_inmultire:pressed,\n"
"QPushButton#pushButton_impartire:pressed,\n"
"QPushButton#pushButton_mod:pressed {\n"
"    background-color: #e0496e;\n"
"}\n"
"\n"
"QPushButton#pushButton_equal {\n"
"    background-color: #e8274b;\n"
"    color: #ffffff;\n"
"    border: 2px solid #b01e38;\n"
"    border-radius: 12px;\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    min-width: 55px;\n"
"    min-height: 55px;\n"
"}\n"
"\n"
"QPushButton#pus"
                        "hButton_equal:hover {\n"
"    background-color: #c9183a;\n"
"}\n"
"\n"
"QPushButton#pushButton_equal:pressed {\n"
"    background-color: #a01028;\n"
"}\n"
"\n"
"QPushButton#pushButton_clear {\n"
"    background-color: #e8b86d;\n"
"    color: #5c3010;\n"
"    border: 2px solid #c8922a;\n"
"    border-radius: 10px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    min-width: 55px;\n"
"    min-height: 55px;\n"
"}\n"
"\n"
"QPushButton#pushButton_clear:hover {\n"
"    background-color: #d4a055;\n"
"}\n"
"\n"
"QPushButton#pushButton_clear:pressed {\n"
"    background-color: #b8843a;\n"
"}\n"
"\n"
"QPushButton#pushButton_virgula {\n"
"    background-color: #ffd6e8;\n"
"    border: 2px solid #a8d8ea;\n"
"    border-radius: 10px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #7a2d5a;\n"
"    min-width: 55px;\n"
"    min-height: 55px;\n"
"}"));
        centralwidget = new QWidget(gelato2calc);
        centralwidget->setObjectName("centralwidget");
        pushButton_impartire = new QPushButton(centralwidget);
        pushButton_impartire->setObjectName("pushButton_impartire");
        pushButton_impartire->setGeometry(QRect(260, 140, 61, 61));
        pushButton_virgula = new QPushButton(centralwidget);
        pushButton_virgula->setObjectName("pushButton_virgula");
        pushButton_virgula->setGeometry(QRect(180, 380, 61, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(true);
        pushButton_virgula->setFont(font);
        pushButton_inmultire = new QPushButton(centralwidget);
        pushButton_inmultire->setObjectName("pushButton_inmultire");
        pushButton_inmultire->setGeometry(QRect(260, 220, 61, 61));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 220, 61, 61));
        pushButton_5->setFont(font);
        plainTextEdit_result = new QPlainTextEdit(centralwidget);
        plainTextEdit_result->setObjectName("plainTextEdit_result");
        plainTextEdit_result->setGeometry(QRect(20, 20, 381, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        plainTextEdit_result->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(180, 300, 61, 61));
        pushButton_3->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(180, 140, 61, 61));
        pushButton_9->setFont(font);
        pushButton_adunare = new QPushButton(centralwidget);
        pushButton_adunare->setObjectName("pushButton_adunare");
        pushButton_adunare->setGeometry(QRect(260, 300, 61, 141));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(340, 140, 61, 61));
        pushButton_clear->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 220, 61, 61));
        pushButton_4->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 300, 61, 61));
        pushButton_2->setFont(font);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(100, 380, 61, 61));
        pushButton_0->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(100, 140, 61, 61));
        pushButton_8->setFont(font);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(20, 300, 61, 61));
        pushButton_1->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 140, 61, 61));
        pushButton_7->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(180, 220, 61, 61));
        pushButton_6->setFont(font);
        pushButton_scadere = new QPushButton(centralwidget);
        pushButton_scadere->setObjectName("pushButton_scadere");
        pushButton_scadere->setGeometry(QRect(340, 300, 61, 61));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(340, 380, 61, 61));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName("pushButton_mod");
        pushButton_mod->setGeometry(QRect(340, 220, 61, 61));
        pushButton_00 = new QPushButton(centralwidget);
        pushButton_00->setObjectName("pushButton_00");
        pushButton_00->setGeometry(QRect(20, 380, 61, 61));
        pushButton_00->setFont(font);
        gelato2calc->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(gelato2calc);
        statusbar->setObjectName("statusbar");
        gelato2calc->setStatusBar(statusbar);

        retranslateUi(gelato2calc);

        QMetaObject::connectSlotsByName(gelato2calc);
    } // setupUi

    void retranslateUi(QMainWindow *gelato2calc)
    {
        gelato2calc->setWindowTitle(QCoreApplication::translate("gelato2calc", "MainWindow", nullptr));
        pushButton_impartire->setText(QCoreApplication::translate("gelato2calc", "/", nullptr));
        pushButton_virgula->setText(QCoreApplication::translate("gelato2calc", ".", nullptr));
        pushButton_inmultire->setText(QCoreApplication::translate("gelato2calc", "X", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gelato2calc", "5", nullptr));
        plainTextEdit_result->setPlainText(QString());
        pushButton_3->setText(QCoreApplication::translate("gelato2calc", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gelato2calc", "9", nullptr));
        pushButton_adunare->setText(QCoreApplication::translate("gelato2calc", "+", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("gelato2calc", "C", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gelato2calc", "4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gelato2calc", "2", nullptr));
        pushButton_0->setText(QCoreApplication::translate("gelato2calc", "0", nullptr));
        pushButton_8->setText(QCoreApplication::translate("gelato2calc", "8", nullptr));
        pushButton_1->setText(QCoreApplication::translate("gelato2calc", "1", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gelato2calc", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gelato2calc", "6", nullptr));
        pushButton_scadere->setText(QCoreApplication::translate("gelato2calc", "-", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("gelato2calc", "=", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("gelato2calc", "%", nullptr));
        pushButton_00->setText(QCoreApplication::translate("gelato2calc", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gelato2calc: public Ui_gelato2calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GELATO_H
