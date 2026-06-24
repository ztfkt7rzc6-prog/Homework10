#include "Temporary.h"
IMPLEMENT_MODULE(FTemporaryModule, Temporary)void FTemporaryModule::StartupModule()
{
	IModuleInterface::StartupModule();
}

void FTemporaryModule::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
}
