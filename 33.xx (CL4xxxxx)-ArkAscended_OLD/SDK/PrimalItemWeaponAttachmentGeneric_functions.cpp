#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachmentGeneric.PrimalItemWeaponAttachmentGeneric_C
// (None)

class UClass* UPrimalItemWeaponAttachmentGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachmentGeneric_C");

	return Clss;
}


// PrimalItemWeaponAttachmentGeneric_C PrimalItemWeaponAttachmentGeneric.Default__PrimalItemWeaponAttachmentGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachmentGeneric_C* UPrimalItemWeaponAttachmentGeneric_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachmentGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachmentGeneric_C*>(UPrimalItemWeaponAttachmentGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


