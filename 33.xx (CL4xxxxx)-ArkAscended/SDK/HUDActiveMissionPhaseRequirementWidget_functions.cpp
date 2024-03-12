#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C
// (None)

class UClass* UHUDActiveMissionPhaseRequirementWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDActiveMissionPhaseRequirementWidget_C");

	return Clss;
}


// HUDActiveMissionPhaseRequirementWidget_C HUDActiveMissionPhaseRequirementWidget.Default__HUDActiveMissionPhaseRequirementWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDActiveMissionPhaseRequirementWidget_C* UHUDActiveMissionPhaseRequirementWidget_C::GetDefaultObj()
{
	static class UHUDActiveMissionPhaseRequirementWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDActiveMissionPhaseRequirementWidget_C*>(UHUDActiveMissionPhaseRequirementWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


