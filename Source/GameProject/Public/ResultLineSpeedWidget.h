#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ResultLineSpeedWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultLineSpeedWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_speed;
    
public:
    UResultLineSpeedWidget();
    UFUNCTION(BlueprintCallable)
    void TryGetLineSpeedByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetLineSpeedByOrderID(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetLineSpeedByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex);
    
};

