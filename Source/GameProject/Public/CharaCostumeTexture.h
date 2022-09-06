#pragma once
#include "CoreMinimal.h"
#include "CharaColorTexture.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "CharaCostumeTexture.generated.h"

USTRUCT(BlueprintType)
struct FCharaCostumeTexture : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeType, FCharaColorTexture> CharaCostumeTexture;
    
    GAMEPROJECT_API FCharaCostumeTexture();
};

