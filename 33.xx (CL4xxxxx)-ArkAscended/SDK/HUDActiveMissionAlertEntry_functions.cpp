#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C
// (None)

class UClass* UHUDActiveMissionAlertEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDActiveMissionAlertEntry_C");

	return Clss;
}


// HUDActiveMissionAlertEntry_C HUDActiveMissionAlertEntry.Default__HUDActiveMissionAlertEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDActiveMissionAlertEntry_C* UHUDActiveMissionAlertEntry_C::GetDefaultObj()
{
	static class UHUDActiveMissionAlertEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDActiveMissionAlertEntry_C*>(UHUDActiveMissionAlertEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


