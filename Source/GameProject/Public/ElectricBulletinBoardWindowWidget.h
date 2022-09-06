#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "Types/SlateEnums.h"
#include "ElectricBulletinBoardWindowWidget.generated.h"

class UTextBlock;
class UEditableTextBox;
class UApplicableStageItemWidget;
class UConfirmBoxButtonBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UElectricBulletinBoardWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_telopstage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UApplicableStageItemWidget*> TelepStageItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UApplicableStageItemWidget* WBP_95_00_telopStage_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UApplicableStageItemWidget* WBP_95_00_telopStage_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBoxButtonBox* WBP_99_itemA_type_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditableTextBox_input;
    
    UElectricBulletinBoardWindowWidget();
    UFUNCTION(BlueprintCallable)
    void TextCommittedComplete();
    
    UFUNCTION()
    void TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void TextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextCommittedComplete();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

