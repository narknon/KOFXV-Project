#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_MultiActionScene.h"
#include "UObject/NoExportTypes.h"
#include "ECharaColorID.h"
#include "ECharacterID.h"
#include "CharacterCostumeSoftTexture2D.h"
#include "EPlayerID.h"
#include "EUiOperation.h"
#include "ECostumeType.h"
#include "CharacterSelect_Layout.generated.h"

class UCharacterSelect_Panels;
class USystemWindowBackTitle;
class USystemWindowBackRankMatch;
class USystemWindowBackCasualMatch;
class UCharacterSelect_Chara;
class UCharacterSelect_Player;
class UCostume_Customize;
class UHandicap;
class UEntry_PlayerList_CharacterSelect;
class UBaseWidget;
class UGuideLayoutWidget;
class USettingCharaListWidget;
class UCharacterSelectMenu;
class USelectTimer;
class UCharacterSelectCPU;
class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelect_Layout : public UOperationalWidget_MultiActionScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadedAssetsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemWindowBackTitle* SystemWindowBackTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemWindowBackRankMatch* SystemWindowBackRankMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemWindowBackCasualMatch* SystemWindowBackCasualMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Panels* Panels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Player* Player_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Player* Player_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Chara* chara_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Chara* chara_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize* costume_customize_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize* costume_customize_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHandicap* Handicap_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHandicap* Handicap_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_PlayerList_CharacterSelect* PlayerList_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_PlayerList_CharacterSelect* PlayerList_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* progressInfo_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* progressInfo_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* progressInfo_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideLayoutWidget* Guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingCharaListWidget* RegistrationList_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingCharaListWidget* RegistrationList_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelectMenu* SubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectTimer* SelectTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelectCPU* CpuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterIllustrationList_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterIllustrationList_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> CharacterIllustration_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> CharacterIllustration_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Selecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Spectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_ChooseCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_TeammateSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_AnotherSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_ChooseOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_ChooseTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_AnotherChooseOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_AnotherChooseTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Player1ChoseOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Player2ChoseOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProcessInfoText_Player2ChoseTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterGuideRowNameTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterGuideRowNameTeamOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterGuideRowNameSingel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterGuideRowNameObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartVsTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DraftVsTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForArtDebug;
    
public:
    UCharacterSelect_Layout();
private:
    UFUNCTION(BlueprintCallable)
    void UnloadTextureAssets();
    
    UFUNCTION(BlueprintCallable)
    void TeamUp(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void TeamRandomConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SubMenuOpen(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void SubMenuClose(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void SubMenuBackToMainMenu(EPlayerID PlayerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SingleBattleStageOut();
    
    UFUNCTION(BlueprintCallable)
    void SingleBattleStageInit();
    
    UFUNCTION(BlueprintCallable)
    void SingleBattleStageIn();
    
private:
    UFUNCTION(BlueprintCallable)
    USettingCharaListWidget* SelectRegistrationList(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    UBaseWidget* SelectProgressInfo(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    UCharacterSelect_Player* SelectPlayerWidget(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    UEntry_PlayerList_CharacterSelect* SelectPlayerlist(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void SelectingCharacter(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    UHandicap* SelectHandicapWidget(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    UCostume_Customize* SelectCustomizeWidget(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    UCharacterSelect_Chara* SelectCharaWidget(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void PlayerOptionPressed(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void PlayerListOpen(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void PlayerListConfirm(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void PlayerListCancel(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void PanelsCharacterConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void PanelsCharacterCancel(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Panels_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Panels_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Panels_Back(int32 PlayerID, EUiOperation Operation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenSystemWindwosTitle(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void OpenRegistrationList(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void OpenButtonConfig(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerCountFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnlineCharacterConfirm(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void OnlineCharacterCancel(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void LoadTextureAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadNextTextureAsset();
    
    UFUNCTION(BlueprintCallable)
    void InitTimer();
    
    UFUNCTION(BlueprintCallable)
    void HandicapOpen(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void HandicapConfirm(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void HandicapCancel(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CustomizeSync(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID);
    
    UFUNCTION(BlueprintCallable)
    void CustomizeConfirm(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID);
    
    UFUNCTION(BlueprintCallable)
    void CustomizeCancel(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID);
    
    UFUNCTION(BlueprintCallable)
    void CpuLevelSetup(EPlayerID PlayerID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConnectOnlineGameSubsystem();
    
private:
    UFUNCTION(BlueprintCallable)
    void ConfirmRegistrationList(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindwosTitle();
    
    UFUNCTION(BlueprintCallable)
    void CloseRegistrationList(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void CloseButtonConfig(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CharacterSelectInitializeAnim();
    
    UFUNCTION(BlueprintCallable)
    void CharacterRandomConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void CharacterConfirm(EPlayerID PlayerID);
    
};

