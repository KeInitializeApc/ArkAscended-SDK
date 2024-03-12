#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GamepadButtonLegend_Left.GamepadButtonLegend_Left_C
// (None)

class UClass* UGamepadButtonLegend_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadButtonLegend_Left_C");

	return Clss;
}


// GamepadButtonLegend_Left_C GamepadButtonLegend_Left.Default__GamepadButtonLegend_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadButtonLegend_Left_C* UGamepadButtonLegend_Left_C::GetDefaultObj()
{
	static class UGamepadButtonLegend_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadButtonLegend_Left_C*>(UGamepadButtonLegend_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


