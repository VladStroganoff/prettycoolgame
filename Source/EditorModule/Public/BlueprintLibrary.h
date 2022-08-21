// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "CoreMinimal.h"
#include "BlueprintLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintLibrary, Log, All)

UCLASS()
class EDITORMODULE_API UBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
};