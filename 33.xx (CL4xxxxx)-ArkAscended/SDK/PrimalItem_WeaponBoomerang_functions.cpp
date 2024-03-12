#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBoomerang.PrimalItem_WeaponBoomerang_C
// (None)

class UClass* UPrimalItem_WeaponBoomerang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBoomerang_C");

	return Clss;
}


// PrimalItem_WeaponBoomerang_C PrimalItem_WeaponBoomerang.Default__PrimalItem_WeaponBoomerang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBoomerang_C* UPrimalItem_WeaponBoomerang_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBoomerang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBoomerang_C*>(UPrimalItem_WeaponBoomerang_C::StaticClass()->DefaultObject);

	return Default;
}

}


