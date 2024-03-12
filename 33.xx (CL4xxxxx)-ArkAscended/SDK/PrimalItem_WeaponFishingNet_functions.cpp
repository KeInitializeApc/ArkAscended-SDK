#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponFishingNet.PrimalItem_WeaponFishingNet_C
// (None)

class UClass* UPrimalItem_WeaponFishingNet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponFishingNet_C");

	return Clss;
}


// PrimalItem_WeaponFishingNet_C PrimalItem_WeaponFishingNet.Default__PrimalItem_WeaponFishingNet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponFishingNet_C* UPrimalItem_WeaponFishingNet_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponFishingNet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponFishingNet_C*>(UPrimalItem_WeaponFishingNet_C::StaticClass()->DefaultObject);

	return Default;
}

}


