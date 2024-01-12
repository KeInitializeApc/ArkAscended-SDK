#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HelpPage.UI_HelpPage_C
// (None)

class UClass* UUI_HelpPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HelpPage_C");

	return Clss;
}


// UI_HelpPage_C UI_HelpPage.Default__UI_HelpPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HelpPage_C* UUI_HelpPage_C::GetDefaultObj()
{
	static class UUI_HelpPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HelpPage_C*>(UUI_HelpPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HelpPage.UI_HelpPage_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USizeBox* UUI_HelpPage_C::GetSizeboxForExtraHandheldScaling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetSizeboxForExtraHandheldScaling");

	Params::UUI_HelpPage_C_GetSizeboxForExtraHandheldScaling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HelpPage.UI_HelpPage_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UUI_HelpPage_C::GetWidgetToScaleForHandheld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetWidgetToScaleForHandheld");

	Params::UUI_HelpPage_C_GetWidgetToScaleForHandheld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HelpPage.UI_HelpPage_C.BPHandleDockedModeChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsDocked                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UUI_HelpPage_C::BPHandleDockedModeChange(bool bIsDocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "BPHandleDockedModeChange");

	Params::UUI_HelpPage_C_BPHandleDockedModeChange_Params Parms{};

	Parms.bIsDocked = bIsDocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HelpPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_bIsDocked                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

class UVerticalBoxSlot* UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, struct FMargin* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "ExecuteUbergraph_UI_HelpPage");

	Params::UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params Parms{};

	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}

}


