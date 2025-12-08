#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->kontener->setReadOnly(true);
    kontenery.push_back(ui->kontener);
    kontenery.push_back(ui->textEdit);


    //ui->dateTimeEdit->setMinimumDateTime(QDateTime::currentDateTime());
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

    wpisy.push_back(nowyWpis);

    for(size_t i = 0; i<wpisy.size();i++){
    if(nowyWpis==wpisy[i]&&wpisy.size()>1){
        wpisy[i]=nowyWpis;
        wpisy.pop_back();
    }
    break;
    }
    std::sort(wpisy.begin(),wpisy.end());
    for(size_t i = 0; i<wpisy.size();i++){

        tresc+="<h2>"+(wpisy[i].data).toString()+"</h2>"+wpisy[i].tresc;
        tresc+="<br>-----------------</br>";
        ui->kontener->setText(tresc);
    }
    tresc="";


}

