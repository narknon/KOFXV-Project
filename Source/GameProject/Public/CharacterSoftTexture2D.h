#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "CharacterSoftTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterSoftTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    GAMEPROJECT_API FCharacterSoftTexture2D();
};

