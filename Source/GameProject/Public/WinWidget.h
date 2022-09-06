#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "WinWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UWinWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> digit_win;
    
public:
    UWinWidget();
};

