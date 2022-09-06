#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "AnnounceWidget.generated.h"

class UBaseWidget;
class UWidgetSwitcher;
class UAnnounceRoundCallWidget;
class UAnnounceReadyGoCallWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnnounceRoundCallWidget* WBP_91_Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnnounceReadyGoCallWidget* WBP_91_ReadyGO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_Challenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_KO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_Perfect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_Draw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_Timeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_PlayerWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_91_Complete;
    
    UAnnounceWidget();
    UFUNCTION(BlueprintCallable)
    void SetOutlineWidgetFlag(bool NewIsOutlineWidget);
    
    UFUNCTION(BlueprintCallable)
    bool IsOutlineWidget();
    
};

