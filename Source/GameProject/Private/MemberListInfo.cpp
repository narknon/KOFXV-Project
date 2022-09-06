#include "MemberListInfo.h"

FMemberListInfo::FMemberListInfo() {
    this->RoomMemberListState = ERoomMemberListState::None;
    this->AvatarTextrue = NULL;
    this->PlayerNumber = 0;
    this->IsHost = false;
    this->IsDangerousUser = false;
    this->IsHaveYellowCard = false;
    this->IsMe = false;
    this->AntennaLevel = EAntennaLevel::LV1;
    this->PingValue = 0;
}

