#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    std::cout << "Hello world";
    delete ui;
}

void MainWindow::setListObjects(QStringList list)
{
    ui->listWidget->addItems(list);
}


void MainWindow::on_pushButton_clicked()
{
   ui->listWidget->currentItem()->setForeground(Qt::blue);
   ui->listWidget->currentItem()->setBackground(Qt::gray);
}

