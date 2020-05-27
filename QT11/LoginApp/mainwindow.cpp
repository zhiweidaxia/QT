#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap pic("C:/Users/zhiwe/Desktop/ww.jpg");
//    int w = ui->label_pic->width();
//    int h = ui->label_pic->height();
//    ui->label_pic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString userpass = ui->lineEdit_2->text();
    if(username == "test" && userpass == "test"){
        hide();
        QMessageBox::information(this,"Login","Username and password is correct");
        sec = new secDialog(this);
        sec->show();
    }else{
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }
}
