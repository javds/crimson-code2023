#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void reset_ui();

    void on_already_button_clicked();

    void on_registration_button_clicked();

    void on_new_submit_button_clicked();

    void on_alr_submit_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
