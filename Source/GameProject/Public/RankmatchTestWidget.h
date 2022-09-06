#pragma once
#include "CoreMinimal.h"
#include "ECharaColorID.h"
#include "BaseWidget.h"
#include "ECharacterID.h"
#include "RankmatchTestWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankmatchTestWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Nickname_Opponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 kokuseki_Opponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Nickname_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCharacter_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID CharaColorID_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCharaColor_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 kokuseki_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Nickname_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCharacter_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID CharaColorID_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCharaColor_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 kokuseki_Player2;
    
    URankmatchTestWidget();
private:
    UFUNCTION(BlueprintCallable)
    void RankmatchAccept(bool f_accept);
    
    UFUNCTION(BlueprintCallable)
    void MatchingCancelRankmatch();
    
    UFUNCTION(BlueprintCallable)
    void LeaveRoom();
    
    UFUNCTION(BlueprintCallable)
    void FixSelectCharacter(ECharacterID charcter1, ECharaColorID color1, ECharacterID charcter2, ECharaColorID color2, ECharacterID charcter3, ECharaColorID color3);
    
};

