#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C
// (None)

class UClass* UASAUIWidget_Button_Style4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_Button_Style4_C");

	return Clss;
}


// ASAUIWidget_Button_Style4_C ASAUIWidget_Button_Style4.Default__ASAUIWidget_Button_Style4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_Button_Style4_C* UASAUIWidget_Button_Style4_C::GetDefaultObj()
{
	static class UASAUIWidget_Button_Style4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_Button_Style4_C*>(UASAUIWidget_Button_Style4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UASAUIWidget_Button_Style4_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "PreConstruct");

	Params::UASAUIWidget_Button_Style4_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "UpdateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void UASAUIWidget_Button_Style4_C::SetActive(bool* NewActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "SetActive");

	Params::UASAUIWidget_Button_Style4_C_SetActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewActive != nullptr)
		*NewActive = Parms.NewActive;

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.ExecuteUbergraph_ASAUIWidget_Button_Style4
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_newActive                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast_1                       (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UASAUIWidget_Button_Style4_C::ExecuteUbergraph_ASAUIWidget_Button_Style4(bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool* K2Node_CustomEvent_newActive, bool CallFunc_BooleanAND_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool* K2Node_DynamicCast_bSuccess, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "ExecuteUbergraph_ASAUIWidget_Button_Style4");

	Params::UASAUIWidget_Button_Style4_C_ExecuteUbergraph_ASAUIWidget_Button_Style4_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast_1 = K2Node_MakeStruct_ImageSize_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_newActive != nullptr)
		*K2Node_CustomEvent_newActive = Parms.K2Node_CustomEvent_newActive;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


