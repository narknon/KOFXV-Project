#pragma once
#include "CoreMinimal.h"
#include "SettingListWidget.h"
#include "ESettingWindowType.h"
#include "RegisterCharaData.h"
#include "SettingCharaListWidget.generated.h"

class UTitleWindowWidget;
class USettingCharaItemWidget;
class USettingTeamItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingCharaListWidget : public USettingListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingCharaItemWidget*> CharaItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingTeamItemWidget*> TeamItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingWindowType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegisterCharaData> ReturnData;
    
public:
    USettingCharaListWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitScrollCursorPos(ESettingWindowType Type, int32 InitCursor);
    
};

