#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ToolTipWidget.UI_ToolTipWidget_C
// (None)

class UClass* UUI_ToolTipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ToolTipWidget_C");

	return Clss;
}


// UI_ToolTipWidget_C UI_ToolTipWidget.Default__UI_ToolTipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ToolTipWidget_C* UUI_ToolTipWidget_C::GetDefaultObj()
{
	static class UUI_ToolTipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ToolTipWidget_C*>(UUI_ToolTipWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_ToolTipWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "PreConstruct");

	Params::UUI_ToolTipWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.ExecuteUbergraph_UI_ToolTipWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ToolTipWidget_C::ExecuteUbergraph_UI_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "ExecuteUbergraph_UI_ToolTipWidget");

	Params::UUI_ToolTipWidget_C_ExecuteUbergraph_UI_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


