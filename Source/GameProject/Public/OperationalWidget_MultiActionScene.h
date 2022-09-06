#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "OperationalWidget_MultiActionScene.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOperationalWidget_MultiActionScene : public UOperationalWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOperationalWidget*> currentWidgetPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RealInputedPlayerID;
    
public:
    UOperationalWidget_MultiActionScene();
protected:
    UFUNCTION(BlueprintCallable)
    bool setCurrentWidget(int32 PlayerID, UOperationalWidget* in_target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOperationalWidget* getCurrentWidget(int32 PlayerID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertCursorPlayer(int32 PlayerID);
    
};

