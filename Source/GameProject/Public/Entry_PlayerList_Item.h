#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "ESelectItemState.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "Entry_PlayerList_Item.generated.h"

class UTextBlock;
class UWidgetSwitcher;
class UImage;
class UEditableText;
class UEntry_PlayerList;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_PlayerList_Item : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* TextBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableText* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESelectItemState, FLinearColor> BaseColorMap;
    
    UEntry_PlayerList_Item();
    UFUNCTION(BlueprintCallable)
    void TextRecive(const FText& Text);
    
    UFUNCTION()
    void TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void TextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetSideCursorVisiable(bool bVisiable, bool bInherit);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectState(ESelectItemState State);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerWidget(TSoftObjectPtr<UEntry_PlayerList> Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetEditState(bool IsEditing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

