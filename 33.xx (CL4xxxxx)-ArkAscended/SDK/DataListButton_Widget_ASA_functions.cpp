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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_4                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetVisibleChildIndex_Index                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_5                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetVisibleChildIndex_Index_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UDataListButton_Widget_ASA_C::GetIsAlternativeColor(class UPanelWidget** CallFunc_GetParent_ReturnValue, class UPanelWidget** CallFunc_GetParent_ReturnValue_1, class UPanelWidget** CallFunc_GetParent_ReturnValue_2, class UPanelWidget** CallFunc_GetParent_ReturnValue_3, class UPanelWidget** CallFunc_GetParent_ReturnValue_4, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, class UPanelWidget** CallFunc_GetParent_ReturnValue_5, int32* CallFunc_SelectInt_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetIsAlternativeColor");

	Params::UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetParent_ReturnValue != nullptr)
		*CallFunc_GetParent_ReturnValue = Parms.CallFunc_GetParent_ReturnValue;

	if (CallFunc_GetParent_ReturnValue_1 != nullptr)
		*CallFunc_GetParent_ReturnValue_1 = Parms.CallFunc_GetParent_ReturnValue_1;

	if (CallFunc_GetParent_ReturnValue_2 != nullptr)
		*CallFunc_GetParent_ReturnValue_2 = Parms.CallFunc_GetParent_ReturnValue_2;

	if (CallFunc_GetParent_ReturnValue_3 != nullptr)
		*CallFunc_GetParent_ReturnValue_3 = Parms.CallFunc_GetParent_ReturnValue_3;

	if (CallFunc_GetParent_ReturnValue_4 != nullptr)
		*CallFunc_GetParent_ReturnValue_4 = Parms.CallFunc_GetParent_ReturnValue_4;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetParent_ReturnValue_5 != nullptr)
		*CallFunc_GetParent_ReturnValue_5 = Parms.CallFunc_GetParent_ReturnValue_5;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetVisibleChildIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Parent                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              ChildrenIndex                                                    (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UDataListButton_Widget_ASA_C::GetVisibleChildIndex(class UPanelWidget* Parent, bool Temp_bool_Variable, int32* Temp_int_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetVisibleChildIndex");

	Params::UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params Parms{};

	Parms.Parent = Parent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)

struct FLinearColor UDataListButton_Widget_ASA_C::UpdateColorBrush(const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "UpdateColorBrush");

	Params::UDataListButton_Widget_ASA_C_UpdateColorBrush_Params Parms{};

	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               FromSelectOtherOption                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsAlternativeColor_ReturnValue                       (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor UDataListButton_Widget_ASA_C::SetupToggledState(bool* Condition, struct FLinearColor* CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetupToggledState");

	Params::UDataListButton_Widget_ASA_C_SetupToggledState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

	if (CallFunc_SelectColor_ReturnValue != nullptr)
		*CallFunc_SelectColor_ReturnValue = std::move(Parms.CallFunc_SelectColor_ReturnValue);

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
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UDataListButton_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "PreConstruct");

	Params::UDataListButton_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CanEditTextVariable                                              (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               UseOverrideValueText                                             (ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

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
// class FText                        ValueText                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UDataListButton_Widget_ASA_C::BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UDataListButton_Widget_ASA_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Tick");

	Params::UDataListButton_Widget_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_CustomEvent_NewText                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_CanEditTextVariable                           (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_UseOverrideValueText                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_CustomEvent_ValueText                                     (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::ExecuteUbergraph_DataListButton_Widget_ASA(const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool* K2Node_DynamicCast_bSuccess, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ExecuteUbergraph_DataListButton_Widget_ASA");

	Params::UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

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


