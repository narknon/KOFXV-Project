#pragma once
#include "CoreMinimal.h"
#include "InputBaseUserWidget.h"
#include "EIndicatorType.h"
#include "ESceneName.h"
#include "EViewportZOrder.h"
#include "MainViewportWidget.generated.h"

class UFadeWidget;
class UOperationalWidget;
class UCanvasPanel;
class USceneTransitionBackground;
class USceneTransitionEffect;
class UBaseWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainViewportWidget : public UInputBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* currentSection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> InputTrashPtr;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCanvasPanel> ScreenPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFadeWidget* WBP_Fade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneTransitionBackground> BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USceneTransitionBackground> Class_BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneTransitionEffect> SceneTravelEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USceneTransitionEffect> Class_SceneTravelEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingKill;
    
public:
    UMainViewportWidget();
    UFUNCTION(BlueprintCallable)
    void UnloadAllAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TravelToScene(ESceneName Scene);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPendingKill();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsNetworkCheck(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBlackFade(bool Val);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetCurrentSection(UOperationalWidget* in_target);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusChanging();
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSpawnEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsPendingkill() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void IndicatorAnimStop(EIndicatorType Type);
    
    UFUNCTION(BlueprintCallable)
    void IndicatorAnimPlay(EIndicatorType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsNetworkCheck();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBlackFade();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOperationalWidget* getCurrentSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESceneName GetCurrentScene() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GeneralInitialProcess(UBaseWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllSceneWithoutMainMenu(const bool bClean);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllSceneForLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackGroundLightUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackGroundLightDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSectionToScreenPanel(UWidget* ChildContent, EViewportZOrder inZOrder);
    
};

