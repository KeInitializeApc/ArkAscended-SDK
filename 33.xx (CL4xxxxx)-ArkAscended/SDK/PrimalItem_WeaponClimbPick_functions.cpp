#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponClimbPick.PrimalItem_WeaponClimbPick_C
// (None)

class UClass* UPrimalItem_WeaponClimbPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponClimbPick_C");

	return Clss;
}


// PrimalItem_WeaponClimbPick_C PrimalItem_WeaponClimbPick.Default__PrimalItem_WeaponClimbPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponClimbPick_C* UPrimalItem_WeaponClimbPick_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponClimbPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponClimbPick_C*>(UPrimalItem_WeaponClimbPick_C::StaticClass()->DefaultObject);

	return Default;
}

}


