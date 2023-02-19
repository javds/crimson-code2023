/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QLabel *background;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *already_button;
    QPushButton *registration_button;
    QWidget *already_registered_page;
    QLabel *already_bg;
    QLineEdit *alr_wsu_id_form;
    QLabel *alr_wsu_id_label;
    QPushButton *alr_submit_button;
    QWidget *new_regis_page;
    QLabel *new_bg;
    QLabel *new_wsu_id_label;
    QLineEdit *new_wsu_id_form;
    QLabel *birthdate_label;
    QLineEdit *birthdate_form;
    QLabel *name_label;
    QLineEdit *name_form;
    QPushButton *new_submit_button;
    QWidget *success;
    QLabel *new_bg_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 560);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setSizeIncrement(QSize(1, 1));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setSizeIncrement(QSize(0, 0));
        centralwidget->setMouseTracking(true);
        centralwidget->setAcceptDrops(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1000, 560));
        main_page = new QWidget();
        main_page->setObjectName("main_page");
        background = new QLabel(main_page);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 1000, 560));
        background->setPixmap(QPixmap(QString::fromUtf8("../resources/background.png")));
        background->setScaledContents(true);
        gridLayoutWidget = new QWidget(main_page);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 340, 1001, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setHorizontalSpacing(19);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(10, 0, 10, 0);
        already_button = new QPushButton(gridLayoutWidget);
        already_button->setObjectName("already_button");
        sizePolicy1.setHeightForWidth(already_button->sizePolicy().hasHeightForWidth());
        already_button->setSizePolicy(sizePolicy1);
        already_button->setMinimumSize(QSize(300, 50));
        already_button->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(45);
        font.setBold(true);
        already_button->setFont(font);

        gridLayout->addWidget(already_button, 0, 0, 1, 1);

        registration_button = new QPushButton(gridLayoutWidget);
        registration_button->setObjectName("registration_button");
        sizePolicy1.setHeightForWidth(registration_button->sizePolicy().hasHeightForWidth());
        registration_button->setSizePolicy(sizePolicy1);
        registration_button->setMinimumSize(QSize(300, 50));
        registration_button->setSizeIncrement(QSize(0, 0));
        registration_button->setFont(font);

        gridLayout->addWidget(registration_button, 0, 1, 1, 1);

        stackedWidget->addWidget(main_page);
        already_registered_page = new QWidget();
        already_registered_page->setObjectName("already_registered_page");
        already_bg = new QLabel(already_registered_page);
        already_bg->setObjectName("already_bg");
        already_bg->setGeometry(QRect(0, 0, 1000, 560));
        already_bg->setPixmap(QPixmap(QString::fromUtf8("../resources/background.png")));
        already_bg->setScaledContents(true);
        alr_wsu_id_form = new QLineEdit(already_registered_page);
        alr_wsu_id_form->setObjectName("alr_wsu_id_form");
        alr_wsu_id_form->setGeometry(QRect(400, 410, 241, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        alr_wsu_id_form->setFont(font1);
        alr_wsu_id_form->setMaxLength(8);
        alr_wsu_id_label = new QLabel(already_registered_page);
        alr_wsu_id_label->setObjectName("alr_wsu_id_label");
        alr_wsu_id_label->setGeometry(QRect(70, 400, 311, 51));
        QFont font2;
        font2.setPointSize(23);
        font2.setBold(true);
        alr_wsu_id_label->setFont(font2);
        alr_wsu_id_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        alr_submit_button = new QPushButton(already_registered_page);
        alr_submit_button->setObjectName("alr_submit_button");
        alr_submit_button->setGeometry(QRect(700, 350, 251, 151));
        sizePolicy1.setHeightForWidth(alr_submit_button->sizePolicy().hasHeightForWidth());
        alr_submit_button->setSizePolicy(sizePolicy1);
        alr_submit_button->setMinimumSize(QSize(0, 50));
        alr_submit_button->setSizeIncrement(QSize(0, 0));
        alr_submit_button->setFont(font);
        stackedWidget->addWidget(already_registered_page);
        new_regis_page = new QWidget();
        new_regis_page->setObjectName("new_regis_page");
        new_bg = new QLabel(new_regis_page);
        new_bg->setObjectName("new_bg");
        new_bg->setGeometry(QRect(0, 0, 1000, 560));
        new_bg->setPixmap(QPixmap(QString::fromUtf8("../resources/background.png")));
        new_bg->setScaledContents(true);
        new_wsu_id_label = new QLabel(new_regis_page);
        new_wsu_id_label->setObjectName("new_wsu_id_label");
        new_wsu_id_label->setGeometry(QRect(70, 400, 311, 51));
        new_wsu_id_label->setFont(font2);
        new_wsu_id_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        new_wsu_id_form = new QLineEdit(new_regis_page);
        new_wsu_id_form->setObjectName("new_wsu_id_form");
        new_wsu_id_form->setGeometry(QRect(400, 410, 241, 31));
        new_wsu_id_form->setFont(font1);
        new_wsu_id_form->setMaxLength(8);
        birthdate_label = new QLabel(new_regis_page);
        birthdate_label->setObjectName("birthdate_label");
        birthdate_label->setGeometry(QRect(70, 460, 311, 51));
        birthdate_label->setFont(font2);
        birthdate_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        birthdate_form = new QLineEdit(new_regis_page);
        birthdate_form->setObjectName("birthdate_form");
        birthdate_form->setGeometry(QRect(400, 470, 241, 31));
        birthdate_form->setFont(font1);
        birthdate_form->setToolTipDuration(-1);
        birthdate_form->setMaxLength(10);
        name_label = new QLabel(new_regis_page);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(70, 340, 311, 51));
        name_label->setFont(font2);
        name_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name_form = new QLineEdit(new_regis_page);
        name_form->setObjectName("name_form");
        name_form->setGeometry(QRect(400, 350, 241, 31));
        name_form->setFont(font1);
        name_form->setMaxLength(100);
        new_submit_button = new QPushButton(new_regis_page);
        new_submit_button->setObjectName("new_submit_button");
        new_submit_button->setGeometry(QRect(700, 350, 251, 151));
        sizePolicy1.setHeightForWidth(new_submit_button->sizePolicy().hasHeightForWidth());
        new_submit_button->setSizePolicy(sizePolicy1);
        new_submit_button->setMinimumSize(QSize(0, 50));
        new_submit_button->setSizeIncrement(QSize(0, 0));
        new_submit_button->setFont(font);
        stackedWidget->addWidget(new_regis_page);
        success = new QWidget();
        success->setObjectName("success");
        new_bg_2 = new QLabel(success);
        new_bg_2->setObjectName("new_bg_2");
        new_bg_2->setGeometry(QRect(0, 0, 1000, 560));
        new_bg_2->setPixmap(QPixmap(QString::fromUtf8("../resources/success.png")));
        new_bg_2->setScaledContents(true);
        stackedWidget->addWidget(success);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        background->setText(QString());
        already_button->setText(QCoreApplication::translate("MainWindow", "Already\n"
"Registered", nullptr));
        registration_button->setText(QCoreApplication::translate("MainWindow", "New \n"
"Registration", nullptr));
        already_bg->setText(QString());
        alr_wsu_id_form->setText(QString());
        alr_wsu_id_label->setText(QCoreApplication::translate("MainWindow", "Enter your WSU ID:", nullptr));
        alr_submit_button->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        new_bg->setText(QString());
        new_wsu_id_label->setText(QCoreApplication::translate("MainWindow", "Enter your WSU ID:", nullptr));
        new_wsu_id_form->setInputMask(QString());
        new_wsu_id_form->setText(QString());
        birthdate_label->setText(QCoreApplication::translate("MainWindow", "Enter your birthdate:", nullptr));
#if QT_CONFIG(tooltip)
        birthdate_form->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        birthdate_form->setText(QString());
        birthdate_form->setPlaceholderText(QCoreApplication::translate("MainWindow", "MM/DD/YYYY", nullptr));
        name_label->setText(QCoreApplication::translate("MainWindow", "Enter your name:", nullptr));
#if QT_CONFIG(tooltip)
        name_form->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        name_form->setText(QString());
        new_submit_button->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        new_bg_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
