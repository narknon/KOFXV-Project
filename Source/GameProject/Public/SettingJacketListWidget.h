#pragma once
#include "CoreMinimal.h"
#include "SettingListWidget.h"
#include "SettingJacketListWidget.generated.h"

class USettingJacketItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingJacketListWidget : public USettingListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingJacketItemWidget*> JacketItemArray;
    
public:
    USettingJacketListWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitScrollCursorPos(int32 InitCursor);
    
};

