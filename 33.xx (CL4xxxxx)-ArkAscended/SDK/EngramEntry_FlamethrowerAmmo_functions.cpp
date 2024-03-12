#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FlamethrowerAmmo.EngramEntry_FlamethrowerAmmo_C
// (None)

class UClass* UEngramEntry_FlamethrowerAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FlamethrowerAmmo_C");

	return Clss;
}


// EngramEntry_FlamethrowerAmmo_C EngramEntry_FlamethrowerAmmo.Default__EngramEntry_FlamethrowerAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FlamethrowerAmmo_C* UEngramEntry_FlamethrowerAmmo_C::GetDefaultObj()
{
	static class UEngramEntry_FlamethrowerAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FlamethrowerAmmo_C*>(UEngramEntry_FlamethrowerAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


