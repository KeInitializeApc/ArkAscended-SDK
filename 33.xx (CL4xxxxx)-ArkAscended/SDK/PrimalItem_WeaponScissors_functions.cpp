#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponScissors.PrimalItem_WeaponScissors_C
// (None)

class UClass* UPrimalItem_WeaponScissors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponScissors_C");

	return Clss;
}


// PrimalItem_WeaponScissors_C PrimalItem_WeaponScissors.Default__PrimalItem_WeaponScissors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponScissors_C* UPrimalItem_WeaponScissors_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponScissors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponScissors_C*>(UPrimalItem_WeaponScissors_C::StaticClass()->DefaultObject);

	return Default;
}

}


