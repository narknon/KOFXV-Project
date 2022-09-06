#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "InitialRankWidget.generated.h"

class UPauseMenuItemConfirmButtonWidget;
class UTextBlock;
class URankResultRankIconItemWidget;
class UHaveGuideWindowOnline;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UInitialRankWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_Bold_C_216;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URankResultRankIconItemWidget*> IconStarArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
public:
    UInitialRankWidget();
};

