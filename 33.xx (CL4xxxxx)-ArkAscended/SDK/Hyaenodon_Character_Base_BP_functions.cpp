#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C
// (Actor, Pawn)

class UClass* AHyaenodon_Character_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hyaenodon_Character_Base_BP_C");

	return Clss;
}


// Hyaenodon_Character_Base_BP_C Hyaenodon_Character_Base_BP.Default__Hyaenodon_Character_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHyaenodon_Character_Base_BP_C* AHyaenodon_Character_Base_BP_C::GetDefaultObj()
{
	static class AHyaenodon_Character_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHyaenodon_Character_Base_BP_C*>(AHyaenodon_Character_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleUnequipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHyaenodon_Character_Base_BP_C::OnSaddleUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hyaenodon_Character_Base_BP_C", "OnSaddleUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHyaenodon_Character_Base_BP_C::OnSaddleEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hyaenodon_Character_Base_BP_C", "OnSaddleEquipped");



	UObject::ProcessEvent(Func, nullptr);

}

}


