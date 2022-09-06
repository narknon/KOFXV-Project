#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MomentEventDelegate.h"
#include "EPlayerID.h"
#include "ESceneName.h"
#include "MomentGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UMomentGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnUiTransitionForce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnMemberSelectAnimInitilized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnStageSelectInitilize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnStageSelectAnimInitilize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnStageSelectAnimInitilized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnStageSelectAnimDeinitilized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnStageSelectConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMomentEvent OnPauseMenuClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDangerTravel;
    
public:
    UMomentGameInstanceSubsystem();
    UFUNCTION(BlueprintCallable)
    void VersusSenceLoadFinish();
    
    UFUNCTION(BlueprintCallable)
    void VersusSenceInitilized();
    
    UFUNCTION(BlueprintCallable)
    void VersusSenceInitilize();
    
    UFUNCTION(BlueprintCallable)
    void VersusSenceAnimInitilized();
    
    UFUNCTION(BlueprintCallable)
    void VersusSenceAnimDeinitilized();
    
    UFUNCTION(BlueprintCallable)
    void UiTransitionForce();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void StageSelectInitilize();
    
    UFUNCTION(BlueprintCallable)
    void StageSelectConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void StageSelectAnimInitilized();
    
    UFUNCTION(BlueprintCallable)
    void StageSelectAnimInitilize();
    
    UFUNCTION(BlueprintCallable)
    void StageSelectAnimDeinitilized();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayVersusSceneSound();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundUnlock();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundTravelEffectOut();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundTravelEffectIn();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundTitleStart(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundTitleLogo();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundStageSelectDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundStageSelectCursorMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundSmallWindowOpen();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundSmallWindowClose();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundPauseMenuDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundPauseMenuCursorMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundPage();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundOrderSelectDecisionLast();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundOrderSelectDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundOpenPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundOpenCloseList();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundLock();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundHandicapDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundHandicapCursorMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundGaugeMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundError();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundEntry(const int32& InControllerID, const EPlayerID& InPlayerID);
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundDecisionToCharacterSelect();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCursorMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundClosePauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCheck();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCharacterSelectDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCharacterSelectCursorMove();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCharacterSelectColor();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCharacterSelectCancel();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundCancel();
    
    UFUNCTION(BlueprintCallable)
    void PlaySelectedCharacterVoice(const int32& PlayerID, const ECharacterID& CharacterID, const float& PanningValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayMemberSelectStartDJVoiceDLC();
    
    UFUNCTION(BlueprintCallable)
    void PlayMainMenuBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayDJStationBGM();
    
    UFUNCTION(BlueprintCallable)
    void PauseMenuClose();
    
    UFUNCTION(BlueprintCallable)
    void OrderSelectInitilize();
    
    UFUNCTION(BlueprintCallable)
    void OrderSelectConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OrderSelectAnimInitilized();
    
    UFUNCTION(BlueprintCallable)
    void OrderSelectAnimDeinitilized();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnlineMatchingSuccess();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBookingTravel(ESceneName Scene);
    
    UFUNCTION(BlueprintCallable)
    void MemberSelectInitilize();
    
    UFUNCTION(BlueprintCallable)
    void MemberSelectConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void MemberSelectAnimInitilized();
    
    UFUNCTION(BlueprintCallable)
    void MemberSelectAnimDeinitilized();
    
    UFUNCTION(BlueprintCallable)
    void MainMenuInitilize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelWillBeDanger() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeoutBGM();
    
    UFUNCTION(BlueprintCallable)
    void EntryTravelToControllerSelect();
    
    UFUNCTION(BlueprintCallable)
    void EntryAnimInitilized();
    
    UFUNCTION(BlueprintCallable)
    void EntryAnimDeinitilized();
    
    UFUNCTION(BlueprintCallable)
    void BeginTravelToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void BeginMemberSelectTravelOut();
    
};

