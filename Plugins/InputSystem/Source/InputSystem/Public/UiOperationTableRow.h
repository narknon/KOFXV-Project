#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKeyOperation.h"
#include "EUiOperation.h"
#include "UiOperationTableRow.generated.h"

USTRUCT(BlueprintType)
struct FUiOperationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiOperation UiOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKeyOperation> KeyOperationArray;
    
    INPUTSYSTEM_API FUiOperationTableRow();
};

