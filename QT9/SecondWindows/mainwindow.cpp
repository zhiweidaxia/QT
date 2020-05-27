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

void MainWindow::on_pushButton_clicked()
{
    /*creating the second windows*/
    /*
    //initiative the SecDialog class
    SecDialog sec;
    //Setting can use modal
    sec.setModal(true);
    //execute
    sec.exec();
    */

    //the sec is the same as the before, and that pointer in the mainwindow.h, and the row is the 23
    hide();
    sec = new SecDialog(this);
    sec->show();
}
