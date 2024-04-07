#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachment_Scope.PrimalItemWeaponAttachment_Scope_C
// (None)

class UClass* UPrimalItemWeaponAttachment_Scope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachment_Scope_C");

	return Clss;
}


// PrimalItemWeaponAttachment_Scope_C PrimalItemWeaponAttachment_Scope.Default__PrimalItemWeaponAttachment_Scope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachment_Scope_C* UPrimalItemWeaponAttachment_Scope_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachment_Scope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachment_Scope_C*>(UPrimalItemWeaponAttachment_Scope_C::StaticClass()->DefaultObject);

	return Default;
}

}


