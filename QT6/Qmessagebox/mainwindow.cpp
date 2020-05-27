#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //parent:in this page
    //title:the box's title
    //text:content
    QMessageBox::about(this,"MY Title","This is about");
    QMessageBox::aboutQt(this,"1");
    QMessageBox::critical(this,"2","this is my critical");
    QMessageBox::information(this,"3","this is my information");
    QMessageBox::question(this,"4","this is my question");
    QMessageBox::warning(this,"5","this is my warning");

    QMessageBox::StandardButton repaly = QMessageBox::question(this,"4","this is my question",QMessageBox::Yes | QMessageBox::No);
    if(repaly == QMessageBox::Yes){
        QApplication::quit();
    }else{
        qDebug() << " No";
    }
}
