#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "UnfairPlayerWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUnfairPlayerWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UUnfairPlayerWidget();
    UFUNCTION(BlueprintCallable)
    void TryGetUnfairByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetUnfairByOrderID(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetUnfairByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex);
    
};

