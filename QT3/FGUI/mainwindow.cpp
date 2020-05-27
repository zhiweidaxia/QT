#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButtonClose_clicked()
{
    static bool i=0;
    if(i==0){
        ui->label->setText("Button is clock");
        i=1;
    }
    else {
        ui->label->setText("Button is clocked");
        i=0;
    }
}
