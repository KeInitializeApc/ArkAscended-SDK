#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachment_Silencer.PrimalItemWeaponAttachment_Silencer_C
// (None)

class UClass* UPrimalItemWeaponAttachment_Silencer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachment_Silencer_C");

	return Clss;
}


// PrimalItemWeaponAttachment_Silencer_C PrimalItemWeaponAttachment_Silencer.Default__PrimalItemWeaponAttachment_Silencer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachment_Silencer_C* UPrimalItemWeaponAttachment_Silencer_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachment_Silencer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachment_Silencer_C*>(UPrimalItemWeaponAttachment_Silencer_C::StaticClass()->DefaultObject);

	return Default;
}

}


