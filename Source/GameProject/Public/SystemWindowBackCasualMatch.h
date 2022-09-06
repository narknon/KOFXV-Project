#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "SystemWindowEvents.h"
#include "UObject/Object.h"
#include "SystemWindowBackCasualMatch.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API USystemWindowBackCasualMatch : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents SystemWindow;
    
    USystemWindowBackCasualMatch();
    UFUNCTION(BlueprintCallable)
    void OpenSystemWindow(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSystemWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
};

