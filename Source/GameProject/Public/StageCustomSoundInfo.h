#pragma once
#include "CoreMinimal.h"
#include "StageCustomSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FStageCustomSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsCustomizedStageBGM;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> JacketPresetID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> JacketTitleID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> SelectedSoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BGMBankNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BGMEventNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BGMSoundIndex;
    
    GAMEPROJECT_API FStageCustomSoundInfo();
};

