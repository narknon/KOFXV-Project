#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AttackDataNumberWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAttackDataNumberWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Num_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Num_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Num_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Num_3;
    
    UAttackDataNumberWidget();
};

