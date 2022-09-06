#pragma once
#include "CoreMinimal.h"
#include "DebugBaseWidget.h"
#include "OnlineProfileTestWidget.generated.h"

class UGameData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfileTestWidget : public UDebugBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameData* GameData;
    
public:
    UOnlineProfileTestWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListUpdate(const TArray<FString>& ListStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetailDraw(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDraw(int32 NewCursor);
    
};

