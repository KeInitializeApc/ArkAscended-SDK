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
// bool                               IsDesignTime                                                     (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_ToolTipWidget_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "PreConstruct");

	Params::UUI_ToolTipWidget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.ExecuteUbergraph_UI_ToolTipWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ToolTipWidget_C::ExecuteUbergraph_UI_ToolTipWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "ExecuteUbergraph_UI_ToolTipWidget");

	Params::UUI_ToolTipWidget_C_ExecuteUbergraph_UI_ToolTipWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


