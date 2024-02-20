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
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FInstallProgressMod         NewInformation                                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         TempMod                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, struct FInstallProgressMod* TempMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnEventBroadcasted");

	Params::UUI_ModPage_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TempMod != nullptr)
		*TempMod = std::move(Parms.TempMod);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

class UWidget* UUI_ModPage_C::GetClose_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetClose_B");

	Params::UUI_ModPage_C_GetClose_B_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_2(class UImage* IMG_Screenshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_2");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_2_Params Parms{};

	Parms.IMG_Screenshot = IMG_Screenshot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_1(class UImage* IMG_Screenshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_1");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_1_Params Parms{};

	Parms.IMG_Screenshot = IMG_Screenshot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_0");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Update Purchase Button Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ModPage_C::Update_Purchase_Button_Enabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Update Purchase Button Enabled");

	Params::UUI_ModPage_C_Update_Purchase_Button_Enabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetModInCurrentPagePurchased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ModPage_C::GetModInCurrentPagePurchased(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetModInCurrentPagePurchased");

	Params::UUI_ModPage_C_GetModInCurrentPagePurchased_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.DestroyPurchaseResponseHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::DestroyPurchaseResponseHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DestroyPurchaseResponseHandle");

	Params::UUI_ModPage_C_DestroyPurchaseResponseHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.GetIdOfModInCurrentPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              As_ID                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      As_Array                                                         (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

TArray<int64> UUI_ModPage_C::GetIdOfModInCurrentPage(int64 As_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetIdOfModInCurrentPage");

	Params::UUI_ModPage_C_GetIdOfModInCurrentPage_Params Parms{};

	Parms.As_ID = As_ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ModPage_C::BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPGamepadReleased");

	Params::UUI_ModPage_C_BPGamepadReleased_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.BPCycleHighlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ModPage_C::BPCycleHighlighted(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPCycleHighlighted");

	Params::UUI_ModPage_C_BPCycleHighlighted_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ModPage_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ModPage_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ModPage_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPEscapeClosed");

	Params::UUI_ModPage_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// bool                               Show                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_ModPage_C::ShowCarouselButtons(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ShowCarouselButtons");

	Params::UUI_ModPage_C_ShowCarouselButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

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
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UUI_ModPage_C::GetScrrenshotPaginationText(class FText ReturnValue, bool* Temp_bool_Variable, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetScrrenshotPaginationText");

	Params::UUI_ModPage_C_GetScrrenshotPaginationText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetScreenshotImageTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ModPage_C::SetScreenshotImageTo(class UTexture2DDynamic** Texture, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetScreenshotImageTo");

	Params::UUI_ModPage_C_SetScreenshotImageTo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.IfNoModCardsThenCollapse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_ModPage_C::IfNoModCardsThenCollapse(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "IfNoModCardsThenCollapse");

	Params::UUI_ModPage_C_IfNoModCardsThenCollapse_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModCards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class EInstallStatus          Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, EditorOnly)
// enum class EInstallStatus          Temp_byte_Variable_10                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_15                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_16                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_17                                            (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid_1                                 (Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)

void UUI_ModPage_C::UpdateModCards(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class EInstallStatus* Temp_byte_Variable_2, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_3, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, enum class ESlateVisibility* Temp_byte_Variable_6, enum class ESlateVisibility* Temp_byte_Variable_7, enum class ESlateVisibility* Temp_byte_Variable_8, enum class ESlateVisibility* Temp_byte_Variable_9, enum class EInstallStatus* Temp_byte_Variable_10, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility* Temp_byte_Variable_11, enum class ESlateVisibility* Temp_byte_Variable_12, enum class ESlateVisibility* Temp_byte_Variable_13, enum class ESlateVisibility* Temp_byte_Variable_14, enum class ESlateVisibility* Temp_byte_Variable_15, enum class ESlateVisibility* Temp_byte_Variable_16, enum class ESlateVisibility* Temp_byte_Variable_17, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsModValid_IsValid, bool* Temp_bool_Variable, bool CallFunc_GetIsModValid_IsValid_1, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ESlateVisibility* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModCards");

	Params::UUI_ModPage_C_UpdateModCards_Params Parms{};

	Parms.CallFunc_GetIsModValid_IsValid = CallFunc_GetIsModValid_IsValid;
	Parms.CallFunc_GetIsModValid_IsValid_1 = CallFunc_GetIsModValid_IsValid_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_byte_Variable_4 != nullptr)
		*Temp_byte_Variable_4 = Parms.Temp_byte_Variable_4;

	if (Temp_byte_Variable_5 != nullptr)
		*Temp_byte_Variable_5 = Parms.Temp_byte_Variable_5;

	if (Temp_byte_Variable_6 != nullptr)
		*Temp_byte_Variable_6 = Parms.Temp_byte_Variable_6;

	if (Temp_byte_Variable_7 != nullptr)
		*Temp_byte_Variable_7 = Parms.Temp_byte_Variable_7;

	if (Temp_byte_Variable_8 != nullptr)
		*Temp_byte_Variable_8 = Parms.Temp_byte_Variable_8;

	if (Temp_byte_Variable_9 != nullptr)
		*Temp_byte_Variable_9 = Parms.Temp_byte_Variable_9;

	if (Temp_byte_Variable_10 != nullptr)
		*Temp_byte_Variable_10 = Parms.Temp_byte_Variable_10;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_byte_Variable_11 != nullptr)
		*Temp_byte_Variable_11 = Parms.Temp_byte_Variable_11;

	if (Temp_byte_Variable_12 != nullptr)
		*Temp_byte_Variable_12 = Parms.Temp_byte_Variable_12;

	if (Temp_byte_Variable_13 != nullptr)
		*Temp_byte_Variable_13 = Parms.Temp_byte_Variable_13;

	if (Temp_byte_Variable_14 != nullptr)
		*Temp_byte_Variable_14 = Parms.Temp_byte_Variable_14;

	if (Temp_byte_Variable_15 != nullptr)
		*Temp_byte_Variable_15 = Parms.Temp_byte_Variable_15;

	if (Temp_byte_Variable_16 != nullptr)
		*Temp_byte_Variable_16 = Parms.Temp_byte_Variable_16;

	if (Temp_byte_Variable_17 != nullptr)
		*Temp_byte_Variable_17 = Parms.Temp_byte_Variable_17;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModPaidState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// int32                              K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)

bool UUI_ModPage_C::UpdateModPaidState(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, bool* Temp_bool_Variable_3, bool CallFunc_GetIsModValid_IsValid, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, int32* K2Node_Select_Default_2, enum class ESlateVisibility* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModPaidState");

	Params::UUI_ModPage_C_UpdateModPaidState_Params Parms{};

	Parms.CallFunc_GetIsModValid_IsValid = CallFunc_GetIsModValid_IsValid;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (Temp_byte_Variable_4 != nullptr)
		*Temp_byte_Variable_4 = Parms.Temp_byte_Variable_4;

	if (Temp_byte_Variable_5 != nullptr)
		*Temp_byte_Variable_5 = Parms.Temp_byte_Variable_5;

	if (Temp_bool_Variable_3 != nullptr)
		*Temp_bool_Variable_3 = Parms.Temp_bool_Variable_3;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.DebugScreenshotImageIndexing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Increase                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::DebugScreenshotImageIndexing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DebugScreenshotImageIndexing");

	Params::UUI_ModPage_C_DebugScreenshotImageIndexing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.AddScreenshotToList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// struct FModAsset                   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)

struct FModAsset UUI_ModPage_C::AddScreenshotToList(int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AddScreenshotToList");

	Params::UUI_ModPage_C_AddScreenshotToList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetFirstImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::SetFirstImageLoaded(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetFirstImageLoaded");

	Params::UUI_ModPage_C_SetFirstImageLoaded_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetModVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetModVersion_FinalAmount                               (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ModPage_C::SetModVersion(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetModVersion");

	Params::UUI_ModPage_C_SetModVersion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitAllVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_GetDownloadCount_FinalAmount                            (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_GetModVersion_FinalAmount                               (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetAuthorName_CombinedAuthorsNames                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetModName_Name                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

int64 UUI_ModPage_C::InitAllVars(TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array, class FText CallFunc_GetDownloadCount_FinalAmount, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_GetAuthorName_CombinedAuthorsNames, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitAllVars");

	Params::UUI_ModPage_C_InitAllVars_Params Parms{};

	Parms.CallFunc_GetDownloadCount_FinalAmount = CallFunc_GetDownloadCount_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIdOfModInCurrentPage_As_Array != nullptr)
		*CallFunc_GetIdOfModInCurrentPage_As_Array = std::move(Parms.CallFunc_GetIdOfModInCurrentPage_As_Array);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_GetAuthorName_CombinedAuthorsNames != nullptr)
		*CallFunc_GetAuthorName_CombinedAuthorsNames = std::move(Parms.CallFunc_GetAuthorName_CombinedAuthorsNames);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_GetModName_Name != nullptr)
		*CallFunc_GetModName_Name = std::move(Parms.CallFunc_GetModName_Name);

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotButtonsEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetScrrenshotPaginationText_ReturnValue                 (BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::UpdateScreenshotButtonsEnabled(class FText CallFunc_GetScrrenshotPaginationText_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, bool* CallFunc_CanGoToPreviousImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotButtonsEnabled");

	Params::UUI_ModPage_C_UpdateScreenshotButtonsEnabled_Params Parms{};

	Parms.CallFunc_GetScrrenshotPaginationText_ReturnValue = CallFunc_GetScrrenshotPaginationText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CanGoToNextImage_ReturnValue != nullptr)
		*CallFunc_CanGoToNextImage_ReturnValue = Parms.CallFunc_CanGoToNextImage_ReturnValue;

	if (CallFunc_CanGoToPreviousImage_ReturnValue != nullptr)
		*CallFunc_CanGoToPreviousImage_ReturnValue = Parms.CallFunc_CanGoToPreviousImage_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CanGoToPreviousImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentPage                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ModPage_C::CanGoToPreviousImage(int32 CurrentPage, bool ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToPreviousImage");

	Params::UUI_ModPage_C_CanGoToPreviousImage_Params Parms{};

	Parms.CurrentPage = CurrentPage;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CanGoToNextImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentPage                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ModPage_C::CanGoToNextImage(int32 CurrentPage, bool ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToNextImage");

	Params::UUI_ModPage_C_CanGoToNextImage_Params Parms{};

	Parms.CurrentPage = CurrentPage;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateModUnavailableState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

struct FSlateBrush UUI_ModPage_C::UpdateModUnavailableState(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsModAvailable_Is_Available, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateModUnavailableState");

	Params::UUI_ModPage_C_UpdateModUnavailableState_Params Parms{};

	Parms.CallFunc_GetIsModAvailable_Is_Available = CallFunc_GetIsModAvailable_Is_Available;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

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
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanLaunchURL_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UUI_ModPage_C::LaunchCommentsURL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LaunchCommentsURL");

	Params::UUI_ModPage_C_LaunchCommentsURL_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ModPage_C::ActionSwitch(enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ActionSwitch");

	Params::UUI_ModPage_C_ActionSwitch_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PlayAnimationThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlreadyLoaded                                                    (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::PlayAnimationThumbnail(bool* AlreadyLoaded, bool* Temp_bool_Variable, class UWidgetAnimation** K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayAnimationThumbnail");

	Params::UUI_ModPage_C_PlayAnimationThumbnail_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AlreadyLoaded != nullptr)
		*AlreadyLoaded = Parms.AlreadyLoaded;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

}


// Function UI_ModPage.UI_ModPage_C.FindThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

void UUI_ModPage_C::FindThumbnail(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "FindThumbnail");

	Params::UUI_ModPage_C_FindThumbnail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

}


// Function UI_ModPage.UI_ModPage_C.SetThumbnailImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ModPage_C::SetThumbnailImage(class UTexture2DDynamic** Texture, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetThumbnailImage");

	Params::UUI_ModPage_C_SetThumbnailImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.PlayStartinAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ModPage_C::PlayStartinAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayStartinAnimation");

	Params::UUI_ModPage_C_PlayStartinAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateCancelButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_ModPage_C::UpdateCancelButtonState(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateCancelButtonState");

	Params::UUI_ModPage_C_UpdateCancelButtonState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateUninstallButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)

bool UUI_ModPage_C::UpdateUninstallButtonState(bool CallFunc_GetIsModValid_IsValid, bool CallFunc_GetIsModAvailable_Is_Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateUninstallButtonState");

	Params::UUI_ModPage_C_UpdateUninstallButtonState_Params Parms{};

	Parms.CallFunc_GetIsModValid_IsValid = CallFunc_GetIsModValid_IsValid;
	Parms.CallFunc_GetIsModAvailable_Is_Available = CallFunc_GetIsModAvailable_Is_Available;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.AssignLastUpdatedInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDay_ReturnValue                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetYear_ReturnValue                                     (Edit, ConstParm, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetMonth_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UUI_ModPage_C::AssignLastUpdatedInformation(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AssignLastUpdatedInformation");

	Params::UUI_ModPage_C_AssignLastUpdatedInformation_Params Parms{};

	Parms.CallFunc_GetYear_ReturnValue = CallFunc_GetYear_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetDay_ReturnValue != nullptr)
		*CallFunc_GetDay_ReturnValue = Parms.CallFunc_GetDay_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Init All Widget Refs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

void UUI_ModPage_C::Init_All_Widget_Refs(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Init All Widget Refs");

	Params::UUI_ModPage_C_Init_All_Widget_Refs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

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
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ModPage_C::CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CloseBNavigation");

	Params::UUI_ModPage_C_CloseBNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.InstallBCustomNavigation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_StoreMenu_C* UUI_ModPage_C::InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InstallBCustomNavigation");

	Params::UUI_ModPage_C_InstallBCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetSubCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UUI_Option_ModPageCategory_C*CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class UPanelSlot* UUI_ModPage_C::SetSubCategories(class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetSubCategories");

	Params::UUI_ModPage_C_SetSubCategories_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CheckIfHideReadMoreButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_ModPage_C::CheckIfHideReadMoreButton(class FString* Text, int32* CallFunc_Multiply_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CheckIfHideReadMoreButton");

	Params::UUI_ModPage_C_CheckIfHideReadMoreButton_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.ShortenModeDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Downloads                                                        (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        ShortenDownloads                                                 (ConstParm, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FText                        _currentSuffix                                                   (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             _currentDownloads                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UUI_ModPage_C::ShortenModeDownloads(int64* Downloads, class FText ShortenDownloads, class FText _currentSuffix, double* _currentDownloads, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ShortenModeDownloads");

	Params::UUI_ModPage_C_ShortenModeDownloads_Params Parms{};

	Parms.ShortenDownloads = ShortenDownloads;
	Parms._currentSuffix = _currentSuffix;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Downloads != nullptr)
		*Downloads = Parms.Downloads;

	if (_currentDownloads != nullptr)
		*_currentDownloads = Parms._currentDownloads;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool UUI_ModPage_C::UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotImage");

	Params::UUI_ModPage_C_UpdateScreenshotImage_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SetDateAdded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDay_ReturnValue                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetYear_ReturnValue                                     (Edit, ConstParm, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetMonth_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UUI_ModPage_C::SetDateAdded(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetDateAdded");

	Params::UUI_ModPage_C_SetDateAdded_Params Parms{};

	Parms.CallFunc_GetYear_ReturnValue = CallFunc_GetYear_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetDay_ReturnValue != nullptr)
		*CallFunc_GetDay_ReturnValue = Parms.CallFunc_GetDay_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.InitModPageDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_InitializeModView_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ModPage_C::InitModPageDefault(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModPageDefault");

	Params::UUI_ModPage_C_InitModPageDefault_Params Parms{};

	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ModPage_C::OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnMouseButtonDown");

	Params::UUI_ModPage_C_OnMouseButtonDown_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_13897D64427114E2F64F66A69E6EA523
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnFail_13897D64427114E2F64F66A69E6EA523(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_13897D64427114E2F64F66A69E6EA523");

	Params::UUI_ModPage_C_OnFail_13897D64427114E2F64F66A69E6EA523_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_13897D64427114E2F64F66A69E6EA523
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnSuccess_13897D64427114E2F64F66A69E6EA523(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_13897D64427114E2F64F66A69E6EA523");

	Params::UUI_ModPage_C_OnSuccess_13897D64427114E2F64F66A69E6EA523_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA");

	Params::UUI_ModPage_C_OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA");

	Params::UUI_ModPage_C_OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4");

	Params::UUI_ModPage_C_OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_ModPage_C::OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4");

	Params::UUI_ModPage_C_OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ModPage.UI_ModPage_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::OnSearch(class FText* Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSearch");

	Params::UUI_ModPage_C_OnSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Search_Input != nullptr)
		*Search_Input = Parms.Search_Input;

}


// Function UI_ModPage.UI_ModPage_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::UpdateSearch(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateSearch");

	Params::UUI_ModPage_C_UpdateSearch_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Animation_UpdateThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

class UImage* UUI_ModPage_C::Animation_UpdateThumbnail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_UpdateThumbnail");

	Params::UUI_ModPage_C_Animation_UpdateThumbnail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.Animation_ScreenshotLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::Animation_ScreenshotLoaded(class UImage* IMG_Screenshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_ScreenshotLoaded");

	Params::UUI_ModPage_C_Animation_ScreenshotLoaded_Params Parms{};

	Parms.IMG_Screenshot = IMG_Screenshot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Animation_SwapImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Screenshot                                                   (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModPage_C::Animation_SwapImage(class UImage* IMG_Screenshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_SwapImage");

	Params::UUI_ModPage_C_Animation_SwapImage_Params Parms{};

	Parms.IMG_Screenshot = IMG_Screenshot;

	UObject::ProcessEvent(Func, &Parms);

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
// struct FModsDirInfo                ModsDirInfo                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)

void UUI_ModPage_C::CustomEvent(struct FModsDirInfo* ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent");

	Params::UUI_ModPage_C_CustomEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ModsDirInfo != nullptr)
		*ModsDirInfo = std::move(Parms.ModsDirInfo);

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_ModPage_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Tick");

	Params::UUI_ModPage_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

struct FKey UUI_ModPage_C::ButtonCall(enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ButtonCall");

	Params::UUI_ModPage_C_ButtonCall_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// TArray<struct FCategory>           Categories                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

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
// class FString                      Description                                                      (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)

class FString UUI_ModPage_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_0");

	Params::UUI_ModPage_C_CustomEvent_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

int64 UUI_ModPage_C::InitModByID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModByID");

	Params::UUI_ModPage_C_InitModByID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModPage.UI_ModPage_C.SuccessIGuess
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)

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
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        K2Node_Event_Search_Input                                        (BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_Event_SearchInput                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_Mod                                       (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UImage*                      K2Node_CustomEvent_IMG_Screenshot_1                              (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UImage*                      K2Node_CustomEvent_IMG_Screenshot                                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_5                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString_1                                 (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_9                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_6                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FModAsset                   CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// class UUI_Prompt_GoToComments_C*   CallFunc_Create_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UUI_ZoomImage_C*             CallFunc_Create_ReturnValue_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_7                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// struct FKey                        K2Node_CustomEvent_Key                                           (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_1                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCategory                   CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_2                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_8                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_8                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_9                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_10                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_7                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      K2Node_CustomEvent_description                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      K2Node_CustomEvent_temp_user_token                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_6                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_modId                                         (Edit, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// struct FCFCoreMod                  K2Node_CustomEvent_mod                                           (BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         CallFunc_MakeFInstallProgressMod_ReturnValue                     (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_5                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class UTexture2DDynamic*           Temp_object_Variable_2                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_4                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_3                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      K2Node_CustomEvent_url                                           (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CanLaunchURL_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// struct FGenPremiumCheckoutUrlRequestK2Node_MakeStruct_GenPremiumCheckoutUrlRequest                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds_1                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace        (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_1                         (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_1                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_2                         (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_2                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_11                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int64                              CallFunc_GetIdOfModInCurrentPage_As_ID_3                         (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// TArray<int64>                      CallFunc_GetIdOfModInCurrentPage_As_Array_3                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_DidAllTheModsGetBought_ReturnValue                      (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetModInCurrentPagePurchased_ReturnValue                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_5                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UUI_ModPage_C::ExecuteUbergraph_UI_ModPage(class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, bool* Temp_bool_Variable, class FText* K2Node_Event_SearchInput, bool* CallFunc_IsValid_ReturnValue_6, class UImage* K2Node_CustomEvent_IMG_Screenshot_1, class UImage* K2Node_CustomEvent_IMG_Screenshot, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error_9, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetIsModAvailable_Is_Available, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_CanGoToPreviousImage_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, class FText* CallFunc_Conv_StringToText_ReturnValue_3, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_8, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_10, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_15, class UTexture2DDynamic* K2Node_CustomEvent_Texture, struct FCFCoreError* K2Node_CustomEvent_error_7, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class FString* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_1, struct FCFCoreError* K2Node_CustomEvent_error_6, bool* CallFunc_IsValid_ReturnValue_16, int64* K2Node_CustomEvent_modId, const struct FCFCoreMod& K2Node_CustomEvent_mod, struct FCFCoreError* K2Node_CustomEvent_error_5, struct FCFCoreError* K2Node_CustomEvent_error_4, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic* Temp_object_Variable_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, struct FCFCoreError* K2Node_CustomEvent_error_3, class UTexture2DDynamic* Temp_object_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_4, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, struct FCFCoreError* K2Node_CustomEvent_error_2, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array, struct FCFCoreError* K2Node_CustomEvent_error_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_1, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_2, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_11, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_3, bool* CallFunc_IsValid_ReturnValue_17, bool CallFunc_GetModInCurrentPagePurchased_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_5, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue_18)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ExecuteUbergraph_UI_ModPage");

	Params::UUI_ModPage_C_ExecuteUbergraph_UI_ModPage_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_3 = CallFunc_GetEngineSubsystem_ReturnValue_3;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_4 = CallFunc_GetEngineSubsystem_ReturnValue_4;
	Parms.K2Node_CustomEvent_IMG_Screenshot_1 = K2Node_CustomEvent_IMG_Screenshot_1;
	Parms.K2Node_CustomEvent_IMG_Screenshot = K2Node_CustomEvent_IMG_Screenshot;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_5 = CallFunc_GetEngineSubsystem_ReturnValue_5;
	Parms.K2Node_CustomEvent_ModsDirInfo = K2Node_CustomEvent_ModsDirInfo;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_6 = CallFunc_GetEngineSubsystem_ReturnValue_6;
	Parms.CallFunc_GetIsModAvailable_Is_Available = CallFunc_GetIsModAvailable_Is_Available;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_7 = CallFunc_GetEngineSubsystem_ReturnValue_7;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_8 = CallFunc_GetEngineSubsystem_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_9 = CallFunc_GetEngineSubsystem_ReturnValue_9;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_10 = CallFunc_GetEngineSubsystem_ReturnValue_10;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_mod = K2Node_CustomEvent_mod;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_Texture_2 = K2Node_CustomEvent_Texture_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_Texture_4 = K2Node_CustomEvent_Texture_4;
	Parms.K2Node_CustomEvent_Texture_3 = K2Node_CustomEvent_Texture_3;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_11 = CallFunc_GetEngineSubsystem_ReturnValue_11;
	Parms.CallFunc_GetModInCurrentPagePurchased_ReturnValue = CallFunc_GetModInCurrentPagePurchased_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_5 = K2Node_CustomEvent_Texture_5;
	Parms.CallFunc_GetNotifManager_Output = CallFunc_GetNotifManager_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Event_SearchInput != nullptr)
		*K2Node_Event_SearchInput = Parms.K2Node_Event_SearchInput;

	if (CallFunc_IsValid_ReturnValue_6 != nullptr)
		*CallFunc_IsValid_ReturnValue_6 = Parms.CallFunc_IsValid_ReturnValue_6;

	if (CallFunc_IsValid_ReturnValue_7 != nullptr)
		*CallFunc_IsValid_ReturnValue_7 = Parms.CallFunc_IsValid_ReturnValue_7;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (K2Node_CustomEvent_error_9 != nullptr)
		*K2Node_CustomEvent_error_9 = std::move(Parms.K2Node_CustomEvent_error_9);

	if (CallFunc_IsValid_ReturnValue_8 != nullptr)
		*CallFunc_IsValid_ReturnValue_8 = Parms.CallFunc_IsValid_ReturnValue_8;

	if (CallFunc_IsValid_ReturnValue_9 != nullptr)
		*CallFunc_IsValid_ReturnValue_9 = Parms.CallFunc_IsValid_ReturnValue_9;

	if (CallFunc_IsValid_ReturnValue_10 != nullptr)
		*CallFunc_IsValid_ReturnValue_10 = Parms.CallFunc_IsValid_ReturnValue_10;

	if (CallFunc_IsValid_ReturnValue_11 != nullptr)
		*CallFunc_IsValid_ReturnValue_11 = Parms.CallFunc_IsValid_ReturnValue_11;

	if (CallFunc_CanGoToPreviousImage_ReturnValue != nullptr)
		*CallFunc_CanGoToPreviousImage_ReturnValue = Parms.CallFunc_CanGoToPreviousImage_ReturnValue;

	if (CallFunc_CanGoToNextImage_ReturnValue != nullptr)
		*CallFunc_CanGoToNextImage_ReturnValue = Parms.CallFunc_CanGoToNextImage_ReturnValue;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_IsValid_ReturnValue_12 != nullptr)
		*CallFunc_IsValid_ReturnValue_12 = Parms.CallFunc_IsValid_ReturnValue_12;

	if (CallFunc_IsValid_ReturnValue_13 != nullptr)
		*CallFunc_IsValid_ReturnValue_13 = Parms.CallFunc_IsValid_ReturnValue_13;

	if (CallFunc_IsValid_ReturnValue_14 != nullptr)
		*CallFunc_IsValid_ReturnValue_14 = Parms.CallFunc_IsValid_ReturnValue_14;

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_CustomEvent_error_8 != nullptr)
		*K2Node_CustomEvent_error_8 = std::move(Parms.K2Node_CustomEvent_error_8);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_15 != nullptr)
		*CallFunc_IsValid_ReturnValue_15 = Parms.CallFunc_IsValid_ReturnValue_15;

	if (K2Node_CustomEvent_error_7 != nullptr)
		*K2Node_CustomEvent_error_7 = std::move(Parms.K2Node_CustomEvent_error_7);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_Conv_StringToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_4 = Parms.CallFunc_Conv_StringToText_ReturnValue_4;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (K2Node_CustomEvent_error_6 != nullptr)
		*K2Node_CustomEvent_error_6 = std::move(Parms.K2Node_CustomEvent_error_6);

	if (CallFunc_IsValid_ReturnValue_16 != nullptr)
		*CallFunc_IsValid_ReturnValue_16 = Parms.CallFunc_IsValid_ReturnValue_16;

	if (K2Node_CustomEvent_modId != nullptr)
		*K2Node_CustomEvent_modId = Parms.K2Node_CustomEvent_modId;

	if (K2Node_CustomEvent_error_5 != nullptr)
		*K2Node_CustomEvent_error_5 = std::move(Parms.K2Node_CustomEvent_error_5);

	if (K2Node_CustomEvent_error_4 != nullptr)
		*K2Node_CustomEvent_error_4 = std::move(Parms.K2Node_CustomEvent_error_4);

	if (CallFunc_MakeSettingsFromProjectConfig_ReturnValue != nullptr)
		*CallFunc_MakeSettingsFromProjectConfig_ReturnValue = std::move(Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	if (K2Node_CustomEvent_error_3 != nullptr)
		*K2Node_CustomEvent_error_3 = std::move(Parms.K2Node_CustomEvent_error_3);

	if (K2Node_CustomEvent_error_2 != nullptr)
		*K2Node_CustomEvent_error_2 = std::move(Parms.K2Node_CustomEvent_error_2);

	if (CallFunc_GetIdOfModInCurrentPage_As_Array != nullptr)
		*CallFunc_GetIdOfModInCurrentPage_As_Array = std::move(Parms.CallFunc_GetIdOfModInCurrentPage_As_Array);

	if (K2Node_CustomEvent_error_1 != nullptr)
		*K2Node_CustomEvent_error_1 = std::move(Parms.K2Node_CustomEvent_error_1);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_2 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2;

	if (CallFunc_GetIdOfModInCurrentPage_As_Array_1 != nullptr)
		*CallFunc_GetIdOfModInCurrentPage_As_Array_1 = std::move(Parms.CallFunc_GetIdOfModInCurrentPage_As_Array_1);

	if (CallFunc_GetIdOfModInCurrentPage_As_Array_2 != nullptr)
		*CallFunc_GetIdOfModInCurrentPage_As_Array_2 = std::move(Parms.CallFunc_GetIdOfModInCurrentPage_As_Array_2);

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_3 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3;

	if (CallFunc_GetIdOfModInCurrentPage_As_Array_3 != nullptr)
		*CallFunc_GetIdOfModInCurrentPage_As_Array_3 = std::move(Parms.CallFunc_GetIdOfModInCurrentPage_As_Array_3);

	if (CallFunc_IsValid_ReturnValue_17 != nullptr)
		*CallFunc_IsValid_ReturnValue_17 = Parms.CallFunc_IsValid_ReturnValue_17;

	if (CallFunc_IsValid_ReturnValue_18 != nullptr)
		*CallFunc_IsValid_ReturnValue_18 = Parms.CallFunc_IsValid_ReturnValue_18;

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


