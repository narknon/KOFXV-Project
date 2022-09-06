#pragma once
#include "CoreMinimal.h"
#include "EStageID.h"
#include "BaseWidget.h"
#include "ESpecialCombinationBGMID.h"
#include "EEnvironment_ID.h"
#include "ETeamID.h"
#include "ECharacterID.h"
#include "SoundEventNameBanks.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USoundEventNameBanks : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sound_bank_names_resident_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sound_bank_names_environment_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> bgm_event_names_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> team_bgm_event_names_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialCombinationBGMID, FString> cross_talk_bgm_event_names_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> environment_event_names_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VersusSceneTeamAnnounceVoiceArray;
    
    USoundEventNameBanks();
    UFUNCTION(BlueprintCallable)
    FString GetVersusSceneTeamAnnounceVoiceEventName(ETeamID InTeamID);
    
    UFUNCTION(BlueprintCallable)
    FString GetTeamBGMEventName(const int32& bgm_id);
    
    UFUNCTION(BlueprintCallable)
    FString GetEnvironmentEventName(EEnvironment_ID environment_id);
    
    UFUNCTION(BlueprintCallable)
    FString GetEnvironmentBankName(EStageID stage_id);
    
    UFUNCTION(BlueprintCallable)
    FString GetCrossTalkBGMEventName(const ECharacterID& player_1_chracter, const ECharacterID& player_2_chracter);
    
    UFUNCTION(BlueprintCallable)
    FString GetBGMEventName(const int32& bgm_id);
    
};

