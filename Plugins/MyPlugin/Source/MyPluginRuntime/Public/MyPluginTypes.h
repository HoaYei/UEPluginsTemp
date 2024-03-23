// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyPluginTypes.generated.h"


UENUM()
enum class EEunmTemp : uint8
{
	/** */
	None,

	/** */
	One,

	/** */
	Two,
};

USTRUCT(BlueprintType)
struct FStructTemp
{
	GENERATED_USTRUCT_BODY()

public:

	/** float Value */
	float floatValue;

	/** float Value */
	bool boolValue;
	
	FStructTemp()
		: floatValue(0.f)
		, boolValue(false)
	{}
};
/**
 * 
 */
UCLASS()
class MYPLUGINRUNTIME_API UMyPluginTypes : public UObject
{
	GENERATED_BODY()
	
};
