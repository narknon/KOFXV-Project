#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AgreementRankWindow.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAgreementRankWindow : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_rank;
    
public:
    UAgreementRankWindow();
};

