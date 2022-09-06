#pragma once
#include "CoreMinimal.h"
#include "SettingListWidget.h"
#include "SettingTitleListWidget.generated.h"

class UTitleWindowWidget;
class USettingTitleItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingTitleListWidget : public USettingListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingTitleItemWidget*> TitleItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
public:
    USettingTitleListWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitScrollCursorPos(int32 InitCursor);
    
};

