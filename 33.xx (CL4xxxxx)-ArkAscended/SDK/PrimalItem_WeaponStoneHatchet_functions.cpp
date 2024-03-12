#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C
// (None)

class UClass* UPrimalItem_WeaponStoneHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponStoneHatchet_C");

	return Clss;
}


// PrimalItem_WeaponStoneHatchet_C PrimalItem_WeaponStoneHatchet.Default__PrimalItem_WeaponStoneHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponStoneHatchet_C* UPrimalItem_WeaponStoneHatchet_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponStoneHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponStoneHatchet_C*>(UPrimalItem_WeaponStoneHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


