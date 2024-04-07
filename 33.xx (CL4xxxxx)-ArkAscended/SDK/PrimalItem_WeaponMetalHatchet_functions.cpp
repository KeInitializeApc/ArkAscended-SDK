#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMetalHatchet.PrimalItem_WeaponMetalHatchet_C
// (None)

class UClass* UPrimalItem_WeaponMetalHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMetalHatchet_C");

	return Clss;
}


// PrimalItem_WeaponMetalHatchet_C PrimalItem_WeaponMetalHatchet.Default__PrimalItem_WeaponMetalHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMetalHatchet_C* UPrimalItem_WeaponMetalHatchet_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMetalHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMetalHatchet_C*>(UPrimalItem_WeaponMetalHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


