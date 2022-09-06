#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameOptionData.h"
#include "GameOptionParameters.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API UGameOptionParameters : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOptionData m_gameOptionData;
    
    UGameOptionParameters();
    UFUNCTION(BlueprintCallable)
    void SetGameOptionPopUp(bool bGameOptionPopUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameOptionPopUp() const;
    
};

