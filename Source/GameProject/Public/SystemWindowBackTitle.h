#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "SystemWindowEvents.h"
#include "UObject/Object.h"
#include "SystemWindowBackTitle.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API USystemWindowBackTitle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents BacktoMainMenu;
    
    USystemWindowBackTitle();
    UFUNCTION(BlueprintCallable)
    void OpenBackToMainMenu(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBackToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseBackToMainMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseAnimCompletedFunction();
    
};

