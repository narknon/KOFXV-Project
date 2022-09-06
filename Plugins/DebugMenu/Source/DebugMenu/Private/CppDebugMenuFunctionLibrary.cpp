#include "CppDebugMenuFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UGameInstance;
class UCppDebugMenuWidget;

UCppDebugMenuWidget* UCppDebugMenuFunctionLibrary::GetDebugMenu(UGameInstance* Owner, TSubclassOf<UCppDebugMenuWidget> WidgetClass) {
    return NULL;
}

UCppDebugMenuFunctionLibrary::UCppDebugMenuFunctionLibrary() {
}

