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
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_2                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_3                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_4                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetVisibleChildIndex_Index                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_5                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetVisibleChildIndex_Index_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UDataListButton_Widget_ASA_C::GetIsAlternativeColor(bool* ReturnValue, int32* CallFunc_GetVisibleChildIndex_Index, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_GetVisibleChildIndex_Index_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32* CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetIsAlternativeColor");

	Params::UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_GetVisibleChildIndex_Index != nullptr)
		*CallFunc_GetVisibleChildIndex_Index = Parms.CallFunc_GetVisibleChildIndex_Index;

	if (CallFunc_GetOuterObject_ReturnValue != nullptr)
		*CallFunc_GetOuterObject_ReturnValue = Parms.CallFunc_GetOuterObject_ReturnValue;

	if (CallFunc_GetOuterObject_ReturnValue_1 != nullptr)
		*CallFunc_GetOuterObject_ReturnValue_1 = Parms.CallFunc_GetOuterObject_ReturnValue_1;

	if (CallFunc_GetVisibleChildIndex_Index_1 != nullptr)
		*CallFunc_GetVisibleChildIndex_Index_1 = Parms.CallFunc_GetVisibleChildIndex_Index_1;

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
// int32                              ChildrenIndex                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

int32 UDataListButton_Widget_ASA_C::GetVisibleChildIndex(class UPanelWidget* Parent, int32* ChildrenIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool* Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetVisibleChildIndex");

	Params::UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params Parms{};

	Parms.Parent = Parent;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChildrenIndex != nullptr)
		*ChildrenIndex = Parms.ChildrenIndex;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_1 = Parms.CallFunc_Add_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

struct FLinearColor UDataListButton_Widget_ASA_C::UpdateColorBrush(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "UpdateColorBrush");

	Params::UDataListButton_Widget_ASA_C_UpdateColorBrush_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               FromSelectOtherOption                                            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsAlternativeColor_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListButton_Widget_ASA_C::SetupToggledState(bool* Condition, bool* FromSelectOtherOption, bool CallFunc_GetIsAlternativeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetupToggledState");

	Params::UDataListButton_Widget_ASA_C_SetupToggledState_Params Parms{};

	Parms.CallFunc_GetIsAlternativeColor_ReturnValue = CallFunc_GetIsAlternativeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

	if (FromSelectOtherOption != nullptr)
		*FromSelectOtherOption = Parms.FromSelectOtherOption;

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
// bool                               IsDesignTime                                                     (Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "PreConstruct");

	Params::UDataListButton_Widget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CanEditTextVariable                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               UseOverrideValueText                                             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UDataListButton_Widget_ASA_C::SetTextButton(class FText NewText, bool* CanEditTextVariable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetTextButton");

	Params::UDataListButton_Widget_ASA_C_SetTextButton_Params Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEditTextVariable != nullptr)
		*CanEditTextVariable = Parms.CanEditTextVariable;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetValueText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ValueText                                                        (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

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
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)

float UDataListButton_Widget_ASA_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Tick");

	Params::UDataListButton_Widget_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_CustomEvent_NewText                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_CanEditTextVariable                           (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_UseOverrideValueText                          (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_CustomEvent_ValueText                                     (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

float UDataListButton_Widget_ASA_C::ExecuteUbergraph_DataListButton_Widget_ASA(int32* EntryPoint, bool CallFunc_IsVisible_ReturnValue, class FText* K2Node_CustomEvent_NewText, bool* K2Node_CustomEvent_CanEditTextVariable, class FString* CallFunc_Conv_TextToString_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, enum class ETextCommit* K2Node_ComponentBoundEvent_CommitMethod, bool* CallFunc_GetToggledState_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class FText CallFunc_Conv_DoubleToText_ReturnValue, bool* CallFunc_HasKeyboardFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ExecuteUbergraph_DataListButton_Widget_ASA");

	Params::UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_NewText != nullptr)
		*K2Node_CustomEvent_NewText = Parms.K2Node_CustomEvent_NewText;

	if (K2Node_CustomEvent_CanEditTextVariable != nullptr)
		*K2Node_CustomEvent_CanEditTextVariable = Parms.K2Node_CustomEvent_CanEditTextVariable;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_GetOuterObject_ReturnValue != nullptr)
		*CallFunc_GetOuterObject_ReturnValue = Parms.CallFunc_GetOuterObject_ReturnValue;

	if (CallFunc_GetOuterObject_ReturnValue_1 != nullptr)
		*CallFunc_GetOuterObject_ReturnValue_1 = Parms.CallFunc_GetOuterObject_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_CommitMethod != nullptr)
		*K2Node_ComponentBoundEvent_CommitMethod = Parms.K2Node_ComponentBoundEvent_CommitMethod;

	if (CallFunc_GetToggledState_ReturnValue != nullptr)
		*CallFunc_GetToggledState_ReturnValue = Parms.CallFunc_GetToggledState_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (CallFunc_HasKeyboardFocus_ReturnValue != nullptr)
		*CallFunc_HasKeyboardFocus_ReturnValue = Parms.CallFunc_HasKeyboardFocus_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set                                                              (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UDataListButton_Widget_ASA_C::ToggledState__DelegateSignature(bool* Set, bool* FromSelectOtherOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ToggledState__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_ToggledState__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Set != nullptr)
		*Set = Parms.Set;

	if (FromSelectOtherOption != nullptr)
		*FromSelectOtherOption = Parms.FromSelectOtherOption;

}

}


