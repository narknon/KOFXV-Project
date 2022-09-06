#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "Types/SlateEnums.h"
#include "RoomMatchSettingWindow.generated.h"

class USizeBox;
class UHaveGuideWindowOnline;
class UTextBlock;
class USaveButtonItemWidget;
class UUserSettingWidgetRoomMatch;
class UScrollBox;
class URoomSettingWindowIDSearchItem;
class URoomSettingWindowTypeBase;
class URoomSettingWindowTypeCreate;
class URoomSettingWindowTypeSearch;
class URoomSettingWindowTypeIDSearch;
class UOnlineTrainingSettingWindowTypeCreate;
class UOnlineTrainingSettingWindowTypeSearch;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomMatchSettingWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WindowTypeNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveButtonItemWidget* WBP_95_00_item_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSettingWindowIDSearchItem* IDSearchField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* ExplanationColumnSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_guideMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetRoomMatch* WBP_03_07_userSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSettingWindowTypeBase* RoomSettingWindowTypeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSettingWindowTypeCreate* RoomSettingWindowTypeCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSettingWindowTypeSearch* RoomSettingWindowTypeSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSettingWindowTypeIDSearch* RoomSettingWindowTypeIDSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineTrainingSettingWindowTypeCreate* OnlineTrainingSettingWindowTypeCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineTrainingSettingWindowTypeSearch* OnlineTrainingSettingWindowTypeSearch;
    
public:
    URoomMatchSettingWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
    UFUNCTION(BlueprintCallable)
    void TextCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void TextChanged(const FText& Text);
    
};

