#ifndef LISTENER_H
#define LISTENER_H

#include "CardReader.h"
#include "Monitor.h"
#include "Controller.h"

class Listener
{
private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
public:
    Listener();
    virtual ~Listener();    //메모리 누수 방지
    void checkEvent();
    bool checkRfid();
};

#endif