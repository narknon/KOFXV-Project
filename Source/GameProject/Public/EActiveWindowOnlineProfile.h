#pragma once
#include "CoreMinimal.h"
#include "EActiveWindowOnlineProfile.generated.h"

UENUM(BlueprintType)
enum class EActiveWindowOnlineProfile : uint8 {
    None,
    Profile,
    PlayerSetting,
    FairPlayScore,
    Titles,
    BattleSetting,
    RankMatchHistory,
    RankMatchHistory_NoData,
    FollowList_Getting,
    FollowList,
    FollowList_GettingProfile,
    FollowList_GettingProfileOccurredError,
    FollowList_GettingProfileCommunicationLost,
    FollowList_OtherProfile,
    FriendList_Getting,
    FriendList,
    FriendList_GettingProfile,
    FriendList_GettingProfileOccurredError,
    FriendList_GettingProfileCommunicationLost,
    FriendList_OtherProfile,
    IsFollowThisUser,
    FollowThisUser,
    IsReleaseThisUser,
    ReleaseThisUser,
    IsFollowMultiUser,
    FollowMultiUser,
    IsReleaseMultiUser,
    ReleaseMultiUser,
    LimitFollowNum,
    OccurredError,
    CommunicationLost,
    NoData,
    OtherProfile,
    OtherProfile_OccurredError,
    OtherProfile_NoData,
};

