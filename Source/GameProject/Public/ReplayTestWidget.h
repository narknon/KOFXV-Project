#pragma once
#include "CoreMinimal.h"
#include "DebugBaseWidget.h"
#include "ReplayGameData.h"
#include "ReplayTestWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayTestWidget : public UDebugBaseWidget {
    GENERATED_BODY()
public:
    UReplayTestWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListUpdate(const TArray<FReplayGameData>& DataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetailDraw(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDraw(int32 NewCursor);
    
};

