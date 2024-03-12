#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiUseTooltipWidget.MultiUseTooltipWidget_C
// (None)

class UClass* UMultiUseTooltipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiUseTooltipWidget_C");

	return Clss;
}


// MultiUseTooltipWidget_C MultiUseTooltipWidget.Default__MultiUseTooltipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiUseTooltipWidget_C* UMultiUseTooltipWidget_C::GetDefaultObj()
{
	static class UMultiUseTooltipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiUseTooltipWidget_C*>(UMultiUseTooltipWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


