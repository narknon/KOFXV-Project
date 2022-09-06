#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterID.h"
#include "CharacterCostumeSoftTexture2D.h"
#include "CharacterSelect_Player.generated.h"

class UDataTable;
class UCharacterSelect_Player_Order;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelect_Player : public UBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadedAssetsPath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<UCharacterSelect_Player_Order*> WBP_92_01_player_order_Ary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Player_Order* WBP_92_01_player_order_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Player_Order* WBP_92_01_player_order_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Player_Order* WBP_92_01_player_order_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnknowCharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterSelectPlayerSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> CharacterSelectPlayerSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterSelectPlayerSelectedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCharacterCostumeSoftTexture2D> CharacterSelectPlayerSelected;
    
    UCharacterSelect_Player();
    UFUNCTION(BlueprintCallable)
    void UnloadTextureAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBePlayOrderInitAnim();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadTextureAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadNextTextureAsset();
    
};

