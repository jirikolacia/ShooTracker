/********************************************************************************
** Form generated from reading UI file 'dlg_arsenal_weapon_attachment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ARSENAL_WEAPON_ATTACHMENT_H
#define UI_DLG_ARSENAL_WEAPON_ATTACHMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_arsenal_weapon_attachment
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Attachment_back;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ATTACHMENTID;
    QLabel *label_7;
    QLabel *WEAPONID;
    QLabel *ATTACHMENT_TYPE;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QLabel *LBL_Original_Att;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *LBL_New_Att;
    QLabel *ATTACHMENTID_ORIGINAL;
    QListWidget *LW_Attachments;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *PB_Save;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *dlg_arsenal_weapon_attachment)
    {
        if (dlg_arsenal_weapon_attachment->objectName().isEmpty())
            dlg_arsenal_weapon_attachment->setObjectName(QString::fromUtf8("dlg_arsenal_weapon_attachment"));
        dlg_arsenal_weapon_attachment->resize(480, 380);
        dlg_arsenal_weapon_attachment->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(dlg_arsenal_weapon_attachment);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Attachment_back = new QPushButton(dlg_arsenal_weapon_attachment);
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

        ATTACHMENTID = new QLabel(dlg_arsenal_weapon_attachment);
        ATTACHMENTID->setObjectName(QString::fromUtf8("ATTACHMENTID"));
        ATTACHMENTID->setMinimumSize(QSize(0, 0));
        ATTACHMENTID->setMaximumSize(QSize(0, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        ATTACHMENTID->setFont(font1);

        horizontalLayout->addWidget(ATTACHMENTID);

        label_7 = new QLabel(dlg_arsenal_weapon_attachment);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout->addWidget(label_7);

        WEAPONID = new QLabel(dlg_arsenal_weapon_attachment);
        WEAPONID->setObjectName(QString::fromUtf8("WEAPONID"));
        WEAPONID->setMaximumSize(QSize(0, 0));

        horizontalLayout->addWidget(WEAPONID);

        ATTACHMENT_TYPE = new QLabel(dlg_arsenal_weapon_attachment);
        ATTACHMENT_TYPE->setObjectName(QString::fromUtf8("ATTACHMENT_TYPE"));
        ATTACHMENT_TYPE->setMinimumSize(QSize(0, 0));
        ATTACHMENT_TYPE->setMaximumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        ATTACHMENT_TYPE->setFont(font2);

        horizontalLayout->addWidget(ATTACHMENT_TYPE);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(dlg_arsenal_weapon_attachment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setMaximumSize(QSize(200, 16777215));
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        LBL_Original_Att = new QLabel(dlg_arsenal_weapon_attachment);
        LBL_Original_Att->setObjectName(QString::fromUtf8("LBL_Original_Att"));
        LBL_Original_Att->setMinimumSize(QSize(200, 0));
        LBL_Original_Att->setMaximumSize(QSize(200, 16777215));
        LBL_Original_Att->setFont(font1);

        horizontalLayout_4->addWidget(LBL_Original_Att);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(dlg_arsenal_weapon_attachment);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(200, 0));
        label_2->setMaximumSize(QSize(200, 16777215));
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        LBL_New_Att = new QLabel(dlg_arsenal_weapon_attachment);
        LBL_New_Att->setObjectName(QString::fromUtf8("LBL_New_Att"));
        LBL_New_Att->setMinimumSize(QSize(200, 0));
        LBL_New_Att->setMaximumSize(QSize(200, 16777215));
        LBL_New_Att->setFont(font1);

        horizontalLayout_3->addWidget(LBL_New_Att);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        ATTACHMENTID_ORIGINAL = new QLabel(dlg_arsenal_weapon_attachment);
        ATTACHMENTID_ORIGINAL->setObjectName(QString::fromUtf8("ATTACHMENTID_ORIGINAL"));
        ATTACHMENTID_ORIGINAL->setMinimumSize(QSize(0, 0));
        ATTACHMENTID_ORIGINAL->setMaximumSize(QSize(0, 0));
        ATTACHMENTID_ORIGINAL->setFont(font1);

        verticalLayout_2->addWidget(ATTACHMENTID_ORIGINAL);

        LW_Attachments = new QListWidget(dlg_arsenal_weapon_attachment);
        LW_Attachments->setObjectName(QString::fromUtf8("LW_Attachments"));

        verticalLayout_2->addWidget(LW_Attachments);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        PB_Save = new QPushButton(dlg_arsenal_weapon_attachment);
        PB_Save->setObjectName(QString::fromUtf8("PB_Save"));
        sizePolicy.setHeightForWidth(PB_Save->sizePolicy().hasHeightForWidth());
        PB_Save->setSizePolicy(sizePolicy);
        PB_Save->setMinimumSize(QSize(150, 50));
        PB_Save->setMaximumSize(QSize(150, 50));
        PB_Save->setFont(font1);
        PB_Save->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_2->addWidget(PB_Save);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(dlg_arsenal_weapon_attachment);

        QMetaObject::connectSlotsByName(dlg_arsenal_weapon_attachment);
    } // setupUi

    void retranslateUi(QDialog *dlg_arsenal_weapon_attachment)
    {
        dlg_arsenal_weapon_attachment->setWindowTitle(QApplication::translate("dlg_arsenal_weapon_attachment", "Dialog", nullptr));
        PB_Attachment_back->setText(QString());
        ATTACHMENTID->setText(QString());
        label_7->setText(QApplication::translate("dlg_arsenal_weapon_attachment", "Spr\303\241va p\305\231\303\255slu\305\241enstv\303\255", nullptr));
        WEAPONID->setText(QString());
        ATTACHMENT_TYPE->setText(QString());
        label->setText(QApplication::translate("dlg_arsenal_weapon_attachment", "P\305\257vodn\303\255 p\305\231\303\255slu\305\241enstv\303\255", nullptr));
        LBL_Original_Att->setText(QString());
        label_2->setText(QApplication::translate("dlg_arsenal_weapon_attachment", "Nov\303\251 p\305\231\303\255slu\305\241enstv\303\255", nullptr));
        LBL_New_Att->setText(QString());
        ATTACHMENTID_ORIGINAL->setText(QString());
        PB_Save->setText(QApplication::translate("dlg_arsenal_weapon_attachment", "ULO\305\275IT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_arsenal_weapon_attachment: public Ui_dlg_arsenal_weapon_attachment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ARSENAL_WEAPON_ATTACHMENT_H
