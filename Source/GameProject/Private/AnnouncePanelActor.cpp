#include "AnnouncePanelActor.h"
#include "Components/WidgetComponent.h"


AAnnouncePanelActor::AAnnouncePanelActor() {
    this->AnnounceHUDInside = CreateDefaultSubobject<UWidgetComponent>(TEXT("AnnounceHUDInside"));
    this->AnnounceHUDOutline = CreateDefaultSubobject<UWidgetComponent>(TEXT("AnnounceHUDOutline"));
}

