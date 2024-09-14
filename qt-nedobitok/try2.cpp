#include "try2.h"
#include "./ui_try2.h"
#include "secondwind.h"
try2::try2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::try2)
{
    ui->setupUi(this);
}

try2::~try2()
{
    delete ui;
}
void try2::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    if(login== "1"&&password =="2") {
        hide();
        wind=new secondwind(this);
        wind->show();
    }
    else {
        QMessageBox::warning(this,"111","You not win") ;
    }
}

