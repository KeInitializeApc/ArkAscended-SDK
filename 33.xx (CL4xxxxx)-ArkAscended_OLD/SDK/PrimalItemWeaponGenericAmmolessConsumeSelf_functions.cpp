#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf.PrimalItemWeaponGenericAmmolessConsumeSelf_C
// (None)

class UClass* UPrimalItemWeaponGenericAmmolessConsumeSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGenericAmmolessConsumeSelf_C");

	return Clss;
}


// PrimalItemWeaponGenericAmmolessConsumeSelf_C PrimalItemWeaponGenericAmmolessConsumeSelf.Default__PrimalItemWeaponGenericAmmolessConsumeSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGenericAmmolessConsumeSelf_C* UPrimalItemWeaponGenericAmmolessConsumeSelf_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGenericAmmolessConsumeSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGenericAmmolessConsumeSelf_C*>(UPrimalItemWeaponGenericAmmolessConsumeSelf_C::StaticClass()->DefaultObject);

	return Default;
}

}


