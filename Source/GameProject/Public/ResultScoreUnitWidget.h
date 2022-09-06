#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultScoreUnitWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultScoreUnitWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> ScoreNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> ScoreNumArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> ScoreUnitArray;
    
public:
    UResultScoreUnitWidget();
};

