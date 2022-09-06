#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GuildWidget.generated.h"

class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuildWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
    UGuildWidget();
};

