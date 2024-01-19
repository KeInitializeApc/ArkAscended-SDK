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
// class FString                      ScreenshotName                                                   (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxGlobalError                                                   (ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxLocalError                                                    (Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      MapNameOverride                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class FString UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationUtilsBlueprintLibrary", "TakeGameplayAutomationScreenshot");

	Params::UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


