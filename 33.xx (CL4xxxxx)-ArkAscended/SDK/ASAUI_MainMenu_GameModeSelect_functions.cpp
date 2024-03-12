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
// bool                               Save                                                             (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UASAUI_MainMenu_GameModeSelect_C::InitHasSave(bool* Save, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "InitHasSave");

	Params::UASAUI_MainMenu_GameModeSelect_C_InitHasSave_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Save != nullptr)
		*Save = Parms.Save;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.SelectionChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomButtonWidget*         Widget                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::SelectionChanged(class UCustomButtonWidget* Widget, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UOverlay* K2Node_DynamicCast_AsOverlay, bool* K2Node_DynamicCast_bSuccess, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, class UASAUI_MainMenuWidget_Card_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "SelectionChanged");

	Params::UASAUI_MainMenu_GameModeSelect_C_SelectionChanged_Params Parms{};

	Parms.Widget = Widget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsOverlay = K2Node_DynamicCast_AsOverlay;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card = K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetAllChildren_ReturnValue_1 != nullptr)
		*CallFunc_GetAllChildren_ReturnValue_1 = std::move(Parms.CallFunc_GetAllChildren_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.StopAllCardAnims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)

bool UASAUI_MainMenu_GameModeSelect_C::StopAllCardAnims(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UOverlay* K2Node_DynamicCast_AsOverlay, bool* K2Node_DynamicCast_bSuccess, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, class UASAUI_MainMenuWidget_Card_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "StopAllCardAnims");

	Params::UASAUI_MainMenu_GameModeSelect_C_StopAllCardAnims_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsOverlay = K2Node_DynamicCast_AsOverlay;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card = K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetAllChildren_ReturnValue_1 != nullptr)
		*CallFunc_GetAllChildren_ReturnValue_1 = std::move(Parms.CallFunc_GetAllChildren_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsVirtualCursorEnabled_ReturnValue                      (Edit, BlueprintVisible, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsJapanesePS5Build_ReturnValue                          (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVirtualCursorEnabled_ReturnValue, bool CallFunc_IsJapanesePS5Build_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect");

	Params::UASAUI_MainMenu_GameModeSelect_C_ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsVirtualCursorEnabled_ReturnValue = CallFunc_IsVirtualCursorEnabled_ReturnValue;
	Parms.CallFunc_IsJapanesePS5Build_ReturnValue = CallFunc_IsJapanesePS5Build_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

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


