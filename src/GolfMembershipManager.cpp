#include "GolfMembershipManager.h"

GolfMembershipManager::GolfMembershipManager()
{
    listener = new Listener();
}

GolfMembershipManager::~GolfMembershipManager()
{
}

void GolfMembershipManager::run()   //main함수에 있던 것을 여기서 하겠다.
{
    while (1)
    {
        listener->checkEvent();
        delay(10);
    }
}