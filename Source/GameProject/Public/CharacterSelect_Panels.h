#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "ECharacterID.h"
#include "EPlayerID.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSelect_Panels.generated.h"

class UUniformGridPanel;
class UWidget;
class UCharacterSelect_Item;
class UDataTable;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelect_Panels : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* CharacterSelect_UniformGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Item* Team_Random_WBP_92_01_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSelect_Item* Character_Random_WBP_92_01_panel_random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PanelItemTextureListNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, UTexture2D*> PanelItemTextureNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PanelItemTextureListSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, UTexture2D*> PanelItemTextureSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FName> CharacterListRowNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StartColumnPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID LeftSideDefaultCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID RightSideDefaultCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> AvailableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GenerateItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamRandomItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterRandomItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, int32> CharacterItemIndex;
    
public:
    UCharacterSelect_Panels();
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemPerRowArraySize();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetParameter(EPlayerID PlayerID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshItem();
    
    UFUNCTION(BlueprintCallable)
    void RandomTeam(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void RandomCharacter(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnavailableIndex(int32 PlayerID, int32 ArrayIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamUp(int32 PlayerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitiliazeItems();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAllPanelItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    FIntPoint GetPanelsCursor(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool GenerateItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GeneratedItem(int32 Index, UCharacterSelect_Item* Item);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetCursorValue(UPARAM(Ref) FIntPoint& In, FIntPoint Point);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EmplaceRandomItem();
    
private:
    UFUNCTION(BlueprintCallable)
    int32 CalculatorMaxColumns();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ArrayIndexByCursor(const FIntPoint InCursor) const;
    
};

