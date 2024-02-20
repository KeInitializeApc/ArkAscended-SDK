#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_GlobalFunctions.BPFL_GlobalFunctions_C
// (None)

class UClass* UBPFL_GlobalFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_GlobalFunctions_C");

	return Clss;
}


// BPFL_GlobalFunctions_C BPFL_GlobalFunctions.Default__BPFL_GlobalFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_GlobalFunctions_C* UBPFL_GlobalFunctions_C::GetDefaultObj()
{
	static class UBPFL_GlobalFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_GlobalFunctions_C*>(UBPFL_GlobalFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DidAllTheModsGetBought
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModsBought                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      ModsRequested                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<int64>                      InitialList                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBPFL_GlobalFunctions_C::DidAllTheModsGetBought(TArray<int64>* ModsBought, TArray<int64>* ModsRequested, class UObject** __WorldContext, bool ReturnValue, TArray<int64>* InitialList, bool* CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DidAllTheModsGetBought");

	Params::UBPFL_GlobalFunctions_C_DidAllTheModsGetBought_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModsBought != nullptr)
		*ModsBought = std::move(Parms.ModsBought);

	if (ModsRequested != nullptr)
		*ModsRequested = std::move(Parms.ModsRequested);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (InitialList != nullptr)
		*InitialList = std::move(Parms.InitialList);

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DEBUG_Premium_PurchasedMods
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      ModList                                                          (Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)

class FString UBPFL_GlobalFunctions_C::DEBUG_Premium_PurchasedMods(TArray<int64>* Array, class UObject** __WorldContext, class FString* ModList, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DEBUG_Premium_PurchasedMods");

	Params::UBPFL_GlobalFunctions_C_DEBUG_Premium_PurchasedMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (ModList != nullptr)
		*ModList = std::move(Parms.ModList);

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DEBUG_Premium_WaitingBuyResponse
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      ModList                                                          (Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)

class FString UBPFL_GlobalFunctions_C::DEBUG_Premium_WaitingBuyResponse(TArray<int64>* Array, class UObject** __WorldContext, class FString* ModList, int32* CallFunc_Array_LastIndex_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DEBUG_Premium_WaitingBuyResponse");

	Params::UBPFL_GlobalFunctions_C_DEBUG_Premium_WaitingBuyResponse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (ModList != nullptr)
		*ModList = std::move(Parms.ModList);

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModPremium
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FPremiumDetails             Premium_Details                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)

struct FInstallProgressMod UBPFL_GlobalFunctions_C::GetIsModPremium(class UObject** __WorldContext, struct FPremiumDetails* Premium_Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModPremium");

	Params::UBPFL_GlobalFunctions_C_GetIsModPremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Premium_Details != nullptr)
		*Premium_Details = std::move(Parms.Premium_Details);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetNotifManager
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class UUI_NotificationManager_C*   Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
// TArray<class UUI_NotificationManager_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetNotifManager(class UObject** __WorldContext, class UUI_NotificationManager_C** Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetNotifManager");

	Params::UBPFL_GlobalFunctions_C_GetNotifManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModPaidStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      PurchasedModsIDs                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               Premium                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               Purchased                                                        (ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// double                             Tier_Price                                                       (ConstParm, ExportObject, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Currency_Symbol                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_FunctionResult_Tier_Price_ImplicitCast                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// double                             K2Node_FunctionResult_Tier_Price_ImplicitCast_1                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference, Interp)

int32 UBPFL_GlobalFunctions_C::GetIsModPaidStatus(TArray<int64>* PurchasedModsIDs, class UObject** __WorldContext, bool* Premium, bool* Purchased, double Tier_Price, const class FString& Currency_Symbol, double* K2Node_FunctionResult_Tier_Price_ImplicitCast, double* K2Node_FunctionResult_Tier_Price_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModPaidStatus");

	Params::UBPFL_GlobalFunctions_C_GetIsModPaidStatus_Params Parms{};

	Parms.Tier_Price = Tier_Price;
	Parms.Currency_Symbol = Currency_Symbol;

	UObject::ProcessEvent(Func, &Parms);

	if (PurchasedModsIDs != nullptr)
		*PurchasedModsIDs = std::move(Parms.PurchasedModsIDs);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Premium != nullptr)
		*Premium = Parms.Premium;

	if (Purchased != nullptr)
		*Purchased = Parms.Purchased;

	if (K2Node_FunctionResult_Tier_Price_ImplicitCast != nullptr)
		*K2Node_FunctionResult_Tier_Price_ImplicitCast = Parms.K2Node_FunctionResult_Tier_Price_ImplicitCast;

	if (K2Node_FunctionResult_Tier_Price_ImplicitCast_1 != nullptr)
		*K2Node_FunctionResult_Tier_Price_ImplicitCast_1 = Parms.K2Node_FunctionResult_Tier_Price_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStandalone
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromStandalone(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStandalone");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStandalone_Params Parms{};

	Parms.Mod_ID = Mod_ID;
	Parms.DrawUIOnZOrder = DrawUIOnZOrder;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_GameSlotRef != nullptr)
		*UI_GameSlotRef = Parms.UI_GameSlotRef;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModValid
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetIsModValid(class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModValid");

	Params::UBPFL_GlobalFunctions_C_GetIsModValid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DebugMod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         InstallProgressMod                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config)
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Debug_BroadcastEvent                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// enum class EGameModsEvent          Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               DebugInstallingUpdating                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      ModPurchasedIDs                                                  (ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FInstallProgressMod         DebugingMod                                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class FString                      TotalPrint                                                       (BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// enum class EGameModsEvent          CalledEvent                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// enum class EInstallStatus          Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      Temp_string_Variable_6                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
// enum class EInstallStatus          Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_7                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// class FString                      Temp_string_Variable_8                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      Temp_string_Variable_9                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      Temp_string_Variable_10                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      Temp_string_Variable_11                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_12                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_13                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FPremiumDetails             CallFunc_GetIsModPremium_Premium_Details                         (BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_GetModName_Name                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_3                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_23                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_24                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_25                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_26                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_27                            (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

double UBPFL_GlobalFunctions_C::DebugMod(struct FInstallProgressMod* InstallProgressMod, bool Debug_BroadcastEvent, enum class EGameModsEvent Event, bool DebugInstallingUpdating, TArray<int64>* ModPurchasedIDs, class UObject** __WorldContext, const struct FInstallProgressMod& DebugingMod, const class FString& TotalPrint, class UObject** Owner, enum class EInstallStatus* Temp_byte_Variable, int32 CallFunc_ReplaceInline_ReturnValue, enum class EInstallStatus* Temp_byte_Variable_1, const struct FPremiumDetails& CallFunc_GetIsModPremium_Premium_Details, class FString* K2Node_Select_Default, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* K2Node_Select_Default_1, class FString* CallFunc_SelectString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_GetModName_Name, bool CallFunc_GetIsModAvailable_Is_Available, bool CallFunc_GetIsModValid_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DebugMod");

	Params::UBPFL_GlobalFunctions_C_DebugMod_Params Parms{};

	Parms.Debug_BroadcastEvent = Debug_BroadcastEvent;
	Parms.Event = Event;
	Parms.DebugInstallingUpdating = DebugInstallingUpdating;
	Parms.DebugingMod = DebugingMod;
	Parms.TotalPrint = TotalPrint;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_GetIsModPremium_Premium_Details = CallFunc_GetIsModPremium_Premium_Details;
	Parms.CallFunc_GetIsModAvailable_Is_Available = CallFunc_GetIsModAvailable_Is_Available;
	Parms.CallFunc_GetIsModValid_IsValid = CallFunc_GetIsModValid_IsValid;

	UObject::ProcessEvent(Func, &Parms);

	if (InstallProgressMod != nullptr)
		*InstallProgressMod = std::move(Parms.InstallProgressMod);

	if (ModPurchasedIDs != nullptr)
		*ModPurchasedIDs = std::move(Parms.ModPurchasedIDs);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_Conv_DoubleToString_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_GetModName_Name != nullptr)
		*CallFunc_GetModName_Name = std::move(Parms.CallFunc_GetModName_Name);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              DiskSpace                                                        (BlueprintVisible, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         ModToInstall                                                     (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               EnoughSpace                                                      (ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)

int64 UBPFL_GlobalFunctions_C::Is_There_Enough_Space_to_Install_Mod(int64* DiskSpace, struct FInstallProgressMod* ModToInstall, class UObject** __WorldContext, bool* EnoughSpace, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "Is There Enough Space to Install Mod");

	Params::UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params Parms{};

	Parms.CallFunc_GreaterEqual_Int64Int64_ReturnValue = CallFunc_GreaterEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DiskSpace != nullptr)
		*DiskSpace = Parms.DiskSpace;

	if (ModToInstall != nullptr)
		*ModToInstall = std::move(Parms.ModToInstall);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (EnoughSpace != nullptr)
		*EnoughSpace = Parms.EnoughSpace;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetProcessedBarProgress
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   InstallProgressState                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               MaintainPreviousValue                                            (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             Temp_real_Variable                                               (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             Temp_real_Variable_4                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             Temp_real_Variable_5                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             Temp_real_Variable_6                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             Temp_real_Variable_7                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             Temp_real_Variable_8                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             Temp_real_Variable_9                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             Temp_real_Variable_10                                            (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)

double UBPFL_GlobalFunctions_C::GetProcessedBarProgress(enum class ELibraryProgressState* InstallProgressState, class UObject** __WorldContext, double ReturnValue, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetProcessedBarProgress");

	Params::UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.MaintainPreviousValue = MaintainPreviousValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InstallProgressState != nullptr)
		*InstallProgressState = Parms.InstallProgressState;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModAvailable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               Is_Available                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)

struct FInstallProgressMod UBPFL_GlobalFunctions_C::GetIsModAvailable(class UObject** __WorldContext, bool* Is_Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModAvailable");

	Params::UBPFL_GlobalFunctions_C_GetIsModAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Is_Available != nullptr)
		*Is_Available = Parms.Is_Available;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromID(int64 Mod_ID, int32 DrawUIOnZOrder, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromID");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromID_Params Parms{};

	Parms.Mod_ID = Mod_ID;
	Parms.DrawUIOnZOrder = DrawUIOnZOrder;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStoreMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             UI_StoreMenu                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromStoreMenu(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UUI_StoreMenu_C* UI_StoreMenu, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStoreMenu");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStoreMenu_Params Parms{};

	Parms.Mod_ID = Mod_ID;
	Parms.DrawUIOnZOrder = DrawUIOnZOrder;
	Parms.UI_StoreMenu = UI_StoreMenu;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_GameSlotRef != nullptr)
		*UI_GameSlotRef = Parms.UI_GameSlotRef;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FText                        FinalAmount                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::FormatDownloadNumber(int64* Value, class UObject** __WorldContext, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_GetSubstring_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "FormatDownloadNumber");

	Params::UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_GetSubstring_ReturnValue != nullptr)
		*CallFunc_GetSubstring_ReturnValue = std::move(Parms.CallFunc_GetSubstring_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_GetSubstring_ReturnValue_1 != nullptr)
		*CallFunc_GetSubstring_ReturnValue_1 = std::move(Parms.CallFunc_GetSubstring_ReturnValue_1);

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FText                        FinalAmount                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              NameLikeChar                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class FString                      ModsFileName                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetModVersion(class UObject** __WorldContext, TArray<class FString>* NameLikeChar, class FString* ModsFileName, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* Temp_bool_Variable, class FText* K2Node_Select_Default, int32 CallFunc_ReplaceInline_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class FString* CallFunc_GetSubstring_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModVersion");

	Params::UBPFL_GlobalFunctions_C_GetModVersion_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (NameLikeChar != nullptr)
		*NameLikeChar = std::move(Parms.NameLikeChar);

	if (ModsFileName != nullptr)
		*ModsFileName = std::move(Parms.ModsFileName);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_GetSubstring_ReturnValue != nullptr)
		*CallFunc_GetSubstring_ReturnValue = std::move(Parms.CallFunc_GetSubstring_ReturnValue);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FText                        FinalAmount                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class FText UBPFL_GlobalFunctions_C::GetDownloadCount(class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetDownloadCount");

	Params::UBPFL_GlobalFunctions_C_GetDownloadCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)

struct FInstallProgressMod UBPFL_GlobalFunctions_C::GetModName(class UObject** __WorldContext, class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModName");

	Params::UBPFL_GlobalFunctions_C_GetModName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Get Mod Size
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FCFCoreFileSize             SizeStruct                                                       (BlueprintVisible, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class FText                        SizeInText                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int64                              Bytes                                                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_MaxInt64_ReturnValue                                    (Edit, ConstParm, ExportObject, Parm, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ExportObject, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::Get_Mod_Size(class UObject** __WorldContext, const struct FCFCoreFileSize& SizeStruct, class FText* SizeInText, int64 Bytes, int64 CallFunc_MaxInt64_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "Get Mod Size");

	Params::UBPFL_GlobalFunctions_C_Get_Mod_Size_Params Parms{};

	Parms.SizeStruct = SizeStruct;
	Parms.Bytes = Bytes;
	Parms.CallFunc_MaxInt64_ReturnValue = CallFunc_MaxInt64_ReturnValue;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (SizeInText != nullptr)
		*SizeInText = Parms.SizeInText;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      CombinedAuthorsNames                                             (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Local_TotalAuthors                                               (ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class FString UBPFL_GlobalFunctions_C::GetAuthorName(class UObject** __WorldContext, const class FString& CombinedAuthorsNames, class FString* Local_TotalAuthors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetAuthorName");

	Params::UBPFL_GlobalFunctions_C_GetAuthorName_Params Parms{};

	Parms.CombinedAuthorsNames = CombinedAuthorsNames;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Local_TotalAuthors != nullptr)
		*Local_TotalAuthors = std::move(Parms.Local_TotalAuthors);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FButtonStyle                ButtonStyle                                                      (Edit, Parm, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, NonTransactional)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FSlateBrush UBPFL_GlobalFunctions_C::CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject** __WorldContext, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateButtonStyleFromSingleColor");

	Params::UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params Parms{};

	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (K2Node_MakeStruct_ButtonStyle != nullptr)
		*K2Node_MakeStruct_ButtonStyle = std::move(Parms.K2Node_MakeStruct_ButtonStyle);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      First_value                                                      (Edit, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Second_value                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// uint8                              InputPin1                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::HEXtoByte(class FString* First_value, class FString* Second_value, class UObject** __WorldContext, uint8* InputPin1, TArray<class FString>* HexDigits, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32* CallFunc_Multiply_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoByte");

	Params::UBPFL_GlobalFunctions_C_HEXtoByte_Params Parms{};

	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (First_value != nullptr)
		*First_value = std::move(Parms.First_value);

	if (Second_value != nullptr)
		*Second_value = std::move(Parms.Second_value);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (InputPin1 != nullptr)
		*InputPin1 = Parms.InputPin1;

	if (HexDigits != nullptr)
		*HexDigits = std::move(Parms.HexDigits);

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_And_IntInt_ReturnValue_1 = Parms.CallFunc_And_IntInt_ReturnValue_1;

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1_1                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// uint8                              CallFunc_HEXtoByte_InputPin1_2                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_HEXtoByte_InputPin1_3                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FColor                      K2Node_MakeStruct_Color                                          (Edit, BlueprintVisible, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)

class FString UBPFL_GlobalFunctions_C::HEXtoSRGB(class UObject** __WorldContext, struct FColor* Color, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, uint8 CallFunc_HEXtoByte_InputPin1, uint8 CallFunc_HEXtoByte_InputPin1_1, uint8 CallFunc_HEXtoByte_InputPin1_2, uint8 CallFunc_HEXtoByte_InputPin1_3, struct FColor* K2Node_MakeStruct_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoSRGB");

	Params::UBPFL_GlobalFunctions_C_HEXtoSRGB_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_HEXtoByte_InputPin1 = CallFunc_HEXtoByte_InputPin1;
	Parms.CallFunc_HEXtoByte_InputPin1_1 = CallFunc_HEXtoByte_InputPin1_1;
	Parms.CallFunc_HEXtoByte_InputPin1_2 = CallFunc_HEXtoByte_InputPin1_2;
	Parms.CallFunc_HEXtoByte_InputPin1_3 = CallFunc_HEXtoByte_InputPin1_3;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (K2Node_MakeStruct_Color != nullptr)
		*K2Node_MakeStruct_Color = std::move(Parms.K2Node_MakeStruct_Color);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              String                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<uint8>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_ByteToHex_ReturnValue                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::SRGBtoHEX(struct FColor* Color, class UObject** __WorldContext, const class FString& ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SRGBtoHEX");

	Params::UBPFL_GlobalFunctions_C_SRGBtoHEX_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UBPFL_GlobalFunctions_C::ByteToHex(uint8* InputPin, class UObject** __WorldContext, const class FString& ReturnValue, TArray<class FString>* HexDigits, int32* CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ByteToHex");

	Params::UBPFL_GlobalFunctions_C_ByteToHex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (HexDigits != nullptr)
		*HexDigits = std::move(Parms.HexDigits);

	if (CallFunc_Conv_ByteToInt_ReturnValue != nullptr)
		*CallFunc_Conv_ByteToInt_ReturnValue = Parms.CallFunc_Conv_ByteToInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_And_IntInt_ReturnValue_1 = Parms.CallFunc_And_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_StoreMenu_C* UBPFL_GlobalFunctions_C::SetFocusedWidget(class UObject** __WorldContext, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SetFocusedWidget");

	Params::UBPFL_GlobalFunctions_C_SetFocusedWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// int32                              Limit                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      String                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::TextLimit(class UTextBlock** Text, int32* Limit, class UObject** __WorldContext, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "TextLimit");

	Params::UBPFL_GlobalFunctions_C_TextLimit_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Limit != nullptr)
		*Limit = Parms.Limit;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// enum class ENUM_InputDevices       UsingGamepad_                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ENUM_InputDevices       K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

class UUI_StoreMenu_C* UBPFL_GlobalFunctions_C::CheckPlayerInputDevices(class UObject** __WorldContext, enum class ENUM_InputDevices UsingGamepad_, bool* Temp_bool_Variable, enum class ENUM_InputDevices* Temp_byte_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_InputDevices* Temp_byte_Variable_1, enum class ENUM_InputDevices* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CheckPlayerInputDevices");

	Params::UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params Parms{};

	Parms.UsingGamepad_ = UsingGamepad_;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Limit                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// class FString                      NewString                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class FString                      LocalString                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class FString UBPFL_GlobalFunctions_C::StringLimit(int32* Limit, class UObject** __WorldContext, class FString* NewString, class FString* LocalString, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "StringLimit");

	Params::UBPFL_GlobalFunctions_C_StringLimit_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Limit != nullptr)
		*Limit = Parms.Limit;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (NewString != nullptr)
		*NewString = std::move(Parms.NewString);

	if (LocalString != nullptr)
		*LocalString = std::move(Parms.LocalString);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FString                      ErrorMessage                                                     (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)

void UBPFL_GlobalFunctions_C::ErrorMessage(class UObject** Object, class FString* ErrorMessage, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ErrorMessage");

	Params::UBPFL_GlobalFunctions_C_ErrorMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

}

}


