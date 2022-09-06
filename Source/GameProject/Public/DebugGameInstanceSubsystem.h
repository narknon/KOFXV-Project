#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPlayerID.h"
#include "EStageID.h"
#include "EGameMode.h"
#include "DebugGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDebugGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageSafeAreaCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageSafeAreaVisible;
    
    UDebugGameInstanceSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetUseDummyOnlineID(bool use);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialWinDirection(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetResultCheckCursorNum(TArray<int32> ResultCheckCursorNumArray);
    
    UFUNCTION(BlueprintCallable)
    void SetHudHidden(bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyOnlineID(EPlayerID PlayerID, TArray<FText> dummy);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugResultVoiceEventName(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuOpen(bool DebugMenuOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseDummyOnlineID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStageNameString(EStageID StageID, FString& StageName);
    
    UFUNCTION(BlueprintCallable)
    bool GetSpecialWinDirection();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetResultCheckCursorNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetHudHiddne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameModeNameString(EGameMode GameModeID, FString& GameModeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetDummyOnlineID(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharaNameString(ECharacterID charaID, FString& CharaName);
    
};

