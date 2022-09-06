#include "LevelScriptActorDebug.h"

bool ALevelScriptActorDebug::IsTouchPadAction() {
    return false;
}

ALevelScriptActorDebug::ALevelScriptActorDebug() {
    this->bDebugMenuOpen = false;
    this->DebugMenuWidget = NULL;
}

