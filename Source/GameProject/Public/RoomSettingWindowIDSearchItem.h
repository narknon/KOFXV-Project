#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "Types/SlateEnums.h"
#include "RoomSettingWindowIDSearchItem.generated.h"

class UWidgetSwitcher;
class UEditableText;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomSettingWindowIDSearchItem : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableText* RoomIDText;
    
    URoomSettingWindowIDSearchItem();
    UFUNCTION(BlueprintCallable)
    void EditableTextChangedEvent(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void ChangedText(const FText& InText);
    
};

