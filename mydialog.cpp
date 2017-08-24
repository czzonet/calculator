#include "mydialog.h"
#include "ui_mydialog.h"


myDialog::myDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    ui->setupUi(this);
    m=new modle;
}

myDialog::~myDialog()
{
    delete ui;
}

//start number
void myDialog::on_pushButton_clicked()
{
    temp+="1";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_2_clicked()
{
    temp+="2";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_3_clicked()
{
    temp+="3";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_4_clicked()
{
    temp+="4";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_5_clicked()
{
    temp+="5";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_6_clicked()
{
    temp+="6";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_7_clicked()
{
    temp+="7";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_8_clicked()
{
    temp+="8";
    this->ui->label->setText(temp);
}

void myDialog::on_pushButton_9_clicked()
{
    temp+="9";
    this->ui->label->setText(temp);
}
//end number

//start opt
void myDialog::on_pushButton_10_clicked()
{
    m->set_s1(temp);
    temp+="+";
    this->ui->label->setText(temp);
    temp.clear();
    m->set_opt(1);
}

void myDialog::on_pushButton_11_clicked()
{
    m->set_s1(temp);
    temp+="-";
    this->ui->label->setText(temp);
    temp.clear();
    m->set_opt(2);
}

void myDialog::on_pushButton_12_clicked()
{
    m->set_s1(temp);
    temp+="*";
    this->ui->label->setText(temp);
    temp.clear();
    m->set_opt(3);
}

void myDialog::on_pushButton_13_clicked()
{
    m->set_s1(temp);
    temp+="/";
    this->ui->label->setText(temp);
    temp.clear();
    m->set_opt(4);
}
//end opt

//result
void myDialog::on_pushButton_14_clicked()
{
    m->set_s2(temp);
    QString tmp=m->cal();
    this->ui->label->setText(tmp);
    temp.clear();
}

//number 0
void myDialog::on_pushButton_15_clicked()
{
    temp+="0";
    this->ui->label->setText(temp);
}
