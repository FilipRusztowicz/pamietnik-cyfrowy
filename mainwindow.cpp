#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tresc = "text";
    ui->kontener->setText(tresc);
    ui->kontener->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Wpis nowyWpis;
    nowyWpis.setData(ui->dateTimeEdit->date());
    nowyWpis.setTresc(ui->textEdit->toPlainText());
    wpisy.push_back(nowyWpis);
    //tresc=ui->textEdit->toPlainText();
    //ui->kontener->setText(tresc);


}

