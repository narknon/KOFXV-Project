#pragma once
#include "CoreMinimal.h"
#include "SE_TYPE.h"
#include "ESYSTEM_VOICE_ID.h"
#include "SeamlessTravelActorBase.h"
#include "EUpdateOptionParamTargetID.h"
#include "EStageID.h"
#include "EGayaSEID.h"
#include "ESYSTEM_SE_ID.h"
#include "EPlayerID.h"
#include "UObject/NoExportTypes.h"
#include "SoundManager.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ASoundManager : public ASeamlessTravelActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID selected_stage_id_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> system_se_event_names_;
    
    ASoundManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOptionSoundParam(EUpdateOptionParamTargetID target_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopVoice(int32 player_id, int32 tag_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSoundAkComp(int32 _stopAkCompNum, int32 _playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopResultVoiceAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEnv(EStageID _stageID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopDemoVoiceAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllBGM();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateIMSoundParameter(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayVoiceSuccessFlg(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetNoSoundPlay(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingGalleryVoice(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNoOptionSound(bool no_option_flg);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinishBGM(bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGallerySwitchState(const FString& state_name);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishedPlayResultVoice(bool result_flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFateBattleFlg(bool is_fate_battle);
    
    UFUNCTION(BlueprintCallable)
    void SetExecutePanFlg(bool execute_pan);
    
    UFUNCTION(BlueprintCallable)
    void SetExecutedPlayResultVoice(bool executed_flg);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossTalkFinish(bool cross_talk_flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUnPauseSound(FName _pauseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSwitchSystemVoiceLanguageType(bool is_language_japanese);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopAllBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSetDefaultSoundVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlaySystemVoiceSound(ESYSTEM_VOICE_ID system_voice_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlaySystemSESound(ESYSTEM_SE_ID system_se_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayOtherCharacterVoice(const FString& event_name, int32 player_id, int32 target_akcomp_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayGayaSESound(EGayaSEID gaya_se_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPauseSound(FName _pauseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCheckSoundVolume(EUpdateOptionParamTargetID target_id, const FString& event_name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSoundPosEffect(EPlayerID player_id, int32 target_index);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayedVoiceOptionInfo(int32 player_id, const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostWwiseEvent(const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostEventNameVoice(FName _eventName, int32 _playerID, int32 _useAkCompID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostEventNameSEOptionChara(FName _eventName, int32 _playerID, SE_TYPE SE_TYPE, int32 _useAkCompID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostEventNameSE(FName _eventName, int32 _playerID, SE_TYPE SE_TYPE, int32 _useAkCompID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySystemVoiceSoundByName(const FString& event_name, bool is_language_japanese);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayResultVoice(const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGalleryCharaVoice(const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDemoVoiceByEventName(const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMEventName(const FString& event_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAttackSE(const FString& event_name, int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> LoadOptionSoundVolumeInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayVoiceSuccess();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedPlayResultVoice();
    
    UFUNCTION(BlueprintCallable)
    bool IsCrossTalkFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSoundVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitGallerySound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBattleAkComponents();
    
    UFUNCTION(BlueprintCallable)
    bool GetUpdateIMSoundParameter();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSoundPosEffect(EPlayerID player_id, int32 target_index);
    
    UFUNCTION(BlueprintCallable)
    bool GetNoSoundPlay();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPlayingGalleryVoice();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsNoOptionSound();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFinishBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExecutePanFlg();
    
    UFUNCTION(BlueprintCallable)
    bool GetExecutedPlayResultVoice();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterWeaponMaterial(EPlayerID player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteResultCharacterVoiceSwitch(const FString& switch_state);
    
};

