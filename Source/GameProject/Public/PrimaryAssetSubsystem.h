#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnAsyncLoadQueueDoneDelegate.h"
#include "ELoadChannel.h"
#include "PrimaryAssetSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UPrimaryAssetSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadQueueDone OnAsyncLoadQueueDone;
    
    UPrimaryAssetSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnloadPrimaryAssetsByChannel(ELoadChannel Channel);
    
    UFUNCTION(BlueprintCallable)
    void PendingListRemove(ELoadChannel Channel, FPrimaryAssetId ID);
    
    UFUNCTION(BlueprintCallable)
    void PendingListClear(ELoadChannel Channel);
    
    UFUNCTION(BlueprintCallable)
    void PendingListAppend(ELoadChannel Channel, TArray<FPrimaryAssetId> IDList);
    
    UFUNCTION(BlueprintCallable)
    void PendingListAdd(ELoadChannel Channel, FPrimaryAssetId ID);
    
    UFUNCTION(BlueprintCallable)
    bool IsAyncLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryAssetId> GetPendingList(ELoadChannel Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadChannel GetLoadingChannel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryAssetId> GetLoadedList(ELoadChannel Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> Explicit(Array)();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Explicit();
    
    UFUNCTION(BlueprintCallable)
    static bool TryExecuteGarbageCollection(bool bPerformFullPurge);
    
    UFUNCTION(BlueprintCallable)
    static void ForceExecuteGarbageCollection(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable)
    void EndSenceTravelTimeCount();
    
    UFUNCTION(BlueprintCallable)
    void EndPrimaryAssetLoadTimeCount();
    
    UFUNCTION(BlueprintCallable)
    void BeginSenceTravelTimeCount();
    
    UFUNCTION(BlueprintCallable)
    void BeginPrimaryAssetLoadTimeCount();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadPendingList(ELoadChannel Channel);
    
};

