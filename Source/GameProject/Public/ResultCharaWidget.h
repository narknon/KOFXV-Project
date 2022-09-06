#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "ResultCharaWidget.generated.h"

class UWidgetSwitcher;
class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultCharaWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* turn_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_209;
    
public:
    UResultCharaWidget();
    UFUNCTION(BlueprintCallable)
    void SetCharaTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FindCharaTexture(ECharacterID charaID, EPlayerID PlayerID, ECostumeType CostumeType);
    
};

