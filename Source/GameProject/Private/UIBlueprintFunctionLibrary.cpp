#include "UIBlueprintFunctionLibrary.h"

class UTexture2D;
class UObject;
class APlayerController;
class UDataTable;
class ULevelStreaming;

ENetworkTitleID UUIBlueprintFunctionLibrary::TryGetTitleIDByPlayer(EPlayerID PlayerID) {
    return ENetworkTitleID::ID01;
}

FText UUIBlueprintFunctionLibrary::TryGetTitleByPlayer(EPlayerID PlayerID) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::TryGetTitleByOrderID(EPlayerID PlayerID, int32 OrderID) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::TryGetTitleByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex) {
    return FText::GetEmpty();
}

int32 UUIBlueprintFunctionLibrary::TryGetRankStarByPlayer(EPlayerID PlayerID) {
    return 0;
}

ERankGrade UUIBlueprintFunctionLibrary::TryGetRankByPlayer(EPlayerID PlayerID) {
    return ERankGrade::RANK1;
}

FText UUIBlueprintFunctionLibrary::TryGetOnlineIDByPlayer(EPlayerID PlayerID) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::TryGetOnlineIDByOrderID(EPlayerID PlayerID, int32 OrderID) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::TryGetOnlineIDByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex) {
    return FText::GetEmpty();
}

void UUIBlueprintFunctionLibrary::SetMeido(int32 meidoValue) {
}

void UUIBlueprintFunctionLibrary::SetAllUserFocusToGameViewportWithOutWindows() {
}

void UUIBlueprintFunctionLibrary::RefreshTrophy(APlayerController* InPlayerController) {
}

void UUIBlueprintFunctionLibrary::MoveAssets(const TArray<UObject*>& Assets, const FString& DestPath, const FString& SourcePath) {
}

TMap<ECharacterID, FCharacterCostumeSoftTexture2D> UUIBlueprintFunctionLibrary::MakeCharaCostumeTextureFromDataTable(UDataTable* DataTable) {
    return TMap<ECharacterID, FCharacterCostumeSoftTexture2D>();
}

TMap<ECharacterID, FCharaCostumeTexture> UUIBlueprintFunctionLibrary::MakeCharaCostumeColorTextureFromDataTable(UDataTable* DataTable) {
    return TMap<ECharacterID, FCharaCostumeTexture>();
}

void UUIBlueprintFunctionLibrary::LoadLevel(FName NextLevelName, float FadeFrame) {
}

void UUIBlueprintFunctionLibrary::LoadDebugLevel() {
}

float UUIBlueprintFunctionLibrary::LanguageChangeReloadPendingTime() {
    return 0.0f;
}

float UUIBlueprintFunctionLibrary::LanguageChangePendingTime() {
    return 0.0f;
}

bool UUIBlueprintFunctionLibrary::IsUnknownRank(EPlayerID PlayerID) {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsSystemUiOverlaid() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsPlayGo() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsPlayableCharacter(ECharacterID Chara) {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsParentalUgc() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsParentalChat() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsJapanCulture() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsDLCCharacterExist() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsConnectedController(int32 PlayerIndex) {
    return false;
}

bool UUIBlueprintFunctionLibrary::isChina() {
    return false;
}

bool UUIBlueprintFunctionLibrary::IsAsiaCulture() {
    return false;
}

ECharacterID UUIBlueprintFunctionLibrary::GetUIOrderCharaID(ECharacterID charaID) {
    return ECharacterID::NONE;
}

FText UUIBlueprintFunctionLibrary::GetShortCharaNameText(ECharacterID Chara) {
    return FText::GetEmpty();
}

int32 UUIBlueprintFunctionLibrary::GetRollBackFrame() {
    return 0;
}

TArray<ECharacterID> UUIBlueprintFunctionLibrary::GetPlayableCharaIDList() {
    return TArray<ECharacterID>();
}

EPlatformType UUIBlueprintFunctionLibrary::GetPlatformType() {
    return EPlatformType::Sony;
}

int32 UUIBlueprintFunctionLibrary::GetNumberDigits(const int32 Number) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::GetNetworkDelayPerUser(EPlayerID PlayerID, int32 OrderID) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::GetNetworkDelayOpponent() {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::GetNetworkDelayByPlayer(EPlayerID PlayerID) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::GetNetworkDelay() {
    return 0;
}

UTexture2D* UUIBlueprintFunctionLibrary::GetMyAvatar() {
    return NULL;
}

int32 UUIBlueprintFunctionLibrary::GetEqualizerParam(int32 Index) {
    return 0;
}

FString UUIBlueprintFunctionLibrary::GetDisplayName(int32 PlayerIndex) {
    return TEXT("");
}

FString UUIBlueprintFunctionLibrary::GetDefaultStageCustomizeText() {
    return TEXT("");
}

int32 UUIBlueprintFunctionLibrary::GetCharaUniqueIDFromCharaID(ECharacterID charaID) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::GetCharaTextureArrayNum(ECharacterID charaID) {
    return 0;
}

FText UUIBlueprintFunctionLibrary::GetButtonRichText(EButtonType btn) {
    return FText::GetEmpty();
}

int32 UUIBlueprintFunctionLibrary::GetBitFromNumber(int32 Number, int32 bit) {
    return 0;
}

ULevelStreaming* UUIBlueprintFunctionLibrary::GetBackGroundStageLevel() {
    return NULL;
}

FMovieDataTable UUIBlueprintFunctionLibrary::FindMovieRow(UDataTable* DataTable, EMovieID MovieID) {
    return FMovieDataTable{};
}

int32 UUIBlueprintFunctionLibrary::ConvertToUISeconds(int32 frame) {
    return 0;
}

UUIBlueprintFunctionLibrary::UUIBlueprintFunctionLibrary() {
}

