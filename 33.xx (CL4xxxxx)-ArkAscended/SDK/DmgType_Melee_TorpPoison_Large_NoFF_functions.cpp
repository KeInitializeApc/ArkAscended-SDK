#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_TorpPoison_Large_NoFF.DmgType_Melee_TorpPoison_Large_NoFF_C
// (None)

class UClass* UDmgType_Melee_TorpPoison_Large_NoFF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_TorpPoison_Large_NoFF_C");

	return Clss;
}


// DmgType_Melee_TorpPoison_Large_NoFF_C DmgType_Melee_TorpPoison_Large_NoFF.Default__DmgType_Melee_TorpPoison_Large_NoFF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_TorpPoison_Large_NoFF_C* UDmgType_Melee_TorpPoison_Large_NoFF_C::GetDefaultObj()
{
	static class UDmgType_Melee_TorpPoison_Large_NoFF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_TorpPoison_Large_NoFF_C*>(UDmgType_Melee_TorpPoison_Large_NoFF_C::StaticClass()->DefaultObject);

	return Default;
}

}


