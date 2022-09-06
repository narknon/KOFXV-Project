#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "EStageID.h"
#include "SoundCustomiaze.generated.h"

class UTextBlock;
class USoundCustomiazeItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USoundCustomiaze : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundCustomiazeItem* WBP_92_03_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundCustomiazeItem* WBP_92_03_item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundCustomiazeItem* WBP_92_03_item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USoundCustomiazeItem*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* InfoMessage;
    
public:
    USoundCustomiaze();
    UFUNCTION(BlueprintCallable)
    void UpdateCustomBgmText();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomBGM(EStageID StageID, const FString& BGMName);
    
    UFUNCTION(BlueprintCallable)
    void Init(EStageID targetStage);
    
};

