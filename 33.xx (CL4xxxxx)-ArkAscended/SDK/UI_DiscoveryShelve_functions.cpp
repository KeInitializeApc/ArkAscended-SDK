#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DiscoveryShelve.UI_DiscoveryShelve_C
// (None)

class UClass* UUI_DiscoveryShelve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DiscoveryShelve_C");

	return Clss;
}


// UI_DiscoveryShelve_C UI_DiscoveryShelve.Default__UI_DiscoveryShelve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DiscoveryShelve_C* UUI_DiscoveryShelve_C::GetDefaultObj()
{
	static class UUI_DiscoveryShelve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DiscoveryShelve_C*>(UUI_DiscoveryShelve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.AddViewAllModSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_ViewAllSlot_C*           CallFunc_Create_ReturnValue                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)

class UUI_ViewAllSlot_C* UUI_DiscoveryShelve_C::AddViewAllModSlot(const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "AddViewAllModSlot");

	Params::UUI_DiscoveryShelve_C_AddViewAllModSlot_Params Parms{};

	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

float UUI_DiscoveryShelve_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "Tick");

	Params::UUI_DiscoveryShelve_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.BndEvt__UI_HorizontalModList_UI_Button_ScrollToLeft_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DiscoveryShelve_C::BndEvt__UI_HorizontalModList_UI_Button_ScrollToLeft_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "BndEvt__UI_HorizontalModList_UI_Button_ScrollToLeft_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.BndEvt__UI_HorizontalModList_UI_Button_ScrollToRight_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DiscoveryShelve_C::BndEvt__UI_HorizontalModList_UI_Button_ScrollToRight_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "BndEvt__UI_HorizontalModList_UI_Button_ScrollToRight_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.LeftIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Index                                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance)

bool UUI_DiscoveryShelve_C::LeftIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "LeftIn");

	Params::UUI_DiscoveryShelve_C_LeftIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.RightIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Index                                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance)

bool UUI_DiscoveryShelve_C::RightIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "RightIn");

	Params::UUI_DiscoveryShelve_C_RightIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.FadeDirections
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_DiscoveryShelve_C::FadeDirections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "FadeDirections");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DiscoveryShelve_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.EmptyShelve
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_DiscoveryShelve_C::EmptyShelve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "EmptyShelve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.Create
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ListOfMods                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

TArray<int64> UUI_DiscoveryShelve_C::Create()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "Create");

	Params::UUI_DiscoveryShelve_C_Create_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.ExecuteUbergraph_UI_DiscoveryShelve
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_PauseAnimation_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FMargin                     K2Node_MakeStruct_Margin_3                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// int64                              CallFunc_Array_Get_Item                                          (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_MakeFInstallProgressModFromID_ReturnValue               (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetScrollOffset_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_Index_1                                       (OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_Index                                         (OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ListOfMods                                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class UUI_GameSlot_C*              CallFunc_Array_Get_Item_1                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// class UUI_GameSlot_C*              CallFunc_Array_Get_Item_2                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1          (ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference, Interp)

double UUI_DiscoveryShelve_C::ExecuteUbergraph_UI_DiscoveryShelve(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float* CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3, bool Temp_bool_Variable, int32* Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32* Temp_int_Array_Index_Variable, int64* CallFunc_Array_Get_Item, const struct FInstallProgressMod& CallFunc_MakeFInstallProgressModFromID_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float* CallFunc_GetScrollOffset_ReturnValue_1, float* CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool* K2Node_CustomEvent_Index_1, bool* K2Node_CustomEvent_Index, enum class ESlateVisibility Temp_byte_Variable_2, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, TArray<int64>* K2Node_CustomEvent_ListOfMods, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UUI_GameSlot_C** CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_GameSlot_C** CallFunc_Array_Get_Item_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float* CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, float* CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DiscoveryShelve_C", "ExecuteUbergraph_UI_DiscoveryShelve");

	Params::UUI_DiscoveryShelve_C_ExecuteUbergraph_UI_DiscoveryShelve_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeFInstallProgressModFromID_ReturnValue = CallFunc_MakeFInstallProgressModFromID_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetScrollOffset_ReturnValue != nullptr)
		*CallFunc_GetScrollOffset_ReturnValue = Parms.CallFunc_GetScrollOffset_ReturnValue;

	if (Temp_int_Loop_Counter_Variable != nullptr)
		*Temp_int_Loop_Counter_Variable = Parms.Temp_int_Loop_Counter_Variable;

	if (Temp_int_Array_Index_Variable != nullptr)
		*Temp_int_Array_Index_Variable = Parms.Temp_int_Array_Index_Variable;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (CallFunc_GetScrollOffset_ReturnValue_1 != nullptr)
		*CallFunc_GetScrollOffset_ReturnValue_1 = Parms.CallFunc_GetScrollOffset_ReturnValue_1;

	if (CallFunc_GetScrollOffsetOfEnd_ReturnValue != nullptr)
		*CallFunc_GetScrollOffsetOfEnd_ReturnValue = Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue;

	if (K2Node_CustomEvent_Index_1 != nullptr)
		*K2Node_CustomEvent_Index_1 = Parms.K2Node_CustomEvent_Index_1;

	if (K2Node_CustomEvent_Index != nullptr)
		*K2Node_CustomEvent_Index = Parms.K2Node_CustomEvent_Index;

	if (K2Node_CustomEvent_ListOfMods != nullptr)
		*K2Node_CustomEvent_ListOfMods = std::move(Parms.K2Node_CustomEvent_ListOfMods);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast != nullptr)
		*CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	if (CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1 != nullptr)
		*CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1 = Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


