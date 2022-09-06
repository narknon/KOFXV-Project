#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayActionSoundOptionInfos.h"
#include "PlayActionSoundOptionInfo.h"
#include "BattleStageAkcomponent.h"
#include "NewSoundManager.generated.h"

class USoundBankNames;
class ASoundOperator;
class UAkComponent;
class AFightingGameState;
class USoundEventNameBanks;
class UGameProjectGameInstance;
class UDJStation;

UCLASS(Blueprintable)
class GAMEPROJECT_API UNewSoundManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* default_listener_akcomponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* soundlist_bgm_akcomponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* system_akcomponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* system_character_voice_akcomponent_;
    
    UPROPERTY(EditAnywhere, Export)
    UAkComponent* battle_common_akcomponents_[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayActionSoundOptionInfos> battle_character_se_akcomponents_;
    
    UPROPERTY(EditAnywhere)
    FPlayActionSoundOptionInfo battle_character_voice_akcomponents_[2];
    
    UPROPERTY(EditAnywhere, Export)
    UAkComponent* battle_character_attack_akcomponents_[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayActionSoundOptionInfos> battle_character_shot_akcomponents_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleStageAkcomponent> battle_stage_akcomponents_;
    
    UPROPERTY(EditAnywhere, Export)
    UAkComponent* player_depend_akcomponents_[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> ControllerSpeakerListener;
    
    UPROPERTY(EditAnywhere)
    float Pre2DPanPosition[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundEventNameBanks* sound_event_name_banks_instance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USoundBankNames* sound_bank_names_instance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASoundOperator* sound_operator_instance_;
    
    UPROPERTY(EditAnywhere)
    FString character_foot_type[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bgm_bank_name_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bgm_event_name_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pre_bgm_event_name_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayedCrossTalkBGMEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sub_level_names_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FilePackageLoadOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFightingGameState* fighting_game_state_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameProjectGameInstance* GameProjectGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDJStation* djstation_instance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterSoundBankNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LoadedSoundBankNamesMovie;
    
public:
    UNewSoundManager();
};

