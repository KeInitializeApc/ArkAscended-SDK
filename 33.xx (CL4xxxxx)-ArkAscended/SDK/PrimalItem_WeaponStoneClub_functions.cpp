#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponStoneClub.PrimalItem_WeaponStoneClub_C
// (None)

class UClass* UPrimalItem_WeaponStoneClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponStoneClub_C");

	return Clss;
}


// PrimalItem_WeaponStoneClub_C PrimalItem_WeaponStoneClub.Default__PrimalItem_WeaponStoneClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponStoneClub_C* UPrimalItem_WeaponStoneClub_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponStoneClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponStoneClub_C*>(UPrimalItem_WeaponStoneClub_C::StaticClass()->DefaultObject);

	return Default;
}

}


