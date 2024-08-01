#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

QChar charXO;
int turn = 1;
QList<QChar> vect{'*','*','*','*','*','*','*','*','*'};
QString str;



/*void checkForWin(){
    if(vect[0] == vect[1] && vect[1] == vect[2] && (vect[1] != '*' && vect[2] !='*' && vect[0] != '*')){

        QCoreApplication::quit();
    }
    else if(vect[0] == vect[3] && vect[3] == vect[6] && vect[3] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[2] == vect[5] && vect[5] == vect[8] && vect[5] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[6] == vect[7] && vect[7] == vect[8] &&( vect[8] != '*' && vect[7] != '*' && vect[6] != '*')){
        QCoreApplication::quit();
    }
    else if(vect[1] == vect[4] && vect[4] == vect[7] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[3] == vect[4] && vect[4] == vect[5] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[0] == vect[4] && vect[4] == vect[8] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[2] == vect[4] && vect[4] == vect[6] && vect[4] != '*'){
        QCoreApplication::quit();

    }

}*/


MainWindow::~MainWindow()
{
    delete ui;
}


void checkForWin(){
    if(vect[0] == vect[1] && vect[1] == vect[2] && (vect[1] != '*' && vect[2] !='*' && vect[0] != '*')){
        QCoreApplication::quit();
    }
    else if(vect[0] == vect[3] && vect[3] == vect[6] && vect[3] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[2] == vect[5] && vect[5] == vect[8] && vect[5] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[6] == vect[7] && vect[7] == vect[8] &&( vect[8] != '*' && vect[7] != '*' && vect[6] != '*')){
        QCoreApplication::quit();
    }
    else if(vect[1] == vect[4] && vect[4] == vect[7] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[3] == vect[4] && vect[4] == vect[5] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[0] == vect[4] && vect[4] == vect[8] && vect[4] != '*'){
        QCoreApplication::quit();
    }
    else if(vect[2] == vect[4] && vect[4] == vect[6] && vect[4] != '*'){
        QCoreApplication::quit();

    }

}




    void MainWindow::on_first_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->first->setStyleSheet("color: white");
        ui->first->setText(charXO);
        vect[0] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();


    }
    void MainWindow::on_second_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->second->setStyleSheet("color: white");
        ui->second->setText(charXO);
        vect[1] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_third_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->third->setStyleSheet("color: white");
        ui->third->setText(charXO);
        vect[2] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_fourth_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->fourth->setStyleSheet("color: white");
        ui->fourth->setText(charXO);
        vect[3] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_fifth_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->fifth->setStyleSheet("color: white");
        ui->fifth->setText(charXO);
        vect[4 ] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_sixth_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->sixth->setStyleSheet("color: white");
        ui->sixth->setText(charXO);
        vect[5] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_seventh_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->seventh->setStyleSheet("color: white");
        ui->seventh->setText(charXO);
        vect[6] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_eighth_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->eighth->setStyleSheet("color: white");
        ui->eighth->setText(charXO);
        vect[7] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }
    void MainWindow::on_ninth_clicked()
    {
        if(turn % 2 != 0){
            charXO = 'X';
        }
        else{
            charXO = 'O';
        }
        ui->ninth->setStyleSheet("color: white");
        ui->ninth->setText(charXO);
        vect[8] = charXO;
        turn++;
        if(turn % 2 == 0){
            ui->Turn->setStyleSheet("color: blue");
            ui->Turn->setText("O");
        }
        else{
            ui->Turn->setStyleSheet("color: red");
            ui->Turn->setText("X");
        }
        checkForWin();
    }


