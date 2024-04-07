#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MachinedPistol.EngramEntry_MachinedPistol_C
// (None)

class UClass* UEngramEntry_MachinedPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MachinedPistol_C");

	return Clss;
}


// EngramEntry_MachinedPistol_C EngramEntry_MachinedPistol.Default__EngramEntry_MachinedPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MachinedPistol_C* UEngramEntry_MachinedPistol_C::GetDefaultObj()
{
	static class UEngramEntry_MachinedPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MachinedPistol_C*>(UEngramEntry_MachinedPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


