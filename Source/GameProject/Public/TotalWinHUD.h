#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "TotalWinHUD.generated.h"

class UNumberWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTotalWinHUD : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_100_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_010_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_001_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_100_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_010_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNumberWidget* WBP_90_totalWins_num_001_R;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UNumberWidget*> L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UNumberWidget*> R;
    
public:
    UTotalWinHUD();
    UFUNCTION(BlueprintCallable)
    void UpdateWinCount();
    
};

