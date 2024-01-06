#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponCrossbow.PrimalItem_WeaponCrossbow_C
// (None)

class UClass* UPrimalItem_WeaponCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponCrossbow_C");

	return Clss;
}


// PrimalItem_WeaponCrossbow_C PrimalItem_WeaponCrossbow.Default__PrimalItem_WeaponCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponCrossbow_C* UPrimalItem_WeaponCrossbow_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponCrossbow_C*>(UPrimalItem_WeaponCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


