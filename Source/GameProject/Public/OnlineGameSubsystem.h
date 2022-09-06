#pragma once
#include "CoreMinimal.h"
#include "OnSelectedOrderDispatcherDelegate.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnJoinedNewMemberDispatcherDelegate.h"
#include "OnMatchingAcceptedMulticastDispatherDelegate.h"
#include "OnSelectedBattleMemberDispatcherDelegate.h"
#include "OnCannotStartBattleDispatcherDelegate.h"
#include "OnCancelledCharacterDispatcherDelegate.h"
#include "OnSelectedCharacterDispatcherDelegate.h"
#include "EOnlineResultMenuItemType.h"
#include "OnCancelledOrderDispatcherDelegate.h"
#include "OnMovedStageSelectCursorDispatcherDelegate.h"
#include "OnSelectedStageDispatcherDelegate.h"
#include "OnBattleStartDispatcherDelegate.h"
#include "MatchmakingSettings.h"
#include "OnMatchmakingCompletedDispatcherDelegate.h"
#include "ECheckOnlineResult.h"
#include "EStageID.h"
#include "ELoginResult.h"
#include "UObject/NoExportTypes.h"
#include "OnMatchingAcceptedDispatherDelegate.h"
#include "OnLoginCompletedDispatcherDelegate.h"
#include "EPlayerID.h"
#include "EOnlineGameMode.h"
#include "OnCheckOnlineCompletedDispatcherDelegate.h"
#include "EOnlineResultDisplayState.h"
#include "OnlineGameSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UOnlineGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinedNewMemberDispatcher OnJoinedNewMemberDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchingAcceptedMulticastDispather OnMatchingAcceptedMulticastDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedBattleMemberDispatcher OnSelectedBattleMemberDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannotStartBattleDispatcher OnCannotStartBattleDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedCharacterDispatcher OnSelectedCharacterDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelledCharacterDispatcher OnCancelledCharacterDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedOrderDispatcher OnSelectedOrderDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelledOrderDispatcher OnCancelledOrderDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovedStageSelectCursorDispatcher OnMovedStageSelectCursorDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedStageDispatcher OnSelectedStageDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleStartDispatcher OnBattleStartDispatcher;
    
    UOnlineGameSubsystem();
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(const FMatchmakingSettings& MatchmakingSettings, FOnMatchmakingCompletedDispatcher OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void StageSelect(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    void SitDownWaitingSeatRequest();
    
    UFUNCTION(BlueprintCallable)
    void SitDownBattleSeatRequest(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ShowProfileUI(const FString& AccoutId);
    
    UFUNCTION(BlueprintCallable)
    void ShowInviteUI();
    
    UFUNCTION(BlueprintCallable)
    void SendStageSelectingCursor(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    void RoomMatchWinCountComplete();
    
    UFUNCTION(BlueprintCallable)
    void OrderSelect(int32 CharacterIndex, int32 OrderCountID);
    
    UFUNCTION(BlueprintCallable)
    void OpenResultMenu(EOnlineResultMenuItemType DefaultCursorPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoginCompletedInReceiveInviteProcess(ELoginResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckOnlineCompletedInReceiveInviteProcess(ECheckOnlineResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveResultMenuCursor(EOnlineResultMenuItemType NextPosition);
    
    UFUNCTION(BlueprintCallable)
    void MatchingAccept(bool bAccept, FOnMatchingAcceptedDispather OnEveryoneCompleted, bool bPenalty);
    
    UFUNCTION(BlueprintCallable)
    void Login(const int32 ControllerIndex, FOnLoginCompletedDispatcher OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void LeaveSeatRequest();
    
    UFUNCTION(BlueprintCallable)
    void LeaveRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectatorLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassedLongTimeSinceStartMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperationCharacter(EPlayerID PlayerID, int32 CharacterIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMasterLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetOpponentPlayerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetLocalPlayerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineGameMode GetCurrentOnlineGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCurrentBattleStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetAlreadySelectedStage() const;
    
    UFUNCTION(BlueprintCallable)
    void DecideResultMenuCursor();
    
    UFUNCTION(BlueprintCallable)
    void CheckOnline(FOnCheckOnlineCompletedDispatcher OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void CheckNetworkAvailability(FOnCheckOnlineCompletedDispatcher OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void ChangeResultDisplayState(EOnlineResultDisplayState NextState);
    
    UFUNCTION(BlueprintCallable)
    void CancelResultMenuCursor();
    
    UFUNCTION(BlueprintCallable)
    void CancelOrderSelect();
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void CancelJoinRoom();
    
    UFUNCTION(BlueprintCallable)
    void CancelFindRooms();
    
    UFUNCTION(BlueprintCallable)
    void CancelCreateRoom();
    
    UFUNCTION(BlueprintCallable)
    void CancelCharacterSelect(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void BreakStartRequest();
    
    UFUNCTION(BlueprintCallable)
    void BreakEndRequest();
    
    UFUNCTION(BlueprintCallable)
    void BattleSeatCountIsEnd();
    
    UFUNCTION(BlueprintCallable)
    void BattleReady();
    
    UFUNCTION(BlueprintCallable)
    void BackToRoom();
    
};

