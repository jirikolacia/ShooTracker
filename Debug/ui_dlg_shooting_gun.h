/********************************************************************************
** Form generated from reading UI file 'dlg_shooting_gun.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_SHOOTING_GUN_H
#define UI_DLG_SHOOTING_GUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_shooting_gun
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *CB_Shooting_Distance;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *CB_Shooting_Type;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *CB_Shooting_Gun;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *LE_Shooting_AmmoUsed;
    QLabel *Label_Shooting_ID;
    QPushButton *pushButton;

    void setupUi(QDialog *dlg_shooting_gun)
    {
        if (dlg_shooting_gun->objectName().isEmpty())
            dlg_shooting_gun->setObjectName(QString::fromUtf8("dlg_shooting_gun"));
        dlg_shooting_gun->resize(946, 671);
        dlg_shooting_gun->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
""));
        verticalLayout_5 = new QVBoxLayout(dlg_shooting_gun);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dlg_shooting_gun);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        CB_Shooting_Distance = new QComboBox(dlg_shooting_gun);
        CB_Shooting_Distance->setObjectName(QString::fromUtf8("CB_Shooting_Distance"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(10);
        CB_Shooting_Distance->setFont(font1);

        verticalLayout->addWidget(CB_Shooting_Distance);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(dlg_shooting_gun);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        CB_Shooting_Type = new QComboBox(dlg_shooting_gun);
        CB_Shooting_Type->setObjectName(QString::fromUtf8("CB_Shooting_Type"));
        CB_Shooting_Type->setFont(font1);

        verticalLayout_2->addWidget(CB_Shooting_Type);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(dlg_shooting_gun);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        CB_Shooting_Gun = new QComboBox(dlg_shooting_gun);
        CB_Shooting_Gun->setObjectName(QString::fromUtf8("CB_Shooting_Gun"));
        CB_Shooting_Gun->setFont(font1);

        verticalLayout_3->addWidget(CB_Shooting_Gun);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(dlg_shooting_gun);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        LE_Shooting_AmmoUsed = new QLineEdit(dlg_shooting_gun);
        LE_Shooting_AmmoUsed->setObjectName(QString::fromUtf8("LE_Shooting_AmmoUsed"));
        LE_Shooting_AmmoUsed->setFont(font1);

        verticalLayout_4->addWidget(LE_Shooting_AmmoUsed);


        verticalLayout_5->addLayout(verticalLayout_4);

        Label_Shooting_ID = new QLabel(dlg_shooting_gun);
        Label_Shooting_ID->setObjectName(QString::fromUtf8("Label_Shooting_ID"));

        verticalLayout_5->addWidget(Label_Shooting_ID);

        pushButton = new QPushButton(dlg_shooting_gun);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 0, 0);"));

        verticalLayout_5->addWidget(pushButton);


        retranslateUi(dlg_shooting_gun);

        QMetaObject::connectSlotsByName(dlg_shooting_gun);
    } // setupUi

    void retranslateUi(QDialog *dlg_shooting_gun)
    {
        dlg_shooting_gun->setWindowTitle(QApplication::translate("dlg_shooting_gun", "Dialog", nullptr));
        label->setText(QApplication::translate("dlg_shooting_gun", "Vzd\303\241lenost st\305\231elby", nullptr));
        label_3->setText(QApplication::translate("dlg_shooting_gun", "Typ st\305\231elby", nullptr));
        label_2->setText(QApplication::translate("dlg_shooting_gun", "St\305\231\303\255len\303\241 zbra\305\210", nullptr));
        label_4->setText(QApplication::translate("dlg_shooting_gun", "Vyst\305\231eleno munice", nullptr));
        Label_Shooting_ID->setText(QApplication::translate("dlg_shooting_gun", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("dlg_shooting_gun", "Potvrdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_shooting_gun: public Ui_dlg_shooting_gun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_SHOOTING_GUN_H
