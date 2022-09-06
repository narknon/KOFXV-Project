#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "SelectorPanelData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSelectorPanelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureIcon;
    
    GAMEPROJECT_API FSelectorPanelData();
};

