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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_ToolTipWidget_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "PreConstruct");

	Params::UUI_ToolTipWidget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.ExecuteUbergraph_UI_ToolTipWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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


