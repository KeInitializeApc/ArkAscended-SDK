#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBasePick.PrimalItem_WeaponBasePick_C
// (None)

class UClass* UPrimalItem_WeaponBasePick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBasePick_C");

	return Clss;
}


// PrimalItem_WeaponBasePick_C PrimalItem_WeaponBasePick.Default__PrimalItem_WeaponBasePick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBasePick_C* UPrimalItem_WeaponBasePick_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBasePick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBasePick_C*>(UPrimalItem_WeaponBasePick_C::StaticClass()->DefaultObject);

	return Default;
}

}


