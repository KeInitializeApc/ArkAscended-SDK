#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists_Female.BaseHumanAnimBP_Fists_Female_C
// (None)

class UClass* UBaseHumanAnimBP_Fists_Female_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseHumanAnimBP_Fists_Female_C");

	return Clss;
}


// BaseHumanAnimBP_Fists_Female_C BaseHumanAnimBP_Fists_Female.Default__BaseHumanAnimBP_Fists_Female_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseHumanAnimBP_Fists_Female_C* UBaseHumanAnimBP_Fists_Female_C::GetDefaultObj()
{
	static class UBaseHumanAnimBP_Fists_Female_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseHumanAnimBP_Fists_Female_C*>(UBaseHumanAnimBP_Fists_Female_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseHumanAnimBP_Fists_Female.BaseHumanAnimBP_Fists_Female_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_Fists_Female_C::UpdateLayeringValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_Fists_Female_C", "UpdateLayeringValues");



	UObject::ProcessEvent(Func, nullptr);

}

}


