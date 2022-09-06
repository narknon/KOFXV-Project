#pragma once
#include "CoreMinimal.h"
#include "ETrainingStartPosition.h"
#include "ETrainingGuardSetting.h"
#include "ETrainingPlaySide.h"
#include "ETrainingAction.h"
#include "ETrainingDownEvade.h"
#include "ETrainingCounter.h"
#include "ETrainingRecordingType.h"
#include "ETrainingRecordingSlot.h"
#include "ETrainingVital.h"
#include "ETrainingRecordingSlotPlayMode.h"
#include "ETrainingReversalPlayTaiming.h"
#include "ECharacterID.h"
#include "EStageID.h"
#include "EBgmSetting.h"
#include "TrainingModeParam.generated.h"

USTRUCT(BlueprintType)
struct FTrainingModeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingStartPosition startPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartPositionReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingPlaySide playSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingAction action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingGuardSetting guard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingCounter counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingDownEvade downevade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleHud;
    
    UPROPERTY(EditAnywhere)
    ETrainingVital vitals[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player1power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player2power;
    
    UPROPERTY(EditAnywhere)
    int32 PowerGauge[2];
    
    UPROPERTY(EditAnywhere)
    int32 maxpowergauge[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player1maxmode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player2maxmode;
    
    UPROPERTY(EditAnywhere)
    int32 maxmodetime[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player1guardsetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player2guardsetting;
    
    UPROPERTY(EditAnywhere)
    int32 guardgauge[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player1stunsetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool player2stunsetting;
    
    UPROPERTY(EditAnywhere)
    int32 stungauge[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingRecordingType recordingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingRecordingSlot recordingSlot;
    
    UPROPERTY(EditAnywhere)
    ETrainingRecordingSlotPlayMode recordingSlotPlayModes[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingReversalPlayTaiming reversalPlayTiming;
    
    UPROPERTY(EditAnywhere)
    ECharacterID charaID[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID StageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBgmSetting bgmSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString soundname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bankname;
    
    UPROPERTY(EditAnywhere)
    TArray<int8> redordingKeyBuffer;
    
    GAMEPROJECT_API FTrainingModeParam();
};

