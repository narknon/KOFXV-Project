#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "MessageHUDManagerWidget.generated.h"

class UMessageHUDWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMessageHUDManagerWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveMaxFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMessageHUDWidget*> PartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* MessageVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMessageHUDWidget* PunishMessage;
    
public:
    UMessageHUDManagerWidget();
};

