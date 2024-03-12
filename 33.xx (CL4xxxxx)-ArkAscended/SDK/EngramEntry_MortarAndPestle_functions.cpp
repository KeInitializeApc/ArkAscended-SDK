#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C
// (None)

class UClass* UEngramEntry_MortarAndPestle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MortarAndPestle_C");

	return Clss;
}


// EngramEntry_MortarAndPestle_C EngramEntry_MortarAndPestle.Default__EngramEntry_MortarAndPestle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MortarAndPestle_C* UEngramEntry_MortarAndPestle_C::GetDefaultObj()
{
	static class UEngramEntry_MortarAndPestle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MortarAndPestle_C*>(UEngramEntry_MortarAndPestle_C::StaticClass()->DefaultObject);

	return Default;
}

}


