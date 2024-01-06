#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C
// (None)

class UClass* UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C");

	return Clss;
}


// PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.Default__PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C* UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C*>(UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::StaticClass()->DefaultObject);

	return Default;
}

}


