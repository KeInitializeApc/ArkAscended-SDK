#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_Widget_ASA_C DataListButtonVariable_Widget_ASA.Default__DataListButtonVariable_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_Widget_ASA_C* UDataListButtonVariable_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_Widget_ASA_C*>(UDataListButtonVariable_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.IsExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::IsExpanded(bool ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "IsExpanded");

	Params::UDataListButtonVariable_Widget_ASA_C_IsExpanded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.CloseSlider
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::CloseSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "CloseSlider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasSlider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USlider_ASA_Widget_C*        K2Node_DynamicCast_AsSlider_ASA_Widget                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::HasSlider(class USlider* ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class USlider_ASA_Widget_C** K2Node_DynamicCast_AsSlider_ASA_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HasSlider");

	Params::UDataListButtonVariable_Widget_ASA_C_HasSlider_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsSlider_ASA_Widget != nullptr)
		*K2Node_DynamicCast_AsSlider_ASA_Widget = Parms.K2Node_DynamicCast_AsSlider_ASA_Widget;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasExpandedSlider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USlider_ASA_Widget_C*        K2Node_DynamicCast_AsSlider_ASA_Widget                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::HasExpandedSlider(class USlider* ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class USlider_ASA_Widget_C** K2Node_DynamicCast_AsSlider_ASA_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HasExpandedSlider");

	Params::UDataListButtonVariable_Widget_ASA_C_HasExpandedSlider_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (K2Node_DynamicCast_AsSlider_ASA_Widget != nullptr)
		*K2Node_DynamicCast_AsSlider_ASA_Widget = Parms.K2Node_DynamicCast_AsSlider_ASA_Widget;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HideValueLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideValue                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::HideValueLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HideValueLabel");

	Params::UDataListButtonVariable_Widget_ASA_C_HideValueLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetIsSelectedBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UDataListButtonVariable_Widget_ASA_C::GetIsSelectedBP(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetIsSelectedBP");

	Params::UDataListButtonVariable_Widget_ASA_C_GetIsSelectedBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetAllValueWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_Widget_ASA_C::GetAllValueWidgets(const TArray<class UWidget*>& ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetAllValueWidgets");

	Params::UDataListButtonVariable_Widget_ASA_C_GetAllValueWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValueOverride
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// class FText                        ReturnText                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UDataListButtonVariable_Widget_ASA_C::SetupTextValueOverride(class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupTextValueOverride");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupTextValueOverride_Params Parms{};

	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupNewValueWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// int32                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               PreventParentCall                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_PCOptionsMenu*           CallFunc_GetLivePCOptionsMenu_ReturnValue                        (Edit, ConstParm, Net, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_SetupTextValue_ReturnText                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_SetupTextValueOverride_ReturnText                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::SetupNewValueWidget(const class FString& InString, int32* InputPin, bool PreventParentCall, class UUI_PCOptionsMenu* CallFunc_GetLivePCOptionsMenu_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_SetupTextValue_ReturnText, class FText CallFunc_SetupTextValueOverride_ReturnText, float CallFunc_GetFloatValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupNewValueWidget");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupNewValueWidget_Params Parms{};

	Parms.InString = InString;
	Parms.PreventParentCall = PreventParentCall;
	Parms.CallFunc_GetLivePCOptionsMenu_ReturnValue = CallFunc_GetLivePCOptionsMenu_ReturnValue;
	Parms.CallFunc_SetupTextValue_ReturnText = CallFunc_SetupTextValue_ReturnText;
	Parms.CallFunc_SetupTextValueOverride_ReturnText = CallFunc_SetupTextValueOverride_ReturnText;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupToggledButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::ExtraSetupToggledButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// class FText                        ReturnText                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

float UDataListButtonVariable_Widget_ASA_C::SetupTextValue(class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupTextValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalUserWidget*           UserWidget                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

class UPrimalUserWidget* UDataListButtonVariable_Widget_ASA_C::ExtraSetupWidget(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExtraSetupWidget");

	Params::UDataListButtonVariable_Widget_ASA_C_ExtraSetupWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupOptionWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UPrimalUserWidget*>   CallFunc_GetWidgetsToAdd_UserWidgets                             (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, GlobalConfig, SubobjectReference)

class UVerticalBoxSlot* UDataListButtonVariable_Widget_ASA_C::SetupOptionWidgets(bool CallFunc_HasAnyChildren_ReturnValue, const TArray<class UPrimalUserWidget*>& CallFunc_GetWidgetsToAdd_UserWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupOptionWidgets");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupOptionWidgets_Params Parms{};

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetWidgetsToAdd_UserWidgets = CallFunc_GetWidgetsToAdd_UserWidgets;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetWidgetsToAdd
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimalUserWidget*>   UserWidgets                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UPrimalUserWidget*>   LocalWIdget                                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::GetWidgetsToAdd(const TArray<class UPrimalUserWidget*>& UserWidgets, TArray<class UPrimalUserWidget*>* LocalWIdget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetWidgetsToAdd");

	Params::UDataListButtonVariable_Widget_ASA_C_GetWidgetsToAdd_Params Parms{};

	Parms.UserWidgets = UserWidgets;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalWIdget != nullptr)
		*LocalWIdget = std::move(Parms.LocalWIdget);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Setup Values Index
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               PreventCallParent                                                (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (BlueprintReadOnly, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_2                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam3_ImplicitCast                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam2_ImplicitCast                       (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam1_ImplicitCast                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

float UDataListButtonVariable_Widget_ASA_C::Setup_Values_Index(int32* Index, bool PreventCallParent, int32 CallFunc_Conv_BoolToInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, double* CallFunc_Conv_StringToDouble_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, float* K2Node_MakeStruct_FloatParam3_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Setup Values Index");

	Params::UDataListButtonVariable_Widget_ASA_C_Setup_Values_Index_Params Parms{};

	Parms.PreventCallParent = PreventCallParent;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_StringToDouble_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_1 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_StringToDouble_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_2 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_2;

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (K2Node_MakeStruct_FloatParam3_ImplicitCast != nullptr)
		*K2Node_MakeStruct_FloatParam3_ImplicitCast = Parms.K2Node_MakeStruct_FloatParam3_ImplicitCast;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_Widget_ASA_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_Widget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Set                                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature");

	Params::UDataListButtonVariable_Widget_ASA_C_BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature_Params Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

struct FBPNetExecParams UDataListButtonVariable_Widget_ASA_C::BPExecutedCommandForPrimalUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BPExecutedCommandForPrimalUI");

	Params::UDataListButtonVariable_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetParameterValue
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               bPreventCallParent                                               (Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::SetParameterValue(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetParameterValue");

	Params::UDataListButtonVariable_Widget_ASA_C_SetParameterValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.OnOverridedParameterValue
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               bPreventCallParent                                               (Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::OnOverridedParameterValue(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "OnOverridedParameterValue");

	Params::UDataListButtonVariable_Widget_ASA_C_OnOverridedParameterValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetIsSelectedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UDataListButtonVariable_Widget_ASA_C::SetIsSelectedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetIsSelectedBP");

	Params::UDataListButtonVariable_Widget_ASA_C_SetIsSelectedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.UpdateColorPicker
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ColorPickerSliderValue                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector2D UDataListButtonVariable_Widget_ASA_C::UpdateColorPicker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "UpdateColorPicker");

	Params::UDataListButtonVariable_Widget_ASA_C_UpdateColorPicker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UDataListButtonVariable_Widget_ASA_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Tick");

	Params::UDataListButtonVariable_Widget_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_Set                                   (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_FromSelectOtherOption                 (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// class FString                      K2Node_Event_Value_1                                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bPreventCallParent_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_Event_Value                                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bPreventCallParent                                  (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_SetupTextValueOverride_ReturnText                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UDataListButtonVariable_Widget_ASA_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_Selected                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_2                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_3                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   K2Node_Event_ColorPickerSliderValue                              (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UOverallFatMusclePicker_C*   K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker                   (ConstParm, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget_1                        (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UDataListButtonVariable_Widget_ASA_C*CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)

double UDataListButtonVariable_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_Widget_ASA(bool* K2Node_ComponentBoundEvent_Set, bool* K2Node_ComponentBoundEvent_FromSelectOtherOption, double* CallFunc_Conv_StringToDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class FString* K2Node_Event_Value_1, bool* K2Node_Event_bPreventCallParent_1, class FString* K2Node_Event_Value, bool* K2Node_Event_bPreventCallParent, class FText CallFunc_SetupTextValueOverride_ReturnText, bool* K2Node_Event_Selected, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_2, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue_3, double* CallFunc_FClamp_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue_1, class FString* CallFunc_SelectString_ReturnValue_1, class UOverallFatMusclePicker_C** K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_Widget_ASA");

	Params::UDataListButtonVariable_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Widget_ASA_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_SetupTextValueOverride_ReturnText = CallFunc_SetupTextValueOverride_ReturnText;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_Set != nullptr)
		*K2Node_ComponentBoundEvent_Set = Parms.K2Node_ComponentBoundEvent_Set;

	if (K2Node_ComponentBoundEvent_FromSelectOtherOption != nullptr)
		*K2Node_ComponentBoundEvent_FromSelectOtherOption = Parms.K2Node_ComponentBoundEvent_FromSelectOtherOption;

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (K2Node_Event_Value_1 != nullptr)
		*K2Node_Event_Value_1 = std::move(Parms.K2Node_Event_Value_1);

	if (K2Node_Event_bPreventCallParent_1 != nullptr)
		*K2Node_Event_bPreventCallParent_1 = Parms.K2Node_Event_bPreventCallParent_1;

	if (K2Node_Event_Value != nullptr)
		*K2Node_Event_Value = std::move(Parms.K2Node_Event_Value);

	if (K2Node_Event_bPreventCallParent != nullptr)
		*K2Node_Event_bPreventCallParent = Parms.K2Node_Event_bPreventCallParent;

	if (K2Node_Event_Selected != nullptr)
		*K2Node_Event_Selected = Parms.K2Node_Event_Selected;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_StringToDouble_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_1 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_1;

	if (CallFunc_Conv_StringToDouble_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_2 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_2;

	if (CallFunc_Conv_DoubleToString_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue);

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_3 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_3;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_Conv_DoubleToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue_1);

	if (CallFunc_SelectString_ReturnValue_1 != nullptr)
		*CallFunc_SelectString_ReturnValue_1 = std::move(Parms.CallFunc_SelectString_ReturnValue_1);

	if (K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker != nullptr)
		*K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker = Parms.K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ReturnValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UDataListButtonVariable_Widget_ASA_C::ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ReturnValue__DelegateSignature");

	Params::UDataListButtonVariable_Widget_ASA_C_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}

}


