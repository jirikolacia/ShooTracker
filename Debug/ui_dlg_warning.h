/********************************************************************************
** Form generated from reading UI file 'dlg_warning.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_WARNING_H
#define UI_DLG_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_warning
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_warning_title;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_warning_description;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *PB_OK;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *dlg_warning)
    {
        if (dlg_warning->objectName().isEmpty())
            dlg_warning->setObjectName(QString::fromUtf8("dlg_warning"));
        dlg_warning->resize(569, 421);
        dlg_warning->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(dlg_warning);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_warning_title = new QLabel(dlg_warning);
        label_warning_title->setObjectName(QString::fromUtf8("label_warning_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        label_warning_title->setFont(font);

        horizontalLayout->addWidget(label_warning_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        label_warning_description = new QLabel(dlg_warning);
        label_warning_description->setObjectName(QString::fromUtf8("label_warning_description"));
        label_warning_description->setFont(font);
        label_warning_description->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_warning_description);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        PB_OK = new QPushButton(dlg_warning);
        PB_OK->setObjectName(QString::fromUtf8("PB_OK"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_OK->sizePolicy().hasHeightForWidth());
        PB_OK->setSizePolicy(sizePolicy);
        PB_OK->setMinimumSize(QSize(0, 50));
        PB_OK->setMaximumSize(QSize(16777215, 50));
        PB_OK->setFont(font);
        PB_OK->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_2->addWidget(PB_OK);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(dlg_warning);

        QMetaObject::connectSlotsByName(dlg_warning);
    } // setupUi

    void retranslateUi(QDialog *dlg_warning)
    {
        dlg_warning->setWindowTitle(QApplication::translate("dlg_warning", "Dialog", nullptr));
        label_warning_title->setText(QApplication::translate("dlg_warning", "TITLE PLACEHOLDER", nullptr));
        label_warning_description->setText(QApplication::translate("dlg_warning", "TextLabel", nullptr));
        PB_OK->setText(QApplication::translate("dlg_warning", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_warning: public Ui_dlg_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_WARNING_H
