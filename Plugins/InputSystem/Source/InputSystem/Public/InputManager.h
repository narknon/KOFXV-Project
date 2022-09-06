#pragma once
#include "CoreMinimal.h"
#include "EFightingConfigKey.h"
#include "UObject/Object.h"
#include "EKeyOperation.h"
#include "KeyMap.h"
#include "EDefaultMapType.h"
#include "EDeviceType.h"
#include "EInputDeviceType.h"
#include "InputManager.generated.h"

class UDataTable;
class UKeyMapManager;

UCLASS(Blueprintable)
class INPUTSYSTEM_API UInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UiOperationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UiOperationTableES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyMapManager* KeyMapManager;
    
    UInputManager();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SetVibrationPrimaryUser(float vibSec, int32 largeMotor, int32 smallMotor);
    
    UFUNCTION(BlueprintCallable)
    void SetVibration(int32 fighterIndex, float vibSec, int32 largeMotor, int32 smallMotor);
    
    UFUNCTION(BlueprintCallable)
    void SetRepeatFrame(int32 Start, int32 End);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryUserIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyMap(int32 PlayerIndex, const FKeyMap& mapper);
    
    UFUNCTION(BlueprintCallable)
    void SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidVibration(int32 fighterIndex, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDummy(int32 UserIndex, int32 dummy);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultKey(int32 PlayerIndex, EDeviceType DeviceType, EDefaultMapType DefaultMapType);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputKeys();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyBoard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcceptKeyCross(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPrimaryUserIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerID(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    FKeyMap GetKeyMap(int32 fighterIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetKeyboardID();
    
    UFUNCTION(BlueprintCallable)
    EInputDeviceType GetInputDeviceType(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDummy(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetControllerID(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeleteKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOperationTable(bool isEs);
    
    UFUNCTION(BlueprintCallable)
    void AssignUser(int32 PlayerIndex, int32 ControllerId, EDeviceType Type);
    
    UFUNCTION(BlueprintCallable)
    void AssignInitialize();
    
};

