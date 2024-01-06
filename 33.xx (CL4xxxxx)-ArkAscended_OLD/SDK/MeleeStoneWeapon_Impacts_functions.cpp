#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C
// (Actor)

class UClass* AMeleeStoneWeapon_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeStoneWeapon_Impacts_C");

	return Clss;
}


// MeleeStoneWeapon_Impacts_C MeleeStoneWeapon_Impacts.Default__MeleeStoneWeapon_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeleeStoneWeapon_Impacts_C* AMeleeStoneWeapon_Impacts_C::GetDefaultObj()
{
	static class AMeleeStoneWeapon_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeleeStoneWeapon_Impacts_C*>(AMeleeStoneWeapon_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


