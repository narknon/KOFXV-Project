#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ERankWidgetType.h"
#include "RankResultRankWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;
class URankResultRankIconUnitWidget;
class URankResultRankChampWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankResultRankWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URankResultRankIconUnitWidget*> StarIconWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankChampWidget* WBP_94_rank_champion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_rank_arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_rank_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_03_00_icon_star_protectB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankWidgetType RankType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaySizeUp;
    
public:
    URankResultRankWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void PromotionWinLoseIcon();
    
    UFUNCTION(BlueprintCallable)
    void MoveStarIconChamp();
    
    UFUNCTION(BlueprintCallable)
    void MoveStarIcon();
    
};

