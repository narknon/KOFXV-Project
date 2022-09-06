#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AkGameplayTypes.h"
#include "GalleryVoiceWidget.generated.h"

class UImage;
class UScrollBox;
class UDataTable;
class UTitleWindowWidget;
class UGalleryVoiceItemWidget;
class UAkCallbackInfo;
class UHaveGuideWindow;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGalleryVoiceWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GalleryVoiceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GalleryCharaTextureDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_110;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UGalleryVoiceItemWidget*> VoiceItemArray;
    
public:
    UGalleryVoiceWidget();
    UFUNCTION(BlueprintCallable)
    void VoiceFinish(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

