/********************************************************************************
** Form generated from reading UI file 'dlg_shooting_range.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_SHOOTING_RANGE_H
#define UI_DLG_SHOOTING_RANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_shooting_range
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *PB_Shooting_Back_2;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *verticalSpacer;
    QLabel *Label_Shooting_ID_Number;
    QVBoxLayout *verticalLayout_5;
    QCalendarWidget *CW_Shooting;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_7;
    QLineEdit *LE_Shooting_AmountOfGuns;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *LE_Shooting_RangeName;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *CB_Shooting_Range_Outside;
    QCheckBox *CB_Shooting_Range_Inside;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_24;
    QSpacerItem *verticalSpacer_11;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_11;
    QLineEdit *LE_Shooting_FinalPrice;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *Label_Shooting_Charactercount;
    QTextEdit *TE_Footnotes;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *PB_Shooting_Confirm;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *dlg_shooting_range)
    {
        if (dlg_shooting_range->objectName().isEmpty())
            dlg_shooting_range->setObjectName(QString::fromUtf8("dlg_shooting_range"));
        dlg_shooting_range->resize(793, 768);
        dlg_shooting_range->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(dlg_shooting_range);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        PB_Shooting_Back_2 = new QPushButton(dlg_shooting_range);
        PB_Shooting_Back_2->setObjectName(QString::fromUtf8("PB_Shooting_Back_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_Shooting_Back_2->sizePolicy().hasHeightForWidth());
        PB_Shooting_Back_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(21);
        PB_Shooting_Back_2->setFont(font);
        PB_Shooting_Back_2->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"image: url(:/icons/resourcefolder/icons8-close-50.png);\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_17->addWidget(PB_Shooting_Back_2);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_21);


        verticalLayout_3->addLayout(horizontalLayout_17);

        verticalSpacer = new QSpacerItem(20, 430, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        Label_Shooting_ID_Number = new QLabel(dlg_shooting_range);
        Label_Shooting_ID_Number->setObjectName(QString::fromUtf8("Label_Shooting_ID_Number"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Label_Shooting_ID_Number->sizePolicy().hasHeightForWidth());
        Label_Shooting_ID_Number->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Label_Shooting_ID_Number);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        CW_Shooting = new QCalendarWidget(dlg_shooting_range);
        CW_Shooting->setObjectName(QString::fromUtf8("CW_Shooting"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CW_Shooting->sizePolicy().hasHeightForWidth());
        CW_Shooting->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        CW_Shooting->setFont(font1);

        verticalLayout_5->addWidget(CW_Shooting);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_7 = new QLabel(dlg_shooting_range);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(label_7);

        LE_Shooting_AmountOfGuns = new QLineEdit(dlg_shooting_range);
        LE_Shooting_AmountOfGuns->setObjectName(QString::fromUtf8("LE_Shooting_AmountOfGuns"));
        LE_Shooting_AmountOfGuns->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
""));

        verticalLayout_18->addWidget(LE_Shooting_AmountOfGuns);


        horizontalLayout->addLayout(verticalLayout_18);

        horizontalSpacer_13 = new QSpacerItem(205, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(dlg_shooting_range);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);

        LE_Shooting_RangeName = new QLineEdit(dlg_shooting_range);
        LE_Shooting_RangeName->setObjectName(QString::fromUtf8("LE_Shooting_RangeName"));
        LE_Shooting_RangeName->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
""));

        verticalLayout->addWidget(LE_Shooting_RangeName);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer_9 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_9);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        label_9 = new QLabel(dlg_shooting_range);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(label_9);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        CB_Shooting_Range_Outside = new QCheckBox(dlg_shooting_range);
        CB_Shooting_Range_Outside->setObjectName(QString::fromUtf8("CB_Shooting_Range_Outside"));
        CB_Shooting_Range_Outside->setFont(font1);

        verticalLayout_22->addWidget(CB_Shooting_Range_Outside);

        CB_Shooting_Range_Inside = new QCheckBox(dlg_shooting_range);
        CB_Shooting_Range_Inside->setObjectName(QString::fromUtf8("CB_Shooting_Range_Inside"));
        CB_Shooting_Range_Inside->setFont(font1);

        verticalLayout_22->addWidget(CB_Shooting_Range_Inside);


        verticalLayout_21->addLayout(verticalLayout_22);


        horizontalLayout_2->addLayout(verticalLayout_21);

        horizontalSpacer_5 = new QSpacerItem(205, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalSpacer_11 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_11);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        label_11 = new QLabel(dlg_shooting_range);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(label_11);

        LE_Shooting_FinalPrice = new QLineEdit(dlg_shooting_range);
        LE_Shooting_FinalPrice->setObjectName(QString::fromUtf8("LE_Shooting_FinalPrice"));
        sizePolicy.setHeightForWidth(LE_Shooting_FinalPrice->sizePolicy().hasHeightForWidth());
        LE_Shooting_FinalPrice->setSizePolicy(sizePolicy);
        LE_Shooting_FinalPrice->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
""));

        verticalLayout_25->addWidget(LE_Shooting_FinalPrice);


        verticalLayout_24->addLayout(verticalLayout_25);


        horizontalLayout_13->addLayout(verticalLayout_24);

        horizontalSpacer_4 = new QSpacerItem(205, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(dlg_shooting_range);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        label->setFont(font2);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Label_Shooting_Charactercount = new QLabel(dlg_shooting_range);
        Label_Shooting_Charactercount->setObjectName(QString::fromUtf8("Label_Shooting_Charactercount"));
        sizePolicy3.setHeightForWidth(Label_Shooting_Charactercount->sizePolicy().hasHeightForWidth());
        Label_Shooting_Charactercount->setSizePolicy(sizePolicy3);
        Label_Shooting_Charactercount->setFont(font2);

        horizontalLayout_3->addWidget(Label_Shooting_Charactercount);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        TE_Footnotes = new QTextEdit(dlg_shooting_range);
        TE_Footnotes->setObjectName(QString::fromUtf8("TE_Footnotes"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TE_Footnotes->sizePolicy().hasHeightForWidth());
        TE_Footnotes->setSizePolicy(sizePolicy4);
        TE_Footnotes->setMinimumSize(QSize(0, 100));
        TE_Footnotes->setMaximumSize(QSize(16777215, 120));
        TE_Footnotes->setBaseSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(10);
        TE_Footnotes->setFont(font3);
        TE_Footnotes->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
""));

        verticalLayout_2->addWidget(TE_Footnotes);


        verticalLayout_6->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_19);

        PB_Shooting_Confirm = new QPushButton(dlg_shooting_range);
        PB_Shooting_Confirm->setObjectName(QString::fromUtf8("PB_Shooting_Confirm"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(PB_Shooting_Confirm->sizePolicy().hasHeightForWidth());
        PB_Shooting_Confirm->setSizePolicy(sizePolicy5);
        PB_Shooting_Confirm->setMaximumSize(QSize(120, 65));
        PB_Shooting_Confirm->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{border-radius: 20px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 0, 0);;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_16->addWidget(PB_Shooting_Confirm);

        horizontalSpacer_20 = new QSpacerItem(40, 14, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_20);


        verticalLayout_7->addLayout(horizontalLayout_16);

        verticalSpacer_2 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_7, 1, 0, 1, 1);


        retranslateUi(dlg_shooting_range);

        QMetaObject::connectSlotsByName(dlg_shooting_range);
    } // setupUi

    void retranslateUi(QDialog *dlg_shooting_range)
    {
        dlg_shooting_range->setWindowTitle(QApplication::translate("dlg_shooting_range", "Dialog", nullptr));
        PB_Shooting_Back_2->setText(QString());
        Label_Shooting_ID_Number->setText(QString());
        label_7->setText(QApplication::translate("dlg_shooting_range", "Po\304\215et zbran\303\255 pou\305\276it\303\275ch pro st\305\231elbu", nullptr));
        label_8->setText(QApplication::translate("dlg_shooting_range", "N\303\241zev st\305\231elnice", nullptr));
        label_9->setText(QApplication::translate("dlg_shooting_range", "Typ st\305\231elnice", nullptr));
        CB_Shooting_Range_Outside->setText(QApplication::translate("dlg_shooting_range", "Venkovn\303\255", nullptr));
        CB_Shooting_Range_Inside->setText(QApplication::translate("dlg_shooting_range", "Vnit\305\231n\303\255", nullptr));
        label_11->setText(QApplication::translate("dlg_shooting_range", "Kone\304\215n\303\241 cena", nullptr));
        label->setText(QApplication::translate("dlg_shooting_range", "Pozn\303\241mka:", nullptr));
        Label_Shooting_Charactercount->setText(QApplication::translate("dlg_shooting_range", "charactercounter", nullptr));
        TE_Footnotes->setHtml(QApplication::translate("dlg_shooting_range", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        PB_Shooting_Confirm->setText(QApplication::translate("dlg_shooting_range", "Potvrdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_shooting_range: public Ui_dlg_shooting_range {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_SHOOTING_RANGE_H
