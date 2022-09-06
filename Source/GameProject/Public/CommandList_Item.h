#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ItemParam.h"
#include "CommandList_Item.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommandList_Item : public UBaseWidget {
    GENERATED_BODY()
public:
    UCommandList_Item();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSetItemParam(FItemParam& Param);
    
    UFUNCTION(BlueprintCallable)
    FItemParam GetItemParam();
    
};

