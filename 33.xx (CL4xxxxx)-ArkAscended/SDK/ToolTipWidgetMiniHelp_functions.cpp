#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C
// (None)

class UClass* UToolTipWidgetMiniHelp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetMiniHelp_C");

	return Clss;
}


// ToolTipWidgetMiniHelp_C ToolTipWidgetMiniHelp.Default__ToolTipWidgetMiniHelp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetMiniHelp_C* UToolTipWidgetMiniHelp_C::GetDefaultObj()
{
	static class UToolTipWidgetMiniHelp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetMiniHelp_C*>(UToolTipWidgetMiniHelp_C::StaticClass()->DefaultObject);

	return Default;
}

}


