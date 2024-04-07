#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapTekClaws_Base.WeapTekClaws_Base_C
// (Actor)

class UClass* AWeapTekClaws_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapTekClaws_Base_C");

	return Clss;
}


// WeapTekClaws_Base_C WeapTekClaws_Base.Default__WeapTekClaws_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapTekClaws_Base_C* AWeapTekClaws_Base_C::GetDefaultObj()
{
	static class AWeapTekClaws_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapTekClaws_Base_C*>(AWeapTekClaws_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnPrimalItemEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapTekClaws_Base_C::OnPrimalItemEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapTekClaws_Base_C", "OnPrimalItemEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnAttachmentsAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapTekClaws_Base_C::OnAttachmentsAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapTekClaws_Base_C", "OnAttachmentsAdded");



	UObject::ProcessEvent(Func, nullptr);

}

}


