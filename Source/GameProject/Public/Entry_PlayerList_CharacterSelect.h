#pragma once
#include "CoreMinimal.h"
#include "Entry_PlayerList.h"
#include "Entry_PlayerList_CharacterSelect.generated.h"

class UHaveGuideWindow;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_PlayerList_CharacterSelect : public UEntry_PlayerList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA;
    
public:
    UEntry_PlayerList_CharacterSelect();
};

