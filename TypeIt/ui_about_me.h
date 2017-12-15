/********************************************************************************
** Form generated from reading UI file 'about_me.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_ME_H
#define UI_ABOUT_ME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About_Me
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *About_Me)
    {
        if (About_Me->objectName().isEmpty())
            About_Me->setObjectName(QStringLiteral("About_Me"));
        About_Me->resize(400, 305);
        About_Me->setWindowOpacity(0.99);
        About_Me->setStyleSheet(QStringLiteral("background-image:url(:/CSS-Background-Images-1-Red-and-Yellow.jpg)"));
        pushButton = new QPushButton(About_Me);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(133, 258, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("FreeMono"));
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 94, 0);\n"
""));
        pushButton_2 = new QPushButton(About_Me);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 111, 181));
        pushButton_2->setStyleSheet(QLatin1String("position:absolute;\n"
"z-index:-33;\n"
"background:none;\n"
"border:none;\n"
"border-image:url(://imageedit_3_3506583437.jpg);\n"
""));
        plainTextEdit = new QPlainTextEdit(About_Me);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(163, 61, 231, 201));
        plainTextEdit->setStyleSheet(QLatin1String("color:rgb(255, 94, 0);\n"
"qproperty-alignment: AlignCenter;\n"
"background:transparent;\n"
"font: 12pt \"FreeMono\";\n"
"border:none;"));
        pushButton_3 = new QPushButton(About_Me);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(-7, -2, 411, 61));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 75 40pt \"FreeMono\";\n"
"color:rgb(255, 94, 0);\n"
"qproperty-alignment: AlignCenter;\n"
"border:none;"));

        retranslateUi(About_Me);
        QObject::connect(pushButton, SIGNAL(clicked()), About_Me, SLOT(close()));

        QMetaObject::connectSlotsByName(About_Me);
    } // setupUi

    void retranslateUi(QDialog *About_Me)
    {
        About_Me->setWindowTitle(QApplication::translate("About_Me", "About Me", Q_NULLPTR));
        pushButton->setText(QApplication::translate("About_Me", "Close", Q_NULLPTR));
        pushButton_2->setText(QString());
        plainTextEdit->setPlainText(QApplication::translate("About_Me", "         Hello!\n"
"\n"
"I am Himanshu kumar(B.Tech).\n"
"Interest:\n"
"\n"
"->Front End Development\n"
"\n"
"->QT Programming", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("About_Me", "About Me", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About_Me: public Ui_About_Me {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_ME_H
