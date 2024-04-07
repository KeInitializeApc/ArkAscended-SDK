#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionTimeRemainingWidget.MissionTimeRemainingWidget_C
// (None)

class UClass* UMissionTimeRemainingWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTimeRemainingWidget_C");

	return Clss;
}


// MissionTimeRemainingWidget_C MissionTimeRemainingWidget.Default__MissionTimeRemainingWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionTimeRemainingWidget_C* UMissionTimeRemainingWidget_C::GetDefaultObj()
{
	static class UMissionTimeRemainingWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionTimeRemainingWidget_C*>(UMissionTimeRemainingWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


