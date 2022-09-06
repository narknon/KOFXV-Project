#pragma once
#include "CoreMinimal.h"
#include "DebugBaseWidget.h"
#include "OnlineReplayTestWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineReplayTestWidget : public UDebugBaseWidget {
    GENERATED_BODY()
public:
    UOnlineReplayTestWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListUpdate(const TArray<FString>& ListStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetailDraw(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDraw(int32 NewCursor);
    
};

