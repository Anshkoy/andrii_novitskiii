#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_first_clicked();

    void on_second_clicked();

    void on_third_clicked();

    void on_fourth_clicked();

    void on_fifth_clicked();

    void on_sixth_clicked();

    void on_seventh_clicked();

    void on_eighth_clicked();

    void on_ninth_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
