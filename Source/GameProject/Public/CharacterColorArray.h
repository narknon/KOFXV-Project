#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "CharacterColorArray.generated.h"

USTRUCT(BlueprintType)
struct FCharacterColorArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> ColorArray;
    
    GAMEPROJECT_API FCharacterColorArray();
};

