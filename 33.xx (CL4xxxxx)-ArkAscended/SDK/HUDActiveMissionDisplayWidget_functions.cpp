#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C
// (None)

class UClass* UHUDActiveMissionDisplayWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDActiveMissionDisplayWidget_C");

	return Clss;
}


// HUDActiveMissionDisplayWidget_C HUDActiveMissionDisplayWidget.Default__HUDActiveMissionDisplayWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDActiveMissionDisplayWidget_C* UHUDActiveMissionDisplayWidget_C::GetDefaultObj()
{
	static class UHUDActiveMissionDisplayWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDActiveMissionDisplayWidget_C*>(UHUDActiveMissionDisplayWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


