#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdvancedBullet.EngramEntry_AdvancedBullet_C
// (None)

class UClass* UEngramEntry_AdvancedBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdvancedBullet_C");

	return Clss;
}


// EngramEntry_AdvancedBullet_C EngramEntry_AdvancedBullet.Default__EngramEntry_AdvancedBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdvancedBullet_C* UEngramEntry_AdvancedBullet_C::GetDefaultObj()
{
	static class UEngramEntry_AdvancedBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdvancedBullet_C*>(UEngramEntry_AdvancedBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


