#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //sender:sender is a tranfer(value) in the connect(),horizontalSlider
    //Func1: there is too many function in the Func1, in this time
    //          we just control the SIGNAL() by valueChanged() from the horizontalSlider
    //context:context is a receiver in the context,ui->progressBar
    //Func1: there is too many function in the Func2, in this time
    //          we just control the SIGNAL() by setValue() by sender
    /*
    if you want to stop that, just using disconnect() to stop that
    example:
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));
    */
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
