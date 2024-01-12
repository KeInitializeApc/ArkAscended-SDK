#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GameSlot.UI_GameSlot_C
// (None)

class UClass* UUI_GameSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GameSlot_C");

	return Clss;
}


// UI_GameSlot_C UI_GameSlot.Default__UI_GameSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GameSlot_C* UUI_GameSlot_C::GetDefaultObj()
{
	static class UUI_GameSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GameSlot_C*>(UUI_GameSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_GameSlot.UI_GameSlot_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FInstallProgressMod         NewInformation                                                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_GameSlot_C::OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, struct FInstallProgressMod* NewInformation, int32* CallFunc_Array_Length_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnEventBroadcasted");

	Params::UUI_GameSlot_C_OnEventBroadcasted_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Evt != nullptr)
		*Evt = Parms.Evt;

	if (ModsList != nullptr)
		*ModsList = std::move(Parms.ModsList);

	if (NewInformation != nullptr)
		*NewInformation = std::move(Parms.NewInformation);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.SequenceEvent__ENTRYPOINTUI_GameSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_GameImage                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

class UImage* UUI_GameSlot_C::SequenceEvent__ENTRYPOINTUI_GameSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "SequenceEvent__ENTRYPOINTUI_GameSlot");

	Params::UUI_GameSlot_C_SequenceEvent__ENTRYPOINTUI_GameSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdatePaidPremiumStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Paid                                 (ExportObject, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

TArray<struct FFormatArgumentData> UUI_GameSlot_C::UpdatePaidPremiumStatus(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsModPaidStatus_Paid, bool CallFunc_GetIsModPaidStatus_Purchased, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, class FText* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdatePaidPremiumStatus");

	Params::UUI_GameSlot_C_UpdatePaidPremiumStatus_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetIsModPaidStatus_Paid = CallFunc_GetIsModPaidStatus_Paid;
	Parms.CallFunc_GetIsModPaidStatus_Purchased = CallFunc_GetIsModPaidStatus_Purchased;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.Change Slot Enable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnableState                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_GameSlot_C::Change_Slot_Enable_State(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Change Slot Enable State");

	Params::UUI_GameSlot_C_Change_Slot_Enable_State_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.PlayStartingAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUMGSequencePlayer* UUI_GameSlot_C::PlayStartingAnimation(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "PlayStartingAnimation");

	Params::UUI_GameSlot_C_PlayStartingAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GetDownloadCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        FinalAmount                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UUI_GameSlot_C::GetDownloadCount(class FText* FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetDownloadCount");

	Params::UUI_GameSlot_C_GetDownloadCount_Params Parms{};

	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalAmount != nullptr)
		*FinalAmount = Parms.FinalAmount;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_GameSlot_C::UpdateModCard(bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModCard");

	Params::UUI_GameSlot_C_UpdateModCard_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetCurrentActivePage_CurrentPage != nullptr)
		*CallFunc_GetCurrentActivePage_CurrentPage = Parms.CallFunc_GetCurrentActivePage_CurrentPage;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GetModSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)

TArray<struct FFormatArgumentData> UUI_GameSlot_C::GetModSize(class FText* Result, int32 CallFunc_Add_IntInt_ReturnValue, struct FFile* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetModSize");

	Params::UUI_GameSlot_C_GetModSize_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GetAuthors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      CombinedAuthorsNames                                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      Local_TotalAuthors                                               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_GameSlot_C::GetAuthors(class FString* Local_TotalAuthors, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, struct FModAuthor* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetAuthors");

	Params::UUI_GameSlot_C_GetAuthors_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_TotalAuthors != nullptr)
		*Local_TotalAuthors = std::move(Parms.Local_TotalAuthors);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GetModName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UUI_GameSlot_C::GetModName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetModName");

	Params::UUI_GameSlot_C_GetModName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function UI_GameSlot.UI_GameSlot_C.ClearAllModsInAllPages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UUI_GameSlot_C::ClearAllModsInAllPages(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "ClearAllModsInAllPages");

	Params::UUI_GameSlot_C_ClearAllModsInAllPages_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateDownloadCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetDownloadCount_FinalAmount                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UUI_GameSlot_C::UpdateDownloadCount(bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_GetDownloadCount_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateDownloadCount");

	Params::UUI_GameSlot_C_UpdateDownloadCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetDownloadCount_FinalAmount != nullptr)
		*CallFunc_GetDownloadCount_FinalAmount = Parms.CallFunc_GetDownloadCount_FinalAmount;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_GetModSize_SizeStruct                                   (Edit, ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetModSize_SizeInText                                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// int64                              CallFunc_GetModSize_bytes                                        (BlueprintVisible, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

int64 UUI_GameSlot_C::UpdateModSize(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModSize");

	Params::UUI_GameSlot_C_UpdateModSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.Update LikeStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UUI_GameSlot_C::Update_LikeStatus(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Update LikeStatus");

	Params::UUI_GameSlot_C_Update_LikeStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUMGSequencePlayer* UUI_GameSlot_C::UpdateImage(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateImage");

	Params::UUI_GameSlot_C_UpdateImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateAuthors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetAuthorName_CombinedAuthorsNames                      (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

class FString UUI_GameSlot_C::UpdateAuthors(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateAuthors");

	Params::UUI_GameSlot_C_UpdateAuthors_Params Parms{};

	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetModName_Name                                         (EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)

void UUI_GameSlot_C::UpdateModName(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetModName_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModName");

	Params::UUI_GameSlot_C_UpdateModName_Params Parms{};

	Parms.CallFunc_GetModName_Name = CallFunc_GetModName_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.Try Set Game Version
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNumericallySet                                                 (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      Temp                                                             (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int32>                      Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFileIndex                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_GameSlot_C::Try_Set_Game_Version(TArray<int32>* Result, struct FFileIndex* CallFunc_Array_Get_Item, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Try Set Game Version");

	Params::UUI_GameSlot_C_Try_Set_Game_Version_Params Parms{};

	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.FormatDownloadNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Downloads                                                        (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FText                        FinalAmount                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)

bool UUI_GameSlot_C::FormatDownloadNumber(int64 Downloads, class FText* FinalAmount, bool CallFunc_Less_Int64Int64_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64* CallFunc_Divide_Int64Int64_ReturnValue_2, int64* CallFunc_Divide_Int64Int64_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FText* CallFunc_Conv_Int64ToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_4, bool CallFunc_Less_Int64Int64_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "FormatDownloadNumber");

	Params::UUI_GameSlot_C_FormatDownloadNumber_Params Parms{};

	Parms.Downloads = Downloads;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_1 = CallFunc_Less_Int64Int64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalAmount != nullptr)
		*FinalAmount = Parms.FinalAmount;

	if (CallFunc_Divide_Int64Int64_ReturnValue != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue = Parms.CallFunc_Divide_Int64Int64_ReturnValue;

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_Divide_Int64Int64_ReturnValue_1 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_1 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_1;

	if (CallFunc_Conv_Int64ToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_1 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_1;

	if (CallFunc_Divide_Int64Int64_ReturnValue_2 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_2 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_2;

	if (CallFunc_Divide_Int64Int64_ReturnValue_3 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_3 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_3;

	if (CallFunc_Conv_Int64ToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_2 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_2;

	if (CallFunc_Conv_Int64ToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_3 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_3;

	if (CallFunc_Conv_Int64ToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_4 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GenerateModNameToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_ToolTipWidget_C*         CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UUI_ToolTipWidget_C* UUI_GameSlot_C::GenerateModNameToolTipWidget(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GenerateModNameToolTipWidget");

	Params::UUI_GameSlot_C_GenerateModNameToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.GenerateAuthorNameToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UUI_ToolTipWidget_C*         CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UUI_ToolTipWidget_C* UUI_GameSlot_C::GenerateAuthorNameToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GenerateAuthorNameToolTipWidget");

	Params::UUI_GameSlot_C_GenerateAuthorNameToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.InitModInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         NewModInfo                                                       (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

struct FInstallProgressMod UUI_GameSlot_C::InitModInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "InitModInfo");

	Params::UUI_GameSlot_C_InitModInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UUI_RightClickMenu_C*        CallFunc_CreateRightClickMenu_MenuRef                            (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetMousePosition_LocationX                              (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_GetMousePosition_LocationY                              (ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

double UUI_GameSlot_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnMouseButtonDown");

	Params::UUI_GameSlot_C_OnMouseButtonDown_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnFail_9D95364741CA1B5428249F8ACB4C6143
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_GameSlot_C::OnFail_9D95364741CA1B5428249F8ACB4C6143()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnFail_9D95364741CA1B5428249F8ACB4C6143");

	Params::UUI_GameSlot_C_OnFail_9D95364741CA1B5428249F8ACB4C6143_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_9D95364741CA1B5428249F8ACB4C6143
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_GameSlot_C::OnSuccess_9D95364741CA1B5428249F8ACB4C6143()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnSuccess_9D95364741CA1B5428249F8ACB4C6143");

	Params::UUI_GameSlot_C_OnSuccess_9D95364741CA1B5428249F8ACB4C6143_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_GameSlot_C::OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82");

	Params::UUI_GameSlot_C_OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_GameSlot_C::OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82");

	Params::UUI_GameSlot_C_OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_GameSlot_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnItemSelectionChanged");

	Params::UUI_GameSlot_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UUI_GameSlot_C::OnListItemObjectSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnListItemObjectSet");

	Params::UUI_GameSlot_C_OnListItemObjectSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.InstallMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::InstallMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "InstallMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

bool UUI_GameSlot_C::BP_OnItemExpansionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnItemExpansionChanged");

	Params::UUI_GameSlot_C_BP_OnItemExpansionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.CallUninstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::CallUninstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CallUninstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.CheckDiskSpaceToInstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::CheckDiskSpaceToInstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CheckDiskSpaceToInstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient)

void UUI_GameSlot_C::CustomEvent(struct FModsDirInfo* ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CustomEvent");

	Params::UUI_GameSlot_C_CustomEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ModsDirInfo != nullptr)
		*ModsDirInfo = std::move(Parms.ModsDirInfo);

}


// Function UI_GameSlot.UI_GameSlot_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_GameSlot_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CustomEvent_1");

	Params::UUI_GameSlot_C_CustomEvent_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.CancelInstallation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::CancelInstallation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CancelInstallation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event On Uninstall Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_On_Uninstall_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event On Uninstall Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event On Uninstall Aprroved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_On_Uninstall_Aprroved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event On Uninstall Aprroved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Animation_UpdateModImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_GameImage                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

class UImage* UUI_GameSlot_C::Animation_UpdateModImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Animation_UpdateModImage");

	Params::UUI_GameSlot_C_Animation_UpdateModImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event View Mod Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_View_Mod_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event View Mod Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateInstallSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateInstallSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateInstallSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.JustDownloadAndPlaceImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::JustDownloadAndPlaceImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "JustDownloadAndPlaceImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UUI_GameSlot_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Tick");

	Params::UUI_GameSlot_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.RequestDownloadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL_String                                                       (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

class FString UUI_GameSlot_C::RequestDownloadImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "RequestDownloadImage");

	Params::UUI_GameSlot_C_RequestDownloadImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.ExecuteUbergraph_UI_GameSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_3                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     Temp_object_Variable_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2DDynamic*           Temp_object_Variable_2                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_Event_bIsSelected                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UObject*                     K2Node_Event_ListItemObject                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bIsExpanded                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     Temp_object_Variable_3                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_GameImage                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString_1                                 (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_IsClosed_Variable                                      (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UObject*                     K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace        (Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_InitializeModView_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUI_ModPage_C*               CallFunc_CreateModPageMenu_ModPageRef                            (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_URL_String                                    (BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_CreateModPageFromStandalone_ReturnValue                 (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)

bool UUI_GameSlot_C::ExecuteUbergraph_UI_GameSlot(bool* CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UObject** Temp_object_Variable_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, bool* CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_1, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable_2, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, class UObject** Temp_object_Variable_3, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, bool Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue_7, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UImage** K2Node_CustomEvent_IMG_GameImage, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, class UObject** K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool* CallFunc_IsValid_ReturnValue_11, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_InitializeModView_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_1, bool* CallFunc_HasAnyUserFocus_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, class UObject** K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "ExecuteUbergraph_UI_GameSlot");

	Params::UUI_GameSlot_C_ExecuteUbergraph_UI_GameSlot_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_StringLimit_NewString_1 = CallFunc_StringLimit_NewString_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_DownloadImage_ReturnValue_1 = CallFunc_DownloadImage_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_Texture_3 != nullptr)
		*K2Node_CustomEvent_Texture_3 = Parms.K2Node_CustomEvent_Texture_3;

	if (K2Node_CustomEvent_Texture_2 != nullptr)
		*K2Node_CustomEvent_Texture_2 = Parms.K2Node_CustomEvent_Texture_2;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	if (Temp_object_Variable_2 != nullptr)
		*Temp_object_Variable_2 = Parms.Temp_object_Variable_2;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (CallFunc_IsValid_ReturnValue_6 != nullptr)
		*CallFunc_IsValid_ReturnValue_6 = Parms.CallFunc_IsValid_ReturnValue_6;

	if (Temp_object_Variable_3 != nullptr)
		*Temp_object_Variable_3 = Parms.Temp_object_Variable_3;

	if (K2Node_CustomEvent_ModsDirInfo != nullptr)
		*K2Node_CustomEvent_ModsDirInfo = std::move(Parms.K2Node_CustomEvent_ModsDirInfo);

	if (CallFunc_IsValid_ReturnValue_7 != nullptr)
		*CallFunc_IsValid_ReturnValue_7 = Parms.CallFunc_IsValid_ReturnValue_7;

	if (CallFunc_IsValid_ReturnValue_8 != nullptr)
		*CallFunc_IsValid_ReturnValue_8 = Parms.CallFunc_IsValid_ReturnValue_8;

	if (K2Node_CustomEvent_IMG_GameImage != nullptr)
		*K2Node_CustomEvent_IMG_GameImage = Parms.K2Node_CustomEvent_IMG_GameImage;

	if (CallFunc_IsValid_ReturnValue_9 != nullptr)
		*CallFunc_IsValid_ReturnValue_9 = Parms.CallFunc_IsValid_ReturnValue_9;

	if (CallFunc_IsValid_ReturnValue_10 != nullptr)
		*CallFunc_IsValid_ReturnValue_10 = Parms.CallFunc_IsValid_ReturnValue_10;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue_11 != nullptr)
		*CallFunc_IsValid_ReturnValue_11 = Parms.CallFunc_IsValid_ReturnValue_11;

	if (CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace != nullptr)
		*CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace = Parms.CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace;

	if (CallFunc_IsValid_ReturnValue_12 != nullptr)
		*CallFunc_IsValid_ReturnValue_12 = Parms.CallFunc_IsValid_ReturnValue_12;

	if (CallFunc_InitializeModView_ReturnValue != nullptr)
		*CallFunc_InitializeModView_ReturnValue = Parms.CallFunc_InitializeModView_ReturnValue;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_13 != nullptr)
		*CallFunc_IsValid_ReturnValue_13 = Parms.CallFunc_IsValid_ReturnValue_13;

	if (CallFunc_IsValid_ReturnValue_14 != nullptr)
		*CallFunc_IsValid_ReturnValue_14 = Parms.CallFunc_IsValid_ReturnValue_14;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}


// Function UI_GameSlot.UI_GameSlot_C.OnModUnInstall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModUnInstall__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModUnInstall__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnDisableClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnDisableClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnDisableClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModUninstalledComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModUninstalledComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModUninstalledComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModInstall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModInstall__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModInstall__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModInstalledComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModInstalledComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModInstalledComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Like__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Like__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Like__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


