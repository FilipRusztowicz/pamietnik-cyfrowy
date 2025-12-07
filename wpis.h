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
        return (lw.data.date() == pw.data.date()&&lw.data.time()==pw.data.time());
    }
};

#endif // WPIS_H
