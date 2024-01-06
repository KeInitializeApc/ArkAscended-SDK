#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C
// (None)

class UClass* UPrimalItem_WeaponOneShotRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponOneShotRifle_C");

	return Clss;
}


// PrimalItem_WeaponOneShotRifle_C PrimalItem_WeaponOneShotRifle.Default__PrimalItem_WeaponOneShotRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponOneShotRifle_C* UPrimalItem_WeaponOneShotRifle_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponOneShotRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponOneShotRifle_C*>(UPrimalItem_WeaponOneShotRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


