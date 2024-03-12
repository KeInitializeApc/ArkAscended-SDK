#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ModPage.UI_ModPage_C
// (None)

class UClass* UUI_ModPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ModPage_C");

	return Clss;
}


// UI_ModPage_C UI_ModPage.Default__UI_ModPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ModPage_C* UUI_ModPage_C::GetDefaultObj()
{
	static class UUI_ModPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ModPage_C*>(UUI_ModPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ModPage.UI_ModPage_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FInstallProgressMod         NewInformation                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         TempMod                                                          (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_ModPage_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnEventBroadcasted");

	Params::UUI_ModPage_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

void UUI_ModPage_C::GetClose_B(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetClose_B");

	Params::UUI_ModPage_C_GetClose_B_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_2");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_1");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage** IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_0");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IMG_Mod != nullptr)
		*IMG_Mod = Parms.IMG_Mod;

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage(class UImage** IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IMG_Mod != nullptr)
		*IMG_Mod = Parms.IMG_Mod;

}


// Function UI_ModPage.UI_ModPage_C.Update Purchase Button Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::Update_Purchase_Button_Enabled(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Update Purchase Button Enabled");

	Params::UUI_ModPage_C_Update_Purchase_Button_Enabled_Params Parms{};

	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetModInCurrentPagePurchased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::GetModInCurrentPagePurchased(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetModInCurrentPagePurchased");

	Params::UUI_ModPage_C_GetModInCurrentPagePurchased_Params Parms{};

	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.DestroyPurchaseResponseHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::DestroyPurchaseResponseHandle(bool* CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DestroyPurchaseResponseHandle");

	Params::UUI_ModPage_C_DestroyPurchaseResponseHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_IsValidTimerHandle_ReturnValue != nullptr)
		*CallFunc_K2_IsValidTimerHandle_ReturnValue = Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetIdOfModInCurrentPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              As_ID                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      As_Array                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

int64 UUI_ModPage_C::GetIdOfModInCurrentPage(const TArray<int64>& As_Array, TArray<int64>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetIdOfModInCurrentPage");

	Params::UUI_ModPage_C_GetIdOfModInCurrentPage_Params Parms{};

	Parms.As_Array = As_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (DisableEditOnInstance, SubobjectReference, Interp)

bool UUI_ModPage_C::BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPGamepadReleased");

	Params::UUI_ModPage_C_BPGamepadReleased_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TheKey != nullptr)
		*TheKey = std::move(Parms.TheKey);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPCycleHighlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ModPage_C::BPCycleHighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPCycleHighlighted");

	Params::UUI_ModPage_C_BPCycleHighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ModPage_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ModPage_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ModPage_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPEscapeClosed");

	Params::UUI_ModPage_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateRatingVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::UpdateRatingVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateRatingVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ShowCarouselButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_ModPage_C::ShowCarouselButtons(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ShowCarouselButtons");

	Params::UUI_ModPage_C_ShowCarouselButtons_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.HideCarouselButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::HideCarouselButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "HideCarouselButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.GetScrrenshotPaginationText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ModPage_C::GetScrrenshotPaginationText(bool Temp_bool_Variable, int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetScrrenshotPaginationText");

	Params::UUI_ModPage_C_GetScrrenshotPaginationText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetScreenshotImageTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::SetScreenshotImageTo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetScreenshotImageTo");

	Params::UUI_ModPage_C_SetScreenshotImageTo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.IfNoModCardsThenCollapse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UUI_ModPage_C::IfNoModCardsThenCollapse(int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32 Temp_int_Loop_Counter_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "IfNoModCardsThenCollapse");

	Params::UUI_ModPage_C_IfNoModCardsThenCollapse_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModCards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class EInstallStatus          Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// enum class EInstallStatus          Temp_byte_Variable_10                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_15                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_16                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_17                                            (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UUI_ModPage_C::UpdateModCards(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EInstallStatus Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class EInstallStatus Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModCards");

	Params::UUI_ModPage_C_UpdateModCards_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModPaidState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)

bool UUI_ModPage_C::UpdateModPaidState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModPaidState");

	Params::UUI_ModPage_C_UpdateModPaidState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.DebugScreenshotImageIndexing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Increase                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::DebugScreenshotImageIndexing(bool* Increase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DebugScreenshotImageIndexing");

	Params::UUI_ModPage_C_DebugScreenshotImageIndexing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Increase != nullptr)
		*Increase = Parms.Increase;

}


// Function UI_ModPage.UI_ModPage_C.AddScreenshotToList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FModAsset                   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

int32 UUI_ModPage_C::AddScreenshotToList(const struct FModAsset& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AddScreenshotToList");

	Params::UUI_ModPage_C_AddScreenshotToList_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetFirstImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* UUI_ModPage_C::SetFirstImageLoaded(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetFirstImageLoaded");

	Params::UUI_ModPage_C_SetFirstImageLoaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetModVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_GetModVersion_FinalAmount                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::SetModVersion(class FText CallFunc_GetModVersion_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetModVersion");

	Params::UUI_ModPage_C_SetModVersion_Params Parms{};

	Parms.CallFunc_GetModVersion_FinalAmount = CallFunc_GetModVersion_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitAllVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID                           (BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_GetDownloadCount_FinalAmount                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_GetModVersion_FinalAmount                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetAuthorName_CombinedAuthorsNames                      (ConstParm, BlueprintVisible, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_GetModName_Name                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

class FText UUI_ModPage_C::InitAllVars(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetModVersion_FinalAmount, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, const class FString& CallFunc_GetAuthorName_CombinedAuthorsNames, struct FCFCoreFileSize* CallFunc_Get_Mod_Size_SizeStruct, class FText CallFunc_Get_Mod_Size_SizeInText, int64 CallFunc_Get_Mod_Size_bytes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitAllVars");

	Params::UUI_ModPage_C_InitAllVars_Params Parms{};

	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;
	Parms.CallFunc_GetModVersion_FinalAmount = CallFunc_GetModVersion_FinalAmount;
	Parms.CallFunc_GetAuthorName_CombinedAuthorsNames = CallFunc_GetAuthorName_CombinedAuthorsNames;
	Parms.CallFunc_Get_Mod_Size_SizeInText = CallFunc_Get_Mod_Size_SizeInText;
	Parms.CallFunc_Get_Mod_Size_bytes = CallFunc_Get_Mod_Size_bytes;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Get_Mod_Size_SizeStruct != nullptr)
		*CallFunc_Get_Mod_Size_SizeStruct = std::move(Parms.CallFunc_Get_Mod_Size_SizeStruct);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotButtonsEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetScrrenshotPaginationText_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::UpdateScreenshotButtonsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotButtonsEnabled");

	Params::UUI_ModPage_C_UpdateScreenshotButtonsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CanGoToPreviousImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentPage                                                      (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::CanGoToPreviousImage(bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToPreviousImage");

	Params::UUI_ModPage_C_CanGoToPreviousImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CanGoToNextImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentPage                                                      (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::CanGoToNextImage(bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToNextImage");

	Params::UUI_ModPage_C_CanGoToNextImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModUnavailableState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_ModPage_C::UpdateModUnavailableState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModUnavailableState");

	Params::UUI_ModPage_C_UpdateModUnavailableState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitializeForServerMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::InitializeForServerMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitializeForServerMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.LaunchCommentsURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanLaunchURL_ReturnValue_1                              (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

void UUI_ModPage_C::LaunchCommentsURL(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LaunchCommentsURL");

	Params::UUI_ModPage_C_LaunchCommentsURL_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue_1 = CallFunc_CanLaunchURL_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BackFromZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BackFromZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BackFromZoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ActionSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (DisableEditOnInstance, SubobjectReference, Interp)

bool UUI_ModPage_C::ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_IsVisible_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ActionSwitch");

	Params::UUI_ModPage_C_ActionSwitch_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_2 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_3 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_3 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PlayAnimationThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlreadyLoaded                                                    (Edit, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidgetAnimation*            K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* UUI_ModPage_C::PlayAnimationThumbnail(bool AlreadyLoaded, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayAnimationThumbnail");

	Params::UUI_ModPage_C_PlayAnimationThumbnail_Params Parms{};

	Parms.AlreadyLoaded = AlreadyLoaded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.FindThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ModPage_C::FindThumbnail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "FindThumbnail");

	Params::UUI_ModPage_C_FindThumbnail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetThumbnailImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::SetThumbnailImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetThumbnailImage");

	Params::UUI_ModPage_C_SetThumbnailImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PlayStartinAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::PlayStartinAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayStartinAnimation");

	Params::UUI_ModPage_C_PlayStartinAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateCancelButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_ModPage_C::UpdateCancelButtonState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateCancelButtonState");

	Params::UUI_ModPage_C_UpdateCancelButtonState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateUninstallButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool UUI_ModPage_C::UpdateUninstallButtonState(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateUninstallButtonState");

	Params::UUI_ModPage_C_UpdateUninstallButtonState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.AssignLastUpdatedInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetDay_ReturnValue                                      (Edit, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetYear_ReturnValue                                     (ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_GetMonth_ReturnValue                                    (Edit, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ModPage_C::AssignLastUpdatedInformation(int32 CallFunc_GetDay_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AssignLastUpdatedInformation");

	Params::UUI_ModPage_C_AssignLastUpdatedInformation_Params Parms{};

	Parms.CallFunc_GetDay_ReturnValue = CallFunc_GetDay_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Init All Widget Refs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ModPage_C::Init_All_Widget_Refs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Init All Widget Refs");

	Params::UUI_ModPage_C_Init_All_Widget_Refs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateAllThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::UpdateAllThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateAllThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CloseBNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UUI_ModPage_C::CloseBNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CloseBNavigation");

	Params::UUI_ModPage_C_CloseBNavigation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InstallBCustomNavigation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

TArray<class UUI_StoreMenu_C*> UUI_ModPage_C::InstallBCustomNavigation(class UUI_StoreMenu_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InstallBCustomNavigation");

	Params::UUI_ModPage_C_InstallBCustomNavigation_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetSubCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_Option_ModPageCategory_C*CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

int32 UUI_ModPage_C::SetSubCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUI_Option_ModPageCategory_C* CallFunc_Create_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, bool* CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetSubCategories");

	Params::UUI_ModPage_C_SetSubCategories_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CheckIfHideReadMoreButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UUI_ModPage_C::CheckIfHideReadMoreButton(const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CheckIfHideReadMoreButton");

	Params::UUI_ModPage_C_CheckIfHideReadMoreButton_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.ShortenModeDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Downloads                                                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        ShortenDownloads                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        _currentSuffix                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             _currentDownloads                                                (BlueprintVisible, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ModPage_C::ShortenModeDownloads(double _currentDownloads, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, double* CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ShortenModeDownloads");

	Params::UUI_ModPage_C_ShortenModeDownloads_Params Parms{};

	Parms._currentDownloads = _currentDownloads;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (CallFunc_Multiply_IntFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue = Parms.CallFunc_Multiply_IntFloat_ReturnValue;

	if (CallFunc_Conv_DoubleToText_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue = Parms.CallFunc_Conv_DoubleToText_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

class UUMGSequencePlayer* UUI_ModPage_C::UpdateScreenshotImage(bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotImage");

	Params::UUI_ModPage_C_UpdateScreenshotImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetDateAdded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetDay_ReturnValue                                      (Edit, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetYear_ReturnValue                                     (ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_GetMonth_ReturnValue                                    (Edit, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ModPage_C::SetDateAdded(int32 CallFunc_GetDay_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetDateAdded");

	Params::UUI_ModPage_C_SetDateAdded_Params Parms{};

	Parms.CallFunc_GetDay_ReturnValue = CallFunc_GetDay_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitModPageDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_InitializeModView_ReturnValue                           (Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::InitModPageDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModPageDefault");

	Params::UUI_ModPage_C_InitModPageDefault_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ModPage_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnMouseButtonDown");

	Params::UUI_ModPage_C_OnMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_13897D64427114E2F64F66A69E6EA523
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnFail_13897D64427114E2F64F66A69E6EA523()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_13897D64427114E2F64F66A69E6EA523");

	Params::UUI_ModPage_C_OnFail_13897D64427114E2F64F66A69E6EA523_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_13897D64427114E2F64F66A69E6EA523
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnSuccess_13897D64427114E2F64F66A69E6EA523()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_13897D64427114E2F64F66A69E6EA523");

	Params::UUI_ModPage_C_OnSuccess_13897D64427114E2F64F66A69E6EA523_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA");

	Params::UUI_ModPage_C_OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA");

	Params::UUI_ModPage_C_OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4");

	Params::UUI_ModPage_C_OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

class UTexture2DDynamic* UUI_ModPage_C::OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4");

	Params::UUI_ModPage_C_OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ModPage_C::OnSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSearch");

	Params::UUI_ModPage_C_OnSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ModPage_C::UpdateSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateSearch");

	Params::UUI_ModPage_C_UpdateSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Animation_UpdateThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::Animation_UpdateThumbnail(class UImage** IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_UpdateThumbnail");

	Params::UUI_ModPage_C_Animation_UpdateThumbnail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IMG_Mod != nullptr)
		*IMG_Mod = Parms.IMG_Mod;

}


// Function UI_ModPage.UI_ModPage_C.Animation_ScreenshotLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::Animation_ScreenshotLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_ScreenshotLoaded");

	Params::UUI_ModPage_C_Animation_ScreenshotLoaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Animation_SwapImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::Animation_SwapImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_SwapImage");

	Params::UUI_ModPage_C_Animation_SwapImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Next Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Next_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Next Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Previous Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Previous_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Previous Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Install Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Install_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Install Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CallUninstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::CallUninstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CallUninstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OpenComments
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::OpenComments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OpenComments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.DestroyUICommentsPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DestroyUICommentsPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DestroyUICommentsPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.LoadAllScreenshots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::LoadAllScreenshots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LoadAllScreenshots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Update Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Update_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Update Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event On Uninstall Aprroved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_On_Uninstall_Aprroved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On Uninstall Aprroved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CheckDiskSpaceToInstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::CheckDiskSpaceToInstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CheckDiskSpaceToInstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient)

struct FModsDirInfo UUI_ModPage_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent");

	Params::UUI_ModPage_C_CustomEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_1");

	Params::UUI_ModPage_C_CustomEvent_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PlayNotEnoughAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::PlayNotEnoughAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayNotEnoughAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.DownloadAllScreenshots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DownloadAllScreenshots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DownloadAllScreenshots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_ModPage_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Tick");

	Params::UUI_ModPage_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Go Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Go_Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Go Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.DownloadThumbnailManually
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DownloadThumbnailManually()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DownloadThumbnailManually");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

void UUI_ModPage_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ButtonCall");

	Params::UUI_ModPage_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnCategoryResults
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst)

TArray<struct FCategory> UUI_ModPage_C::OnCategoryResults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnCategoryResults");

	Params::UUI_ModPage_C_OnCategoryResults_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnCategoryError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::OnCategoryError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnCategoryError");

	Params::UUI_ModPage_C_OnCategoryError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.PullDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::PullDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PullDescription");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnDescriptionError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::OnDescriptionError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnDescriptionError");

	Params::UUI_ModPage_C_OnDescriptionError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Description                                                      (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)

void UUI_ModPage_C::CustomEvent_0(class FString* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_0");

	Params::UUI_ModPage_C_CustomEvent_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = std::move(Parms.Description);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UUI_ModPage_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_3");

	Params::UUI_ModPage_C_CustomEvent_3_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_4");

	Params::UUI_ModPage_C_CustomEvent_4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitModByID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (ConstParm, Net, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_ModPage_C::InitModByID(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModByID");

	Params::UUI_ModPage_C_InitModByID_Params Parms{};

	Parms.ModId = ModId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SuccessIGuess
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreMod UUI_ModPage_C::SuccessIGuess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SuccessIGuess");

	Params::UUI_ModPage_C_SuccessIGuess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.How could we possibly ever fail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::How_could_we_possibly_ever_fail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "How could we possibly ever fail");

	Params::UUI_ModPage_C_How_could_we_possibly_ever_fail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Event On CFCore Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_On_CFCore_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On CFCore Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event On CFCore Init Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::Event_On_CFCore_Init_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On CFCore Init Error");

	Params::UUI_ModPage_C_Event_On_CFCore_Init_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Event On Sync Installed Mods Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_On_Sync_Installed_Mods_Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On Sync Installed Mods Success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event On Sync Installed Mods Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::Event_On_Sync_Installed_Mods_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On Sync Installed Mods Error");

	Params::UUI_ModPage_C_Event_On_Sync_Installed_Mods_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitRestOfPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::InitRestOfPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitRestOfPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Pull Categories
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Pull_Categories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Pull Categories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.LoadPageBySkippingInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::LoadPageBySkippingInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LoadPageBySkippingInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnSuccessGeneratePremium
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)

class FString UUI_ModPage_C::OnSuccessGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccessGeneratePremium");

	Params::UUI_ModPage_C_OnSuccessGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnErrorGeneratePremium
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::OnErrorGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnErrorGeneratePremium");

	Params::UUI_ModPage_C_OnErrorGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PremiumModChecking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::PremiumModChecking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PremiumModChecking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnSuccessPremiumModsCheck
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int64> UUI_ModPage_C::OnSuccessPremiumModsCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccessPremiumModsCheck");

	Params::UUI_ModPage_C_OnSuccessPremiumModsCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.FailedPremiumModsChecks
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::FailedPremiumModsChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "FailedPremiumModsChecks");

	Params::UUI_ModPage_C_FailedPremiumModsChecks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Success
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int64> UUI_ModPage_C::Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Success");

	Params::UUI_ModPage_C_Success_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ModPage_C::OnError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnError");

	Params::UUI_ModPage_C_OnError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.DisablePurchaseButtonTemporarily
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DisablePurchaseButtonTemporarily()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DisablePurchaseButtonTemporarily");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ExecuteUbergraph_UI_ModPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        K2Node_Event_Search_Input                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_Event_SearchInput                                         (ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_Mod                                       (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UImage*                      K2Node_CustomEvent_IMG_Screenshot_1                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UImage*                      K2Node_CustomEvent_IMG_Screenshot                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_5                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString_1                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_9                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_6                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FModAsset                   CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, NoDestructor)
// class UUI_Prompt_GoToComments_C*   CallFunc_Create_ReturnValue_1                                    (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UUI_ZoomImage_C*             CallFunc_Create_ReturnValue_2                                    (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_7                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// struct FKey                        K2Node_CustomEvent_Key                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_1                             (Edit, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCategory                   CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_2                             (Edit, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_8                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_8                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_9                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_10                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_7                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      K2Node_CustomEvent_description                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      K2Node_CustomEvent_temp_user_token                               (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_6                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_modId                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
// struct FCFCoreMod                  K2Node_CustomEvent_mod                                           (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         CallFunc_MakeFInstallProgressMod_ReturnValue                     (Edit, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_5                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable_1                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class UTexture2DDynamic*           Temp_object_Variable_2                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_4                                     (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_3                                     (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      K2Node_CustomEvent_url                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CanLaunchURL_ReturnValue_1                              (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID                           (BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// struct FGenPremiumCheckoutUrlRequestK2Node_MakeStruct_GenPremiumCheckoutUrlRequest                   (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds_1                                      (EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace        (EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_1                         (BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_2                         (BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_2                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_11                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_3                         (BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_3                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_DidAllTheModsGetBought_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetModInCurrentPagePurchased_ReturnValue                (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_5                                     (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

FDelegateProperty_ UUI_ModPage_C::ExecuteUbergraph_UI_ModPage(int32* EntryPoint, int32* Temp_int_Variable, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, const class FString& Temp_string_Variable, bool Temp_bool_Variable, class UImage** K2Node_CustomEvent_IMG_Mod, class UTexture2DDynamic* CallFunc_Array_Get_Item, class UTexture2DDynamic* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, const struct FModAsset& CallFunc_Array_Get_Item_2, bool* CallFunc_Greater_IntInt_ReturnValue, int32* Temp_int_Variable_1, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class UUI_Prompt_GoToComments_C* CallFunc_Create_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable, class UUI_ZoomImage_C* CallFunc_Create_ReturnValue_2, struct FKey* K2Node_CustomEvent_Key, class FText CallFunc_MakeLiteralText_ReturnValue, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue_1, const struct FCategory& CallFunc_Array_Get_Item_3, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, class UTexture2DDynamic** Temp_object_Variable, class UTexture2DDynamic** K2Node_CustomEvent_Texture, const class FString& K2Node_CustomEvent_description, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, const class FString& K2Node_Select_Default, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CanLaunchURL_ReturnValue, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UTexture2DDynamic** Temp_object_Variable_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, class UTexture2DDynamic** Temp_object_Variable_2, int32* Temp_int_Variable_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_4, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, class FString* K2Node_CustomEvent_url, bool CallFunc_CanLaunchURL_ReturnValue_1, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, bool* CallFunc_K2_IsValidTimerHandle_ReturnValue, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, class UTexture2DDynamic** K2Node_CustomEvent_Texture_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ExecuteUbergraph_UI_ModPage");

	Params::UUI_ModPage_C_ExecuteUbergraph_UI_ModPage_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_StringLimit_NewString_1 = CallFunc_StringLimit_NewString_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_CustomEvent_description = K2Node_CustomEvent_description;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_temp_user_token = K2Node_CustomEvent_temp_user_token;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue = CallFunc_MakeSettingsFromProjectConfig_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue_1 = CallFunc_CanLaunchURL_ReturnValue_1;
	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_CustomEvent_IMG_Mod != nullptr)
		*K2Node_CustomEvent_IMG_Mod = Parms.K2Node_CustomEvent_IMG_Mod;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_DownloadImage_ReturnValue != nullptr)
		*CallFunc_DownloadImage_ReturnValue = Parms.CallFunc_DownloadImage_ReturnValue;

	if (CallFunc_NotEqual_StrStr_ReturnValue != nullptr)
		*CallFunc_NotEqual_StrStr_ReturnValue = Parms.CallFunc_NotEqual_StrStr_ReturnValue;

	if (K2Node_CustomEvent_Key != nullptr)
		*K2Node_CustomEvent_Key = std::move(Parms.K2Node_CustomEvent_Key);

	if (CallFunc_DownloadImage_ReturnValue_1 != nullptr)
		*CallFunc_DownloadImage_ReturnValue_1 = Parms.CallFunc_DownloadImage_ReturnValue_1;

	if (CallFunc_DownloadImage_ReturnValue_2 != nullptr)
		*CallFunc_DownloadImage_ReturnValue_2 = Parms.CallFunc_DownloadImage_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_NotEqual_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_NotEqual_StrStr_ReturnValue_1 = Parms.CallFunc_NotEqual_StrStr_ReturnValue_1;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	if (K2Node_CustomEvent_Texture_2 != nullptr)
		*K2Node_CustomEvent_Texture_2 = Parms.K2Node_CustomEvent_Texture_2;

	if (Temp_object_Variable_2 != nullptr)
		*Temp_object_Variable_2 = Parms.Temp_object_Variable_2;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (K2Node_CustomEvent_Texture_4 != nullptr)
		*K2Node_CustomEvent_Texture_4 = Parms.K2Node_CustomEvent_Texture_4;

	if (K2Node_CustomEvent_Texture_3 != nullptr)
		*K2Node_CustomEvent_Texture_3 = Parms.K2Node_CustomEvent_Texture_3;

	if (K2Node_CustomEvent_url != nullptr)
		*K2Node_CustomEvent_url = std::move(Parms.K2Node_CustomEvent_url);

	if (CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace != nullptr)
		*CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace = Parms.CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace;

	if (CallFunc_K2_IsValidTimerHandle_ReturnValue != nullptr)
		*CallFunc_K2_IsValidTimerHandle_ReturnValue = Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue;

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	if (K2Node_CustomEvent_Texture_5 != nullptr)
		*K2Node_CustomEvent_Texture_5 = Parms.K2Node_CustomEvent_Texture_5;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnReturnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::OnReturnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnReturnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


