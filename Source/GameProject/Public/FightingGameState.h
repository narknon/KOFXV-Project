#pragma once
#include "CoreMinimal.h"
#include "EBattleHandicap.h"
#include "GameFramework/GameStateBase.h"
#include "BattleState.h"
#include "EStageID.h"
#include "EPlayerOperationType.h"
#include "ECharacterID.h"
#include "EPlayerID.h"
#include "FightingGameData.h"
#include "ECostumeType.h"
#include "ECharaColorID.h"
#include "EBattleResult.h"
#include "FightingGameState.generated.h"

class AFightingGameState;

UCLASS(Blueprintable)
class GAMEPROJECT_API AFightingGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDevelopmentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool finishSelectChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool finishSelectStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleState BattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerOperationType P1OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerOperationType P2OperationType;
    
    AFightingGameState();
    UFUNCTION(BlueprintCallable)
    void SetUniqueKOCharacterID(ECharacterID character_id);
    
    UFUNCTION(BlueprintCallable)
    void SetStageID(EStageID _stageID);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberCount(EPlayerID _playerID, int32 memberCount);
    
    UFUNCTION(BlueprintCallable)
    void SetHandicap(EPlayerID _playerID, EBattleHandicap _handicap);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishSelectStage(bool _finish);
    
    UFUNCTION(BlueprintCallable)
    void SetFightingGameData(const FFightingGameData& _fightData);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EPlayerID _playerID, ECharacterID _charaID, int32 _orderID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCostumeType(EPlayerID _playerID, ECostumeType _costumeType, int32 _orderID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaColorID(EPlayerID _playerID, ECharaColorID _colorID, int32 _orderID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedCharacterSame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemaining1Win(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBattleFinished(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeMatchBattleFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalRoundKachinuki(int32 round_number) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtraRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetUniqueKOCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetStageID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCount(EPlayerID _playerID) const;
    
    UFUNCTION(BlueprintCallable)
    AFightingGameState* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleHandicap GetHandicap(EPlayerID _playerID) const;
    
    UFUNCTION(BlueprintCallable)
    FFightingGameData GetFightingGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterUniqueID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetCharacterID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECostumeType GetCharacterCostumeType(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaColorID GetCharaColorID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleResult GetBattleResult() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DeleteLastOrderMember(EPlayerID _playerID);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllMember(EPlayerID _playerID);
    
};

