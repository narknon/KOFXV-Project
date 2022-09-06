#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "ECharaColorID.h"
#include "RegisterCharaData.generated.h"

USTRUCT(BlueprintType)
struct FRegisterCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType cosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID colID;
    
    GAMEPROJECT_API FRegisterCharaData();
};

