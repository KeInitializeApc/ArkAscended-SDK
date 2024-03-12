#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C
// (None)

class UClass* UToolTipWidgetPrimalDino_MinimalUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalDino_MinimalUI_C");

	return Clss;
}


// ToolTipWidgetPrimalDino_MinimalUI_C ToolTipWidgetPrimalDino_MinimalUI.Default__ToolTipWidgetPrimalDino_MinimalUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalDino_MinimalUI_C* UToolTipWidgetPrimalDino_MinimalUI_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalDino_MinimalUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalDino_MinimalUI_C*>(UToolTipWidgetPrimalDino_MinimalUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C.ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UToolTipWidgetPrimalDino_MinimalUI_C::ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolTipWidgetPrimalDino_MinimalUI_C", "ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI");

	Params::UToolTipWidgetPrimalDino_MinimalUI_C_ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


