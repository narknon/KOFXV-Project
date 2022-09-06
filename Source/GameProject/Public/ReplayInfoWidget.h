#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EGameOptionBattleWinRule.h"
#include "EGameModeReplay.h"
#include "EBattleRoundWinner.h"
#include "ERankGrade.h"
#include "EGameMode.h"
#include "UObject/NoExportTypes.h"
#include "EReplayInfoItem.h"
#include "ReplayInfoWidget.generated.h"

class UHaveGuideWindow;
class UPauseMenuItemConfirmButtonWidget;
class UDataTable;
class UBaseWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayInfoWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PanelItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeReplay GameModeReplay;
    
public:
    UReplayInfoWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinRule(EGameOptionBattleWinRule WinRule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinLoss(int32 WinPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamCharaTexture(UTexture2D* tex1, UTexture2D* tex2, UTexture2D* tex3, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamCharaName(const FText& Chara1, const FText& Chara2, const FText& Chara3, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSingleCharaTexture(UTexture2D* tex, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSingleCharaName(const FText& CharaText, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRound(int32 Round, const FText& P1CharaName, const FText& P2CharaName, EBattleRoundWinner RoundWinner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(ERankGrade RankGrade, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineID(const FText& P1CharaName, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyGame(int32 MyGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameMode(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDateTime(FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerAnimTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerAnimSingle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerAnimPrivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerAnimInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorInactive(EReplayInfoItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorActive(EReplayInfoItem Item);
    
};

