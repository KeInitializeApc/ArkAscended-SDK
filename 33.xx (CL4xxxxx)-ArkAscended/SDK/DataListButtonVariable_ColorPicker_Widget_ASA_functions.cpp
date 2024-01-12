#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_ColorPicker_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_ColorPicker_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_ColorPicker_Widget_ASA_C DataListButtonVariable_ColorPicker_Widget_ASA.Default__DataListButtonVariable_ColorPicker_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_ColorPicker_Widget_ASA_C* UDataListButtonVariable_ColorPicker_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_ColorPicker_Widget_ASA_C*>(UDataListButtonVariable_ColorPicker_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExtraSetupToggledButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UColorPicker_ASA_Widget_C*   K2Node_DynamicCast_AsColor_Picker_ASA_Widget                     (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UColorPicker_ASA_Widget_C* UDataListButtonVariable_ColorPicker_Widget_ASA_C::ExtraSetupToggledButton(bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// class FText                        ReturnText                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText UDataListButtonVariable_ColorPicker_Widget_ASA_C::SetupTextValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_SetupTextValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "BPExecutedCommandForPrimalUI");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.UpdateColorPicker
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ColorPickerSliderValue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

struct FVector2D UDataListButtonVariable_ColorPicker_Widget_ASA_C::UpdateColorPicker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "UpdateColorPicker");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_UpdateColorPicker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   K2Node_Event_ColorPickerSliderValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UColorPicker_ASA_Widget_C*   K2Node_DynamicCast_AsColor_Picker_ASA_Widget                     (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class UUI_PCOptionsMenu*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_PCOptionsMenu*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

double UDataListButtonVariable_ColorPicker_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* CallFunc_SelectColor_ReturnValue, TArray<class UUI_PCOptionsMenu*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_PCOptionsMenu** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SelectColor_ReturnValue != nullptr)
		*CallFunc_SelectColor_ReturnValue = std::move(Parms.CallFunc_SelectColor_ReturnValue);

	if (CallFunc_GetAllWidgetsOfClass_FoundWidgets != nullptr)
		*CallFunc_GetAllWidgetsOfClass_FoundWidgets = std::move(Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SelectedOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_ColorPicker_Widget_ASA_C::SelectedOption__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "SelectedOption__DelegateSignature");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_SelectedOption__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ChangedColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ChangedColor__DelegateSignature");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}

}


