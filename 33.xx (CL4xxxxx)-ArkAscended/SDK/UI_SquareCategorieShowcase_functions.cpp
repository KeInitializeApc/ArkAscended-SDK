#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C
// (None)

class UClass* UUI_SquareCategorieShowcase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SquareCategorieShowcase_C");

	return Clss;
}


// UI_SquareCategorieShowcase_C UI_SquareCategorieShowcase.Default__UI_SquareCategorieShowcase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SquareCategorieShowcase_C* UUI_SquareCategorieShowcase_C::GetDefaultObj()
{
	static class UUI_SquareCategorieShowcase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SquareCategorieShowcase_C*>(UUI_SquareCategorieShowcase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_SquareCategorieShowcase_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "PreConstruct");

	Params::UUI_SquareCategorieShowcase_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SquareCategorieShowcase_C::BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SquareCategorieShowcase_C::BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.InitCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCategory                   Category_Info                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)

void UUI_SquareCategorieShowcase_C::InitCategory(struct FCategory* Category_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "InitCategory");

	Params::UUI_SquareCategorieShowcase_C_InitCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Category_Info != nullptr)
		*Category_Info = std::move(Parms.Category_Info);

}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.BndEvt__UI_SquareCategorieShowcase_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SquareCategorieShowcase_C::BndEvt__UI_SquareCategorieShowcase_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "BndEvt__UI_SquareCategorieShowcase_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C.ExecuteUbergraph_UI_SquareCategorieShowcase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FCategory                   K2Node_CustomEvent_Category_Info                                 (Edit, ConstParm, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TScriptInterface<class IBPI_CustomComboBoxInterface_C>CallFunc_OnOptionSelectedInterface_self_CastInput                (BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_Select_Default                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class UUMGSequencePlayer* UUI_SquareCategorieShowcase_C::ExecuteUbergraph_UI_SquareCategorieShowcase(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_12, struct FCategory* K2Node_CustomEvent_Category_Info, bool CallFunc_IsValid_ReturnValue_13, TScriptInterface<class IBPI_CustomComboBoxInterface_C>* CallFunc_OnOptionSelectedInterface_self_CastInput, bool CallFunc_IsValid_ReturnValue_14, class FText* CallFunc_Conv_StringToText_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FMargin& K2Node_MakeStruct_Margin_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SquareCategorieShowcase_C", "ExecuteUbergraph_UI_SquareCategorieShowcase");

	Params::UUI_SquareCategorieShowcase_C_ExecuteUbergraph_UI_SquareCategorieShowcase_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_PlayAnimationForward_ReturnValue != nullptr)
		*CallFunc_PlayAnimationForward_ReturnValue = Parms.CallFunc_PlayAnimationForward_ReturnValue;

	if (K2Node_CustomEvent_Category_Info != nullptr)
		*K2Node_CustomEvent_Category_Info = std::move(Parms.K2Node_CustomEvent_Category_Info);

	if (CallFunc_OnOptionSelectedInterface_self_CastInput != nullptr)
		*CallFunc_OnOptionSelectedInterface_self_CastInput = Parms.CallFunc_OnOptionSelectedInterface_self_CastInput;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}

}


