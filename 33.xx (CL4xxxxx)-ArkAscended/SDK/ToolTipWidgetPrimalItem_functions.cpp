#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C
// (None)

class UClass* UToolTipWidgetPrimalItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalItem_C");

	return Clss;
}


// ToolTipWidgetPrimalItem_C ToolTipWidgetPrimalItem.Default__ToolTipWidgetPrimalItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalItem_C* UToolTipWidgetPrimalItem_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalItem_C*>(UToolTipWidgetPrimalItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


