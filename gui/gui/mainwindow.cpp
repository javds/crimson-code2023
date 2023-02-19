#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "../../hackathon-wsu/hackathon-wsu/bundler.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_already_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_registration_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_lineEdit_returnPressed()
{

}

