/********************************************************************************
** Form generated from reading UI file 'type_it.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPE_IT_H
#define UI_TYPE_IT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Type_It
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *getRandom;
    QPushButton *upload;
    QSpacerItem *verticalSpacer_3;
    QPushButton *start;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *heading;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *clear;
    QPushButton *aboutMe;
    QSpacerItem *verticalSpacer_9;
    QPushButton *giveUp;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *Type_It)
    {
        if (Type_It->objectName().isEmpty())
            Type_It->setObjectName(QStringLiteral("Type_It"));
        Type_It->setEnabled(true);
        Type_It->resize(985, 636);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Type_It->sizePolicy().hasHeightForWidth());
        Type_It->setSizePolicy(sizePolicy);
        Type_It->setMinimumSize(QSize(0, 0));
        Type_It->setMaximumSize(QSize(16777215, 16777215));
        Type_It->setCursor(QCursor(Qt::ArrowCursor));
        Type_It->setMouseTracking(false);
        Type_It->setWindowOpacity(1);
        Type_It->setLayoutDirection(Qt::LeftToRight);
        Type_It->setStyleSheet(QStringLiteral("background-image:url(://CSS-Background-Images-1-Red-and-Yellow.jpg)"));
        Type_It->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(Type_It);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-image:url(://CSS-Background-Images-1-Red-and-Yellow.jpg)"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(150, 150));
        label->setMaximumSize(QSize(150, 150));
        label->setStyleSheet(QLatin1String("background:none;\n"
"image: url(:/imageedit_4_4169169761.png);\n"
""));
        label->setScaledContents(true);

        verticalLayout_4->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        getRandom = new QPushButton(centralWidget);
        getRandom->setObjectName(QStringLiteral("getRandom"));
        QFont font;
        font.setFamily(QStringLiteral("FreeMono"));
        font.setPointSize(18);
        getRandom->setFont(font);
        getRandom->setCursor(QCursor(Qt::OpenHandCursor));
        getRandom->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color:rgb(255, 94, 0);"));
        getRandom->setFlat(true);

        verticalLayout_3->addWidget(getRandom);

        upload = new QPushButton(centralWidget);
        upload->setObjectName(QStringLiteral("upload"));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeMono"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        upload->setFont(font1);
        upload->setCursor(QCursor(Qt::OpenHandCursor));
        upload->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color:rgb(255, 94, 0);"));
        upload->setFlat(true);

        verticalLayout_3->addWidget(upload);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setMinimumSize(QSize(0, 120));
        start->setMaximumSize(QSize(150, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeMono"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        start->setFont(font2);
        start->setCursor(QCursor(Qt::OpenHandCursor));
        start->setStyleSheet(QLatin1String("border-image:url(:/imageedit_1_8076061353.png);\n"
"color:rgb(0, 0, 0);\n"
"font: 75 18pt \"FreeMono\";\n"
"font-weight:bold;\n"
"position:absolute;\n"
"background:none;\n"
"border:none;\n"
"\n"
""));

        verticalLayout_4->addWidget(start);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        heading = new QPushButton(centralWidget);
        heading->setObjectName(QStringLiteral("heading"));
        QFont font3;
        font3.setFamily(QStringLiteral("FreeMono"));
        font3.setPointSize(40);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        heading->setFont(font3);
        heading->setStyleSheet(QLatin1String("font:  40pt \"FreeMono\";\n"
"color:rgb(255,94, 0);\n"
"border:none;\n"
"font-weight:bold;"));

        verticalLayout->addWidget(heading);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font4;
        font4.setFamily(QStringLiteral("GibsonLight"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setWeight(50);
        textBrowser->setFont(font4);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        textBrowser->setMouseTracking(true);
        textBrowser->setStyleSheet(QLatin1String("background-image:url(:/light.jpg);\n"
"background-color: rgb(187, 187, 187);\n"
"\n"
"padding-top:15;\n"
"padding-bottom:15;\n"
"padding-right:10;\n"
"padding-left:10;"));
        textBrowser->setFrameShape(QFrame::StyledPanel);
        textBrowser->setFrameShadow(QFrame::Raised);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setAcceptRichText(false);
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);
        textBrowser->setOpenLinks(false);

        verticalLayout->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(649, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFont(font4);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit->setMouseTracking(true);
        textEdit->setStyleSheet(QLatin1String("background-image: url(:/light.jpg);\n"
"background-color: rgb(187, 187, 187);\n"
"padding-top:15;\n"
"padding-bottom:15;\n"
"padding-right:10;\n"
"padding-left:10;"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Raised);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setUndoRedoEnabled(false);
        textEdit->setAcceptRichText(false);
        textEdit->setTextInteractionFlags(Qt::TextEditable);

        verticalLayout->addWidget(textEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 150));
        label_2->setStyleSheet(QLatin1String("position:absolute;\n"
"background:none;\n"
"border:none;\n"
"border-image:url(://logo.png);"));

        verticalLayout_5->addWidget(label_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setFont(font);
        clear->setCursor(QCursor(Qt::OpenHandCursor));
        clear->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color:rgb(255, 94, 0);"));
        clear->setFlat(true);

        verticalLayout_2->addWidget(clear);

        aboutMe = new QPushButton(centralWidget);
        aboutMe->setObjectName(QStringLiteral("aboutMe"));
        aboutMe->setFont(font1);
        aboutMe->setCursor(QCursor(Qt::OpenHandCursor));
        aboutMe->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color:rgb(255, 94, 0);"));
        aboutMe->setFlat(true);

        verticalLayout_2->addWidget(aboutMe);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        giveUp = new QPushButton(centralWidget);
        giveUp->setObjectName(QStringLiteral("giveUp"));
        giveUp->setMinimumSize(QSize(0, 120));
        giveUp->setFont(font2);
        giveUp->setCursor(QCursor(Qt::OpenHandCursor));
        giveUp->setStyleSheet(QLatin1String("border-image:url(:/stop-icon.png);\n"
"color:rgb(0, 0, 0);\n"
"font: 75 18pt \"FreeMono\";\n"
"font-weight:bold;\n"
"position:absolute;\n"
"background:none;\n"
"border:none;\n"
"\n"
""));

        verticalLayout_5->addWidget(giveUp);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);


        horizontalLayout_2->addLayout(verticalLayout_5);

        Type_It->setCentralWidget(centralWidget);
        QWidget::setTabOrder(textEdit, start);
        QWidget::setTabOrder(start, aboutMe);
        QWidget::setTabOrder(aboutMe, clear);
        QWidget::setTabOrder(clear, heading);

        retranslateUi(Type_It);
        QObject::connect(clear, SIGNAL(clicked()), textBrowser, SLOT(clear()));
        QObject::connect(getRandom, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(upload, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(start, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(clear, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Type_It);
    } // setupUi

    void retranslateUi(QMainWindow *Type_It)
    {
        Type_It->setWindowTitle(QApplication::translate("Type_It", "Typometer", Q_NULLPTR));
        label->setText(QString());
        getRandom->setText(QApplication::translate("Type_It", "Default", Q_NULLPTR));
        upload->setText(QApplication::translate("Type_It", "Upload", Q_NULLPTR));
        start->setText(QApplication::translate("Type_It", "START", Q_NULLPTR));
        heading->setText(QApplication::translate("Type_It", "TYPOMETER", Q_NULLPTR));
        textBrowser->setPlaceholderText(QApplication::translate("Type_It", "Your Uploaded File Appers Here...", Q_NULLPTR));
        textEdit->setPlaceholderText(QApplication::translate("Type_It", "You Type Here...", Q_NULLPTR));
        label_2->setText(QString());
        clear->setText(QApplication::translate("Type_It", "Clear", Q_NULLPTR));
        aboutMe->setText(QApplication::translate("Type_It", "About Me", Q_NULLPTR));
        giveUp->setText(QApplication::translate("Type_It", "STOP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Type_It: public Ui_Type_It {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPE_IT_H
