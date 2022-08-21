#include "EditorModule.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(IEditorModule, EditorModule);

DEFINE_LOG_CATEGORY(LogEditorModule)

void IEditorModule::StartupModule()
{
    UE_LOG(LogEditorModule, Warning, TEXT("EditorModule: Log Started"));
}

void IEditorModule::ShutdownModule()
{
    UE_LOG(LogEditorModule, Warning, TEXT("EditorModule: Log Ended"));
}
