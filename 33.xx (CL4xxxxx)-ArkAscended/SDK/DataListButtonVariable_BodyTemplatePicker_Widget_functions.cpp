#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C
// (None)

class UClass* UDataListButtonVariable_BodyTemplatePicker_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_BodyTemplatePicker_Widget_C");

	return Clss;
}


// DataListButtonVariable_BodyTemplatePicker_Widget_C DataListButtonVariable_BodyTemplatePicker_Widget.Default__DataListButtonVariable_BodyTemplatePicker_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_BodyTemplatePicker_Widget_C* UDataListButtonVariable_BodyTemplatePicker_Widget_C::GetDefaultObj()
{
	static class UDataListButtonVariable_BodyTemplatePicker_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_BodyTemplatePicker_Widget_C*>(UDataListButtonVariable_BodyTemplatePicker_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_BodyTemplatePicker_Widget_C::BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_BodyTemplatePicker_Widget_C", "BPExecutedCommandForPrimalUI");

	Params::UDataListButtonVariable_BodyTemplatePicker_Widget_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

}


// Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UPrimalUserWidget* UDataListButtonVariable_BodyTemplatePicker_Widget_C::ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_BodyTemplatePicker_Widget_C", "ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget");

	Params::UDataListButtonVariable_BodyTemplatePicker_Widget_C_ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget_Params Parms{};

	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


