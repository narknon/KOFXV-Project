#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "CommandList_Chara.generated.h"

class UScrollBox;
class UCommandList;
class UCommandList_Item;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommandList_Chara : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommandList* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCommandList_Item*> CommandListItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentScrollIndex;
    
public:
    UCommandList_Chara();
};

