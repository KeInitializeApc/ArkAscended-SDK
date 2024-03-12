#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C
// (None)

class UClass* UPrimalItemWeaponAttachment_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachment_Flashlight_C");

	return Clss;
}


// PrimalItemWeaponAttachment_Flashlight_C PrimalItemWeaponAttachment_Flashlight.Default__PrimalItemWeaponAttachment_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachment_Flashlight_C* UPrimalItemWeaponAttachment_Flashlight_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachment_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachment_Flashlight_C*>(UPrimalItemWeaponAttachment_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


