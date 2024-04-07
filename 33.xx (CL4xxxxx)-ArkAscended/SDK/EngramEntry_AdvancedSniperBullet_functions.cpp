#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdvancedSniperBullet.EngramEntry_AdvancedSniperBullet_C
// (None)

class UClass* UEngramEntry_AdvancedSniperBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdvancedSniperBullet_C");

	return Clss;
}


// EngramEntry_AdvancedSniperBullet_C EngramEntry_AdvancedSniperBullet.Default__EngramEntry_AdvancedSniperBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdvancedSniperBullet_C* UEngramEntry_AdvancedSniperBullet_C::GetDefaultObj()
{
	static class UEngramEntry_AdvancedSniperBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdvancedSniperBullet_C*>(UEngramEntry_AdvancedSniperBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


