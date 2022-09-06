#pragma once
#include "CoreMinimal.h"
#include "CreditItemBaseWidget.h"
#include "CreditItemNameWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCreditItemNameWidget : public UCreditItemBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RoleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText2;
    
    UCreditItemNameWidget();
    UFUNCTION(BlueprintCallable)
    void SetNameText(const FString& Role, const FString& name1, const FString& name2);
    
};

