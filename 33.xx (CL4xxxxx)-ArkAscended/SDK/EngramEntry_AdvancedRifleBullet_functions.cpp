#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdvancedRifleBullet.EngramEntry_AdvancedRifleBullet_C
// (None)

class UClass* UEngramEntry_AdvancedRifleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdvancedRifleBullet_C");

	return Clss;
}


// EngramEntry_AdvancedRifleBullet_C EngramEntry_AdvancedRifleBullet.Default__EngramEntry_AdvancedRifleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdvancedRifleBullet_C* UEngramEntry_AdvancedRifleBullet_C::GetDefaultObj()
{
	static class UEngramEntry_AdvancedRifleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdvancedRifleBullet_C*>(UEngramEntry_AdvancedRifleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


