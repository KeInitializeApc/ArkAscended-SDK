#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C
// (None)

class UClass* UPrimalItemWeapon_StoresCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeapon_StoresCharge_C");

	return Clss;
}


// PrimalItemWeapon_StoresCharge_C PrimalItemWeapon_StoresCharge.Default__PrimalItemWeapon_StoresCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeapon_StoresCharge_C* UPrimalItemWeapon_StoresCharge_C::GetDefaultObj()
{
	static class UPrimalItemWeapon_StoresCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeapon_StoresCharge_C*>(UPrimalItemWeapon_StoresCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


