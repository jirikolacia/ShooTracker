/********************************************************************************
** Form generated from reading UI file 'dlg_ammoevid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_AMMOEVID_H
#define UI_DLG_AMMOEVID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_ammoevid
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ammoevid_ID;
    QSpacerItem *horizontalSpacer;
    QLabel *label_ammoevid_title;
    QLabel *label_TYPE;
    QLabel *label_AMOUNT;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *CB_Caliber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *CB_Manufacturer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *CB_Type;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *Line_Amount;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *PB_Out;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *PB_In;

    void setupUi(QDialog *dlg_ammoevid)
    {
        if (dlg_ammoevid->objectName().isEmpty())
            dlg_ammoevid->setObjectName(QString::fromUtf8("dlg_ammoevid"));
        dlg_ammoevid->resize(626, 408);
        dlg_ammoevid->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"border-radius: 20px;\n"
""));
        verticalLayout_2 = new QVBoxLayout(dlg_ammoevid);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_ammoevid_ID = new QLabel(dlg_ammoevid);
        label_ammoevid_ID->setObjectName(QString::fromUtf8("label_ammoevid_ID"));

        horizontalLayout->addWidget(label_ammoevid_ID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_ammoevid_title = new QLabel(dlg_ammoevid);
        label_ammoevid_title->setObjectName(QString::fromUtf8("label_ammoevid_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        label_ammoevid_title->setFont(font);

        horizontalLayout->addWidget(label_ammoevid_title);

        label_TYPE = new QLabel(dlg_ammoevid);
        label_TYPE->setObjectName(QString::fromUtf8("label_TYPE"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_TYPE->sizePolicy().hasHeightForWidth());
        label_TYPE->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_TYPE);

        label_AMOUNT = new QLabel(dlg_ammoevid);
        label_AMOUNT->setObjectName(QString::fromUtf8("label_AMOUNT"));
        sizePolicy.setHeightForWidth(label_AMOUNT->sizePolicy().hasHeightForWidth());
        label_AMOUNT->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_AMOUNT);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(dlg_ammoevid);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        CB_Caliber = new QComboBox(dlg_ammoevid);
        CB_Caliber->setObjectName(QString::fromUtf8("CB_Caliber"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CB_Caliber->sizePolicy().hasHeightForWidth());
        CB_Caliber->setSizePolicy(sizePolicy1);
        CB_Caliber->setFont(font);
        CB_Caliber->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid yellow;\n"
""));

        horizontalLayout_4->addWidget(CB_Caliber);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(dlg_ammoevid);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        CB_Manufacturer = new QComboBox(dlg_ammoevid);
        CB_Manufacturer->setObjectName(QString::fromUtf8("CB_Manufacturer"));
        sizePolicy1.setHeightForWidth(CB_Manufacturer->sizePolicy().hasHeightForWidth());
        CB_Manufacturer->setSizePolicy(sizePolicy1);
        CB_Manufacturer->setMinimumSize(QSize(0, 0));
        CB_Manufacturer->setBaseSize(QSize(0, 0));
        CB_Manufacturer->setFont(font);
        CB_Manufacturer->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid yellow;"));

        horizontalLayout_5->addWidget(CB_Manufacturer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(dlg_ammoevid);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        CB_Type = new QComboBox(dlg_ammoevid);
        CB_Type->setObjectName(QString::fromUtf8("CB_Type"));
        sizePolicy1.setHeightForWidth(CB_Type->sizePolicy().hasHeightForWidth());
        CB_Type->setSizePolicy(sizePolicy1);
        CB_Type->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid yellow;"));

        horizontalLayout_3->addWidget(CB_Type);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(dlg_ammoevid);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        Line_Amount = new QLineEdit(dlg_ammoevid);
        Line_Amount->setObjectName(QString::fromUtf8("Line_Amount"));
        sizePolicy1.setHeightForWidth(Line_Amount->sizePolicy().hasHeightForWidth());
        Line_Amount->setSizePolicy(sizePolicy1);
        Line_Amount->setFont(font);
        Line_Amount->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid yellow;\n"
""));
        Line_Amount->setInputMethodHints(Qt::ImhNone);
        Line_Amount->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Line_Amount);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        PB_Out = new QPushButton(dlg_ammoevid);
        PB_Out->setObjectName(QString::fromUtf8("PB_Out"));
        sizePolicy1.setHeightForWidth(PB_Out->sizePolicy().hasHeightForWidth());
        PB_Out->setSizePolicy(sizePolicy1);
        PB_Out->setFont(font);
        PB_Out->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_6->addWidget(PB_Out);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        PB_In = new QPushButton(dlg_ammoevid);
        PB_In->setObjectName(QString::fromUtf8("PB_In"));
        sizePolicy1.setHeightForWidth(PB_In->sizePolicy().hasHeightForWidth());
        PB_In->setSizePolicy(sizePolicy1);
        PB_In->setFont(font);
        PB_In->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_6->addWidget(PB_In);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(dlg_ammoevid);

        QMetaObject::connectSlotsByName(dlg_ammoevid);
    } // setupUi

    void retranslateUi(QDialog *dlg_ammoevid)
    {
        dlg_ammoevid->setWindowTitle(QApplication::translate("dlg_ammoevid", "Dialog", nullptr));
        label_ammoevid_ID->setText(QString());
        label_ammoevid_title->setText(QApplication::translate("dlg_ammoevid", "TITLE PLACEHOLDER", nullptr));
        label_TYPE->setText(QString());
        label_AMOUNT->setText(QString());
        label_2->setText(QApplication::translate("dlg_ammoevid", "R\303\241\305\276e st\305\231eliva", nullptr));
        label->setText(QApplication::translate("dlg_ammoevid", "V\303\275robce st\305\231eliva", nullptr));
        label_3->setText(QApplication::translate("dlg_ammoevid", "Druh st\305\231eliva", nullptr));
        label_4->setText(QApplication::translate("dlg_ammoevid", "Po\304\215et st\305\231eliva", nullptr));
        Line_Amount->setInputMask(QString());
        PB_Out->setText(QApplication::translate("dlg_ammoevid", "ODEBRAT", nullptr));
        PB_In->setText(QApplication::translate("dlg_ammoevid", "VLO\305\275IT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_ammoevid: public Ui_dlg_ammoevid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_AMMOEVID_H
