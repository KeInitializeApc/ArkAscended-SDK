#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponRocketLauncher.PrimalItem_WeaponRocketLauncher_C
// (None)

class UClass* UPrimalItem_WeaponRocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponRocketLauncher_C");

	return Clss;
}


// PrimalItem_WeaponRocketLauncher_C PrimalItem_WeaponRocketLauncher.Default__PrimalItem_WeaponRocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponRocketLauncher_C* UPrimalItem_WeaponRocketLauncher_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponRocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponRocketLauncher_C*>(UPrimalItem_WeaponRocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


