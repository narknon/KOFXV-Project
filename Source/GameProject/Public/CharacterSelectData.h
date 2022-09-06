#pragma once
#include "CoreMinimal.h"
#include "CharacterSelectData.generated.h"

class UCharacterSelect_Item;

USTRUCT(BlueprintType)
struct FCharacterSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Item* LastStayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> ChooseItemIndex;
    
    GAMEPROJECT_API FCharacterSelectData();
};

