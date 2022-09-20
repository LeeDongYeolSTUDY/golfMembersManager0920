#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>

class Monitor   //화면에 출력하는 기능의 class이다.
{
private:


public:
    Monitor();
    virtual ~Monitor();
    void print(uint8_t *data, int size);    //monitor(rfidData, 16);에서 받는다.
};

#endif