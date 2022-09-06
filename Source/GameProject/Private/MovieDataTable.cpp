#include "MovieDataTable.h"

FMovieDataTable::FMovieDataTable() {
    this->MovieID = EMovieID::NONE;
    this->Media = NULL;
    this->LastBossFlag = false;
    this->NextMovieID = EMovieID::NONE;
    this->MovieTelop = EMovieTelopType::NormalTelop;
}

