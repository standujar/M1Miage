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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textfinder
{
public:
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_2;
    QPushButton *Charger;
    QPushButton *Parcourir;
    QGridLayout *gridLayout;
    QPushButton *Recherche;
    QLabel *label;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QPushButton *Remplacer;
    QLineEdit *lineEdit_9;
    QGridLayout *gridLayout_13;
    QLCDNumber *lcdNumber_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_14;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QTextEdit *textEdit_3;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *Quitter;

    void setupUi(QWidget *textfinder)
    {
        if (textfinder->objectName().isEmpty())
            textfinder->setObjectName(QStringLiteral("textfinder"));
        textfinder->resize(443, 522);
        gridLayout_8 = new QGridLayout(textfinder);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget = new QTabWidget(textfinder);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 0, 1, 1, 1);

        Charger = new QPushButton(tab);
        Charger->setObjectName(QStringLiteral("Charger"));

        gridLayout_3->addWidget(Charger, 0, 2, 1, 1);

        Parcourir = new QPushButton(tab);
        Parcourir->setObjectName(QStringLiteral("Parcourir"));

        gridLayout_3->addWidget(Parcourir, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Recherche = new QPushButton(tab);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        Recherche->setEnabled(false);

        gridLayout->addWidget(Recherche, 0, 2, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 1, 1, 1);

        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout_5->addWidget(radioButton, 0, 2, 1, 1);

        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_5->addWidget(radioButton_2, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 2, 0, 1, 1);

        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit->setMouseTracking(false);
        textEdit->setAcceptDrops(true);
        textEdit->setReadOnly(true);
        textEdit->setAcceptRichText(true);
        textEdit->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(textEdit, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 4, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);

        Remplacer = new QPushButton(tab_2);
        Remplacer->setObjectName(QStringLiteral("Remplacer"));
        Remplacer->setEnabled(true);

        gridLayout_12->addWidget(Remplacer, 0, 2, 1, 1);

        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_12->addWidget(lineEdit_9, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 1, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        lcdNumber_2 = new QLCDNumber(tab_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setMode(QLCDNumber::Dec);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_13->addWidget(lcdNumber_2, 0, 1, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_13->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 3, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_14->addWidget(label_10, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_14->addWidget(lineEdit_7, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_14, 0, 0, 1, 1);

        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(true);
        textEdit_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setReadOnly(true);
        textEdit_3->setAcceptRichText(true);
        textEdit_3->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_11->addWidget(textEdit_3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_11);

        tabWidget->addTab(tab_2, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 0, 1, 1);

        Quitter = new QPushButton(textfinder);
        Quitter->setObjectName(QStringLiteral("Quitter"));

        gridLayout_7->addWidget(Quitter, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(textfinder);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(textfinder);
    } // setupUi

    void retranslateUi(QWidget *textfinder)
    {
        textfinder->setWindowTitle(QApplication::translate("textfinder", "textfinder", 0));
        Charger->setText(QApplication::translate("textfinder", "Charger", 0));
        Parcourir->setText(QApplication::translate("textfinder", "Parcourir", 0));
        Recherche->setText(QApplication::translate("textfinder", "Rechercher", 0));
        label->setText(QApplication::translate("textfinder", "  Mot :", 0));
        label_3->setText(QApplication::translate("textfinder", "  Sensible \303\240 la casse", 0));
        radioButton->setText(QApplication::translate("textfinder", "Oui", 0));
        radioButton_2->setText(QApplication::translate("textfinder", "Non", 0));
        label_2->setText(QApplication::translate("textfinder", "  Occurence :", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("textfinder", "Recherche", 0));
        label_7->setText(QApplication::translate("textfinder", "  Remplacement", 0));
        Remplacer->setText(QApplication::translate("textfinder", "Remplacer", 0));
        label_8->setText(QApplication::translate("textfinder", "  Occurence :", 0));
        label_10->setText(QApplication::translate("textfinder", "  Mot :", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("textfinder", "Remplacer", 0));
        Quitter->setText(QApplication::translate("textfinder", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class textfinder: public Ui_textfinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H
