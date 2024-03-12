#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponPike.PrimalItem_WeaponPike_C
// (None)

class UClass* UPrimalItem_WeaponPike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponPike_C");

	return Clss;
}


// PrimalItem_WeaponPike_C PrimalItem_WeaponPike.Default__PrimalItem_WeaponPike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponPike_C* UPrimalItem_WeaponPike_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponPike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponPike_C*>(UPrimalItem_WeaponPike_C::StaticClass()->DefaultObject);

	return Default;
}

}


