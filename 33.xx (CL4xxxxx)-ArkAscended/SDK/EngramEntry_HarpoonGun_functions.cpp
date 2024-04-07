#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HarpoonGun.EngramEntry_HarpoonGun_C
// (None)

class UClass* UEngramEntry_HarpoonGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HarpoonGun_C");

	return Clss;
}


// EngramEntry_HarpoonGun_C EngramEntry_HarpoonGun.Default__EngramEntry_HarpoonGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HarpoonGun_C* UEngramEntry_HarpoonGun_C::GetDefaultObj()
{
	static class UEngramEntry_HarpoonGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HarpoonGun_C*>(UEngramEntry_HarpoonGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


