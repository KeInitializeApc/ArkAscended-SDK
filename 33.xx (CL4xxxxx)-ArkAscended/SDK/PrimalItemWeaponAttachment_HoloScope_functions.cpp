#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachment_HoloScope.PrimalItemWeaponAttachment_HoloScope_C
// (None)

class UClass* UPrimalItemWeaponAttachment_HoloScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachment_HoloScope_C");

	return Clss;
}


// PrimalItemWeaponAttachment_HoloScope_C PrimalItemWeaponAttachment_HoloScope.Default__PrimalItemWeaponAttachment_HoloScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachment_HoloScope_C* UPrimalItemWeaponAttachment_HoloScope_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachment_HoloScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachment_HoloScope_C*>(UPrimalItemWeaponAttachment_HoloScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


