#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ZiplineAmmo.EngramEntry_ZiplineAmmo_C
// (None)

class UClass* UEngramEntry_ZiplineAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ZiplineAmmo_C");

	return Clss;
}


// EngramEntry_ZiplineAmmo_C EngramEntry_ZiplineAmmo.Default__EngramEntry_ZiplineAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ZiplineAmmo_C* UEngramEntry_ZiplineAmmo_C::GetDefaultObj()
{
	static class UEngramEntry_ZiplineAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ZiplineAmmo_C*>(UEngramEntry_ZiplineAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


