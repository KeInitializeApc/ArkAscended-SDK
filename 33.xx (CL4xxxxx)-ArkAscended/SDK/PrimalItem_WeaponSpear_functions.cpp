#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSpear.PrimalItem_WeaponSpear_C
// (None)

class UClass* UPrimalItem_WeaponSpear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSpear_C");

	return Clss;
}


// PrimalItem_WeaponSpear_C PrimalItem_WeaponSpear.Default__PrimalItem_WeaponSpear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSpear_C* UPrimalItem_WeaponSpear_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSpear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSpear_C*>(UPrimalItem_WeaponSpear_C::StaticClass()->DefaultObject);

	return Default;
}

}


