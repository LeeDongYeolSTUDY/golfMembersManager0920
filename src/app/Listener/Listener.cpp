#include "Listener.h"
#include <string.h> //memset을 사용하기 위해서 선언

// Listener::Listener(mfrc522 *rfid) : rfid(rfid)mfrc522 *rfid = rfid; rfid를 초기화한다는 것을 의미힌다.
Listener::Listener()
{
    rfid = new CardReader(new SPI(10, 3000000));
    controller = new Controller();
}

Listener::~Listener()
{

}

void Listener::checkEvent()
{
    //monitor한테 넘겨준다. 그러면 화면에 출력한다.
    if (checkRfid()) {
        controller->updateEvent(rfid->getCardNumber());  //배열의 이름은 주소다.
    }

}

bool Listener::checkRfid()
{
    static unsigned int prevCheckTime = 0;
    
    if (millis() - prevCheckTime < 1000) {
        return false;
    }
    prevCheckTime = millis();
    
    if (rfid->isCard()) return true;

    return false;
}