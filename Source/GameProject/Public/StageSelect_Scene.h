#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EStageID.h"
#include "EUiOperation.h"
#include "StageSelect_Scene.generated.h"

class UGuideItemArrayWidget;
class USettingSoundListWidget;
class UStageSelect_Select;
class USoundCustomiaze;
class USettingJacketListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStageSelect_Scene : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* GuideItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStageSelect_Select> StageSelect_wdw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundCustomiaze* SoundCustomiaze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingSoundListWidget* SettingSoundItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingJacketListWidget* SettingJacketItemWidget;
    
    UStageSelect_Scene();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSettingSoundListWidgetAction(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSettingSoundListWidget(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSettingJacketListWidgetAction(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSettingJacketListWidget(int32 PlayerID, EUiOperation Operation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageSelect_wdw_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool StageSelect_wdw_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageSelect_wdw_Back(int32 PlayerID, EUiOperation Operation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenSoundCustomize(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    void OpenCustomizeSoundList(EStageID StageID, const FString& BGMName);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmDjStation(const FString& BGMName);
    
    UFUNCTION(BlueprintCallable)
    void CloseSoundCustomize(EStageID StageID, const FString& BGMName);
    
    UFUNCTION(BlueprintCallable)
    void CloseDjStation(EStageID StageID, const FString& BGMName);
    
};

