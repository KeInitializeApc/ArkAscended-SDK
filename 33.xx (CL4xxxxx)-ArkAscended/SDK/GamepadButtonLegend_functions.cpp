#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C
// (None)

class UClass* UGamepadButtonLegend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadButtonLegend_C");

	return Clss;
}


// GamepadButtonLegend_C GamepadButtonLegend.Default__GamepadButtonLegend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadButtonLegend_C* UGamepadButtonLegend_C::GetDefaultObj()
{
	static class UGamepadButtonLegend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadButtonLegend_C*>(UGamepadButtonLegend_C::StaticClass()->DefaultObject);

	return Default;
}

}


