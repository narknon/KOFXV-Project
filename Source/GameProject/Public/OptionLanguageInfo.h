#pragma once
#include "CoreMinimal.h"
#include "OptionLanguageInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptionLanguageInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sSubtitles;
    
public:
    GAMEPROJECT_API FOptionLanguageInfo();
};

