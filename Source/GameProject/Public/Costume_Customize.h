#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "UnaryCursor.h"
#include "ECharacterID.h"
#include "CharaCostumeTexture.h"
#include "UObject/NoExportTypes.h"
#include "Costume_Customize.generated.h"

class UImage;
class UCostume_Customize_Item;
class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCostume_Customize : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Custom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CostumeColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize_Item* WBP_92_01_customize_item_costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize_Item* WBP_92_01_customize_item_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* chara_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* chara_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* chara_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnaryCursor UnaryCursor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharaCostumeTexture> CostumeTextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadedAssetsPath;
    
public:
    UCostume_Customize();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateColorTexutre();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadTextureAssets();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadTextureAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadNextTextureAsset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertCursorPlayer(int32 PlayerID);
    
};

