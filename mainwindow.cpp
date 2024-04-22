#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    QTextStream out(stdout);
    foreach (QString item, selectedItems) {
        out << item << "\n";
    }
    delete ui;
}

void MainWindow::setListObjects(QStringList list)
{
    ui->listWidget->addItems(list);
}


void MainWindow::on_pushButton_clicked()
{
   ui->listWidget->currentItem()->setForeground(Qt::white);
   ui->listWidget->currentItem()->setBackground(Qt::blue);
   if (!selectedItems.contains(ui->listWidget->currentItem()->text())){
       selectedItems.append(ui->listWidget->currentItem()->text());
   }
}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

