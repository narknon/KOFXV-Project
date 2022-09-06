#pragma once
#include "CoreMinimal.h"
#include "ECharaColorID.h"
#include "BaseWidget.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "CharacterColor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterColor : public UBaseWidget {
    GENERATED_BODY()
public:
    UCharacterColor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterColor(ECharacterID CharID, ECostumeType CostumeType, ECharaColorID ColorID);
    
};

