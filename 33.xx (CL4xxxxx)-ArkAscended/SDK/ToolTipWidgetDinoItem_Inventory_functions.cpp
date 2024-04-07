#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetDinoItem_Inventory.ToolTipWidgetDinoItem_Inventory_C
// (None)

class UClass* UToolTipWidgetDinoItem_Inventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetDinoItem_Inventory_C");

	return Clss;
}


// ToolTipWidgetDinoItem_Inventory_C ToolTipWidgetDinoItem_Inventory.Default__ToolTipWidgetDinoItem_Inventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetDinoItem_Inventory_C* UToolTipWidgetDinoItem_Inventory_C::GetDefaultObj()
{
	static class UToolTipWidgetDinoItem_Inventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetDinoItem_Inventory_C*>(UToolTipWidgetDinoItem_Inventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


