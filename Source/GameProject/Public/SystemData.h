#pragma once
#include "CoreMinimal.h"
#include "OptionGameInfo.h"
#include "OnlineSettingInfo.h"
#include "SaveData.h"
#include "OptionDisplayInfo.h"
#include "OptionSoundInfo.h"
#include "OptionLanguageInfo.h"
#include "EGameOptionAILevel.h"
#include "RoomMenuSaveData.h"
#include "VariousInfo.h"
#include "EGameOptionBattleWinRule.h"
#include "TrainingModeParam.h"
#include "OptionSystemInfo.h"
#include "OptionGraphicInfo.h"
#include "OptionButtonConfigInfo.h"
#include "BattleSettingInfo.h"
#include "OnlineWaitSettingInfo.h"
#include "EFightingConfigKey.h"
#include "UObject/NoExportTypes.h"
#include "KeyMap.h"
#include "EKeyOperation.h"
#include "EGameOptionBattleTime.h"
#include "EPlayerID.h"
#include "EPauseType.h"
#include "EDeviceType.h"
#include "EAnalogStickType.h"
#include "SystemData.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API USystemData : public USaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionDisplayInfo option_display_info_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariousInfo VariousInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineSettingInfo OnlineSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrainingModeParam training;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleTutorialKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleTrialKeyData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionLanguageInfo LanguageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionGameInfo GameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionSoundInfo SoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionSystemInfo SystemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionGraphicInfo GraphicInInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionButtonConfigInfo> ButtonConfigInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSettingInfo BattleSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineWaitSettingInfo OnlineWaitSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineWaitSettingInfo RankSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineWaitSettingInfo CasualSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoomEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineTrainingEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SwitchItemIndex_Create;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SwitchItemIndex_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SwitchItemIndex_OnlineTrainingCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SwitchItemIndex_OnlineTrainingSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InputDelay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomMenuSaveData RoomMenu;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int64> TelemetryBuffer;
    
    UPROPERTY(EditAnywhere)
    int64 TelemetryLastUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastLogin;
    
    UPROPERTY(EditAnywhere)
    int64 TotalLoginCount;
    
    UPROPERTY(EditAnywhere)
    uint64 AccountIdHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAgree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstOnlineReplay;
    
    USystemData();
    UFUNCTION(BlueprintCallable)
    FKeyMap TestKeyMapTest();
    
    UFUNCTION(BlueprintCallable)
    void SetSystemTouchpad(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesString(const FString& Subtitles);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryBattleTime(EGameOptionBattleTime Val);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryAiLevel(EGameOptionAILevel Val);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveDataMapped(TArray<uint8> Mapped, EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseType(EPauseType Val);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRoundNumSingle(EGameOptionBattleWinRule Val);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageString(const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyMapDefault(int32 PlayerIndex, EDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyMap(int32 PlayerIndex, FKeyMap& KeyMap);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDelay(int32 PlayerIndex, int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTouchpad();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSystemInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLanguageInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultGameInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetBrightnessParam(int32 brightness_param);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTime(EGameOptionBattleTime Val);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalogStickType(EAnalogStickType Val);
    
    UFUNCTION(BlueprintCallable)
    void SetAiLevel(EGameOptionAILevel Val);
    
    UFUNCTION(BlueprintCallable)
    bool IsLanguageJp();
    
    UFUNCTION(BlueprintCallable)
    bool GetSystemVibration();
    
    UFUNCTION(BlueprintCallable)
    bool GetSystemTouchpad();
    
    UFUNCTION(BlueprintCallable)
    FString GetSubtitlesString();
    
    UFUNCTION(BlueprintCallable)
    EGameOptionBattleTime GetStoryBattleTime();
    
    UFUNCTION(BlueprintCallable)
    EGameOptionAILevel GetStoryAiLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSoftwareDecoderFlag();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetSaveDataMapped(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    EPauseType GetPauseType();
    
    UFUNCTION(BlueprintCallable)
    EGameOptionBattleWinRule GetMaxRoundNumSingle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLowQualityStageFlag();
    
    UFUNCTION(BlueprintCallable)
    FString GetLanguageString();
    
    UFUNCTION(BlueprintCallable)
    FKeyMap GetKeyMap(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    TMap<EFightingConfigKey, EKeyOperation> GetKeyboardKeyMap(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInputDelay(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    TMap<EFightingConfigKey, EKeyOperation> GetGamepadKeyMap(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetDefaultButtonConfig(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    TMap<EFightingConfigKey, EKeyOperation> GetCustomKeyMap(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    EGameOptionBattleTime GetBattleTime();
    
    UFUNCTION(BlueprintCallable)
    EAnalogStickType GetAnalogStickType();
    
    UFUNCTION(BlueprintCallable)
    EGameOptionAILevel GetAiLevel();
    
};

