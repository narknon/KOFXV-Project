#pragma once
#include "CoreMinimal.h"
#include "EMaterialChangeGroup.h"
#include "ECharacterID.h"
#include "MaterialChangeParam.generated.h"

USTRUCT(BlueprintType)
struct FMaterialChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialChangeGroup groupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> charaID;
    
    GAMEPROJECT_API FMaterialChangeParam();
};

