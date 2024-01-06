#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Whip.DmgType_Melee_Whip_C
// (None)

class UClass* UDmgType_Melee_Whip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Whip_C");

	return Clss;
}


// DmgType_Melee_Whip_C DmgType_Melee_Whip.Default__DmgType_Melee_Whip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Whip_C* UDmgType_Melee_Whip_C::GetDefaultObj()
{
	static class UDmgType_Melee_Whip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Whip_C*>(UDmgType_Melee_Whip_C::StaticClass()->DefaultObject);

	return Default;
}

}


