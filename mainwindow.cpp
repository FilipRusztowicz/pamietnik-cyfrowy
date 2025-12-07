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
    nowyWpis.setData(ui->dateTimeEdit->dateTime());
    nowyWpis.setTresc(ui->textEdit->toPlainText());
   // qDebug()<<nowyWpis.data<<" "<<nowyWpis.tresc;
    wpisy.push_back(nowyWpis);

    for(size_t i = 0; i<wpisy.size();i++){
        if(nowyWpis==wpisy[i]){
            wpisy[i]=nowyWpis;
            wpisy.pop_back();
        }else{
            wpisy.push_back(nowyWpis);
        }
        tresc+="<h2>"+(wpisy[i].data).toString()+"</h2>"+wpisy[i].tresc;
        ui->kontener->setText(tresc);
    }



}

