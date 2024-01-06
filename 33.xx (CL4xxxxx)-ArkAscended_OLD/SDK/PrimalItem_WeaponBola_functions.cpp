#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBola.PrimalItem_WeaponBola_C
// (None)

class UClass* UPrimalItem_WeaponBola_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBola_C");

	return Clss;
}


// PrimalItem_WeaponBola_C PrimalItem_WeaponBola.Default__PrimalItem_WeaponBola_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBola_C* UPrimalItem_WeaponBola_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBola_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBola_C*>(UPrimalItem_WeaponBola_C::StaticClass()->DefaultObject);

	return Default;
}

}


