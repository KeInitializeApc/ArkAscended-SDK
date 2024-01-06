#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_SickleHarvest.DmgType_Melee_SickleHarvest_C
// (None)

class UClass* UDmgType_Melee_SickleHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_SickleHarvest_C");

	return Clss;
}


// DmgType_Melee_SickleHarvest_C DmgType_Melee_SickleHarvest.Default__DmgType_Melee_SickleHarvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_SickleHarvest_C* UDmgType_Melee_SickleHarvest_C::GetDefaultObj()
{
	static class UDmgType_Melee_SickleHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_SickleHarvest_C*>(UDmgType_Melee_SickleHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


