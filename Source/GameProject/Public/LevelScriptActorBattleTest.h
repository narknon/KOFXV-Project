#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ECharacterID.h"
#include "EStageID.h"
#include "EPlayerOperationType.h"
#include "ECharaColorID.h"
#include "ECostumeType.h"
#include "LevelScriptActorBattleTest.generated.h"

class UDataAssetCharLights;
class UDataAssetStageDemoCamera;

UCLASS(Blueprintable)
class ALevelScriptActorBattleTest : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID m_P1CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID m_P1CharacterColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType m_P1CharacterCostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerOperationType m_P1OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID m_P2CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID m_P2CharacterColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType m_P2CharacterCostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerOperationType m_P2OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID m_OverrideStageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageLoadedComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedStageLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetCharLights* m_charLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetStageDemoCamera* m_StageDemoData;
    
    ALevelScriptActorBattleTest();
    UFUNCTION(BlueprintCallable)
    void OnOnionStreamProcessFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEvent_MovieStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEvent_MoviePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEvent_IsMoviePlaying(bool& bResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadEvent_NormalStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadEvent_AfterStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEvent_CPUPerformanceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEvent_CPUPerformanceEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEvent_BattleRoundStart(int32 Round);
    
};

