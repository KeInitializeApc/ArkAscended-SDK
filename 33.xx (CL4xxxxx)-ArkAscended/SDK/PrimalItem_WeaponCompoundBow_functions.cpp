#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponCompoundBow.PrimalItem_WeaponCompoundBow_C
// (None)

class UClass* UPrimalItem_WeaponCompoundBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponCompoundBow_C");

	return Clss;
}


// PrimalItem_WeaponCompoundBow_C PrimalItem_WeaponCompoundBow.Default__PrimalItem_WeaponCompoundBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponCompoundBow_C* UPrimalItem_WeaponCompoundBow_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponCompoundBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponCompoundBow_C*>(UPrimalItem_WeaponCompoundBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


