#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ComboMissionWidget.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UComboMissionWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_mission_list;
    
    UComboMissionWidget();
};

