#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "StoryLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FStoryLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> MyTeamMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iTotalScore;
    
    GAMEPROJECT_API FStoryLeaderboardData();
};

