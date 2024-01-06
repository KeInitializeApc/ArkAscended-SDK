#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_DmgStone_ExtraHarvest.DmgType_Melee_DmgStone_ExtraHarvest_C
// (None)

class UClass* UDmgType_Melee_DmgStone_ExtraHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_DmgStone_ExtraHarvest_C");

	return Clss;
}


// DmgType_Melee_DmgStone_ExtraHarvest_C DmgType_Melee_DmgStone_ExtraHarvest.Default__DmgType_Melee_DmgStone_ExtraHarvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_DmgStone_ExtraHarvest_C* UDmgType_Melee_DmgStone_ExtraHarvest_C::GetDefaultObj()
{
	static class UDmgType_Melee_DmgStone_ExtraHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_DmgStone_ExtraHarvest_C*>(UDmgType_Melee_DmgStone_ExtraHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


