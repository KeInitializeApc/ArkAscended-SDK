#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C
// (None)

class UClass* UPrimalItemWeaponAttachment_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponAttachment_Laser_C");

	return Clss;
}


// PrimalItemWeaponAttachment_Laser_C PrimalItemWeaponAttachment_Laser.Default__PrimalItemWeaponAttachment_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponAttachment_Laser_C* UPrimalItemWeaponAttachment_Laser_C::GetDefaultObj()
{
	static class UPrimalItemWeaponAttachment_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponAttachment_Laser_C*>(UPrimalItemWeaponAttachment_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


