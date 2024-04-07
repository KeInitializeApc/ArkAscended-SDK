#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C
// (None)

class UClass* UHUDCustomImageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDCustomImageWidget_C");

	return Clss;
}


// HUDCustomImageWidget_C HUDCustomImageWidget.Default__HUDCustomImageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDCustomImageWidget_C* UHUDCustomImageWidget_C::GetDefaultObj()
{
	static class UHUDCustomImageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDCustomImageWidget_C*>(UHUDCustomImageWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


