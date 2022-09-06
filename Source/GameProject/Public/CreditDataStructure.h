#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreditDataStructure.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCreditDataStructure : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CreditRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ImageRef;
    
    GAMEPROJECT_API FCreditDataStructure();
};

