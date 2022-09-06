#include "OrangeAchievementManager.h"

class APlayerController;

void UOrangeAchievementManager::UnlockAchievement(APlayerController* InPlayerController, FName AchievementName) {
}

void UOrangeAchievementManager::ResetAchievements(APlayerController* InPlayerController) {
}

UOrangeAchievementManager::UOrangeAchievementManager() {
    this->AchievementsListener = NULL;
}

