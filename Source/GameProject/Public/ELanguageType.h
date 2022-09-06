#pragma once
#include "CoreMinimal.h"
#include "ELanguageType.generated.h"

UENUM(BlueprintType)
enum class ELanguageType : uint8 {
    JA_JP,
    EN_US,
    ZH_CN,
    ZH_TW,
    KO_KR,
    FR_FR,
    IT_IT,
    DE_DE,
    ES_ES,
    ES_MX,
    PT_BR,
    AR_AR,
    RU_RU,
    TH_TH,
    LANGUAGE_MAX UMETA(Hidden),
};

