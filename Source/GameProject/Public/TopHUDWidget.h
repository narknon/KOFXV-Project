#pragma once
#include "CoreMinimal.h"
#include "BattleHudValueGetter.h"
#include "TopHUDWidget.generated.h"

class UTimerHUDWidget;
class ULifeGaugeWidget;
class UCharaHUDWidget;
class UUserPlateWidget;
class UTeamMemberWidget;
class UGuardGaugeWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTopHUDWidget : public UBattleHudValueGetter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharaHUDWidget* WBP_90_hud_chara_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserPlateWidget* WBP_90_user_plate_p1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULifeGaugeWidget* WBP_90_gauge_life_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuardGaugeWidget* WBP_90_gauge_guard_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamMemberWidget* WBP_90_player_set_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharaHUDWidget* WBP_90_hud_chara_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserPlateWidget* WBP_90_user_plate_p2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULifeGaugeWidget* WBP_90_gauge_life_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuardGaugeWidget* WBP_90_gauge_guard_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamMemberWidget* WBP_90_player_set_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTimerHUDWidget* WBP_90_timer;
    
public:
    UTopHUDWidget();
};

