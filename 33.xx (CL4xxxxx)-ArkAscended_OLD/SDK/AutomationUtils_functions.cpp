#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AutomationUtils.AutomationUtilsBlueprintLibrary
// (None)

class UClass* UAutomationUtilsBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationUtilsBlueprintLibrary");

	return Clss;
}


// AutomationUtilsBlueprintLibrary AutomationUtils.Default__AutomationUtilsBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationUtilsBlueprintLibrary* UAutomationUtilsBlueprintLibrary::GetDefaultObj()
{
	static class UAutomationUtilsBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationUtilsBlueprintLibrary*>(UAutomationUtilsBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ScreenshotName                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxGlobalError                                                   (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxLocalError                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      MapNameOverride                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(class FString* ScreenshotName, float* MaxGlobalError, float* MaxLocalError, class FString* MapNameOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationUtilsBlueprintLibrary", "TakeGameplayAutomationScreenshot");

	Params::UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenshotName != nullptr)
		*ScreenshotName = std::move(Parms.ScreenshotName);

	if (MaxGlobalError != nullptr)
		*MaxGlobalError = Parms.MaxGlobalError;

	if (MaxLocalError != nullptr)
		*MaxLocalError = Parms.MaxLocalError;

	if (MapNameOverride != nullptr)
		*MapNameOverride = std::move(Parms.MapNameOverride);

}

}


