#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponRifle.PrimalItem_WeaponRifle_C
// (None)

class UClass* UPrimalItem_WeaponRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponRifle_C");

	return Clss;
}


// PrimalItem_WeaponRifle_C PrimalItem_WeaponRifle.Default__PrimalItem_WeaponRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponRifle_C* UPrimalItem_WeaponRifle_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponRifle_C*>(UPrimalItem_WeaponRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


