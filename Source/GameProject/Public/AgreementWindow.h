#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AgreementWindow.generated.h"

class UTextBlock;
class UAgreementRankWindow;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAgreementWindow : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* OnlineIdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAgreementRankWindow* WBP_03_agreement_rank;
    
public:
    UAgreementWindow();
};

