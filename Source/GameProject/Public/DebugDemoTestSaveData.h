#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "GameFramework/SaveGame.h"
#include "EStageID.h"
#include "ECharaColorID.h"
#include "ECostumeType.h"
#include "DebugDemoTestSaveData.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDebugDemoTestSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sceneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID character1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID character2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID characterColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID characterColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType characterCostume1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType characterCostume2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID stage;
    
    UDebugDemoTestSaveData();
};

