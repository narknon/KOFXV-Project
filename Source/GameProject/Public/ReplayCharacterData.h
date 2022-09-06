#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "ECostumeType.h"
#include "ReplayCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FReplayCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType Costume;
    
    GAMEPROJECT_API FReplayCharacterData();
};

