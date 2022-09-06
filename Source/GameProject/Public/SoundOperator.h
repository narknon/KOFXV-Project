#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESoundPlatformType.h"
#include "EResultVoiceGenderType.h"
#include "EResultVoiceType.h"
#include "ECharacterID.h"
#include "UObject/NoExportTypes.h"
#include "BGMData.h"
#include "SoundOperator.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ASoundOperator : public AActor {
    GENERATED_BODY()
public:
    ASoundOperator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEnvironmentSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEnvironmentSound(const FString& SubLevelName, const ESoundPlatformType& InSoundPlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetResultVoiceEventName(const EResultVoiceType& ResultVoiceType, const ECharacterID& CharacterIDWinner, const ECharacterID& CharacterIDLoser, const EResultVoiceGenderType& CharacterGender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetGroundMaterialType(const int32& StageID, const FVector& FootVector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBGMData GetBGMEventNameRandom();
    
};

