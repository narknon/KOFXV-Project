#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "UnaryCursor.h"
#include "Costume_Customize_Item.generated.h"

class UTextBlock;
class UImage;
class UWidgetSwitcher;
class UHorizontalBox;
class UPageNavi_Cursor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCostume_Customize_Item : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnaryCursor UnaryCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_customize_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_pageNavi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* color_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText customize_name_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPageNavi_Cursor> CursorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPageNavi_Cursor*> Cursor_Ary;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
public:
    UCostume_Customize_Item();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetState(bool selected);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorState(bool selected);
    
};

