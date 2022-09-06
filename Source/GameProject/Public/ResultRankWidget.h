#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ResultRankWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultRankWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_rank;
    
public:
    UResultRankWidget();
    UFUNCTION(BlueprintCallable)
    void TryGetRankByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetLineSpeedByOrderID(EPlayerID PlayerID, int32 OrderID);
    
};

