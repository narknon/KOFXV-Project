#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "UnaryCursor.h"
#include "OptionItemWidgetA.generated.h"

class UCommon_99_ItemA;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionItemWidgetA : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommon_99_ItemA* LastCursorItem;
    
    UPROPERTY(EditAnywhere)
    uint8 LastCursorItemIndex;
    
public:
    UOptionItemWidgetA();
    UFUNCTION(BlueprintCallable)
    void SetUnaryCursor(FUnaryCursor UnaryCursor);
    
    UFUNCTION(BlueprintCallable)
    void InitCursor(UCommon_99_ItemA* DefaultItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnaryCursor GetUnaryCursor();
    
    UFUNCTION(BlueprintPure)
    uint8 GetCursorIndex() const;
    
};

