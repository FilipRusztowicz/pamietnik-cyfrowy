#ifndef WPIS_H
#define WPIS_H
#include "qdatetime.h"
#include <iostream>
#include <ctime>
using namespace std;

class Wpis
{
public:
    QString tresc;
    QDate data;
    void setTresc(QString t);
    void setData(QDate d);
    Wpis();
};

#endif // WPIS_H
