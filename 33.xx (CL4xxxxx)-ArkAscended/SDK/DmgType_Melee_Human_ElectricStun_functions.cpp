#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Human_ElectricStun.DmgType_Melee_Human_ElectricStun_C
// (None)

class UClass* UDmgType_Melee_Human_ElectricStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Human_ElectricStun_C");

	return Clss;
}


// DmgType_Melee_Human_ElectricStun_C DmgType_Melee_Human_ElectricStun.Default__DmgType_Melee_Human_ElectricStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Human_ElectricStun_C* UDmgType_Melee_Human_ElectricStun_C::GetDefaultObj()
{
	static class UDmgType_Melee_Human_ElectricStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Human_ElectricStun_C*>(UDmgType_Melee_Human_ElectricStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


