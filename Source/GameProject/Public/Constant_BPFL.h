#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Constant_BPFL.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UConstant_BPFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConstant_BPFL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Minus1_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_1_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_9_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_8_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_7_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_6_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_5_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_4_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_3_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_2_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_1_Constant();
    
    UFUNCTION(BlueprintPure)
    static uint8 uint8_0_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool True_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Rotator_0_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_Minus1_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_9_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_8_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_7_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_6_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_5_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_4_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_3_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_2_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_1_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Int_0_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Float_Minus1_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Float_1_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Float_0_Constant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool False_Constant();
    
};

