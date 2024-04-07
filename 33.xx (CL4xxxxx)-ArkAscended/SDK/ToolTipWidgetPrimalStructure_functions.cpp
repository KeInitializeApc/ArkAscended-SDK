#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C
// (None)

class UClass* UToolTipWidgetPrimalStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalStructure_C");

	return Clss;
}


// ToolTipWidgetPrimalStructure_C ToolTipWidgetPrimalStructure.Default__ToolTipWidgetPrimalStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalStructure_C* UToolTipWidgetPrimalStructure_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalStructure_C*>(UToolTipWidgetPrimalStructure_C::StaticClass()->DefaultObject);

	return Default;
}

}


