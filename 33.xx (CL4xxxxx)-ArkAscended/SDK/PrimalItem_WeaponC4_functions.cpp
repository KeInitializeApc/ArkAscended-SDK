#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponC4.PrimalItem_WeaponC4_C
// (None)

class UClass* UPrimalItem_WeaponC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponC4_C");

	return Clss;
}


// PrimalItem_WeaponC4_C PrimalItem_WeaponC4.Default__PrimalItem_WeaponC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponC4_C* UPrimalItem_WeaponC4_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponC4_C*>(UPrimalItem_WeaponC4_C::StaticClass()->DefaultObject);

	return Default;
}

}


