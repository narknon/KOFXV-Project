#pragma once
#include "CoreMinimal.h"
#include "ESceneName.generated.h"

UENUM(BlueprintType)
enum class ESceneName : uint8 {
    SN_Title,
    SN_MainMenu,
    SN_RankMatch,
    SN_CasualMatch,
    SN_RoomMatch,
    SN_InvitedRoomMatch,
    SN_OnlineTraining,
    SN_InvitedOnlineTraining,
    SN_DJStation,
    SN_OnlineProfile,
    SN_LeaderBoard,
    SN_FadeToMember,
    SN_FadeToOrder,
    SN_Entry,
    SN_ControllerSelect,
    SN_Member,
    SN_Order,
    SN_Stage,
    SN_Versus,
    SN_VersusClean,
    SN_BattleTravel,
    SN_BattleTravelClean,
    SN_BattleScene,
    SN_BattleSceneInitialized,
    SN_Movie,
    SN_Ending,
    SN_Credit,
    SN_EndScene,
    SN_PreLangChange,
    SN_LangChange,
    SN_LangChangeClean,
    SN_CleanTravelScene,
    Max,
    SN_None,
    SN_DebugScene,
};

