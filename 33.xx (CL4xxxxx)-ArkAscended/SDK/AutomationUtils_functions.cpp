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
// class FString                      ScreenshotName                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxGlobalError                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxLocalError                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      MapNameOverride                                                  (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationUtilsBlueprintLibrary", "TakeGameplayAutomationScreenshot");

	Params::UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params Parms{};

	Parms.ScreenshotName = ScreenshotName;
	Parms.MaxGlobalError = MaxGlobalError;
	Parms.MaxLocalError = MaxLocalError;
	Parms.MapNameOverride = MapNameOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


