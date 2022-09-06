#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "SoundCustomiazeItem.generated.h"

class UTextBlock;
class UBaseWidget;
class USizeBox;
class UMusicIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USoundCustomiazeItem : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* MusiclistenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMusicIcon* Icon_music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* SoundTitleSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ContentText;
    
public:
    USoundCustomiazeItem();
    UFUNCTION(BlueprintCallable)
    FText GetInfoText();
    
    UFUNCTION(BlueprintCallable)
    void CheckBox(const bool Checked);
    
};

