/********************************************************************************
** Form generated from reading UI file 'dlg_attachment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ATTACHMENT_H
#define UI_DLG_ATTACHMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_attachment
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Attachment_Back;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QLineEdit *LE_Attachment_Name;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *CB_Attachment_Type;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *CB_Attachment_Origin;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *LE_Attachment_SN;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *LE_Attachment_Vendor;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QLineEdit *LE_Attachment_Price;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLineEdit *LE_Attachment_Manufacturer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QCalendarWidget *CW_Attachment;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *PB_Yes;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PB_Delete;
    QSpacerItem *horizontalSpacer_9;
    QLabel *ACTION;
    QLabel *ATTACHMENT_ID;

    void setupUi(QDialog *dlg_attachment)
    {
        if (dlg_attachment->objectName().isEmpty())
            dlg_attachment->setObjectName(QString::fromUtf8("dlg_attachment"));
        dlg_attachment->resize(661, 600);
        dlg_attachment->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(dlg_attachment);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Attachment_Back = new QPushButton(dlg_attachment);
        PB_Attachment_Back->setObjectName(QString::fromUtf8("PB_Attachment_Back"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_Attachment_Back->sizePolicy().hasHeightForWidth());
        PB_Attachment_Back->setSizePolicy(sizePolicy);
        PB_Attachment_Back->setMinimumSize(QSize(50, 0));
        PB_Attachment_Back->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(21);
        PB_Attachment_Back->setFont(font);
        PB_Attachment_Back->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"image: url(:/icons/resourcefolder/icons8-close-50.png);\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout->addWidget(PB_Attachment_Back);

        horizontalSpacer = new QSpacerItem(140, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(dlg_attachment);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        label_title->setFont(font1);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_8 = new QLabel(dlg_attachment);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(150, 0));
        label_8->setMaximumSize(QSize(150, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        label_8->setFont(font2);

        horizontalLayout_4->addWidget(label_8);

        LE_Attachment_Name = new QLineEdit(dlg_attachment);
        LE_Attachment_Name->setObjectName(QString::fromUtf8("LE_Attachment_Name"));
        sizePolicy1.setHeightForWidth(LE_Attachment_Name->sizePolicy().hasHeightForWidth());
        LE_Attachment_Name->setSizePolicy(sizePolicy1);
        LE_Attachment_Name->setMinimumSize(QSize(120, 0));
        LE_Attachment_Name->setMaximumSize(QSize(120, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(8);
        LE_Attachment_Name->setFont(font3);

        horizontalLayout_4->addWidget(LE_Attachment_Name);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(dlg_attachment);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 0));
        label_2->setMaximumSize(QSize(120, 16777215));
        label_2->setFont(font2);

        horizontalLayout_5->addWidget(label_2);

        CB_Attachment_Type = new QComboBox(dlg_attachment);
        CB_Attachment_Type->setObjectName(QString::fromUtf8("CB_Attachment_Type"));
        CB_Attachment_Type->setMinimumSize(QSize(200, 0));
        CB_Attachment_Type->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(CB_Attachment_Type);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(dlg_attachment);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(120, 0));
        label_3->setMaximumSize(QSize(120, 16777215));
        label_3->setFont(font2);

        horizontalLayout_6->addWidget(label_3);

        CB_Attachment_Origin = new QComboBox(dlg_attachment);
        CB_Attachment_Origin->setObjectName(QString::fromUtf8("CB_Attachment_Origin"));
        CB_Attachment_Origin->setMinimumSize(QSize(200, 0));
        CB_Attachment_Origin->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_6->addWidget(CB_Attachment_Origin);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(dlg_attachment);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(120, 0));
        label_5->setMaximumSize(QSize(120, 16777215));
        label_5->setFont(font2);

        horizontalLayout_9->addWidget(label_5);

        LE_Attachment_SN = new QLineEdit(dlg_attachment);
        LE_Attachment_SN->setObjectName(QString::fromUtf8("LE_Attachment_SN"));
        sizePolicy1.setHeightForWidth(LE_Attachment_SN->sizePolicy().hasHeightForWidth());
        LE_Attachment_SN->setSizePolicy(sizePolicy1);
        LE_Attachment_SN->setMinimumSize(QSize(120, 0));
        LE_Attachment_SN->setMaximumSize(QSize(120, 16777215));
        LE_Attachment_SN->setFont(font3);

        horizontalLayout_9->addWidget(LE_Attachment_SN);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(dlg_attachment);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(120, 0));
        label_6->setMaximumSize(QSize(120, 16777215));
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);

        LE_Attachment_Vendor = new QLineEdit(dlg_attachment);
        LE_Attachment_Vendor->setObjectName(QString::fromUtf8("LE_Attachment_Vendor"));
        sizePolicy1.setHeightForWidth(LE_Attachment_Vendor->sizePolicy().hasHeightForWidth());
        LE_Attachment_Vendor->setSizePolicy(sizePolicy1);
        LE_Attachment_Vendor->setMinimumSize(QSize(120, 0));
        LE_Attachment_Vendor->setMaximumSize(QSize(120, 16777215));
        LE_Attachment_Vendor->setFont(font3);

        horizontalLayout_8->addWidget(LE_Attachment_Vendor);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_7 = new QLabel(dlg_attachment);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(120, 0));
        label_7->setMaximumSize(QSize(120, 16777215));
        label_7->setFont(font2);

        horizontalLayout_13->addWidget(label_7);

        LE_Attachment_Price = new QLineEdit(dlg_attachment);
        LE_Attachment_Price->setObjectName(QString::fromUtf8("LE_Attachment_Price"));
        sizePolicy1.setHeightForWidth(LE_Attachment_Price->sizePolicy().hasHeightForWidth());
        LE_Attachment_Price->setSizePolicy(sizePolicy1);
        LE_Attachment_Price->setMinimumSize(QSize(120, 0));
        LE_Attachment_Price->setMaximumSize(QSize(120, 16777215));
        LE_Attachment_Price->setFont(font3);

        horizontalLayout_13->addWidget(LE_Attachment_Price);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_9 = new QLabel(dlg_attachment);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(120, 0));
        label_9->setMaximumSize(QSize(120, 16777215));
        label_9->setFont(font2);

        horizontalLayout_14->addWidget(label_9);

        LE_Attachment_Manufacturer = new QLineEdit(dlg_attachment);
        LE_Attachment_Manufacturer->setObjectName(QString::fromUtf8("LE_Attachment_Manufacturer"));
        sizePolicy1.setHeightForWidth(LE_Attachment_Manufacturer->sizePolicy().hasHeightForWidth());
        LE_Attachment_Manufacturer->setSizePolicy(sizePolicy1);
        LE_Attachment_Manufacturer->setMinimumSize(QSize(120, 0));
        LE_Attachment_Manufacturer->setMaximumSize(QSize(120, 16777215));
        LE_Attachment_Manufacturer->setFont(font3);

        horizontalLayout_14->addWidget(LE_Attachment_Manufacturer);


        verticalLayout_2->addLayout(horizontalLayout_14);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(dlg_attachment);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 50));
        label_4->setMaximumSize(QSize(10000, 50));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        CW_Attachment = new QCalendarWidget(dlg_attachment);
        CW_Attachment->setObjectName(QString::fromUtf8("CW_Attachment"));
        CW_Attachment->setMinimumSize(QSize(0, 250));
        CW_Attachment->setMaximumSize(QSize(16777215, 250));

        verticalLayout->addWidget(CW_Attachment);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        PB_Yes = new QPushButton(dlg_attachment);
        PB_Yes->setObjectName(QString::fromUtf8("PB_Yes"));
        sizePolicy.setHeightForWidth(PB_Yes->sizePolicy().hasHeightForWidth());
        PB_Yes->setSizePolicy(sizePolicy);
        PB_Yes->setMinimumSize(QSize(0, 50));
        PB_Yes->setMaximumSize(QSize(16777215, 50));
        PB_Yes->setFont(font1);
        PB_Yes->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_3->addWidget(PB_Yes);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        PB_Delete = new QPushButton(dlg_attachment);
        PB_Delete->setObjectName(QString::fromUtf8("PB_Delete"));
        sizePolicy.setHeightForWidth(PB_Delete->sizePolicy().hasHeightForWidth());
        PB_Delete->setSizePolicy(sizePolicy);
        PB_Delete->setMinimumSize(QSize(0, 50));
        PB_Delete->setMaximumSize(QSize(16777215, 50));
        PB_Delete->setFont(font1);
        PB_Delete->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_3->addWidget(PB_Delete);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_3);

        ACTION = new QLabel(dlg_attachment);
        ACTION->setObjectName(QString::fromUtf8("ACTION"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ACTION->sizePolicy().hasHeightForWidth());
        ACTION->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(1);
        ACTION->setFont(font4);

        verticalLayout_4->addWidget(ACTION);

        ATTACHMENT_ID = new QLabel(dlg_attachment);
        ATTACHMENT_ID->setObjectName(QString::fromUtf8("ATTACHMENT_ID"));
        sizePolicy2.setHeightForWidth(ATTACHMENT_ID->sizePolicy().hasHeightForWidth());
        ATTACHMENT_ID->setSizePolicy(sizePolicy2);
        ATTACHMENT_ID->setFont(font4);

        verticalLayout_4->addWidget(ATTACHMENT_ID);


        retranslateUi(dlg_attachment);

        QMetaObject::connectSlotsByName(dlg_attachment);
    } // setupUi

    void retranslateUi(QDialog *dlg_attachment)
    {
        dlg_attachment->setWindowTitle(QApplication::translate("dlg_attachment", "Dialog", nullptr));
        PB_Attachment_Back->setText(QString());
        label_title->setText(QApplication::translate("dlg_attachment", "TITLE PLACEHOLDER", nullptr));
        label_8->setText(QApplication::translate("dlg_attachment", "N\303\241zev p\305\231\303\255slu\305\241enstv\303\255", nullptr));
        label_2->setText(QApplication::translate("dlg_attachment", "Kategorie", nullptr));
        label_3->setText(QApplication::translate("dlg_attachment", "Zem\304\233 p\305\257vodu", nullptr));
        label_5->setText(QApplication::translate("dlg_attachment", "S\303\251riov\303\251 \304\215\303\255slo", nullptr));
        label_6->setText(QApplication::translate("dlg_attachment", "Zakoupeno v", nullptr));
        label_7->setText(QApplication::translate("dlg_attachment", "Po\305\231izovac\303\255 cena", nullptr));
        label_9->setText(QApplication::translate("dlg_attachment", "V\303\275robce", nullptr));
        label_4->setText(QApplication::translate("dlg_attachment", "Datum n\303\241kupu", nullptr));
        PB_Yes->setText(QApplication::translate("dlg_attachment", "ULO\305\275IT", nullptr));
        PB_Delete->setText(QApplication::translate("dlg_attachment", "SMAZAT", nullptr));
        ACTION->setText(QString());
        ATTACHMENT_ID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_attachment: public Ui_dlg_attachment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ATTACHMENT_H
