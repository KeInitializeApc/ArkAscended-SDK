#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiUseTooltipWidget_DroppedItem.MultiUseTooltipWidget_DroppedItem_C
// (None)

class UClass* UMultiUseTooltipWidget_DroppedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiUseTooltipWidget_DroppedItem_C");

	return Clss;
}


// MultiUseTooltipWidget_DroppedItem_C MultiUseTooltipWidget_DroppedItem.Default__MultiUseTooltipWidget_DroppedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiUseTooltipWidget_DroppedItem_C* UMultiUseTooltipWidget_DroppedItem_C::GetDefaultObj()
{
	static class UMultiUseTooltipWidget_DroppedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiUseTooltipWidget_DroppedItem_C*>(UMultiUseTooltipWidget_DroppedItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


