#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C
// (None)

class UClass* UPrimalItem_WeaponHandcuffs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponHandcuffs_C");

	return Clss;
}


// PrimalItem_WeaponHandcuffs_C PrimalItem_WeaponHandcuffs.Default__PrimalItem_WeaponHandcuffs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponHandcuffs_C* UPrimalItem_WeaponHandcuffs_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponHandcuffs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponHandcuffs_C*>(UPrimalItem_WeaponHandcuffs_C::StaticClass()->DefaultObject);

	return Default;
}

}


