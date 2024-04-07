#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapGlowStick_Base.WeapGlowStick_Base_C
// (Actor)

class UClass* AWeapGlowStick_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapGlowStick_Base_C");

	return Clss;
}


// WeapGlowStick_Base_C WeapGlowStick_Base.Default__WeapGlowStick_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapGlowStick_Base_C* AWeapGlowStick_Base_C::GetDefaultObj()
{
	static class AWeapGlowStick_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapGlowStick_Base_C*>(AWeapGlowStick_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiUnequipGlowStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapGlowStick_Base_C::DoMultiUnequipGlowStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapGlowStick_Base_C", "DoMultiUnequipGlowStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiFakeReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapGlowStick_Base_C::DoMultiFakeReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapGlowStick_Base_C", "DoMultiFakeReload");



	UObject::ProcessEvent(Func, nullptr);

}

}


