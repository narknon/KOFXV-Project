#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PauseMenuWidget.generated.h"

class USettingSoundListWidget;
class UPauseMenuWindowWidget;
class UBackGroundBlurOrangeWidget;
class USelectorWidget;
class USettingStageListWidget;
class USettingJacketListWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPauseMenuWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuWindowWidget* WBP_99_PauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingStageListWidget* WBP_95_01_list_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingSoundListWidget* WBP_95_01_list_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingJacketListWidget* WBP_95_01_list_jacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBackGroundBlurOrangeWidget* WBP_99_BackgroundBlur;
    
public:
    UPauseMenuWidget();
};

