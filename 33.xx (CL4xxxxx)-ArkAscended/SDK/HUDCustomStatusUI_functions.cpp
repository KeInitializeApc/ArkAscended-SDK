#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDCustomStatusUI.HUDCustomStatusUI_C
// (None)

class UClass* UHUDCustomStatusUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDCustomStatusUI_C");

	return Clss;
}


// HUDCustomStatusUI_C HUDCustomStatusUI.Default__HUDCustomStatusUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDCustomStatusUI_C* UHUDCustomStatusUI_C::GetDefaultObj()
{
	static class UHUDCustomStatusUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDCustomStatusUI_C*>(UHUDCustomStatusUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


