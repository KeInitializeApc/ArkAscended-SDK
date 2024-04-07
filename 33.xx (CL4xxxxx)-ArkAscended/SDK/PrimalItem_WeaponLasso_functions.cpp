#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponLasso.PrimalItem_WeaponLasso_C
// (None)

class UClass* UPrimalItem_WeaponLasso_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponLasso_C");

	return Clss;
}


// PrimalItem_WeaponLasso_C PrimalItem_WeaponLasso.Default__PrimalItem_WeaponLasso_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponLasso_C* UPrimalItem_WeaponLasso_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponLasso_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponLasso_C*>(UPrimalItem_WeaponLasso_C::StaticClass()->DefaultObject);

	return Default;
}

}


