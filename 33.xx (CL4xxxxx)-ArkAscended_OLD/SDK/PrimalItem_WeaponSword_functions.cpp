#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSword.PrimalItem_WeaponSword_C
// (None)

class UClass* UPrimalItem_WeaponSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSword_C");

	return Clss;
}


// PrimalItem_WeaponSword_C PrimalItem_WeaponSword.Default__PrimalItem_WeaponSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSword_C* UPrimalItem_WeaponSword_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSword_C*>(UPrimalItem_WeaponSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


