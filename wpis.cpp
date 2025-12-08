#include "wpis.h"
void Wpis::setData(QDateTime d){
    data=d;

}
void Wpis::setTresc(QString t){
    tresc=t;
}

Wpis::Wpis()
{

}
bool Wpis::operator<(const Wpis&w){
    return this->data<w.data;
}

