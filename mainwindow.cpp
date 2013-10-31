#include <iostream>
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
    std::cout << "pushbutton number 1" << std::endl;
}


void MainWindow::on_pushButton2_clicked()
{
    std::cout << "pushbutton number 2" << std::endl;
}


void MainWindow::on_pushButton3_clicked()
{
    std::cout << "pushbutton number 3" << std::endl;
}
