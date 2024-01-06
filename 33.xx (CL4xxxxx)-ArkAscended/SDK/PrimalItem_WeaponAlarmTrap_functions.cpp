#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C
// (None)

class UClass* UPrimalItem_WeaponAlarmTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponAlarmTrap_C");

	return Clss;
}


// PrimalItem_WeaponAlarmTrap_C PrimalItem_WeaponAlarmTrap.Default__PrimalItem_WeaponAlarmTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponAlarmTrap_C* UPrimalItem_WeaponAlarmTrap_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponAlarmTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponAlarmTrap_C*>(UPrimalItem_WeaponAlarmTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


