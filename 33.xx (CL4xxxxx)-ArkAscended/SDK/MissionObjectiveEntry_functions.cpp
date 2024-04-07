#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C
// (None)

class UClass* UMissionObjectiveEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveEntry_C");

	return Clss;
}


// MissionObjectiveEntry_C MissionObjectiveEntry.Default__MissionObjectiveEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionObjectiveEntry_C* UMissionObjectiveEntry_C::GetDefaultObj()
{
	static class UMissionObjectiveEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionObjectiveEntry_C*>(UMissionObjectiveEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


