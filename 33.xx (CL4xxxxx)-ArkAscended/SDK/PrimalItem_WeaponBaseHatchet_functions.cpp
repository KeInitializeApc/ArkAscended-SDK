#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C
// (None)

class UClass* UPrimalItem_WeaponBaseHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBaseHatchet_C");

	return Clss;
}


// PrimalItem_WeaponBaseHatchet_C PrimalItem_WeaponBaseHatchet.Default__PrimalItem_WeaponBaseHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBaseHatchet_C* UPrimalItem_WeaponBaseHatchet_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBaseHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBaseHatchet_C*>(UPrimalItem_WeaponBaseHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


