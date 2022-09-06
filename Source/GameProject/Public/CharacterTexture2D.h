#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "CharacterTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    GAMEPROJECT_API FCharacterTexture2D();
};

