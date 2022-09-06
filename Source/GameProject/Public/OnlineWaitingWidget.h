#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "OnlineWaitingWidget.generated.h"

class UOnlineWaitingPauseWindowWidget;
class UTextBlock;
class UOnlineWaitingItemWidget;
class UOnlineWaitingFailedWindowWidget;
class UUnfairPlayerWidget;
class UResultLineSpeedWidget;
class UAgreementRankWindow;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineWaitingWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingPauseWindowWidget* WBP_99_icon_waiting_off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOnlineWaitingItemWidget*> MenuItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingFailedWindowWidget* WBP_99_icon_waiting_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_matching_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultLineSpeedWidget* WBP_icon_lineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUnfairPlayerWidget* WBP_99_icon_quitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAgreementRankWindow* WBP_03_agreement_rank;
    
public:
    UOnlineWaitingWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectedCharacterDispatcher(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchingAccepted(bool IsSuccessfulMatching);
    
    UFUNCTION(BlueprintCallable)
    void MatchmakingCompleted(bool bWasSuccessful, int32 LocalPlayerNumber, int32 OpponentPlayerNumber);
    
    UFUNCTION(BlueprintCallable)
    void MatchingAcceptedByCountdownComp(bool IsSuccessfulMatching);
    
    UFUNCTION(BlueprintCallable)
    void DelegateOnMatchingAcceptedDispather(bool IsSuccessfulMatching);
    
};

