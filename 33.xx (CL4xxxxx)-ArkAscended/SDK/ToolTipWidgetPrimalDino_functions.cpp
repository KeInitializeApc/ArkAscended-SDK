#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C
// (None)

class UClass* UToolTipWidgetPrimalDino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalDino_C");

	return Clss;
}


// ToolTipWidgetPrimalDino_C ToolTipWidgetPrimalDino.Default__ToolTipWidgetPrimalDino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalDino_C* UToolTipWidgetPrimalDino_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalDino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalDino_C*>(UToolTipWidgetPrimalDino_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C.ExecuteUbergraph_ToolTipWidgetPrimalDino
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

int32 UToolTipWidgetPrimalDino_C::ExecuteUbergraph_ToolTipWidgetPrimalDino()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolTipWidgetPrimalDino_C", "ExecuteUbergraph_ToolTipWidgetPrimalDino");

	Params::UToolTipWidgetPrimalDino_C_ExecuteUbergraph_ToolTipWidgetPrimalDino_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


