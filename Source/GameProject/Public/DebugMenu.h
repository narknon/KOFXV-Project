#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugRectInfo.h"
#include "DebugCenterInfo.h"
#include "DebugStringInfo.h"
#include "DebugStateString.h"
#include "EActionDebugFlagId.h"
#include "DebugSettingInfo.h"
#include "DebugFlagData.h"
#include "EFlagDataType.h"
#include "DebugMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class GAMEPROJECT_API ADebugMenu : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> StrArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugRectInfo> DebugRectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugRectInfo> DebugFillRectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCenterInfo> DebugCenterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugStringInfo> DebugStringInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 debugTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubPlayerInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubPlayerInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerActionNameInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerActionNameInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerFacialNameInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerFacialNameInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerAttackData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerAttackData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerCommandInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerCommandInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerMotionInfo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerMotionInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDrawDebugRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugStateString> DebugStateString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetSendLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetRecvLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ControllerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AvatarTest;
    
    ADebugMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDebugMenuString();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDebugMenuState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerID(int32 _playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputKeyFrameCnt(int32 _inputKeyFrameCnt);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugValueList(FDebugSettingInfo settingInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuState(bool _bDebugMenuOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMainHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KeyHistoryWidgetArrClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitInputKeyWidgetRefArrRowIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugFlagsForId(EActionDebugFlagId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDebugFlagData GetDebugFlags(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFlagDataType GetDataType(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameAdvance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float DrawKeyHistory(int32 _inputKeyID, float _cx, float _cy);
    
    UFUNCTION(BlueprintCallable)
    bool DebugMenuSetting(bool _bExternPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenuAgainConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMainHUD();
    
    UFUNCTION(BlueprintCallable)
    void CloseDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static FString ChooseFile(bool bForSaving);
    
    UFUNCTION(BlueprintCallable)
    bool CheckRowNumberRestart(int32 _iDebugRowNumber);
    
    UFUNCTION(BlueprintCallable)
    void CallGameDebugFunction();
    
    UFUNCTION(BlueprintCallable)
    void ActionDebugKeySetting(bool isPause);
    
    UFUNCTION(BlueprintCallable)
    void ActionDebugCursor(bool _bRightKey, bool is_selected_with_cursor, int32 _iDebugRowNumber, bool _l2, bool _r2);
    
};

