#include "MembersEntity.h"

MembersEntity::MembersEntity()
{
    fpDBData = fopen("memberLists.bin", "r+");
    loadMembersInfo();
    printMemberInfo();
}

MembersEntity::~MembersEntity()
{
}

void MembersEntity::loadMembersInfo()
{
    while (fread(&memberInfo, sizeof(MemberInfo), 1, fpDBData)) //딱 한번 읽는다.
    {
        vecMembersList.push_back(memberInfo);
    }

}

void MembersEntity::printMemberInfo()
{
    printf("%04d, %s, %s, %s, %0x-%0x-%0x-%0x-%0x\n",
            vecMembersList[1000].id,
            vecMembersList[1000].name,
            vecMembersList[1000].address,
            vecMembersList[1000].phoneNumber,
            vecMembersList[1000].cardNum[0],
            vecMembersList[1000].cardNum[1],
            vecMembersList[1000].cardNum[2],
            vecMembersList[1000].cardNum[3],
            vecMembersList[1000].cardNum[4]
            );
}