#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponProd.PrimalItem_WeaponProd_C
// (None)

class UClass* UPrimalItem_WeaponProd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponProd_C");

	return Clss;
}


// PrimalItem_WeaponProd_C PrimalItem_WeaponProd.Default__PrimalItem_WeaponProd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponProd_C* UPrimalItem_WeaponProd_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponProd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponProd_C*>(UPrimalItem_WeaponProd_C::StaticClass()->DefaultObject);

	return Default;
}

}


