#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_FlameArrow_Gauntlet.DmgType_FlameArrow_Gauntlet_C
// (None)

class UClass* UDmgType_FlameArrow_Gauntlet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_FlameArrow_Gauntlet_C");

	return Clss;
}


// DmgType_FlameArrow_Gauntlet_C DmgType_FlameArrow_Gauntlet.Default__DmgType_FlameArrow_Gauntlet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_FlameArrow_Gauntlet_C* UDmgType_FlameArrow_Gauntlet_C::GetDefaultObj()
{
	static class UDmgType_FlameArrow_Gauntlet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_FlameArrow_Gauntlet_C*>(UDmgType_FlameArrow_Gauntlet_C::StaticClass()->DefaultObject);

	return Default;
}

}


