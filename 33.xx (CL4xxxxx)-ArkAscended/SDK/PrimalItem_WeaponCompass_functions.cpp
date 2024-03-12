#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponCompass.PrimalItem_WeaponCompass_C
// (None)

class UClass* UPrimalItem_WeaponCompass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponCompass_C");

	return Clss;
}


// PrimalItem_WeaponCompass_C PrimalItem_WeaponCompass.Default__PrimalItem_WeaponCompass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponCompass_C* UPrimalItem_WeaponCompass_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponCompass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponCompass_C*>(UPrimalItem_WeaponCompass_C::StaticClass()->DefaultObject);

	return Default;
}

}


