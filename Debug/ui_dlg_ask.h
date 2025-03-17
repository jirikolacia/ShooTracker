/********************************************************************************
** Form generated from reading UI file 'dlg_ask.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ASK_H
#define UI_DLG_ASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_ask
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_text;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PB_No;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PB_Yes;

    void setupUi(QDialog *dlg_ask)
    {
        if (dlg_ask->objectName().isEmpty())
            dlg_ask->setObjectName(QString::fromUtf8("dlg_ask"));
        dlg_ask->resize(553, 409);
        dlg_ask->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 169, 255);\n"
"border-radius: 20px;\n"
""));
        verticalLayout = new QVBoxLayout(dlg_ask);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(dlg_ask);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        label_title->setFont(font);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(12, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_text = new QLabel(dlg_ask);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setFont(font);
        label_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_text);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        PB_No = new QPushButton(dlg_ask);
        PB_No->setObjectName(QString::fromUtf8("PB_No"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_No->sizePolicy().hasHeightForWidth());
        PB_No->setSizePolicy(sizePolicy);
        PB_No->setFont(font);
        PB_No->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_3->addWidget(PB_No);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        PB_Yes = new QPushButton(dlg_ask);
        PB_Yes->setObjectName(QString::fromUtf8("PB_Yes"));
        sizePolicy.setHeightForWidth(PB_Yes->sizePolicy().hasHeightForWidth());
        PB_Yes->setSizePolicy(sizePolicy);
        PB_Yes->setFont(font);
        PB_Yes->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 20px;\n"
"border: 1px solid yellow;\n"
"}\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}"));

        horizontalLayout_3->addWidget(PB_Yes);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(dlg_ask);

        QMetaObject::connectSlotsByName(dlg_ask);
    } // setupUi

    void retranslateUi(QDialog *dlg_ask)
    {
        dlg_ask->setWindowTitle(QApplication::translate("dlg_ask", "Dialog", nullptr));
        label_title->setText(QApplication::translate("dlg_ask", "NADPIS PLACEHOLDER", nullptr));
        label_text->setText(QApplication::translate("dlg_ask", "TEXT PLACEHOLDER", nullptr));
        PB_No->setText(QApplication::translate("dlg_ask", "NE", nullptr));
        PB_Yes->setText(QApplication::translate("dlg_ask", "ANO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_ask: public Ui_dlg_ask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ASK_H
