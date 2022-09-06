#include "MovieMonitor.h"



bool AMovieMonitor::IsMinimized() {
    return false;
}

bool AMovieMonitor::IsDisableMovie() {
    return false;
}

AMovieMonitor::AMovieMonitor() {
    this->MediaPlayer = NULL;
    this->bMinimizePaused = false;
}

