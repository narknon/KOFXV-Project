#pragma once
#include "CoreMinimal.h"
#include "EStageID.h"
#include "BaseWidget.h"
#include "SoundBankNames.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USoundBankNames : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sound_bank_names_resident_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sound_bank_names_environment_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sound_bank_names_stage_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> character_sound_bank_names_;
    
    USoundBankNames();
    UFUNCTION(BlueprintCallable)
    FString GetStageBankName(EStageID stage_id);
    
    UFUNCTION(BlueprintCallable)
    FString GetEnvironmentBankName(EStageID stage_id);
    
    UFUNCTION(BlueprintCallable)
    FString GetCharacterSoundBankName(const int32& character_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterSoundBankArraySize();
    
};

