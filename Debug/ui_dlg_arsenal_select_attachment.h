/********************************************************************************
** Form generated from reading UI file 'dlg_arsenal_select_attachment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ARSENAL_SELECT_ATTACHMENT_H
#define UI_DLG_ARSENAL_SELECT_ATTACHMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_arsenal_select_attachment
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *PB_Attachment_back;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_19;
    QLabel *WEAPONID;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QLabel *Description;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QPushButton *PB_Stock;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QPushButton *PB_Silencer;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_15;
    QPushButton *PB_Magazine;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_16;
    QPushButton *PB_PistolGrip;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_17;
    QPushButton *PB_Optics;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_18;
    QPushButton *PB_Foregrip;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *dlg_arsenal_select_attachment)
    {
        if (dlg_arsenal_select_attachment->objectName().isEmpty())
            dlg_arsenal_select_attachment->setObjectName(QString::fromUtf8("dlg_arsenal_select_attachment"));
        dlg_arsenal_select_attachment->resize(664, 526);
        dlg_arsenal_select_attachment->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(dlg_arsenal_select_attachment);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        PB_Attachment_back = new QPushButton(dlg_arsenal_select_attachment);
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

        horizontalLayout_8->addWidget(PB_Attachment_back);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        label_19 = new QLabel(dlg_arsenal_select_attachment);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        label_19->setFont(font1);

        horizontalLayout_8->addWidget(label_19);

        WEAPONID = new QLabel(dlg_arsenal_select_attachment);
        WEAPONID->setObjectName(QString::fromUtf8("WEAPONID"));
        WEAPONID->setMaximumSize(QSize(0, 0));

        horizontalLayout_8->addWidget(WEAPONID);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        Description = new QLabel(dlg_arsenal_select_attachment);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setFont(font1);
        Description->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Description);

        verticalSpacer_3 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_13 = new QLabel(dlg_arsenal_select_attachment);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 20));
        label_13->setMaximumSize(QSize(100, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        label_13->setFont(font2);
        label_13->setContextMenuPolicy(Qt::NoContextMenu);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_13);

        PB_Stock = new QPushButton(dlg_arsenal_select_attachment);
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

        verticalLayout_4->addWidget(PB_Stock);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(dlg_arsenal_select_attachment);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 20));
        label_14->setMaximumSize(QSize(100, 20));
        label_14->setFont(font2);
        label_14->setContextMenuPolicy(Qt::NoContextMenu);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_14);

        PB_Silencer = new QPushButton(dlg_arsenal_select_attachment);
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

        verticalLayout_5->addWidget(PB_Silencer);


        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_15 = new QLabel(dlg_arsenal_select_attachment);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 20));
        label_15->setMaximumSize(QSize(100, 20));
        label_15->setFont(font2);
        label_15->setContextMenuPolicy(Qt::NoContextMenu);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_15);

        PB_Magazine = new QPushButton(dlg_arsenal_select_attachment);
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

        verticalLayout_6->addWidget(PB_Magazine);


        horizontalLayout_6->addLayout(verticalLayout_6);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_16 = new QLabel(dlg_arsenal_select_attachment);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 20));
        label_16->setMaximumSize(QSize(100, 20));
        label_16->setFont(font2);
        label_16->setContextMenuPolicy(Qt::NoContextMenu);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_16);

        PB_PistolGrip = new QPushButton(dlg_arsenal_select_attachment);
        PB_PistolGrip->setObjectName(QString::fromUtf8("PB_PistolGrip"));
        PB_PistolGrip->setMinimumSize(QSize(100, 100));
        PB_PistolGrip->setMaximumSize(QSize(100, 100));
        PB_PistolGrip->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/pistol_stock.png);\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_8->addWidget(PB_PistolGrip);


        horizontalLayout_7->addLayout(verticalLayout_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_17 = new QLabel(dlg_arsenal_select_attachment);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 20));
        label_17->setMaximumSize(QSize(100, 20));
        label_17->setFont(font2);
        label_17->setContextMenuPolicy(Qt::NoContextMenu);
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_17);

        PB_Optics = new QPushButton(dlg_arsenal_select_attachment);
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

        verticalLayout_9->addWidget(PB_Optics);


        horizontalLayout_7->addLayout(verticalLayout_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_18 = new QLabel(dlg_arsenal_select_attachment);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 20));
        label_18->setMaximumSize(QSize(100, 20));
        label_18->setFont(font2);
        label_18->setContextMenuPolicy(Qt::NoContextMenu);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_18);

        PB_Foregrip = new QPushButton(dlg_arsenal_select_attachment);
        PB_Foregrip->setObjectName(QString::fromUtf8("PB_Foregrip"));
        PB_Foregrip->setMinimumSize(QSize(100, 100));
        PB_Foregrip->setMaximumSize(QSize(100, 100));
        PB_Foregrip->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 10px;\n"
"image: url(:/attachments/resourcefolder/attachments/foregrip.png);\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        verticalLayout_10->addWidget(PB_Foregrip);


        horizontalLayout_7->addLayout(verticalLayout_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_7->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(verticalLayout_7);


        retranslateUi(dlg_arsenal_select_attachment);

        QMetaObject::connectSlotsByName(dlg_arsenal_select_attachment);
    } // setupUi

    void retranslateUi(QDialog *dlg_arsenal_select_attachment)
    {
        dlg_arsenal_select_attachment->setWindowTitle(QApplication::translate("dlg_arsenal_select_attachment", "Dialog", nullptr));
        PB_Attachment_back->setText(QString());
        label_19->setText(QApplication::translate("dlg_arsenal_select_attachment", "Spr\303\241va p\305\231\303\255slu\305\241enstv\303\255 - v\303\275b\304\233r typu", nullptr));
        WEAPONID->setText(QString());
        Description->setText(QApplication::translate("dlg_arsenal_select_attachment", "Kliknut\303\255m vyberte z nab\303\255dky typ\305\257 p\305\231\303\255slu\305\241enstv\303\255, \n"
"kter\303\275 chcete zm\304\233nit.", nullptr));
        label_13->setText(QApplication::translate("dlg_arsenal_select_attachment", "Pa\305\276ba", nullptr));
        PB_Stock->setText(QString());
        label_14->setText(QApplication::translate("dlg_arsenal_select_attachment", "Tlumi\304\215", nullptr));
        PB_Silencer->setText(QString());
        label_15->setText(QApplication::translate("dlg_arsenal_select_attachment", "Z\303\241sobn\303\255k", nullptr));
        PB_Magazine->setText(QString());
        label_16->setText(QApplication::translate("dlg_arsenal_select_attachment", "Pistol grip", nullptr));
        PB_PistolGrip->setText(QString());
        label_17->setText(QApplication::translate("dlg_arsenal_select_attachment", "Optika", nullptr));
        PB_Optics->setText(QString());
        label_18->setText(QApplication::translate("dlg_arsenal_select_attachment", "Foregrip", nullptr));
        PB_Foregrip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_arsenal_select_attachment: public Ui_dlg_arsenal_select_attachment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ARSENAL_SELECT_ATTACHMENT_H
