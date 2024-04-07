#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiUseActionWidget_UI.MultiUseActionWidget_UI_C
// (None)

class UClass* UMultiUseActionWidget_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiUseActionWidget_UI_C");

	return Clss;
}


// MultiUseActionWidget_UI_C MultiUseActionWidget_UI.Default__MultiUseActionWidget_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiUseActionWidget_UI_C* UMultiUseActionWidget_UI_C::GetDefaultObj()
{
	static class UMultiUseActionWidget_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiUseActionWidget_UI_C*>(UMultiUseActionWidget_UI_C::StaticClass()->DefaultObject);

	return Default;
}

}


