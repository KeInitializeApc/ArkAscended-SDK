#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponBaseClub.PrimalItem_WeaponBaseClub_C
// (None)

class UClass* UPrimalItem_WeaponBaseClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponBaseClub_C");

	return Clss;
}


// PrimalItem_WeaponBaseClub_C PrimalItem_WeaponBaseClub.Default__PrimalItem_WeaponBaseClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponBaseClub_C* UPrimalItem_WeaponBaseClub_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponBaseClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponBaseClub_C*>(UPrimalItem_WeaponBaseClub_C::StaticClass()->DefaultObject);

	return Default;
}

}


