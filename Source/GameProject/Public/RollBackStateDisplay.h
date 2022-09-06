#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "RollBackStateDisplay.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URollBackStateDisplay : public UBattleHudBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* FrameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* Millisecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MillisecondText;
    
    URollBackStateDisplay();
    UFUNCTION(BlueprintCallable)
    void UpdateVisbility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRollbackFrame();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDelayDisplay();
    
};

