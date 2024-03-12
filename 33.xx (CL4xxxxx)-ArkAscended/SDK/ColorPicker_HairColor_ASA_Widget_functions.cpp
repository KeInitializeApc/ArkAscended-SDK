#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorPicker_HairColor_ASA_Widget.ColorPicker_HairColor_ASA_Widget_C
// (None)

class UClass* UColorPicker_HairColor_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorPicker_HairColor_ASA_Widget_C");

	return Clss;
}


// ColorPicker_HairColor_ASA_Widget_C ColorPicker_HairColor_ASA_Widget.Default__ColorPicker_HairColor_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorPicker_HairColor_ASA_Widget_C* UColorPicker_HairColor_ASA_Widget_C::GetDefaultObj()
{
	static class UColorPicker_HairColor_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorPicker_HairColor_ASA_Widget_C*>(UColorPicker_HairColor_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}

}


