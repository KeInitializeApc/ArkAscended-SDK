#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C
// (None)

class UClass* UASAUI_MainMenu_GameModeSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenu_GameModeSelect_C");

	return Clss;
}


// ASAUI_MainMenu_GameModeSelect_C ASAUI_MainMenu_GameModeSelect.Default__ASAUI_MainMenu_GameModeSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenu_GameModeSelect_C* UASAUI_MainMenu_GameModeSelect_C::GetDefaultObj()
{
	static class UASAUI_MainMenu_GameModeSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenu_GameModeSelect_C*>(UASAUI_MainMenu_GameModeSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.InitHasSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Save                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::InitHasSave(bool* Temp_bool_Variable, class FText* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "InitHasSave");

	Params::UASAUI_MainMenu_GameModeSelect_C_InitHasSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.SelectionChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomButtonWidget*         Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, ExportObject, Net, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::SelectionChanged(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "SelectionChanged");

	Params::UASAUI_MainMenu_GameModeSelect_C_SelectionChanged_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.StopAllCardAnims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, ExportObject, Net, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UASAUI_MainMenu_GameModeSelect_C::StopAllCardAnims(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "StopAllCardAnims");

	Params::UASAUI_MainMenu_GameModeSelect_C_StopAllCardAnims_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.WidgetAddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::WidgetAddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "WidgetAddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.RefreshAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::RefreshAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "RefreshAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.PostInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::PostInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "PostInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVirtualCursorEnabled_ReturnValue                      (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsJapanesePS5Build_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect");

	Params::UASAUI_MainMenu_GameModeSelect_C_ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.OnModsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::OnModsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "OnModsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.OnCreateGameClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::OnCreateGameClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "OnCreateGameClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.OnSOTFClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::OnSOTFClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "OnSOTFClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.OnMultiplayerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::OnMultiplayerClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "OnMultiplayerClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.OnBackSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_GameModeSelect_C::OnBackSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "OnBackSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


