#ifndef CARDREADER_H
#define CARDREADER_H

#include <iostream>
#include "mfrc522.h"
#include "DeviceData.h"

class CardReader : public mfrc522   //무조건 public이다. public이하로 상속하겠다.
{
private:
    uint8_t rfidData[16];
    DeviceData cardData;    //구조체

public:
    CardReader(SPI* spi);
    virtual ~CardReader();
    bool isCard();
    DeviceData getCardNumber();

};

#endif