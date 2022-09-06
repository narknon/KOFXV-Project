#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "CreditItemBaseWidget.generated.h"

class UCreditWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCreditItemBaseWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iSpaceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCreditWidget* Parent;
    
    UCreditItemBaseWidget();
};

