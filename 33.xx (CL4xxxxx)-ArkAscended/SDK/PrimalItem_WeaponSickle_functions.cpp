#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSickle.PrimalItem_WeaponSickle_C
// (None)

class UClass* UPrimalItem_WeaponSickle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSickle_C");

	return Clss;
}


// PrimalItem_WeaponSickle_C PrimalItem_WeaponSickle.Default__PrimalItem_WeaponSickle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSickle_C* UPrimalItem_WeaponSickle_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSickle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSickle_C*>(UPrimalItem_WeaponSickle_C::StaticClass()->DefaultObject);

	return Default;
}

}


