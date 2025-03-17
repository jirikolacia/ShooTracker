/********************************************************************************
** Form generated from reading UI file 'dlg_arsenal_addweapon.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ARSENAL_ADDWEAPON_H
#define UI_DLG_ARSENAL_ADDWEAPON_H

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

class Ui_dlg_arsenal_addweapon
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Shooting_Back_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *LE_Arsenal_Name;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *CB_Arsenal_Caliber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *CB_Arsenal_Type;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *CB_Arsenal_Origin;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *LE_Arsenal_CIP;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *LE_Arsenal_Vendor;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *LE_Arsenal_Length;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QCalendarWidget *CW_Arsenal;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *PB_Yes;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PB_Delete;
    QSpacerItem *horizontalSpacer_9;
    QLabel *ACTION;
    QLabel *WEAPON_ID;

    void setupUi(QDialog *dlg_arsenal_addweapon)
    {
        if (dlg_arsenal_addweapon->objectName().isEmpty())
            dlg_arsenal_addweapon->setObjectName(QString::fromUtf8("dlg_arsenal_addweapon"));
        dlg_arsenal_addweapon->resize(674, 579);
        dlg_arsenal_addweapon->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(dlg_arsenal_addweapon);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Shooting_Back_2 = new QPushButton(dlg_arsenal_addweapon);
        PB_Shooting_Back_2->setObjectName(QString::fromUtf8("PB_Shooting_Back_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_Shooting_Back_2->sizePolicy().hasHeightForWidth());
        PB_Shooting_Back_2->setSizePolicy(sizePolicy);
        PB_Shooting_Back_2->setMinimumSize(QSize(50, 0));
        PB_Shooting_Back_2->setMaximumSize(QSize(50, 16777215));
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

        horizontalLayout->addWidget(PB_Shooting_Back_2);

        horizontalSpacer = new QSpacerItem(140, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(dlg_arsenal_addweapon);
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

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(dlg_arsenal_addweapon);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(120, 0));
        label_8->setMaximumSize(QSize(120, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        label_8->setFont(font2);

        horizontalLayout_11->addWidget(label_8);

        LE_Arsenal_Name = new QLineEdit(dlg_arsenal_addweapon);
        LE_Arsenal_Name->setObjectName(QString::fromUtf8("LE_Arsenal_Name"));
        sizePolicy1.setHeightForWidth(LE_Arsenal_Name->sizePolicy().hasHeightForWidth());
        LE_Arsenal_Name->setSizePolicy(sizePolicy1);
        LE_Arsenal_Name->setMinimumSize(QSize(120, 0));
        LE_Arsenal_Name->setMaximumSize(QSize(120, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(8);
        LE_Arsenal_Name->setFont(font3);

        horizontalLayout_11->addWidget(LE_Arsenal_Name);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(dlg_arsenal_addweapon);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 0));
        label->setMaximumSize(QSize(120, 16777215));
        label->setFont(font2);

        horizontalLayout_4->addWidget(label);

        CB_Arsenal_Caliber = new QComboBox(dlg_arsenal_addweapon);
        CB_Arsenal_Caliber->setObjectName(QString::fromUtf8("CB_Arsenal_Caliber"));
        CB_Arsenal_Caliber->setMinimumSize(QSize(200, 0));
        CB_Arsenal_Caliber->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(CB_Arsenal_Caliber);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(dlg_arsenal_addweapon);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 0));
        label_2->setMaximumSize(QSize(120, 16777215));
        label_2->setFont(font2);

        horizontalLayout_5->addWidget(label_2);

        CB_Arsenal_Type = new QComboBox(dlg_arsenal_addweapon);
        CB_Arsenal_Type->setObjectName(QString::fromUtf8("CB_Arsenal_Type"));
        CB_Arsenal_Type->setMinimumSize(QSize(200, 0));
        CB_Arsenal_Type->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(CB_Arsenal_Type);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(dlg_arsenal_addweapon);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(120, 0));
        label_3->setMaximumSize(QSize(120, 16777215));
        label_3->setFont(font2);

        horizontalLayout_6->addWidget(label_3);

        CB_Arsenal_Origin = new QComboBox(dlg_arsenal_addweapon);
        CB_Arsenal_Origin->setObjectName(QString::fromUtf8("CB_Arsenal_Origin"));
        CB_Arsenal_Origin->setMinimumSize(QSize(200, 0));
        CB_Arsenal_Origin->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_6->addWidget(CB_Arsenal_Origin);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(dlg_arsenal_addweapon);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(120, 0));
        label_5->setMaximumSize(QSize(120, 16777215));
        label_5->setFont(font2);

        horizontalLayout_9->addWidget(label_5);

        LE_Arsenal_CIP = new QLineEdit(dlg_arsenal_addweapon);
        LE_Arsenal_CIP->setObjectName(QString::fromUtf8("LE_Arsenal_CIP"));
        sizePolicy1.setHeightForWidth(LE_Arsenal_CIP->sizePolicy().hasHeightForWidth());
        LE_Arsenal_CIP->setSizePolicy(sizePolicy1);
        LE_Arsenal_CIP->setMinimumSize(QSize(120, 0));
        LE_Arsenal_CIP->setMaximumSize(QSize(120, 16777215));
        LE_Arsenal_CIP->setFont(font3);

        horizontalLayout_9->addWidget(LE_Arsenal_CIP);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(dlg_arsenal_addweapon);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(120, 0));
        label_6->setMaximumSize(QSize(120, 16777215));
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);

        LE_Arsenal_Vendor = new QLineEdit(dlg_arsenal_addweapon);
        LE_Arsenal_Vendor->setObjectName(QString::fromUtf8("LE_Arsenal_Vendor"));
        sizePolicy1.setHeightForWidth(LE_Arsenal_Vendor->sizePolicy().hasHeightForWidth());
        LE_Arsenal_Vendor->setSizePolicy(sizePolicy1);
        LE_Arsenal_Vendor->setMinimumSize(QSize(120, 0));
        LE_Arsenal_Vendor->setMaximumSize(QSize(120, 16777215));
        LE_Arsenal_Vendor->setFont(font3);

        horizontalLayout_8->addWidget(LE_Arsenal_Vendor);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(dlg_arsenal_addweapon);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(120, 0));
        label_7->setMaximumSize(QSize(120, 16777215));
        label_7->setFont(font2);

        horizontalLayout_7->addWidget(label_7);

        LE_Arsenal_Length = new QLineEdit(dlg_arsenal_addweapon);
        LE_Arsenal_Length->setObjectName(QString::fromUtf8("LE_Arsenal_Length"));
        sizePolicy1.setHeightForWidth(LE_Arsenal_Length->sizePolicy().hasHeightForWidth());
        LE_Arsenal_Length->setSizePolicy(sizePolicy1);
        LE_Arsenal_Length->setMinimumSize(QSize(120, 0));
        LE_Arsenal_Length->setMaximumSize(QSize(120, 16777215));
        LE_Arsenal_Length->setFont(font3);

        horizontalLayout_7->addWidget(LE_Arsenal_Length);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(dlg_arsenal_addweapon);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 50));
        label_4->setMaximumSize(QSize(10000, 50));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        CW_Arsenal = new QCalendarWidget(dlg_arsenal_addweapon);
        CW_Arsenal->setObjectName(QString::fromUtf8("CW_Arsenal"));
        CW_Arsenal->setMinimumSize(QSize(0, 250));
        CW_Arsenal->setMaximumSize(QSize(16777215, 250));

        verticalLayout->addWidget(CW_Arsenal);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        PB_Yes = new QPushButton(dlg_arsenal_addweapon);
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

        PB_Delete = new QPushButton(dlg_arsenal_addweapon);
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

        ACTION = new QLabel(dlg_arsenal_addweapon);
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

        WEAPON_ID = new QLabel(dlg_arsenal_addweapon);
        WEAPON_ID->setObjectName(QString::fromUtf8("WEAPON_ID"));
        sizePolicy2.setHeightForWidth(WEAPON_ID->sizePolicy().hasHeightForWidth());
        WEAPON_ID->setSizePolicy(sizePolicy2);
        WEAPON_ID->setFont(font4);

        verticalLayout_4->addWidget(WEAPON_ID);


        retranslateUi(dlg_arsenal_addweapon);

        QMetaObject::connectSlotsByName(dlg_arsenal_addweapon);
    } // setupUi

    void retranslateUi(QDialog *dlg_arsenal_addweapon)
    {
        dlg_arsenal_addweapon->setWindowTitle(QApplication::translate("dlg_arsenal_addweapon", "Dialog", nullptr));
        PB_Shooting_Back_2->setText(QString());
        label_title->setText(QApplication::translate("dlg_arsenal_addweapon", "TITLE PLACEHOLDER", nullptr));
        label_8->setText(QApplication::translate("dlg_arsenal_addweapon", "N\303\241zev zbran\304\233", nullptr));
        label->setText(QApplication::translate("dlg_arsenal_addweapon", "R\303\241\305\276e", nullptr));
        label_2->setText(QApplication::translate("dlg_arsenal_addweapon", "Kategorie", nullptr));
        label_3->setText(QApplication::translate("dlg_arsenal_addweapon", "Zem\304\233 p\305\257vodu", nullptr));
        label_5->setText(QApplication::translate("dlg_arsenal_addweapon", "\304\214\303\255slo zbran\304\233 (CIP)", nullptr));
        label_6->setText(QApplication::translate("dlg_arsenal_addweapon", "Zakoupeno v", nullptr));
        label_7->setText(QApplication::translate("dlg_arsenal_addweapon", "D\303\251lka zbran\304\233\n"
"(cel\303\251 cm)", nullptr));
        label_4->setText(QApplication::translate("dlg_arsenal_addweapon", "Datum n\303\241kupu", nullptr));
        PB_Yes->setText(QApplication::translate("dlg_arsenal_addweapon", "ULO\305\275IT", nullptr));
        PB_Delete->setText(QApplication::translate("dlg_arsenal_addweapon", "SMAZAT", nullptr));
        ACTION->setText(QString());
        WEAPON_ID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_arsenal_addweapon: public Ui_dlg_arsenal_addweapon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ARSENAL_ADDWEAPON_H
