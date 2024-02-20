#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C
// (None)

class UClass* UASAUIWidget_HorizontalListSelector_Main_Style1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_HorizontalListSelector_Main_Style1_C");

	return Clss;
}


// ASAUIWidget_HorizontalListSelector_Main_Style1_C ASAUIWidget_HorizontalListSelector_Main_Style1.Default__ASAUIWidget_HorizontalListSelector_Main_Style1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_HorizontalListSelector_Main_Style1_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetDefaultObj()
{
	static class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_HorizontalListSelector_Main_Style1_C*>(UASAUIWidget_HorizontalListSelector_Main_Style1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Set Visible State Of Button Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool UASAUIWidget_HorizontalListSelector_Main_Style1_C::Set_Visible_State_Of_Button_Index(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Set Visible State Of Button Index");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Set_Visible_State_Of_Button_Index_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Valid                                                            (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)

bool UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetToIndex(int32 NewIndex, bool* Valid, bool* K2Node_SwitchInteger_CmpSuccess, class UASAUIWidget_Button_Style2A_C** K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetToIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToIndex_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetEnabledStateOfButtonIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               Enabled_                                                         (ConstParm, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UASAUIWidget_Button_Style2A_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetEnabledStateOfButtonIndex(int32* Index, bool Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetEnabledStateOfButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetEnabledStateOfButtonIndex_Params Parms{};

	Parms.Enabled_ = Enabled_;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetPreviousAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingIndex                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              FirstButton                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// int32                              FoundNextButton                                                  (Edit, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_GetLastAvailableButtonIndex_FirstButton                 (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetLastAvailableButtonIndex_FirstButton_1               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetPreviousAvailableButtonIndex(int32* StartingIndex, int32 FirstButton, int32 FoundNextButton, bool* Temp_bool_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetPreviousAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetPreviousAvailableButtonIndex_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundNextButton = FoundNextButton;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingIndex != nullptr)
		*StartingIndex = Parms.StartingIndex;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetNextAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingIndex                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              FirstButton                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// int32                              FoundNextButton                                                  (Edit, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_First_Available_Button_Index_FirstButton            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Get_First_Available_Button_Index_FirstButton_1          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)

class UASAUIWidget_Button_Style2A_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetNextAvailableButtonIndex(int32* StartingIndex, int32 FirstButton, int32 FoundNextButton, bool* Temp_bool_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetNextAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetNextAvailableButtonIndex_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundNextButton = FoundNextButton;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingIndex != nullptr)
		*StartingIndex = Parms.StartingIndex;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetLastAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstButton                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// int32                              FoundFirstButton                                                 (ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)

bool UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetLastAvailableButtonIndex(int32 FirstButton, int32 FoundFirstButton, bool* Temp_bool_Variable, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetLastAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetLastAvailableButtonIndex_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundFirstButton = FoundFirstButton;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Get First Available Button Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstButton                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// int32                              FoundFirstButton                                                 (ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)

class UASAUIWidget_Button_Style2A_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::Get_First_Available_Button_Index(int32 FirstButton, int32 FoundFirstButton, bool* Temp_bool_Variable, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Get First Available Button Index");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Get_First_Available_Button_Index_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundFirstButton = FoundFirstButton;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.FixConsoleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UASAUIWidget_HorizontalListSelector_Main_Style1_C::FixConsoleIcons(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UImage* K2Node_DynamicCast_AsImage, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "FixConsoleIcons");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_FixConsoleIcons_Params Parms{};

	Parms.K2Node_DynamicCast_AsImage = K2Node_DynamicCast_AsImage;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SwitchButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UASAUIWidget_Button_Style2A_C*NewLocalVar                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_GetPreviousAvailableButtonIndex_FirstButton             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetNextAvailableButtonIndex_FirstButton                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class UASAUIWidget_Button_Style2A_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::SwitchButton(bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SwitchButton");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SwitchButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Set All Buttons Inactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UASAUIWidget_HorizontalListSelector_Main_Style1_C::Set_All_Buttons_Inactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Set All Buttons Inactive");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Set_All_Buttons_Inactive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "PreConstruct");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.UpdateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::UpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "UpdateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UASAUIWidget_HorizontalListSelector_Main_Style1_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Tick");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToSpecificIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetToSpecificIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetToSpecificIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToSpecificIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUI*                   K2Node_DynamicCast_AsPrimal_UI                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_4                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_5                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_6                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_7                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_8                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_9                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_10                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<class UASAUIWidget_Button_Style2A_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2D*                  CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_SetToIndex_Valid                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASAUIWidget_HorizontalListSelector_Main_Style1_C::ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1(class UPrimalUI* K2Node_DynamicCast_AsPrimal_UI, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, bool CallFunc_NotEqual_IntInt_ReturnValue_10, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32* K2Node_ComponentBoundEvent_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_UI = K2Node_DynamicCast_AsPrimal_UI;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_4 = CallFunc_NotEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_5 = CallFunc_NotEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_6 = CallFunc_NotEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_7 = CallFunc_NotEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_8 = CallFunc_NotEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_9 = CallFunc_NotEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_10 = CallFunc_NotEqual_IntInt_ReturnValue_10;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_ComponentBoundEvent_Index != nullptr)
		*K2Node_ComponentBoundEvent_Index = Parms.K2Node_ComponentBoundEvent_Index;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChangedIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChangedIndex__DelegateSignature(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChangedIndex__DelegateSignature");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChangedIndex__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_10__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_10__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_10__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_9__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_9__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_9__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_8__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_8__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_8__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_7__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_7__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_7__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_6__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_6__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_6__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_5__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_5__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_4__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_3__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_1__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


