#include "ResultAnnouncePanelActor.h"
#include "Components/WidgetComponent.h"

AResultAnnouncePanelActor::AResultAnnouncePanelActor() {
    this->ResultAnnounceHUDBase = CreateDefaultSubobject<UWidgetComponent>(TEXT("ResultAnnounceHUDBase"));
    this->ResultAnnounceHUDOutline = CreateDefaultSubobject<UWidgetComponent>(TEXT("ResultAnnounceHUDOutline"));
}

