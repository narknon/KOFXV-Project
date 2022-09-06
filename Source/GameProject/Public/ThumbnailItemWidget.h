#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ThumbnailItemWidget.generated.h"

class UImage;
class UTextBlock;
class UMusicIcon;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UThumbnailItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* team_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMusicIcon* WBP_08_icon_music;
    
public:
    UThumbnailItemWidget();
};

