#pragma once
#include "CoreMinimal.h"
#include "CharacterCostumeSoftTexture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENetworkTitleID.h"
#include "EPlayerID.h"
#include "ERankGrade.h"
#include "ECharacterID.h"
#include "CharaCostumeTexture.h"
#include "EPlatformType.h"
#include "EButtonType.h"
#include "MovieDataTable.h"
#include "EMovieID.h"
#include "UIBlueprintFunctionLibrary.generated.h"

class UTexture2D;
class UObject;
class APlayerController;
class UDataTable;
class ULevelStreaming;

UCLASS(Blueprintable)
class GAMEPROJECT_API UUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ENetworkTitleID TryGetTitleIDByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetTitleByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetTitleByOrderID(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetTitleByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TryGetRankStarByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERankGrade TryGetRankByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetOnlineIDByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetOnlineIDByOrderID(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TryGetOnlineIDByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeido(int32 meidoValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllUserFocusToGameViewportWithOutWindows();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshTrophy(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void MoveAssets(const TArray<UObject*>& Assets, const FString& DestPath, const FString& SourcePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<ECharacterID, FCharacterCostumeSoftTexture2D> MakeCharaCostumeTextureFromDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<ECharacterID, FCharaCostumeTexture> MakeCharaCostumeColorTextureFromDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void LoadLevel(FName NextLevelName, float FadeFrame);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDebugLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LanguageChangeReloadPendingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LanguageChangePendingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnknownRank(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSystemUiOverlaid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayGo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayableCharacter(ECharacterID Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsParentalUgc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsParentalChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsJapanCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLCCharacterExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConnectedController(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool isChina();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAsiaCulture();
    
    UFUNCTION(BlueprintCallable)
    static ECharacterID GetUIOrderCharaID(ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable)
    static FText GetShortCharaNameText(ECharacterID Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRollBackFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ECharacterID> GetPlayableCharaIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatformType GetPlatformType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberDigits(const int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetworkDelayPerUser(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetworkDelayOpponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetworkDelayByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetworkDelay();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMyAvatar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEqualizerParam(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayName(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultStageCustomizeText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaUniqueIDFromCharaID(ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaTextureArrayNum(ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetButtonRichText(EButtonType btn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBitFromNumber(int32 Number, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    static ULevelStreaming* GetBackGroundStageLevel();
    
    UFUNCTION(BlueprintCallable)
    static FMovieDataTable FindMovieRow(UDataTable* DataTable, EMovieID MovieID);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertToUISeconds(int32 frame);
    
};

