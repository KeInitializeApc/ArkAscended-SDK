#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMetalPick.PrimalItem_WeaponMetalPick_C
// (None)

class UClass* UPrimalItem_WeaponMetalPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMetalPick_C");

	return Clss;
}


// PrimalItem_WeaponMetalPick_C PrimalItem_WeaponMetalPick.Default__PrimalItem_WeaponMetalPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMetalPick_C* UPrimalItem_WeaponMetalPick_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMetalPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMetalPick_C*>(UPrimalItem_WeaponMetalPick_C::StaticClass()->DefaultObject);

	return Default;
}

}


