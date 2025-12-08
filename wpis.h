#ifndef WPIS_H
#define WPIS_H
#include "qdatetime.h"
#include <ctime>
using namespace std;

class Wpis
{
public:
    QString tresc;
    QDateTime data;
    void setTresc(QString t);
    void setData(QDateTime d);
    Wpis();
    friend bool operator==(const Wpis& lw, const Wpis& pw){
        qDebug()<<"wywolano operator == "<<lw.data <<" "<<pw.data;
        return (lw.data == pw.data );

    }

    bool operator<(const Wpis&w);
};

#endif // WPIS_H
