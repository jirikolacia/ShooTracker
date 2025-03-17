/********************************************************************************
** Form generated from reading UI file 'dlg_arsenal_weapon_select_attachment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ARSENAL_WEAPON_SELECT_ATTACHMENT_H
#define UI_DLG_ARSENAL_WEAPON_SELECT_ATTACHMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_arsenal_weapon_attachment_select
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Attachment_back;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QLabel *WEAPONID;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *Description;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QPushButton *PB_Stock;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QPushButton *PB_Silencer;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QPushButton *PB_Magazine;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QPushButton *PB_PistolGrip;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QPushButton *PB_Optics;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QPushButton *PB_Foregrip;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *dlg_arsenal_weapon_attachment_select)
    {
        if (dlg_arsenal_weapon_attachment_select->objectName().isEmpty())
            dlg_arsenal_weapon_attachment_select->setObjectName(QString::fromUtf8("dlg_arsenal_weapon_attachment_select"));
        dlg_arsenal_weapon_attachment_select->resize(631, 536);
        dlg_arsenal_weapon_attachment_select->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_8 = new QVBoxLayout(dlg_arsenal_weapon_attachment_select);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Attachment_back = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Attachment_back->setObjectName(QString::fromUtf8("PB_Attachment_back"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_Attachment_back->sizePolicy().hasHeightForWidth());
        PB_Attachment_back->setSizePolicy(sizePolicy);
        PB_Attachment_back->setMinimumSize(QSize(50, 0));
        PB_Attachment_back->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(21);
        PB_Attachment_back->setFont(font);
        PB_Attachment_back->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"image: url(:/icons/resourcefolder/icons8-close-50.png);\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout->addWidget(PB_Attachment_back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_7 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        label_7->setFont(font1);

        horizontalLayout->addWidget(label_7);

        WEAPONID = new QLabel(dlg_arsenal_weapon_attachment_select);
        WEAPONID->setObjectName(QString::fromUtf8("WEAPONID"));
        WEAPONID->setMaximumSize(QSize(0, 0));

        horizontalLayout->addWidget(WEAPONID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        Description = new QLabel(dlg_arsenal_weapon_attachment_select);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setFont(font1);
        Description->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(Description);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 20));
        label_9->setMaximumSize(QSize(100, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        label_9->setFont(font2);
        label_9->setContextMenuPolicy(Qt::NoContextMenu);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        PB_Stock = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Stock->setObjectName(QString::fromUtf8("PB_Stock"));
        PB_Stock->setMinimumSize(QSize(100, 100));
        PB_Stock->setMaximumSize(QSize(100, 100));
        PB_Stock->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/stock.png);\n"
"\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_2->addWidget(PB_Stock);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 20));
        label_8->setMaximumSize(QSize(100, 20));
        label_8->setFont(font2);
        label_8->setContextMenuPolicy(Qt::NoContextMenu);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);

        PB_Silencer = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Silencer->setObjectName(QString::fromUtf8("PB_Silencer"));
        PB_Silencer->setMinimumSize(QSize(100, 100));
        PB_Silencer->setMaximumSize(QSize(100, 100));
        PB_Silencer->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/silencer.png);\n"
"\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout->addWidget(PB_Silencer);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_11 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 20));
        label_11->setMaximumSize(QSize(100, 20));
        label_11->setFont(font2);
        label_11->setContextMenuPolicy(Qt::NoContextMenu);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_11);

        PB_Magazine = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Magazine->setObjectName(QString::fromUtf8("PB_Magazine"));
        PB_Magazine->setMinimumSize(QSize(100, 100));
        PB_Magazine->setMaximumSize(QSize(100, 100));
        PB_Magazine->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/magazine100.png);\n"
"\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_4->addWidget(PB_Magazine);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_13 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 20));
        label_13->setMaximumSize(QSize(100, 20));
        label_13->setFont(font2);
        label_13->setContextMenuPolicy(Qt::NoContextMenu);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_13);

        PB_PistolGrip = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_PistolGrip->setObjectName(QString::fromUtf8("PB_PistolGrip"));
        PB_PistolGrip->setMinimumSize(QSize(100, 100));
        PB_PistolGrip->setMaximumSize(QSize(100, 100));
        PB_PistolGrip->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/pistol_stock.png);\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_6->addWidget(PB_PistolGrip);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_10 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(100, 20));
        label_10->setMaximumSize(QSize(100, 20));
        label_10->setFont(font2);
        label_10->setContextMenuPolicy(Qt::NoContextMenu);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_10);

        PB_Optics = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Optics->setObjectName(QString::fromUtf8("PB_Optics"));
        PB_Optics->setMinimumSize(QSize(100, 100));
        PB_Optics->setMaximumSize(QSize(100, 100));
        PB_Optics->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/scope.png);\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_3->addWidget(PB_Optics);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_12 = new QLabel(dlg_arsenal_weapon_attachment_select);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 20));
        label_12->setMaximumSize(QSize(100, 20));
        label_12->setFont(font2);
        label_12->setContextMenuPolicy(Qt::NoContextMenu);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_12);

        PB_Foregrip = new QPushButton(dlg_arsenal_weapon_attachment_select);
        PB_Foregrip->setObjectName(QString::fromUtf8("PB_Foregrip"));
        PB_Foregrip->setMinimumSize(QSize(100, 100));
        PB_Foregrip->setMaximumSize(QSize(100, 100));
        PB_Foregrip->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/foregrip.png);\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_5->addWidget(PB_Foregrip);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);


        retranslateUi(dlg_arsenal_weapon_attachment_select);

        QMetaObject::connectSlotsByName(dlg_arsenal_weapon_attachment_select);
    } // setupUi

    void retranslateUi(QDialog *dlg_arsenal_weapon_attachment_select)
    {
        dlg_arsenal_weapon_attachment_select->setWindowTitle(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Dialog", nullptr));
        PB_Attachment_back->setText(QString());
        label_7->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Spr\303\241va p\305\231\303\255slu\305\241enstv\303\255 - v\303\275b\304\233r typu", nullptr));
        WEAPONID->setText(QString());
        Description->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Kliknut\303\255m vyberte z nab\303\255dky typ\305\257 p\305\231\303\255slu\305\241enstv\303\255, \n"
"kter\303\275 chcete zm\304\233nit.", nullptr));
        label_9->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Pa\305\276ba", nullptr));
        PB_Stock->setText(QString());
        label_8->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Tlumi\304\215", nullptr));
        PB_Silencer->setText(QString());
        label_11->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Z\303\241sobn\303\255k", nullptr));
        PB_Magazine->setText(QString());
        label_13->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Pistol grip", nullptr));
        PB_PistolGrip->setText(QString());
        label_10->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Optika", nullptr));
        PB_Optics->setText(QString());
        label_12->setText(QApplication::translate("dlg_arsenal_weapon_attachment_select", "Foregrip", nullptr));
        PB_Foregrip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_arsenal_weapon_attachment_select: public Ui_dlg_arsenal_weapon_attachment_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ARSENAL_WEAPON_SELECT_ATTACHMENT_H
