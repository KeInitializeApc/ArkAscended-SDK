#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponStonePick.PrimalItem_WeaponStonePick_C
// (None)

class UClass* UPrimalItem_WeaponStonePick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponStonePick_C");

	return Clss;
}


// PrimalItem_WeaponStonePick_C PrimalItem_WeaponStonePick.Default__PrimalItem_WeaponStonePick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponStonePick_C* UPrimalItem_WeaponStonePick_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponStonePick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponStonePick_C*>(UPrimalItem_WeaponStonePick_C::StaticClass()->DefaultObject);

	return Default;
}

}


