#include "GamePlayGameInstanceSubsystem.h"

class UMainViewportWidget;
class UGameInstanceGameParameters;

void UGamePlayGameInstanceSubsystem::UnLockDLC3() {
}

void UGamePlayGameInstanceSubsystem::UnLockDLC2() {
}

void UGamePlayGameInstanceSubsystem::UnLockDLC1() {
}

void UGamePlayGameInstanceSubsystem::UnlockCostume(ECharacterID Character, ECostumeType CostumeType) {
}

void UGamePlayGameInstanceSubsystem::UnLoadStaitcAsset() {
}

void UGamePlayGameInstanceSubsystem::SetUserInterfaceCursorSpeed(ESceneName Scene) {
}

void UGamePlayGameInstanceSubsystem::SetTravelTrainingMode() {
}

void UGamePlayGameInstanceSubsystem::SetTransition(ESceneName Destination, const FString& TravelURL) {
}

void UGamePlayGameInstanceSubsystem::SetTournamentRule(ETournamentRule Rule) {
}

void UGamePlayGameInstanceSubsystem::SetTeamRandomFlag(int32 PlayerID, bool IsTeamRandom) {
}

void UGamePlayGameInstanceSubsystem::SetTeamBattle(bool TeamBattle) {
}

void UGamePlayGameInstanceSubsystem::SetStoryBossBattle(bool StoryBossBattle) {
}

void UGamePlayGameInstanceSubsystem::SetStageBgmType(EStageID StageID, EStageBgmType NewType) {
}

bool UGamePlayGameInstanceSubsystem::SetSelectedStageID(EStageID stage) {
    return false;
}

bool UGamePlayGameInstanceSubsystem::SetSelectedOrder(int32 PlayerID, int32 Index, int32 OrderIndex) {
    return false;
}

bool UGamePlayGameInstanceSubsystem::SetSelectedCostume(int32 PlayerID, int32 Index, ECostumeType Costume) {
    return false;
}

bool UGamePlayGameInstanceSubsystem::SetSelectedColor(int32 PlayerID, int32 Index, ECharaColorID ColorID) {
    return false;
}

void UGamePlayGameInstanceSubsystem::SetSelectedCharacterCounter(int32 PlayerID, int32 CharacterNum) {
}

bool UGamePlayGameInstanceSubsystem::SetSelectedCharacter(int32 PlayerID, int32 Index, ECharacterID CharacterID) {
    return false;
}

void UGamePlayGameInstanceSubsystem::SetRoomMatchHaveCharacterSelect(bool bHaveCharacterSelect) {
}

void UGamePlayGameInstanceSubsystem::SetRestartMatchmaking(bool IsRestart) {
}

void UGamePlayGameInstanceSubsystem::SetRequestOpenMenu(ERequestOpenMenu MenuID) {
}

void UGamePlayGameInstanceSubsystem::SetPlayerOperationType(int32 PlayerID, EPlayerOperationType OperationType) {
}

void UGamePlayGameInstanceSubsystem::SetPlayerBattleHandicap(int32 PlayerID, EBattleHandicap BattleHandicap) {
}

void UGamePlayGameInstanceSubsystem::SetOperationSide(EEntryOperationSide _in) {
}

void UGamePlayGameInstanceSubsystem::SetOpenMenuFlag(bool flag) {
}

void UGamePlayGameInstanceSubsystem::SetOnlineBattleStartSceneName(ESceneName SceneName) {
}

void UGamePlayGameInstanceSubsystem::SetMobLevelVisible(bool bVisible, bool bHighEnd) {
}

void UGamePlayGameInstanceSubsystem::SetMatchingFromTraining(bool TrainingMode) {
}

void UGamePlayGameInstanceSubsystem::SetMainViewportWidget(UMainViewportWidget* ptr) {
}

void UGamePlayGameInstanceSubsystem::SetMainMenuIdByGameMode() {
}

void UGamePlayGameInstanceSubsystem::SetMainMenuID(EOrangeMenuID MenuID) {
}

void UGamePlayGameInstanceSubsystem::SetJimakuVisiblity(bool bVisible) {
}

void UGamePlayGameInstanceSubsystem::SetInputBlock(bool InputBlock) {
}

void UGamePlayGameInstanceSubsystem::SetGameMode(EGameMode GameMode) {
}

void UGamePlayGameInstanceSubsystem::SetCustomStageTextToSaveData(FText InText) {
}

void UGamePlayGameInstanceSubsystem::SetCustomStageText(FText InText) {
}

void UGamePlayGameInstanceSubsystem::SetCustomPlayerNameID(EPlayerID PlayerID, int32 CustomNameIndex) {
}

void UGamePlayGameInstanceSubsystem::SetCpuLevel(EGameOptionAILevel GameOptionAILevel) {
}

void UGamePlayGameInstanceSubsystem::SetCharacterUnlockDefault() {
}

void UGamePlayGameInstanceSubsystem::SetCharacterSelectFinish(int32 PlayerID, bool isFinish) {
}

void UGamePlayGameInstanceSubsystem::SetCharacterRandomFlag(int32 PlayerID, int32 Index, bool isRandom) {
}

void UGamePlayGameInstanceSubsystem::SetbTournamentPlayerEntered(bool Entered) {
}

void UGamePlayGameInstanceSubsystem::SetBattleWinRule(EGameOptionBattleWinRule BattleWinRule) {
}

void UGamePlayGameInstanceSubsystem::SetBattleTime(EGameOptionBattleTime BattleTime) {
}

void UGamePlayGameInstanceSubsystem::SetBattleCharacterCount(int32 PlayerID, int32 Num) {
}

void UGamePlayGameInstanceSubsystem::SetAssignedControllerID(int32 PlayerID, int32 ControllerId, EDeviceType DeviceType) {
}

void UGamePlayGameInstanceSubsystem::SetAnimPlaying(bool bPlaying) {
}

void UGamePlayGameInstanceSubsystem::ResetWinCount() {
}

void UGamePlayGameInstanceSubsystem::ResetUserInterfaceCursorSpeed() {
}

void UGamePlayGameInstanceSubsystem::ResetStageBgmCustomize() {
}

void UGamePlayGameInstanceSubsystem::ResetPlayerControllerID() {
}

bool UGamePlayGameInstanceSubsystem::ReRandomCharacter(int32 PlayerID) {
    return false;
}

void UGamePlayGameInstanceSubsystem::PendingLoadCharacter(EPlayerID PlayerID) {
}

void UGamePlayGameInstanceSubsystem::LockDLC3() {
}

void UGamePlayGameInstanceSubsystem::LockDLC2() {
}

void UGamePlayGameInstanceSubsystem::LockDLC1() {
}

void UGamePlayGameInstanceSubsystem::LockCostume(ECharacterID Character, ECostumeType CostumeType) {
}

void UGamePlayGameInstanceSubsystem::LoadStaitcAssetOnce() {
}

void UGamePlayGameInstanceSubsystem::LoadMobLevel(bool bLoad, bool bHighEnd, FLatentActionInfo LatentActionInfo) {
}

bool UGamePlayGameInstanceSubsystem::IsUnlockCostumeColor(ECharacterID CharacterID, ECostumeType Costume, ECharaColorID Color) const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsUnlockCostume(ECharacterID CharacterID, ECostumeType Costume) const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsUnlockCharacter(ECharacterID charaID) const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsTournamentPlayerEntered() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsTournamentModeWinCountComplete() {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsTournamentMode() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsTeamBattle() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsStoryBossBattle() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsRestartMatchmaking() {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsOnlineModeWinCountComplete() {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsOnlineMode() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsJimakuVisiblity() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsInputBlocking() {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsHighEndPlatform() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsCharacterSelectFinish(int32 PlayerID) const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsArabic() {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsAnimPlaying() const {
    return false;
}

bool UGamePlayGameInstanceSubsystem::IsAllCharacterRandom(int32 PlayerID) {
    return false;
}

bool UGamePlayGameInstanceSubsystem::HaveCharacterSelect() const {
    return false;
}

int32 UGamePlayGameInstanceSubsystem::GetWinCount(EPlayerID PlayerID) {
    return 0;
}

TArray<ECharacterID> UGamePlayGameInstanceSubsystem::GetUnlockedCharacters() const {
    return TArray<ECharacterID>();
}

ETournamentRule UGamePlayGameInstanceSubsystem::GetTournamentRule() const {
    return ETournamentRule::First1;
}

bool UGamePlayGameInstanceSubsystem::GetTeamRandomFlag(int32 PlayerID) {
    return false;
}

EStageBgmType UGamePlayGameInstanceSubsystem::GetStageBgmType(EStageID StageID) {
    return EStageBgmType::NONE;
}

FString UGamePlayGameInstanceSubsystem::GetStageBgm(EStageID StageID) {
    return TEXT("");
}

EStageID UGamePlayGameInstanceSubsystem::GetSelectedStageID() const {
    return EStageID::TRA_ST;
}

int32 UGamePlayGameInstanceSubsystem::GetSelectedOrder(int32 PlayerID, int32 Index) const {
    return 0;
}

ECostumeType UGamePlayGameInstanceSubsystem::GetSelectedCostume(int32 PlayerID, int32 Index) const {
    return ECostumeType::Standard;
}

ECharaColorID UGamePlayGameInstanceSubsystem::GetSelectedColor(int32 PlayerID, int32 Index) const {
    return ECharaColorID::NONE;
}

int32 UGamePlayGameInstanceSubsystem::GetSelectedCharacterCounterBoth() const {
    return 0;
}

int32 UGamePlayGameInstanceSubsystem::GetSelectedCharacterCounter(int32 PlayerID) const {
    return 0;
}

ECharacterID UGamePlayGameInstanceSubsystem::GetSelectedCharacter(int32 PlayerID, int32 Index) const {
    return ECharacterID::NONE;
}

ERequestOpenMenu UGamePlayGameInstanceSubsystem::GetRequestOpenMenu() {
    return ERequestOpenMenu::None;
}

TArray<ECharacterID> UGamePlayGameInstanceSubsystem::GetReleasedCharacter() const {
    return TArray<ECharacterID>();
}

TArray<ECharacterID> UGamePlayGameInstanceSubsystem::GetRandomUnlockedCharacters(int32 SelectNum, TArray<ECharacterID> ExcludeCharacters) const {
    return TArray<ECharacterID>();
}

FVector UGamePlayGameInstanceSubsystem::GetPlayerWorldPosition(EPlayerID PlayerID) const {
    return FVector{};
}

EPlayerOperationType UGamePlayGameInstanceSubsystem::GetPlayerOperationType(int32 PlayerID) {
    return EPlayerOperationType::Human;
}

EBattleHandicap UGamePlayGameInstanceSubsystem::GetPlayerBattleHandicap(int32 PlayerID) {
    return EBattleHandicap::Level1;
}

ECostumeType UGamePlayGameInstanceSubsystem::GetOrderedCostume(int32 PlayerID, int32 OrderIndex) const {
    return ECostumeType::Standard;
}

ECharaColorID UGamePlayGameInstanceSubsystem::GetOrderedColor(int32 PlayerID, int32 OrderIndex) const {
    return ECharaColorID::NONE;
}

ECharacterID UGamePlayGameInstanceSubsystem::GetOrderedCharacter(int32 PlayerID, int32 OrderIndex) const {
    return ECharacterID::NONE;
}

EEntryOperationSide UGamePlayGameInstanceSubsystem::GetOperationSide() const {
    return EEntryOperationSide::EOS_P1vP2;
}

bool UGamePlayGameInstanceSubsystem::GetOpenMenuFlag() {
    return false;
}

ESceneName UGamePlayGameInstanceSubsystem::GetOnlineBattleStartSceneName() {
    return ESceneName::SN_Title;
}

FString UGamePlayGameInstanceSubsystem::GetMobLevel(bool bHighEnd) const {
    return TEXT("");
}

bool UGamePlayGameInstanceSubsystem::GetMatchingFromTraining() {
    return false;
}

UMainViewportWidget* UGamePlayGameInstanceSubsystem::GetMainViewportWidget() {
    return NULL;
}

EOrangeMenuID UGamePlayGameInstanceSubsystem::GetMainMenuID() {
    return EOrangeMenuID::Versus;
}

FGameModeData UGamePlayGameInstanceSubsystem::GetGameModeData() const {
    return FGameModeData{};
}

EGameMode UGamePlayGameInstanceSubsystem::GetGameMode() const {
    return EGameMode::GAME_MODE_VERSUS;
}

UGameInstanceGameParameters* UGamePlayGameInstanceSubsystem::GetGameInstanceGameParameters() {
    return NULL;
}

FString UGamePlayGameInstanceSubsystem::GetGameBattleLevelName(EStageID StageID) const {
    return TEXT("");
}

ECharacterID UGamePlayGameInstanceSubsystem::GetFightingCharacterID(EPlayerID PlayerID) {
    return ECharacterID::NONE;
}

FText UGamePlayGameInstanceSubsystem::GetCustomStageTextFromSaveData() const {
    return FText::GetEmpty();
}

FText UGamePlayGameInstanceSubsystem::GetCustomStageText() const {
    return FText::GetEmpty();
}

FText UGamePlayGameInstanceSubsystem::GetCustomPlayerName(EPlayerID PlayerID) const {
    return FText::GetEmpty();
}

FText UGamePlayGameInstanceSubsystem::GetCostumeText(ECostumeType CostumeType) {
    return FText::GetEmpty();
}

EContorollerSelectFromGameMode UGamePlayGameInstanceSubsystem::GetContorollerSelectFromGameMode() const {
    return EContorollerSelectFromGameMode::Entry;
}

int32 UGamePlayGameInstanceSubsystem::GetConnectedInputDeviceNum() {
    return 0;
}

FText UGamePlayGameInstanceSubsystem::GetColorText(ECharaColorID ColorID) {
    return FText::GetEmpty();
}

ETeamID UGamePlayGameInstanceSubsystem::GetCharaIDToTeamID(ECharacterID _charaID) {
    return ETeamID::NONE;
}

bool UGamePlayGameInstanceSubsystem::GetCharacterRandomFlag(int32 PlayerID, int32 Index) {
    return false;
}

void UGamePlayGameInstanceSubsystem::GetCharacterName(ECharacterID CharID, FText& FirstName, FText& LastName, FText& FullName) {
}

TMap<ECharacterID, int32> UGamePlayGameInstanceSubsystem::GetCharacterItemIndex() const {
    return TMap<ECharacterID, int32>();
}

FLinearColor UGamePlayGameInstanceSubsystem::GetCharacterColor(ECharacterID CharacterID, ECostumeType CostumeType, ECharaColorID CharaColorID) {
    return FLinearColor{};
}

int32 UGamePlayGameInstanceSubsystem::GetBattleCharacterCount(int32 PlayerID) const {
    return 0;
}

EDeviceType UGamePlayGameInstanceSubsystem::GetAssignedControllerType(int32 PlayerID) {
    return EDeviceType::AnyType;
}

int32 UGamePlayGameInstanceSubsystem::GetAssignedControllerID(int32 PlayerID) {
    return 0;
}

bool UGamePlayGameInstanceSubsystem::CopyPlayerDataToGameInstance(EPlayerID PlayerID) {
    return false;
}

EMovieID UGamePlayGameInstanceSubsystem::ConvertToMovieIDFromGalleryMovieID(EGalleryMovieID MovieID) {
    return EMovieID::NONE;
}

EGalleryVoiceID UGamePlayGameInstanceSubsystem::ConvertToGalleryVoiceIDFromCharacterID(ECharacterID charaID) {
    return EGalleryVoiceID::SHU;
}

EGalleryMovieID UGamePlayGameInstanceSubsystem::ConvertToGalleryMovieIDFromMovieID(EMovieID MovieID) {
    return EGalleryMovieID::PROLOGUE;
}

ECharacterID UGamePlayGameInstanceSubsystem::ConvertToCharacterIDFromGalleryVoiceID(EGalleryVoiceID VoiceID) {
    return ECharacterID::NONE;
}

TArray<FPrimaryAssetId> UGamePlayGameInstanceSubsystem::ConvertStageID(EStageID StageID) const {
    return TArray<FPrimaryAssetId>();
}

FPrimaryAssetId UGamePlayGameInstanceSubsystem::ConvertCharacterID(ECharacterID CharacterID, uint8 ColorID) const {
    return FPrimaryAssetId{};
}

void UGamePlayGameInstanceSubsystem::ClearSelectedCharacter(const EPlayerID PlayerID) {
}

void UGamePlayGameInstanceSubsystem::CheckFixSameColor() {
}

void UGamePlayGameInstanceSubsystem::AvailableCostumeCheck() {
}

void UGamePlayGameInstanceSubsystem::AddWinCount(EPlayerID PlayerID) {
}

void UGamePlayGameInstanceSubsystem::AddSelectedCharacterCounter(int32 PlayerID, int32 AddNum) {
}

UGamePlayGameInstanceSubsystem::UGamePlayGameInstanceSubsystem() {
    this->MainViewportWidget = NULL;
    this->bLoadedStaitcAssetOnce = false;
    this->CostumeStringTable = NULL;
    this->ColorStringTable = NULL;
    this->bRoomMatchHaveCharacterSelect = false;
}

