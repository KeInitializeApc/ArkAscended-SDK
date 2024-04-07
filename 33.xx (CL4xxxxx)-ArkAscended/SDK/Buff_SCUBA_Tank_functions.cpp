#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_SCUBA_Tank.Buff_SCUBA_Tank_C
// (Actor)

class UClass* ABuff_SCUBA_Tank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_SCUBA_Tank_C");

	return Clss;
}


// Buff_SCUBA_Tank_C Buff_SCUBA_Tank.Default__Buff_SCUBA_Tank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_SCUBA_Tank_C* ABuff_SCUBA_Tank_C::GetDefaultObj()
{
	static class ABuff_SCUBA_Tank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_SCUBA_Tank_C*>(ABuff_SCUBA_Tank_C::StaticClass()->DefaultObject);

	return Default;
}

}


