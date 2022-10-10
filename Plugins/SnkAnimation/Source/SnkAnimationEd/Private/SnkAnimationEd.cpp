#include "SnkAnimationEd.h"

DEFINE_LOG_CATEGORY(SnkAnimationEd);

#define LOCTEXT_NAMESPACE "FSnkAnimationEd"

void FSnkAnimationEd::StartupModule()
{
	UE_LOG(SnkAnimationEd, Warning, TEXT("SnkAnimationEd module has been loaded"));
}

void FSnkAnimationEd::ShutdownModule()
{
	UE_LOG(SnkAnimationEd, Warning, TEXT("SnkAnimationEd module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSnkAnimationEd, SnkAnimationEd)