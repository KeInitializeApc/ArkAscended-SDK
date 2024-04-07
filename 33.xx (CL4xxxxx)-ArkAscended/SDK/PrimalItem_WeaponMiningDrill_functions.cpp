#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMiningDrill.PrimalItem_WeaponMiningDrill_C
// (None)

class UClass* UPrimalItem_WeaponMiningDrill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMiningDrill_C");

	return Clss;
}


// PrimalItem_WeaponMiningDrill_C PrimalItem_WeaponMiningDrill.Default__PrimalItem_WeaponMiningDrill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMiningDrill_C* UPrimalItem_WeaponMiningDrill_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMiningDrill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMiningDrill_C*>(UPrimalItem_WeaponMiningDrill_C::StaticClass()->DefaultObject);

	return Default;
}

}


