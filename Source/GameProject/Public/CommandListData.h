#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommandListData.generated.h"

class UCommandList_Chara;

USTRUCT(BlueprintType)
struct FCommandListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> List_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> List_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> List_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> List_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> List_4;
    
    GAMEPROJECT_API FCommandListData();
};

