#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C
// (None)

class UClass* UPrimalItem_WeaponSlingshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSlingshot_C");

	return Clss;
}


// PrimalItem_WeaponSlingshot_C PrimalItem_WeaponSlingshot.Default__PrimalItem_WeaponSlingshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSlingshot_C* UPrimalItem_WeaponSlingshot_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSlingshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSlingshot_C*>(UPrimalItem_WeaponSlingshot_C::StaticClass()->DefaultObject);

	return Default;
}

}


