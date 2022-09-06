#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterColorArray.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "CharacterCostumeColor.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCostumeColor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeType, FCharacterColorArray> CostumeColorArray;
    
    GAMEPROJECT_API FCharacterCostumeColor();
};

