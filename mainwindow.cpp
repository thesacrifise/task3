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

void MainWindow::on_radioButton_clicked()
{
    ui->lineEdit->setText("Hello World");
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->lineEdit->setText("Goodbye World");
}
