#include "mydialog.h"
#include "ui_mydialog.h"

myDialog::myDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    ui->setupUi(this);
    temp=s1=s2="";

}

myDialog::~myDialog()
{
    delete ui;
}

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

void myDialog::on_pushButton_10_clicked()
{
    s1=temp;
    temp+="+";
    this->ui->label->setText(temp);
    temp.clear();
    opt = 1;
}

void myDialog::on_pushButton_11_clicked()
{
    s1=temp;
    temp+="-";
    this->ui->label->setText(temp);
    temp.clear();
    opt = 2;
}

void myDialog::on_pushButton_12_clicked()
{
    s1=temp;
    temp+="*";
    this->ui->label->setText(temp);
    temp.clear();
    opt = 3;
}

void myDialog::on_pushButton_13_clicked()
{
    s1=temp;
    temp+="/";
    this->ui->label->setText(temp);
    temp.clear();
    opt = 4;
}

void myDialog::on_pushButton_14_clicked()
{
    int a,b,c;
    s2=temp;
    temp.clear();
    a=s1.toInt();
    b=s2.toInt();
    switch (opt) {
    case 1:
        c=a+b;
        temp=QString::number(c,10);
        break;
    case 2:
        c=a-b;
        temp=QString::number(c,10);
        break;
    case 3:
        c=a*b;
        temp=QString::number(c,10);
        break;
    case 4:
        c=a/b;
        temp=QString::number(c,10);
        break;
    default:
        break;
    }
    this->ui->label->setText(temp);
    temp.clear();
}
