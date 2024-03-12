#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponWhip.PrimalItem_WeaponWhip_C
// (None)

class UClass* UPrimalItem_WeaponWhip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponWhip_C");

	return Clss;
}


// PrimalItem_WeaponWhip_C PrimalItem_WeaponWhip.Default__PrimalItem_WeaponWhip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponWhip_C* UPrimalItem_WeaponWhip_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponWhip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponWhip_C*>(UPrimalItem_WeaponWhip_C::StaticClass()->DefaultObject);

	return Default;
}

}


