#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "UnrealEd.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEditorModule, All, All)

class IEditorModule: public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
