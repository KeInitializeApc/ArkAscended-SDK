#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekPistol.EngramEntry_TekPistol_C
// (None)

class UClass* UEngramEntry_TekPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekPistol_C");

	return Clss;
}


// EngramEntry_TekPistol_C EngramEntry_TekPistol.Default__EngramEntry_TekPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekPistol_C* UEngramEntry_TekPistol_C::GetDefaultObj()
{
	static class UEngramEntry_TekPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekPistol_C*>(UEngramEntry_TekPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


