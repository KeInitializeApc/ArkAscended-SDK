#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_DmgMetal_TekClaw.DmgType_Melee_DmgMetal_TekClaw_C
// (None)

class UClass* UDmgType_Melee_DmgMetal_TekClaw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_DmgMetal_TekClaw_C");

	return Clss;
}


// DmgType_Melee_DmgMetal_TekClaw_C DmgType_Melee_DmgMetal_TekClaw.Default__DmgType_Melee_DmgMetal_TekClaw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_DmgMetal_TekClaw_C* UDmgType_Melee_DmgMetal_TekClaw_C::GetDefaultObj()
{
	static class UDmgType_Melee_DmgMetal_TekClaw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_DmgMetal_TekClaw_C*>(UDmgType_Melee_DmgMetal_TekClaw_C::StaticClass()->DefaultObject);

	return Default;
}

}


