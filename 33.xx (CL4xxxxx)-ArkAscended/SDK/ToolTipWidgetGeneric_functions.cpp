#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetGeneric.ToolTipWidgetGeneric_C
// (None)

class UClass* UToolTipWidgetGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetGeneric_C");

	return Clss;
}


// ToolTipWidgetGeneric_C ToolTipWidgetGeneric.Default__ToolTipWidgetGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetGeneric_C* UToolTipWidgetGeneric_C::GetDefaultObj()
{
	static class UToolTipWidgetGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetGeneric_C*>(UToolTipWidgetGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


