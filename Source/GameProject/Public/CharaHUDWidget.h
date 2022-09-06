#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ECharacterID.h"
#include "CharacterCostumeSoftTexture2D.h"
#include "CharaHUDWidget.generated.h"

class UDataTable;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharaHUDWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* DefaultImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StunImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultImages_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultImages_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StunImages_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StunImages_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> ArrayDefaultImages_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> ArrayDefaultImages_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> ArrayStunImages_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> ArrayStunImages_Right;
    
public:
    UCharaHUDWidget();
};

