#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C
// (None)

class UClass* UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C");

	return Clss;
}


// ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.Default__ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C* UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C*>(UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


