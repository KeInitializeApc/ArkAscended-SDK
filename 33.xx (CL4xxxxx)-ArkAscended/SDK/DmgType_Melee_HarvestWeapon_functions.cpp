#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_HarvestWeapon.DmgType_Melee_HarvestWeapon_C
// (None)

class UClass* UDmgType_Melee_HarvestWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_HarvestWeapon_C");

	return Clss;
}


// DmgType_Melee_HarvestWeapon_C DmgType_Melee_HarvestWeapon.Default__DmgType_Melee_HarvestWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_HarvestWeapon_C* UDmgType_Melee_HarvestWeapon_C::GetDefaultObj()
{
	static class UDmgType_Melee_HarvestWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_HarvestWeapon_C*>(UDmgType_Melee_HarvestWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


