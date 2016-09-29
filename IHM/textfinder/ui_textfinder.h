/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textfinder
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *Quitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *Recherche;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_2;
    QPushButton *Parcourir;
    QPushButton *Ok_1;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QPushButton *findButton_3;
    QGridLayout *gridLayout_13;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QGridLayout *gridLayout_14;
    QLineEdit *lineEdit_9;
    QLabel *label_10;
    QTextEdit *textEdit_3;

    void setupUi(QWidget *textfinder)
    {
        if (textfinder->objectName().isEmpty())
            textfinder->setObjectName(QStringLiteral("textfinder"));
        textfinder->resize(419, 509);
        gridLayoutWidget = new QWidget(textfinder);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 401, 491));
        gridLayout_6 = new QGridLayout(gridLayoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 0, 1, 1);

        Quitter = new QPushButton(gridLayoutWidget);
        Quitter->setObjectName(QStringLiteral("Quitter"));

        gridLayout_7->addWidget(Quitter, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 1, 0, 1, 1);

        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 10, 391, 421));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(gridLayoutWidget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Recherche = new QPushButton(gridLayoutWidget_3);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        Recherche->setEnabled(false);

        gridLayout->addWidget(Recherche, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit_2 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 0, 1, 1, 1);

        Parcourir = new QPushButton(gridLayoutWidget_3);
        Parcourir->setObjectName(QStringLiteral("Parcourir"));

        gridLayout_3->addWidget(Parcourir, 0, 0, 1, 1);

        Ok_1 = new QPushButton(gridLayoutWidget_3);
        Ok_1->setObjectName(QStringLiteral("Ok_1"));

        gridLayout_3->addWidget(Ok_1, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_5->addWidget(radioButton_2, 0, 3, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout_5->addWidget(radioButton, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 2, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit->setMouseTracking(false);
        textEdit->setAcceptDrops(true);
        textEdit->setReadOnly(true);
        textEdit->setAcceptRichText(true);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_4->addWidget(textEdit, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_3, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_5 = new QWidget(tab_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(0, 10, 391, 421));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_7 = new QLabel(gridLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_12->addWidget(lineEdit_7, 0, 1, 1, 1);

        findButton_3 = new QPushButton(gridLayoutWidget_5);
        findButton_3->setObjectName(QStringLiteral("findButton_3"));
        findButton_3->setEnabled(false);

        gridLayout_12->addWidget(findButton_3, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 1, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_8 = new QLabel(gridLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_13->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setReadOnly(true);

        gridLayout_13->addWidget(lineEdit_8, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 3, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        lineEdit_9 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_14->addWidget(lineEdit_9, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_14->addWidget(label_10, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_14, 0, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget_5);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(true);
        textEdit_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setReadOnly(true);
        textEdit_3->setAcceptRichText(true);
        textEdit_3->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_11->addWidget(textEdit_3, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(textfinder);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(textfinder);
    } // setupUi

    void retranslateUi(QWidget *textfinder)
    {
        textfinder->setWindowTitle(QApplication::translate("textfinder", "textfinder", 0));
        Quitter->setText(QApplication::translate("textfinder", "Quitter", 0));
        label->setText(QApplication::translate("textfinder", "  Keyword", 0));
        Recherche->setText(QApplication::translate("textfinder", "Rechercher", 0));
        Parcourir->setText(QApplication::translate("textfinder", "Parcourir", 0));
        Ok_1->setText(QApplication::translate("textfinder", "Ok", 0));
        label_3->setText(QApplication::translate("textfinder", "  Casse :", 0));
        radioButton_2->setText(QApplication::translate("textfinder", "Non", 0));
        radioButton->setText(QApplication::translate("textfinder", "Oui", 0));
        label_2->setText(QApplication::translate("textfinder", "  Occurence :", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("textfinder", "Recherche", 0));
        label_7->setText(QApplication::translate("textfinder", "  Remplacement", 0));
        findButton_3->setText(QApplication::translate("textfinder", "Remplacer", 0));
        label_8->setText(QApplication::translate("textfinder", "  Occurence :", 0));
        label_10->setText(QApplication::translate("textfinder", "  Keyword", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("textfinder", "Remplacer", 0));
    } // retranslateUi

};

namespace Ui {
    class textfinder: public Ui_textfinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H
