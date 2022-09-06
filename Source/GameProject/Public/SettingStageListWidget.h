#pragma once
#include "CoreMinimal.h"
#include "SettingListWidget.h"
#include "SettingStageListWidget.generated.h"

class USettingStageItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingStageListWidget : public USettingListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingStageItemWidget*> StageItemArray;
    
public:
    USettingStageListWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitScrollCursorPos(int32 InitCursor);
    
};

