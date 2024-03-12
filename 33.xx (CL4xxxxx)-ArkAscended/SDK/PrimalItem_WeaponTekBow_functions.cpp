#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekBow.PrimalItem_WeaponTekBow_C
// (None)

class UClass* UPrimalItem_WeaponTekBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekBow_C");

	return Clss;
}


// PrimalItem_WeaponTekBow_C PrimalItem_WeaponTekBow.Default__PrimalItem_WeaponTekBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekBow_C* UPrimalItem_WeaponTekBow_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekBow_C*>(UPrimalItem_WeaponTekBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


