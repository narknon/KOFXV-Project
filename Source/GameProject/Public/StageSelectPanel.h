#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "EStageID.h"
#include "StageSelectPanel.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStageSelectPanel : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_99_tag_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID StageID;
    
public:
    UStageSelectPanel();
    UFUNCTION(BlueprintCallable)
    void SetStageID(EStageID ID);
    
    UFUNCTION(BlueprintCallable)
    void SetNewLabelVisibility(bool bVisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetStageID() const;
    
};

