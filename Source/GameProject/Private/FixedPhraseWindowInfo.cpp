#include "FixedPhraseWindowInfo.h"

FFixedPhraseWindowInfo::FFixedPhraseWindowInfo() {
    this->SelectedItemIndex = EFixedPhraseItem::WatchingGames;
    this->PreSelectedItemIndex = EFixedPhraseItem::WatchingGames;
    this->SelectedWatchingGamesIndex = EFixedPhraseWatchingGames::Text1;
    this->PreSelectedWatchingGamesIndex = EFixedPhraseWatchingGames::Text1;
    this->SelectedGreetingIndex = EFixedPhraseGreeting::Text1;
    this->PreSelectedGreetingIndex = EFixedPhraseGreeting::Text1;
    this->SelectedQuestionIndex = EFixedPhraseQuestion::Text1;
    this->PreSelectedQuestionIndex = EFixedPhraseQuestion::Text1;
    this->SelectedReplyIndex = EFixedPhraseReply::Text1;
    this->PreSelectedReplyIndex = EFixedPhraseReply::Text1;
}

