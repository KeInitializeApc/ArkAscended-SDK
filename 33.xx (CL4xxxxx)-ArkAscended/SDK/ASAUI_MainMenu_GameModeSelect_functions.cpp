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
// bool                               Save                                                             (Edit, ConstParm, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

void UASAUI_MainMenu_GameModeSelect_C::InitHasSave(bool Save, bool Temp_bool_Variable, class FText* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "InitHasSave");

	Params::UASAUI_MainMenu_GameModeSelect_C_InitHasSave_Params Parms{};

	Parms.Save = Save;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.SelectionChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomButtonWidget*         Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::SelectionChanged(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UOverlay** K2Node_DynamicCast_AsOverlay, bool* K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, class UWidget** CallFunc_Array_Get_Item_1, class UASAUI_MainMenuWidget_Card_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "SelectionChanged");

	Params::UASAUI_MainMenu_GameModeSelect_C_SelectionChanged_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_AsOverlay != nullptr)
		*K2Node_DynamicCast_AsOverlay = Parms.K2Node_DynamicCast_AsOverlay;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.StopAllCardAnims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UOverlay*                    K2Node_DynamicCast_AsOverlay                                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_Card_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UASAUI_MainMenu_GameModeSelect_C::StopAllCardAnims(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UOverlay** K2Node_DynamicCast_AsOverlay, bool* K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, class UWidget** CallFunc_Array_Get_Item_1, class UASAUI_MainMenuWidget_Card_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "StopAllCardAnims");

	Params::UASAUI_MainMenu_GameModeSelect_C_StopAllCardAnims_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_AsOverlay != nullptr)
		*K2Node_DynamicCast_AsOverlay = Parms.K2Node_DynamicCast_AsOverlay;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

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


// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVirtualCursorEnabled_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UASAUI_MainMenu_GameModeSelect_C::ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(bool* CallFunc_IsVirtualCursorEnabled_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_GameModeSelect_C", "ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect");

	Params::UASAUI_MainMenu_GameModeSelect_C_ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsVirtualCursorEnabled_ReturnValue != nullptr)
		*CallFunc_IsVirtualCursorEnabled_ReturnValue = Parms.CallFunc_IsVirtualCursorEnabled_ReturnValue;

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


