/********************************************************************************
** Form generated from reading UI file 'dlg_arsenal_maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ARSENAL_MAINTENANCE_H
#define UI_DLG_ARSENAL_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_arsenal_maintenance
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Maintenance_back;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QRadioButton *RB_Partial;
    QRadioButton *RB_Complete;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *PB_Yes;
    QSpacerItem *horizontalSpacer_4;
    QLabel *WeaponID;

    void setupUi(QDialog *dlg_arsenal_maintenance)
    {
        if (dlg_arsenal_maintenance->objectName().isEmpty())
            dlg_arsenal_maintenance->setObjectName(QString::fromUtf8("dlg_arsenal_maintenance"));
        dlg_arsenal_maintenance->resize(550, 372);
        dlg_arsenal_maintenance->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(dlg_arsenal_maintenance);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Maintenance_back = new QPushButton(dlg_arsenal_maintenance);
        PB_Maintenance_back->setObjectName(QString::fromUtf8("PB_Maintenance_back"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_Maintenance_back->sizePolicy().hasHeightForWidth());
        PB_Maintenance_back->setSizePolicy(sizePolicy);
        PB_Maintenance_back->setMinimumSize(QSize(50, 0));
        PB_Maintenance_back->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(21);
        PB_Maintenance_back->setFont(font);
        PB_Maintenance_back->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"image: url(:/icons/resourcefolder/icons8-close-50.png);\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout->addWidget(PB_Maintenance_back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(dlg_arsenal_maintenance);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(dlg_arsenal_maintenance);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        RB_Partial = new QRadioButton(dlg_arsenal_maintenance);
        RB_Partial->setObjectName(QString::fromUtf8("RB_Partial"));
        RB_Partial->setFont(font2);

        verticalLayout->addWidget(RB_Partial);

        RB_Complete = new QRadioButton(dlg_arsenal_maintenance);
        RB_Complete->setObjectName(QString::fromUtf8("RB_Complete"));
        RB_Complete->setFont(font2);

        verticalLayout->addWidget(RB_Complete);


        verticalLayout_2->addLayout(verticalLayout);

        label_3 = new QLabel(dlg_arsenal_maintenance);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 25));
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(dlg_arsenal_maintenance);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 70));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(8);
        label_4->setFont(font3);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        calendarWidget = new QCalendarWidget(dlg_arsenal_maintenance);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        horizontalLayout_3->addWidget(calendarWidget);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        PB_Yes = new QPushButton(dlg_arsenal_maintenance);
        PB_Yes->setObjectName(QString::fromUtf8("PB_Yes"));
        sizePolicy.setHeightForWidth(PB_Yes->sizePolicy().hasHeightForWidth());
        PB_Yes->setSizePolicy(sizePolicy);
        PB_Yes->setMinimumSize(QSize(150, 50));
        PB_Yes->setMaximumSize(QSize(150, 50));
        PB_Yes->setFont(font1);
        PB_Yes->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_2->addWidget(PB_Yes);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        WeaponID = new QLabel(dlg_arsenal_maintenance);
        WeaponID->setObjectName(QString::fromUtf8("WeaponID"));
        WeaponID->setMaximumSize(QSize(0, 0));

        verticalLayout_3->addWidget(WeaponID);


        retranslateUi(dlg_arsenal_maintenance);

        QMetaObject::connectSlotsByName(dlg_arsenal_maintenance);
    } // setupUi

    void retranslateUi(QDialog *dlg_arsenal_maintenance)
    {
        dlg_arsenal_maintenance->setWindowTitle(QApplication::translate("dlg_arsenal_maintenance", "Dialog", nullptr));
        PB_Maintenance_back->setText(QString());
        label->setText(QApplication::translate("dlg_arsenal_maintenance", "Proveden\303\255 \303\272dr\305\276by", nullptr));
        label_2->setText(QApplication::translate("dlg_arsenal_maintenance", "Typ \303\272dr\305\276by", nullptr));
        RB_Partial->setText(QApplication::translate("dlg_arsenal_maintenance", "B\304\233\305\276n\303\241", nullptr));
        RB_Complete->setText(QApplication::translate("dlg_arsenal_maintenance", "Kompletn\303\255", nullptr));
        label_3->setText(QApplication::translate("dlg_arsenal_maintenance", "Legenda:", nullptr));
        label_4->setText(QApplication::translate("dlg_arsenal_maintenance", "B\304\233\305\276n\303\241: \304\215i\305\241t\304\233n\303\255 po\n"
"st\305\231elb\304\233\n"
"\303\232pln\303\241: vy\304\215i\305\241t\304\233n\303\255\n"
"cel\303\251 zbran\304\233", nullptr));
        PB_Yes->setText(QApplication::translate("dlg_arsenal_maintenance", "ULO\305\275IT", nullptr));
        WeaponID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_arsenal_maintenance: public Ui_dlg_arsenal_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ARSENAL_MAINTENANCE_H
