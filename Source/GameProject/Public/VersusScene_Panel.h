#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "VersusScene_Panel.generated.h"

class UDataTable;
class UCharacterColor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UVersusScene_Panel : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterColor* WBP_95_01_customize__color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterIllustration_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterIllustration_R;
    
public:
    UVersusScene_Panel();
};

