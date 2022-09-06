#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GalleryMovieWidget.generated.h"

class UScrollBox;
class UDataTable;
class UGalleryMovieItemWidget;
class UTextBlock;
class UHaveGuideWindow;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGalleryMovieWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GalleryMovieDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGalleryMovieItemWidget* WBP_09_panelList_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_itemTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C_85;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UHorizontalBox*> HorizontalBoxArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UGalleryMovieItemWidget*> MovieItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HorizontalBoxClass;
    
public:
    UGalleryMovieWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& TitleText);
    
};

