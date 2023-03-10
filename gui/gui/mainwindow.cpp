#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "personnel.hpp"
#include <regex>
#include <fstream>
#include <iostream>

personnelList my_list;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //std::fstream writeFile("data.csv");
    my_list.loadList("../resources/data.csv");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::reset_ui()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->alr_wsu_id_form->clear();
    ui->birthdate_form->clear();
    ui->name_form->clear();
    ui->new_wsu_id_form->clear();
}

void MainWindow::on_already_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_registration_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_alr_submit_button_clicked()
{
    if (ui->alr_wsu_id_form->text().length() < 8 || ui->alr_wsu_id_form->text().toStdString().find_first_not_of("0123456789") != std::string::npos) {
        ui->alr_wsu_id_form->setStyleSheet("QLineEdit { background: rgb(157, 34, 53); }");
        ui->alr_wsu_id_form->setPlaceholderText("ID must be 8 digits long.");
        ui->alr_wsu_id_form->clear();
    } else if (my_list.findStudentID(ui->alr_wsu_id_form->text().toInt()) == NULL) {
        ui->alr_wsu_id_form->setStyleSheet("QLineEdit { background: rgb(157, 34, 53); }");
        ui->alr_wsu_id_form->setPlaceholderText("ID does not exist in database.");
        ui->alr_wsu_id_form->clear();
    } else {
        std::cout << ui->alr_wsu_id_form->text().toStdString() << std::endl;
        ui->stackedWidget->setCurrentIndex(3);
        QTimer::singleShot(3000, this, SLOT(reset_ui()));
    }
}

void MainWindow::on_new_submit_button_clicked()
{
    int fail = 0;
    std::regex date_regex("^(0[1-9]|1[0-2])/(0[1-9]|[12][0-9]|3[01])/\\d{4}$");
    if (ui->name_form->text().isEmpty() == 1) {
        ui->name_form->setStyleSheet("QLineEdit { background: rgb(157, 34, 53); }");
        ui->name_form->setPlaceholderText("Full name is required.");
        fail = 1;
    }
    if (ui->new_wsu_id_form->text().length() < 8) {
        ui->new_wsu_id_form->setStyleSheet("QLineEdit { background: rgb(157, 34, 53); }");
        ui->new_wsu_id_form->setPlaceholderText("ID must be 8 digits long.");
        ui->new_wsu_id_form->clear();
        fail = 1;
    }
    if (ui->birthdate_form->text().length() < 10 || !std::regex_match(ui->birthdate_form->text().toStdString(), date_regex)) {
        ui->birthdate_form->setStyleSheet("QLineEdit { background: rgb(157, 34, 53); }");
        ui->birthdate_form->setPlaceholderText("MM/DD/YYYY format.");
        ui->birthdate_form->clear();
        fail = 1;
    }
    if (!fail) {
        if (my_list.findStudentID(ui->new_wsu_id_form->text().toInt()) != NULL) {
            ui->stackedWidget->setCurrentIndex(3);
            QTimer::singleShot(3000, this, SLOT(reset_ui()));
            return;
        }
        Person* newPerson = new Person;
        newPerson->setName(ui->name_form->text().toStdString());
        newPerson->setDayBirth(stoi(ui->birthdate_form->text().toStdString().substr(0,2)));
        newPerson->setMonthBirth(stoi(ui->birthdate_form->text().toStdString().substr(3,2)));
        newPerson->setYearBirth(stoi(ui->birthdate_form->text().toStdString().substr(6,4)));
        newPerson->setWsuid(ui->new_wsu_id_form->text().toInt());
        newPerson->checkOut();
        my_list.pushPerson(newPerson);
        ui->stackedWidget->setCurrentIndex(3);
        QTimer::singleShot(3000, this, SLOT(reset_ui()));
    }
}

