#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "CharacterCostumeSoftTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterCostumeSoftTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeType, TSoftObjectPtr<UTexture2D>> CostumeTexture;
    
    GAMEPROJECT_API FCharacterCostumeSoftTexture2D();
};

