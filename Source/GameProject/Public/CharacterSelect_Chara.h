#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "CharacterSelect_Chara.generated.h"

class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelect_Chara : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HoldingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimInPlayRate;
    
public:
    UCharacterSelect_Chara();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaTexture(const TSoftObjectPtr<UTexture2D>& Value);
    
};

