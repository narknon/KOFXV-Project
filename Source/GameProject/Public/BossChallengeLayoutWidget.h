#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "BossChallengeLayoutWidget.generated.h"

class UBossChallengeRewardWidget;
class UTextBlock;
class UDataTable;
class UBaseWidget;
class UImage;
class UBossChallengeMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBossChallengeLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBossChallengeRewardWidget* WBP_07_reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* image_boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* image_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_bossName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_07_icon_clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image_emblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBossChallengeMenuWidget* WBP_07_bottomMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BossChallengeDataTable;
    
public:
    UBossChallengeLayoutWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OpenStoreDLC();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindows();
    
};

