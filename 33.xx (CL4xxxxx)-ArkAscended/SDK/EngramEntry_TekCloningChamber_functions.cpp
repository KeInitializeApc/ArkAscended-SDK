#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekCloningChamber.EngramEntry_TekCloningChamber_C
// (None)

class UClass* UEngramEntry_TekCloningChamber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekCloningChamber_C");

	return Clss;
}


// EngramEntry_TekCloningChamber_C EngramEntry_TekCloningChamber.Default__EngramEntry_TekCloningChamber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekCloningChamber_C* UEngramEntry_TekCloningChamber_C::GetDefaultObj()
{
	static class UEngramEntry_TekCloningChamber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekCloningChamber_C*>(UEngramEntry_TekCloningChamber_C::StaticClass()->DefaultObject);

	return Default;
}

}


