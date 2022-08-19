// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TomasTest.generated.h"

/**
 * 
 */
UCLASS()
class PRETTYCOOLGAME_API UTomasTest : public UObject
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Input")
	int SomeValue;
};
