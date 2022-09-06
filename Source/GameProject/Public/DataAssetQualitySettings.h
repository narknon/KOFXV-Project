#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QualitySettings.h"
#include "EDevice.h"
#include "DataAssetQualitySettings.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDataAssetQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings PS4Base_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings PS4Pro_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings PS5_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings XB1Base_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings XB1S_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings XB1Scorpio_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings XBoxSeriesS_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings XBoxSeriesX_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings Windows_QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQualitySettings Switch_QualitySettings;
    
    UDataAssetQualitySettings();
    UFUNCTION(BlueprintCallable)
    FQualitySettings GetQualitySettings(EDevice EDevice);
    
};

