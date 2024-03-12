#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C
// (None)

class UClass* UCryopodInventoryTooltipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CryopodInventoryTooltipWidget_C");

	return Clss;
}


// CryopodInventoryTooltipWidget_C CryopodInventoryTooltipWidget.Default__CryopodInventoryTooltipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCryopodInventoryTooltipWidget_C* UCryopodInventoryTooltipWidget_C::GetDefaultObj()
{
	static class UCryopodInventoryTooltipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCryopodInventoryTooltipWidget_C*>(UCryopodInventoryTooltipWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


