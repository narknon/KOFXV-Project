#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerCharacterStatus.h"
#include "SkyLightData.h"
#include "StageVisibilityDelegate.h"
#include "GameProjectGameMode.h"
#include "BackgroundActorData.h"
#include "LandscapeActorData.h"
#include "BackgroundFXData.h"
#include "HeightFogData.h"
#include "WorldLight.h"
#include "BGLightData.h"
#include "CharacterLights.h"
#include "UObject/NoExportTypes.h"
#include "CharDamageFXSettings.h"
#include "EStageID.h"
#include "EPlayerID.h"
#include "EBlackoutAttr.h"
#include "UObject/NoExportTypes.h"
#include "EBlackoutType.h"
#include "UObject/NoExportTypes.h"
#include "ESkillType.h"
#include "EAnnounceWidgetType.h"
#include "GameModeBattle.generated.h"

class ACameraActor;
class UDataAssetQualitySettings;
class UMaterialParameterCollection;
class UTimeSlowGameModeComponent;
class APlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API AGameModeBattle : public AGameProjectGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* m_pUsingBattleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundActorData> BackgroundActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundActorData> LandscapeStaticActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeActorData> LandscapeActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundFXData> BackgroundFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeightFogData> HeightFogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkyLightData> SkyLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGLightData> BGWorldLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLights CharacterLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldLight> MainWorldLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldLight> RightSideWorldLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDataAssetQualitySettings>> QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* RainMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PPVolMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEffectInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharDamageFXSettings> CharDamageFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageID> RayTracingStages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageVisibility OnStageVisibilityChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTimeSlowGameModeComponent* TimeSlowGameModeComponent;
    
    AGameModeBattle();
    UFUNCTION(BlueprintCallable)
    void UpdateWorldLights();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFog();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterLights();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAnnouncePPMaterial(bool bUseAbsoluteMaterial);
    
    UFUNCTION(BlueprintCallable)
    void StoreXVCharacterLights();
    
    UFUNCTION(BlueprintCallable)
    void StoreWorldLights();
    
    UFUNCTION(BlueprintCallable)
    void StoreBG_UE4FXData();
    
    UFUNCTION(BlueprintCallable)
    void StoreBG_EffekseerFXData();
    
    UFUNCTION(BlueprintCallable)
    void StoreBackgroundMeshData();
    
    UFUNCTION(BlueprintCallable)
    void StartResultFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void StartBattleScene();
    
    UFUNCTION(BlueprintCallable)
    void SetLBSIkariFade(EPlayerID PlayerID, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetFootprintRotation(float fAng);
    
    UFUNCTION(BlueprintCallable)
    void SetFootprintLocation(FVector vLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void RestartBattleScene();
    
    UFUNCTION(BlueprintCallable)
    void RestartBattleRound();
    
    UFUNCTION(BlueprintCallable)
    void ResetWorldLights();
    
    UFUNCTION(BlueprintCallable)
    void ResetQualitySettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterLights();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostStartPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleChangeBlackoutSettings(EBlackoutAttr attribute, EBlackoutType Type, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleActorPortalEvent(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleActorDamage(ESkillType skillType);
    
    UFUNCTION(BlueprintCallable)
    void LoadHighEndMob();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageIsVisiable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRoundFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsHighEndConsole();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndResultFadeIn();
    
    UFUNCTION(BlueprintCallable)
    bool IsBegan();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleResultPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GreenScreen(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    FPlayerCharacterStatus GetPlayerCharacterStatus(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPlayerActorLocation(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerActorHealth(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetOptionCharacter(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool GetIssenActive();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraLocation();
    
    UFUNCTION(BlueprintCallable)
    bool GetBukitobashiActive();
    
    UFUNCTION(BlueprintCallable)
    ACameraActor* GetBattleCamera();
    
    UFUNCTION(BlueprintCallable)
    void ExitBattleScene();
    
    UFUNCTION(BlueprintCallable)
    void EndResultFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugDisplayResolution();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFootprint();
    
    UFUNCTION(BlueprintCallable)
    void ClearWorldLights();
    
    UFUNCTION(BlueprintCallable)
    void ClearCharacterLights();
    
    UFUNCTION(BlueprintCallable)
    void ClearBG_EffekseerFXData();
    
    UFUNCTION(BlueprintCallable)
    void ClearBackgroundMeshData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleOutline(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleNoAbsoluteAnnouncePP(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleColourGrading(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleAnnouncePP(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SwitchColourGradingPP(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SwitchAnnouncePPMaterial(bool bUseAbsoluteMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetSSAO_PPSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DeactivateRayTracing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearSSAO_PPSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeAnnouncePPColor(EAnnounceWidgetType AnnounceType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActivateRayTracing();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFogFade(bool bFadeOut, bool bReset);
    
};

