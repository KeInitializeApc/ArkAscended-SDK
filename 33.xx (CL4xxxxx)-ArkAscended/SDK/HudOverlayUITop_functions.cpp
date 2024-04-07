#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C
// (None)

class UClass* UHudOverlayUITop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HudOverlayUITop_C");

	return Clss;
}


// HudOverlayUITop_C HudOverlayUITop.Default__HudOverlayUITop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHudOverlayUITop_C* UHudOverlayUITop_C::GetDefaultObj()
{
	static class UHudOverlayUITop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHudOverlayUITop_C*>(UHudOverlayUITop_C::StaticClass()->DefaultObject);

	return Default;
}

}


