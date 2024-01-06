#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style1B.ASAUIWidget_Button_Style1B_C
// (None)

class UClass* UASAUIWidget_Button_Style1B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_Button_Style1B_C");

	return Clss;
}


// ASAUIWidget_Button_Style1B_C ASAUIWidget_Button_Style1B.Default__ASAUIWidget_Button_Style1B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_Button_Style1B_C* UASAUIWidget_Button_Style1B_C::GetDefaultObj()
{
	static class UASAUIWidget_Button_Style1B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_Button_Style1B_C*>(UASAUIWidget_Button_Style1B_C::StaticClass()->DefaultObject);

	return Default;
}

}


