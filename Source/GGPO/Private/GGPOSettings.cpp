#include "GGPOSettings.h"

UGGPOSettings::UGGPOSettings() {
    this->RedyMessageResendInterval = 500.00f;
    this->RunningRetryInterval = 200.00f;
    this->QualityReportInterval = 1000.00f;
    this->NetworkStatsInterval = 1000.00f;
    this->KeepAliveInterval = 200.00f;
    this->RecommendationInterval = 180;
    this->MaxFrameAdvantage = 9;
    this->MinFrameAdvantage = 2;
}

