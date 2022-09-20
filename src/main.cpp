#include <iostream>
// #include "mfrc522.h"     <== "GolfMembershipManager.h"에 include시켜서 없어도 된다.
#include "Listener.h"
#include "GolfMembershipManager.h"
#include "MembersEntity.h"

// 우리가 사용하는 rfid = mfrc522이다.
int main(void)
{
    MembersEntity membersEntity;
    // GolfMembershipManager golfMembershipManager;
    // golfMembershipManager.run();

    return 0;
}





/*
    mfrc522 rfid(new SPI(10, 3000000)); // SPI::SPI(int chipSelectPinNum, int spiSpeed)
    Listener *listener = new Listener(&rfid);


    while (1)
    {
        listener->checkEvent();
        delay(1000);
        printf("hihi\n");
    }
}
*/