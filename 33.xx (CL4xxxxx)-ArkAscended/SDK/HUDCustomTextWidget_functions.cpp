#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDCustomTextWidget.HUDCustomTextWidget_C
// (None)

class UClass* UHUDCustomTextWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDCustomTextWidget_C");

	return Clss;
}


// HUDCustomTextWidget_C HUDCustomTextWidget.Default__HUDCustomTextWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDCustomTextWidget_C* UHUDCustomTextWidget_C::GetDefaultObj()
{
	static class UHUDCustomTextWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDCustomTextWidget_C*>(UHUDCustomTextWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


