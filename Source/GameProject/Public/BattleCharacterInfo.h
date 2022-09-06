#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "ECostumeType.h"
#include "BattleCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FBattleCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID CharaColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType CostumeType;
    
    GAMEPROJECT_API FBattleCharacterInfo();
};

