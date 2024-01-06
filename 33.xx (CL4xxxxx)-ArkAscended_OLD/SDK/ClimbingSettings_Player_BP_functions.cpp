#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C
// (None)

class UClass* UClimbingSettings_Player_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClimbingSettings_Player_BP_C");

	return Clss;
}


// ClimbingSettings_Player_BP_C ClimbingSettings_Player_BP.Default__ClimbingSettings_Player_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClimbingSettings_Player_BP_C* UClimbingSettings_Player_BP_C::GetDefaultObj()
{
	static class UClimbingSettings_Player_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClimbingSettings_Player_BP_C*>(UClimbingSettings_Player_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


