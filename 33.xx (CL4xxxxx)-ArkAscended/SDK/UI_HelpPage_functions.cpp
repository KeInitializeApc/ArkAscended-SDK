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
// class USizeBox*                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_HelpPage_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetSizeboxForExtraHandheldScaling");

	Params::UUI_HelpPage_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_HelpPage_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetWidgetToScaleForHandheld");

	Params::UUI_HelpPage_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.BPHandleDockedModeChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsDocked                                                        (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UUI_HelpPage_C::BPHandleDockedModeChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "BPHandleDockedModeChange");

	Params::UUI_HelpPage_C_BPHandleDockedModeChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_bIsDocked                                           (Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)

struct FMargin UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bIsDocked, class UVerticalBoxSlot** CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot** CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "ExecuteUbergraph_UI_HelpPage");

	Params::UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bIsDocked = K2Node_Event_bIsDocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SlotAsVerticalBoxSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsVerticalBoxSlot_ReturnValue = Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue;

	if (CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;

	return Parms.ReturnValue;

}

}


