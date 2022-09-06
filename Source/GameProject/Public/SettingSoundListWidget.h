#pragma once
#include "CoreMinimal.h"
#include "SettingListWidget.h"
#include "BGMData.h"
#include "SettingSoundListWidget.generated.h"

class USettingSoundItemWidget;
class UTitleWindowWidget;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingSoundListWidget : public USettingListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingSoundItemWidget*> SoundItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGMData> FBGMDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
public:
    USettingSoundListWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadBGMStructData(const UDataTable* data_asset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitScrollCursorPos(int32 InitCursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBGMStructData(const UDataTable* data_asset);
    
};

