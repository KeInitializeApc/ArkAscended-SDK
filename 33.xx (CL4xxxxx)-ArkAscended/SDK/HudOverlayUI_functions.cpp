#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HudOverlayUI.HudOverlayUI_C
// (None)

class UClass* UHudOverlayUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HudOverlayUI_C");

	return Clss;
}


// HudOverlayUI_C HudOverlayUI.Default__HudOverlayUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHudOverlayUI_C* UHudOverlayUI_C::GetDefaultObj()
{
	static class UHudOverlayUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHudOverlayUI_C*>(UHudOverlayUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


