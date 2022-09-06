#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CppDebugMenuFunctionLibrary.generated.h"

class UCppDebugMenuWidget;
class UGameInstance;

UCLASS(Blueprintable)
class DEBUGMENU_API UCppDebugMenuFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCppDebugMenuFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UCppDebugMenuWidget* GetDebugMenu(UGameInstance* Owner, TSubclassOf<UCppDebugMenuWidget> WidgetClass);
    
};

