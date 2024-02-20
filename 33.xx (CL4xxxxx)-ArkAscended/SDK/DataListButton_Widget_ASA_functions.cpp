#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_Widget_ASA.DataListButton_Widget_ASA_C
// (None)

class UClass* UDataListButton_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_Widget_ASA_C");

	return Clss;
}


// DataListButton_Widget_ASA_C DataListButton_Widget_ASA.Default__DataListButton_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_Widget_ASA_C* UDataListButton_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButton_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_Widget_ASA_C*>(UDataListButton_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetIsAlternativeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, NonTransactional)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_4                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetVisibleChildIndex_Index                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_5                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetVisibleChildIndex_Index_1                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UDataListButton_Widget_ASA_C::GetIsAlternativeColor(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_SelectInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetIsAlternativeColor");

	Params::UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetVisibleChildIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Parent                                                           (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              ChildrenIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

int32 UDataListButton_Widget_ASA_C::GetVisibleChildIndex(class UPanelWidget** Parent, int32* Index, bool* Temp_bool_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetVisibleChildIndex");

	Params::UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Parent != nullptr)
		*Parent = Parms.Parent;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

struct FLinearColor UDataListButton_Widget_ASA_C::UpdateColorBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "UpdateColorBrush");

	Params::UDataListButton_Widget_ASA_C_UpdateColorBrush_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               FromSelectOtherOption                                            (EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsAlternativeColor_ReturnValue                       (Edit, ConstParm, ExportObject, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListButton_Widget_ASA_C::SetupToggledState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetupToggledState");

	Params::UDataListButton_Widget_ASA_C_SetupToggledState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListButton_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButton_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UDataListButton_Widget_ASA_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "PreConstruct");

	Params::UDataListButton_Widget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CanEditTextVariable                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               UseOverrideValueText                                             (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::SetTextButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetTextButton");

	Params::UDataListButton_Widget_ASA_C_SetTextButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetValueText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ValueText                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

class FText UDataListButton_Widget_ASA_C::SetValueText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetValueText");

	Params::UDataListButton_Widget_ASA_C_SetValueText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UDataListButton_Widget_ASA_C::BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UDataListButton_Widget_ASA_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Tick");

	Params::UDataListButton_Widget_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        K2Node_CustomEvent_NewText                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_CanEditTextVariable                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_UseOverrideValueText                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FText                        K2Node_CustomEvent_ValueText                                     (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::ExecuteUbergraph_DataListButton_Widget_ASA(class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ExecuteUbergraph_DataListButton_Widget_ASA");

	Params::UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set                                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::ToggledState__DelegateSignature(bool Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ToggledState__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_ToggledState__DelegateSignature_Params Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


