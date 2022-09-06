#pragma once
#include "CoreMinimal.h"
#include "OptionItemWidgetA.h"
#include "UnaryCursor.h"
#include "CharacterSelectCPU.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelectCPU : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnaryCursor SubOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SubOptionText;
    
public:
    UCharacterSelectCPU();
protected:
    UFUNCTION()
    void MoveSubCursor(int8 step);
    
};

