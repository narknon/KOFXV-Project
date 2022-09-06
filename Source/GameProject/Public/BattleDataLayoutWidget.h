#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "BattleDataLayoutWidget.generated.h"

class UKeyDataWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBattleDataLayoutWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyDataWidget* WBP_90_key_list_p1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyDataWidget* WBP_90_key_list_p2;
    
public:
    UBattleDataLayoutWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitAttackData();
    
};

