#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugNumberData.h"
#include "DebugIntData.h"
#include "CppDebugMenuWidget.generated.h"

class UScrollBox;
class UCppDebugMenuItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCppDebugMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* CategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* ButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCppDebugMenuItemWidget* FocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCppDebugMenuItemWidget* CategoryFocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* FocusScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeValueUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BranchDepiction;
    
    UCppDebugMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugNumber(const FString& Category, const FString& Description, const FDebugNumberData& NumberData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugInt(const FString& Category, const FString& Description, const FDebugIntData& NumberData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugEnum(const FString& Category, const FString& Description, const TArray<FName>& EnumList, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugComboBox(const FString& Category, const FString& Description, const TArray<FString>& ComboList, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugCheckBox(const FString& Category, const FString& Description, bool IsCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutDebugButton(const FString& Category, const FString& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageMove(int32 plus);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSvnRevision();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOpen();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteNumberData(const FString& Category, const FString& Description, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteIntData(const FString& Category, const FString& Description, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteEnumData(const FString& Category, const FString& Description, FName EnumName);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteComboBox(const FString& Category, const FString& Description, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteClose();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCheckBox(const FString& Category, const FString& Description, bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteButton(const FString& Category, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void CloseDebugMenu();
    
};

