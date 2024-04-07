#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBow.PrimalItem_WeaponBow_C
// (None)

class UClass* UPrimalItem_WeaponBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBow_C");

	return Clss;
}


// PrimalItem_WeaponBow_C PrimalItem_WeaponBow.Default__PrimalItem_WeaponBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBow_C* UPrimalItem_WeaponBow_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBow_C*>(UPrimalItem_WeaponBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


