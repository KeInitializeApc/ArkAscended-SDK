#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style1A.ASAUIWidget_Button_Style1A_C
// (None)

class UClass* UASAUIWidget_Button_Style1A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_Button_Style1A_C");

	return Clss;
}


// ASAUIWidget_Button_Style1A_C ASAUIWidget_Button_Style1A.Default__ASAUIWidget_Button_Style1A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_Button_Style1A_C* UASAUIWidget_Button_Style1A_C::GetDefaultObj()
{
	static class UASAUIWidget_Button_Style1A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_Button_Style1A_C*>(UASAUIWidget_Button_Style1A_C::StaticClass()->DefaultObject);

	return Default;
}

}


