#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Discovery.UI_Discovery_C
// (None)

class UClass* UUI_Discovery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Discovery_C");

	return Clss;
}


// UI_Discovery_C UI_Discovery.Default__UI_Discovery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Discovery_C* UUI_Discovery_C::GetDefaultObj()
{
	static class UUI_Discovery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Discovery_C*>(UUI_Discovery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Discovery.UI_Discovery_C.SequenceEvent__ENTRYPOINTUI_Discovery
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ShowcasePreview                                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)

class UImage* UUI_Discovery_C::SequenceEvent__ENTRYPOINTUI_Discovery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "SequenceEvent__ENTRYPOINTUI_Discovery");

	Params::UUI_Discovery_C_SequenceEvent__ENTRYPOINTUI_Discovery_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.UpdateCarouselFromMod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShowcaseSlot_C*          ShowcaseSlot                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// class UUI_WhiteCategoryPreview_C*  CallFunc_Create_ReturnValue                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetModName_Name                                         (Edit, BlueprintVisible, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item                                          (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_Discovery_C::UpdateCarouselFromMod(class UUI_ShowcaseSlot_C** ShowcaseSlot, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* Temp_int_Array_Index_Variable, struct FCategory* CallFunc_Array_Get_Item, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, int32* Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot** CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "UpdateCarouselFromMod");

	Params::UUI_Discovery_C_UpdateCarouselFromMod_Params Parms{};

	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowcaseSlot != nullptr)
		*ShowcaseSlot = Parms.ShowcaseSlot;

	if (CallFunc_GetModName_Name != nullptr)
		*CallFunc_GetModName_Name = std::move(Parms.CallFunc_GetModName_Name);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (Temp_int_Array_Index_Variable != nullptr)
		*Temp_int_Array_Index_Variable = Parms.Temp_int_Array_Index_Variable;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (Temp_int_Loop_Counter_Variable != nullptr)
		*Temp_int_Loop_Counter_Variable = Parms.Temp_int_Loop_Counter_Variable;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.Start Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UUI_ShowcaseSlot_C*          CallFunc_Array_Get_Item                                          (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

bool UUI_Discovery_C::Start_Progress(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "Start Progress");

	Params::UUI_Discovery_C_Start_Progress_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.IMG_ShowcasePreview_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ShowcasePreview                                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)

class UImage* UUI_Discovery_C::IMG_ShowcasePreview_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "IMG_ShowcasePreview_Event");

	Params::UUI_Discovery_C_IMG_ShowcasePreview_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.NextShowcase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::NextShowcase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "NextShowcase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.SetToNewCurrentShowcaseSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShowcaseSlot_C*          NewSlot                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)

void UUI_Discovery_C::SetToNewCurrentShowcaseSlot(class UUI_ShowcaseSlot_C* NewSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "SetToNewCurrentShowcaseSlot");

	Params::UUI_Discovery_C_SetToNewCurrentShowcaseSlot_Params Parms{};

	Parms.NewSlot = NewSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Discovery.UI_Discovery_C.ConstructPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::ConstructPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "ConstructPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.ReloadPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::ReloadPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "ReloadPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.ConstructDiscovery
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::ConstructDiscovery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "ConstructDiscovery");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.OnSucessGetModHighlights
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsHighlights             Mods                                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_Discovery_C::OnSucessGetModHighlights(struct FModsHighlights* Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnSucessGetModHighlights");

	Params::UUI_Discovery_C_OnSucessGetModHighlights_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mods != nullptr)
		*Mods = std::move(Parms.Mods);

}


// Function UI_Discovery.UI_Discovery_C.OnErrorGetModHighlights
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_Discovery_C::OnErrorGetModHighlights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnErrorGetModHighlights");

	Params::UUI_Discovery_C_OnErrorGetModHighlights_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.CreateCarousel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::CreateCarousel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "CreateCarousel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.Create Premium Shelve
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::Create_Premium_Shelve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "Create Premium Shelve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.CreateTrending
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::CreateTrending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "CreateTrending");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.Create HighestRated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::Create_HighestRated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "Create HighestRated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.Create Latest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::Create_Latest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "Create Latest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.CreateCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::CreateCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "CreateCategory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.OnResultGetModsHighlightRest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsHighlights             Mods                                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_Discovery_C::OnResultGetModsHighlightRest(struct FModsHighlights* Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnResultGetModsHighlightRest");

	Params::UUI_Discovery_C_OnResultGetModsHighlightRest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mods != nullptr)
		*Mods = std::move(Parms.Mods);

}


// Function UI_Discovery.UI_Discovery_C.OnErrorGetModsHighlightRest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_Discovery_C::OnErrorGetModsHighlightRest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnErrorGetModsHighlightRest");

	Params::UUI_Discovery_C_OnErrorGetModsHighlightRest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Discovery.UI_Discovery_C.OnPressViewAllLatest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::OnPressViewAllLatest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnPressViewAllLatest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.OnPressViewAllOnMostDL
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::OnPressViewAllOnMostDL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "OnPressViewAllOnMostDL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.BndEvt__UI_Discovery_UI_Button_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Discovery_C::BndEvt__UI_Discovery_UI_Button_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "BndEvt__UI_Discovery_UI_Button_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.BndEvt__UI_Discovery_UI_Button_Ark_ViewMod_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Discovery_C::BndEvt__UI_Discovery_UI_Button_Ark_ViewMod_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "BndEvt__UI_Discovery_UI_Button_Ark_ViewMod_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.ReturnFromModPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Discovery_C::ReturnFromModPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "ReturnFromModPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.BndEvt__UI_Discovery_UI_Button_Options_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Discovery_C::BndEvt__UI_Discovery_UI_Button_Options_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "BndEvt__UI_Discovery_UI_Button_Options_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Discovery.UI_Discovery_C.ExecuteUbergraph_UI_Discovery
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UUI_SquareCategorieShowcase_C*CallFunc_Array_Get_Item                                          (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_ShowcasePreview                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// class UUI_ShowcaseSlot_C*          CallFunc_Array_Get_Item_1                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// TArray<class UUI_ShowcaseSlot_C*>  K2Node_MakeArray_Array                                           (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UUI_ShowcaseSlot_C*          K2Node_CustomEvent_NewSlot                                       (EditFixedSize, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// class UUI_ShowcaseSlot_C*          CallFunc_Array_Get_Item_2                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// class UUI_ShowcaseSlot_C*          CallFunc_Array_Get_Item_3                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FModsHighlights             K2Node_CustomEvent_mods_1                                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// struct FCFCoreGetModsHighlightsFiltersK2Node_MakeStruct_CFCoreGetModsHighlightsFilters                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
// struct FCFCoreGetModsHighlightsFilterK2Node_MakeStruct_CFCoreGetModsHighlightsFilter                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_6                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_7                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, NonTransactional)
// TArray<class UUI_DiscoveryShelve_C*>K2Node_MakeArray_Array_1                                         (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class UUI_DiscoveryShelve_C*       CallFunc_Array_Get_Item_4                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// TArray<class UUI_SquareCategorieShowcase_C*>K2Node_MakeArray_Array_2                                         (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UUI_SquareCategorieShowcase_C*CallFunc_Array_Get_Item_5                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_PauseAnimation_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// struct FCFCoreGetModsHighlightsFiltersK2Node_MakeStruct_CFCoreGetModsHighlightsFilters_1               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference, Interp)
// struct FModsHighlights             K2Node_CustomEvent_mods                                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
// struct FCFCoreGetModsHighlightsFilterK2Node_MakeStruct_CFCoreGetModsHighlightsFilter_1                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_6                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_7                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// struct FCategory                   CallFunc_Array_Get_Item_8                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_9                                        (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_10                                       (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_11                                       (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UUI_ShowcaseSlot_C*          CallFunc_Array_Get_Item_12                                       (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class UUI_ModPage_C*               CallFunc_CreateModPageMenu_ModPageRef                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

class UUI_ModPage_C* UUI_Discovery_C::ExecuteUbergraph_UI_Discovery(int32* EntryPoint, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UCFCoreSubsystem** CallFunc_GetEngineSubsystem_ReturnValue, int32* Temp_int_Loop_Counter_Variable, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable_1, int32* Temp_int_Array_Index_Variable_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* Temp_int_Loop_Counter_Variable_2, int32* Temp_int_Array_Index_Variable_2, int32* Temp_int_Array_Index_Variable_3, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32* Temp_int_Loop_Counter_Variable_3, int32* Temp_int_Array_Index_Variable_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32* Temp_int_Loop_Counter_Variable_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32* Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue, int32* Temp_int_Array_Index_Variable_5, class UUI_SquareCategorieShowcase_C** CallFunc_Array_Get_Item, class UImage* K2Node_CustomEvent_IMG_ShowcasePreview, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_1, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, const TArray<class UUI_ShowcaseSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Int32_AddOne_ReturnValue, class UUI_ShowcaseSlot_C* K2Node_CustomEvent_NewSlot, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_3, const struct FModsHighlights& K2Node_CustomEvent_mods_1, struct FCFCoreError* K2Node_CustomEvent_error_1, const struct FCFCoreGetModsHighlightsFilters& K2Node_MakeStruct_CFCoreGetModsHighlightsFilters, class UCFCoreSubsystem** CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FCFCoreGetModsHighlightsFilter& K2Node_MakeStruct_CFCoreGetModsHighlightsFilter, int32* Temp_int_Array_Index_Variable_6, int32* Temp_int_Array_Index_Variable_7, int32* Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const TArray<class UUI_DiscoveryShelve_C*>& K2Node_MakeArray_Array_1, class UUI_DiscoveryShelve_C** CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32* Temp_int_Loop_Counter_Variable_7, const TArray<class UUI_SquareCategorieShowcase_C*>& K2Node_MakeArray_Array_2, class UUI_SquareCategorieShowcase_C** CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FCFCoreGetModsHighlightsFilters& K2Node_MakeStruct_CFCoreGetModsHighlightsFilters_1, const struct FModsHighlights& K2Node_CustomEvent_mods, const struct FCFCoreGetModsHighlightsFilter& K2Node_MakeStruct_CFCoreGetModsHighlightsFilter_1, struct FCFCoreError* K2Node_CustomEvent_error, struct FCFCoreMod* CallFunc_Array_Get_Item_6, struct FCFCoreMod* CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_4, struct FCategory* CallFunc_Array_Get_Item_8, struct FCFCoreMod* CallFunc_Array_Get_Item_9, struct FCFCoreMod* CallFunc_Array_Get_Item_10, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, struct FCFCoreMod* CallFunc_Array_Get_Item_11, bool CallFunc_Less_IntInt_ReturnValue_7, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Discovery_C", "ExecuteUbergraph_UI_Discovery");

	Params::UUI_Discovery_C_ExecuteUbergraph_UI_Discovery_Params Parms{};

	Parms.CallFunc_GetViewportClient_ReturnValue = CallFunc_GetViewportClient_ReturnValue;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue = CallFunc_GetUISceneFromClass_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_IMG_ShowcasePreview = K2Node_CustomEvent_IMG_ShowcasePreview;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Int32_AddOne_ReturnValue = CallFunc_Int32_AddOne_ReturnValue;
	Parms.K2Node_CustomEvent_NewSlot = K2Node_CustomEvent_NewSlot;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_CustomEvent_mods_1 = K2Node_CustomEvent_mods_1;
	Parms.K2Node_MakeStruct_CFCoreGetModsHighlightsFilters = K2Node_MakeStruct_CFCoreGetModsHighlightsFilters;
	Parms.K2Node_MakeStruct_CFCoreGetModsHighlightsFilter = K2Node_MakeStruct_CFCoreGetModsHighlightsFilter;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_CFCoreGetModsHighlightsFilters_1 = K2Node_MakeStruct_CFCoreGetModsHighlightsFilters_1;
	Parms.K2Node_CustomEvent_mods = K2Node_CustomEvent_mods;
	Parms.K2Node_MakeStruct_CFCoreGetModsHighlightsFilter_1 = K2Node_MakeStruct_CFCoreGetModsHighlightsFilter_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetEngineSubsystem_ReturnValue != nullptr)
		*CallFunc_GetEngineSubsystem_ReturnValue = Parms.CallFunc_GetEngineSubsystem_ReturnValue;

	if (Temp_int_Loop_Counter_Variable != nullptr)
		*Temp_int_Loop_Counter_Variable = Parms.Temp_int_Loop_Counter_Variable;

	if (Temp_int_Array_Index_Variable != nullptr)
		*Temp_int_Array_Index_Variable = Parms.Temp_int_Array_Index_Variable;

	if (Temp_int_Loop_Counter_Variable_1 != nullptr)
		*Temp_int_Loop_Counter_Variable_1 = Parms.Temp_int_Loop_Counter_Variable_1;

	if (Temp_int_Array_Index_Variable_1 != nullptr)
		*Temp_int_Array_Index_Variable_1 = Parms.Temp_int_Array_Index_Variable_1;

	if (Temp_int_Loop_Counter_Variable_2 != nullptr)
		*Temp_int_Loop_Counter_Variable_2 = Parms.Temp_int_Loop_Counter_Variable_2;

	if (Temp_int_Array_Index_Variable_2 != nullptr)
		*Temp_int_Array_Index_Variable_2 = Parms.Temp_int_Array_Index_Variable_2;

	if (Temp_int_Array_Index_Variable_3 != nullptr)
		*Temp_int_Array_Index_Variable_3 = Parms.Temp_int_Array_Index_Variable_3;

	if (Temp_int_Loop_Counter_Variable_3 != nullptr)
		*Temp_int_Loop_Counter_Variable_3 = Parms.Temp_int_Loop_Counter_Variable_3;

	if (Temp_int_Array_Index_Variable_4 != nullptr)
		*Temp_int_Array_Index_Variable_4 = Parms.Temp_int_Array_Index_Variable_4;

	if (Temp_int_Loop_Counter_Variable_4 != nullptr)
		*Temp_int_Loop_Counter_Variable_4 = Parms.Temp_int_Loop_Counter_Variable_4;

	if (Temp_int_Loop_Counter_Variable_5 != nullptr)
		*Temp_int_Loop_Counter_Variable_5 = Parms.Temp_int_Loop_Counter_Variable_5;

	if (Temp_int_Array_Index_Variable_5 != nullptr)
		*Temp_int_Array_Index_Variable_5 = Parms.Temp_int_Array_Index_Variable_5;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (K2Node_MakeStruct_SlateBrush != nullptr)
		*K2Node_MakeStruct_SlateBrush = std::move(Parms.K2Node_MakeStruct_SlateBrush);

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = Parms.CallFunc_Array_Get_Item_3;

	if (K2Node_CustomEvent_error_1 != nullptr)
		*K2Node_CustomEvent_error_1 = std::move(Parms.K2Node_CustomEvent_error_1);

	if (CallFunc_GetEngineSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetEngineSubsystem_ReturnValue_1 = Parms.CallFunc_GetEngineSubsystem_ReturnValue_1;

	if (Temp_int_Array_Index_Variable_6 != nullptr)
		*Temp_int_Array_Index_Variable_6 = Parms.Temp_int_Array_Index_Variable_6;

	if (Temp_int_Array_Index_Variable_7 != nullptr)
		*Temp_int_Array_Index_Variable_7 = Parms.Temp_int_Array_Index_Variable_7;

	if (Temp_int_Loop_Counter_Variable_6 != nullptr)
		*Temp_int_Loop_Counter_Variable_6 = Parms.Temp_int_Loop_Counter_Variable_6;

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = Parms.CallFunc_Array_Get_Item_4;

	if (Temp_int_Loop_Counter_Variable_7 != nullptr)
		*Temp_int_Loop_Counter_Variable_7 = Parms.Temp_int_Loop_Counter_Variable_7;

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = Parms.CallFunc_Array_Get_Item_5;

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_Array_Get_Item_6 != nullptr)
		*CallFunc_Array_Get_Item_6 = std::move(Parms.CallFunc_Array_Get_Item_6);

	if (CallFunc_Array_Get_Item_7 != nullptr)
		*CallFunc_Array_Get_Item_7 = std::move(Parms.CallFunc_Array_Get_Item_7);

	if (CallFunc_Array_Get_Item_8 != nullptr)
		*CallFunc_Array_Get_Item_8 = std::move(Parms.CallFunc_Array_Get_Item_8);

	if (CallFunc_Array_Get_Item_9 != nullptr)
		*CallFunc_Array_Get_Item_9 = std::move(Parms.CallFunc_Array_Get_Item_9);

	if (CallFunc_Array_Get_Item_10 != nullptr)
		*CallFunc_Array_Get_Item_10 = std::move(Parms.CallFunc_Array_Get_Item_10);

	if (CallFunc_Array_Get_Item_11 != nullptr)
		*CallFunc_Array_Get_Item_11 = std::move(Parms.CallFunc_Array_Get_Item_11);

	if (CallFunc_Array_Get_Item_12 != nullptr)
		*CallFunc_Array_Get_Item_12 = Parms.CallFunc_Array_Get_Item_12;

	return Parms.ReturnValue;

}

}


