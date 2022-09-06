#pragma once
#include "CoreMinimal.h"
#include "BattleParamControllerVibration.h"
#include "BattleParamNormalMaxAdjust.h"
#include "Engine/DataAsset.h"
#include "BattleParamComboAdjust.h"
#include "BattleParamPowerGaugeSetting.h"
#include "BattleParamBodyFlashEffectParam.h"
#include "DataAssetBattleParam.generated.h"

UCLASS(Blueprintable)
class UDataAssetBattleParam : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamComboAdjust comboAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamPowerGaugeSetting powerGaugeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamNormalMaxAdjust normalMaxAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamControllerVibration vibrationAkebonoKO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamControllerVibration vibrationCounterHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamControllerVibration vibrationShutterStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamControllerVibration vibrationGuardCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamControllerVibration vibrationJoinRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNormalAtkCounterFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopDecMaxGaugeSuperMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iKuzureDamageLandFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iWallKuzureDamageLandFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iProvokeCommandEnableFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimerStopDuringClimaxMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamBodyFlashEffectParam bodyFlashEffectParam;
    
public:
    UDataAssetBattleParam();
};

