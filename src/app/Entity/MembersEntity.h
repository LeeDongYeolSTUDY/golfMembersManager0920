#ifndef MEMBERSENTITY_H
#define MEMBERSENTITY_H

#include <vector>
#include <iostream>
#include "Memberinfo.h"

class MembersEntity
{
private:
    std::vector<MemberInfo> vecMembersList;
    MemberInfo memberInfo;
    FILE *fpDBData;

public:
    MembersEntity();
    virtual ~MembersEntity();
    void loadMembersInfo();
    // void addmemberInfo(MemberInfo member);
    // void delmemberInfo(MemberInfo member);
    // void makeDBMembersInfo();
    void printMemberInfo();
};

#endif