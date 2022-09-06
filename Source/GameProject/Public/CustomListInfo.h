#pragma once
#include "CoreMinimal.h"
#include "CustomListInfo.generated.h"

USTRUCT(BlueprintType)
struct FCustomListInfo {
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
    TArray<FString> BGMEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BGMBankName;
    
    GAMEPROJECT_API FCustomListInfo();
};

