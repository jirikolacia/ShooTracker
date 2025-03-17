#include "dlg_warning.h"
#include "ui_dlg_warning.h"

dlg_warning::dlg_warning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_warning)
{
    ui->setupUi(this);
}

dlg_warning::~dlg_warning()
{
    delete ui;
}

void dlg_warning::on_PB_OK_clicked()
{
    this->close();
}

//nastaveni nadpisu
void dlg_warning::setTitle(QString Title){
    ui->label_warning_title->setText(Title);
}

//nastaveni popisu
void dlg_warning::setDescription(QString Description){
    ui->label_warning_description->setText(Description);
}
