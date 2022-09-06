#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ECharacterID.h"
#include "CharacterCostumeSoftTexture2D.h"
#include "OrderSelectSide.generated.h"

class UDataTable;
class UOrderSelectItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOrderSelectSide : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOrderSelectItem* WBP_92_02_plate_A_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOrderSelectItem* WBP_92_02_plate_A_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOrderSelectItem* WBP_92_02_plate_A_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOrderSelectItem*> PlateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OrderSelectCharaTexture_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OrderSelectCharaTexture_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> OrderSelectCharaTextureArray_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> OrderSelectCharaTextureArray_R;
    
public:
    UOrderSelectSide();
    UFUNCTION(BlueprintCallable)
    void MakeArray();
    
};

