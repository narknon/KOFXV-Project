#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "TeamMemberItemWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTeamMemberItemWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* turn_TextBlock_name;
    
public:
    UTeamMemberItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSideStyleOrder(int32 Index);
    
};

