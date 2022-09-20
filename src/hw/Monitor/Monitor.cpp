#include "Monitor.h"
#include "Controller.h"

Monitor::Monitor()
{

}

Monitor::~Monitor()
{

}

// 매개변수를 2개로 설정 ==> 받을 데이터의 크기를 정해줘야 한다.
void Monitor::print(uint8_t *data, int size)    //data의 size값이 유효한 값이 되야 하니까 매개변수를 2개로 설정
{
    for(int i = 0; i < size; i++) {
        printf("%x ", data[i]);
    }
    printf("\n");

}