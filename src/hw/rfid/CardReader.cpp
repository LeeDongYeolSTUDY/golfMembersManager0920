#include "CardReader.h"

// 기존
CardReader::CardReader(SPI* spi) : mfrc522(spi)
{

}

CardReader::~CardReader()
{

}

bool CardReader::isCard()
{
    uint8_t byte = mfrc522_request(PICC_REQALL, rfidData);    //읽어서
    //byte가 CARD_FOUND이면
    if (byte == CARD_FOUND)
        return true;
    else
        return false;

    return false;
}
DeviceData CardReader::getCardNumber()
{
    //
    mfrc522_get_card_serial(rfidData);
    cardData.devName = "cardReader";
    cardData.devData.clear(); // std::vector<int> devData; , clear : 기존의 값을 다 지우고 데이터를 채운다.
    for (const auto data : rfidData) {
        cardData.devData.push_back((int)data);
        //push_back : 기존의 값을 유지하고 뒤에 데이터를 채운다.
        //            기존의 값을 front에 유지하고 back에 데이터를 채운다.
    }
    return cardData;
}

