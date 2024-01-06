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


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModPaidStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ForcePaid                                                        (Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               ForcePurchased                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// double                             Price                                                            (Edit, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Paid                                                             (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               Purchased                                                        (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetIsModPaidStatus(double* Price, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModPaidStatus");

	Params::UBPFL_GlobalFunctions_C_GetIsModPaidStatus_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStandalone
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_GameSlot_C* UBPFL_GlobalFunctions_C::CreateModPageFromStandalone(class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStandalone");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStandalone_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModValid
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetIsModValid(class UObject* __WorldContext, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModValid");

	Params::UBPFL_GlobalFunctions_C_GetIsModValid_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DebugMod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         InstallProgressMod                                               (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, Config)
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Debug_BroadcastEvent                                             (BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// enum class EGameModsEvent          Event                                                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               DebugInstallingUpdating                                          (ConstParm, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FInstallProgressMod         DebugingMod                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      TotalPrint                                                       (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// enum class EGameModsEvent          CalledEvent                                                      (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UObject*                     Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// enum class EInstallStatus          Temp_byte_Variable                                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// class FString                      Temp_string_Variable_4                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class FString                      Temp_string_Variable_5                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// class FString                      Temp_string_Variable_6                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// enum class EInstallStatus          Temp_byte_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_7                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly)
// class FString                      Temp_string_Variable_8                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly)
// class FString                      Temp_string_Variable_9                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly)
// class FString                      Temp_string_Variable_10                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      Temp_string_Variable_11                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_12                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_13                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_GetModName_Name                                         (Edit, ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default_1                                          (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)

class FString UBPFL_GlobalFunctions_C::DebugMod(const struct FInstallProgressMod& InstallProgressMod, enum class EGameModsEvent* Event, class UObject* __WorldContext, class UObject** Owner, enum class EInstallStatus* Temp_byte_Variable, enum class EInstallStatus* Temp_byte_Variable_1, const class FString& CallFunc_GetModName_Name, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_BoolToString_ReturnValue, class FString* CallFunc_Conv_BoolToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FString* CallFunc_Concat_StrStr_ReturnValue_8, class FString* CallFunc_Concat_StrStr_ReturnValue_9, class FString* CallFunc_Concat_StrStr_ReturnValue_10, class FString* CallFunc_Concat_StrStr_ReturnValue_11, class FString* CallFunc_Concat_StrStr_ReturnValue_12, class FString* CallFunc_Concat_StrStr_ReturnValue_13, class FString* CallFunc_Concat_StrStr_ReturnValue_14, class FString* CallFunc_Concat_StrStr_ReturnValue_15, class FString* CallFunc_Concat_StrStr_ReturnValue_16, class FString* CallFunc_Concat_StrStr_ReturnValue_17, class FString* CallFunc_Concat_StrStr_ReturnValue_18, class FString* CallFunc_Concat_StrStr_ReturnValue_19, class FString* CallFunc_Concat_StrStr_ReturnValue_20, class FString* CallFunc_Concat_StrStr_ReturnValue_21, class FString* CallFunc_Concat_StrStr_ReturnValue_22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DebugMod");

	Params::UBPFL_GlobalFunctions_C_DebugMod_Params Parms{};

	Parms.InstallProgressMod = InstallProgressMod;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetModName_Name = CallFunc_GetModName_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_Concat_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_1 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_1);

	if (CallFunc_Concat_StrStr_ReturnValue_2 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_2 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_2);

	if (CallFunc_Conv_IntToString_ReturnValue != nullptr)
		*CallFunc_Conv_IntToString_ReturnValue = std::move(Parms.CallFunc_Conv_IntToString_ReturnValue);

	if (CallFunc_Concat_StrStr_ReturnValue_3 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_3 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_3);

	if (CallFunc_Concat_StrStr_ReturnValue_4 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_4 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_4);

	if (CallFunc_Concat_StrStr_ReturnValue_5 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_5 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_5);

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_Int64ToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_1 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_1;

	if (CallFunc_Conv_Int64ToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_2 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_2;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_BoolToString_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue);

	if (CallFunc_Conv_BoolToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_1);

	if (CallFunc_Concat_StrStr_ReturnValue_6 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_6 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_6);

	if (CallFunc_Concat_StrStr_ReturnValue_7 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_7 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_7);

	if (CallFunc_Concat_StrStr_ReturnValue_8 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_8 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_8);

	if (CallFunc_Concat_StrStr_ReturnValue_9 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_9 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_9);

	if (CallFunc_Concat_StrStr_ReturnValue_10 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_10 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_10);

	if (CallFunc_Concat_StrStr_ReturnValue_11 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_11 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_11);

	if (CallFunc_Concat_StrStr_ReturnValue_12 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_12 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_12);

	if (CallFunc_Concat_StrStr_ReturnValue_13 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_13 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_13);

	if (CallFunc_Concat_StrStr_ReturnValue_14 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_14 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_14);

	if (CallFunc_Concat_StrStr_ReturnValue_15 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_15 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_15);

	if (CallFunc_Concat_StrStr_ReturnValue_16 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_16 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_16);

	if (CallFunc_Concat_StrStr_ReturnValue_17 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_17 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_17);

	if (CallFunc_Concat_StrStr_ReturnValue_18 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_18 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_18);

	if (CallFunc_Concat_StrStr_ReturnValue_19 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_19 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_19);

	if (CallFunc_Concat_StrStr_ReturnValue_20 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_20 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_20);

	if (CallFunc_Concat_StrStr_ReturnValue_21 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_21 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_21);

	if (CallFunc_Concat_StrStr_ReturnValue_22 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_22 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_22);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              DiskSpace                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         ModToInstall                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               EnoughSpace                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_GetModSize_SizeStruct                                   (ConstParm, ExportObject, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetModSize_SizeInText                                   (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// int64                              CallFunc_GetModSize_bytes                                        (ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::Is_There_Enough_Space_to_Install_Mod(class UObject* __WorldContext, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "Is There Enough Space to Install Mod");

	Params::UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetModSize_SizeStruct = CallFunc_GetModSize_SizeStruct;
	Parms.CallFunc_GetModSize_SizeInText = CallFunc_GetModSize_SizeInText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetProcessedBarProgress
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstallProgressState                                             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               MaintainPreviousValue                                            (Net, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// double                             Temp_real_Variable                                               (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// double                             Temp_real_Variable_4                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             Temp_real_Variable_5                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             Temp_real_Variable_6                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             Temp_real_Variable_7                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, EditorOnly)
// double                             Temp_real_Variable_8                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             Temp_real_Variable_9                                             (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, Interp, EditorOnly)
// double                             Temp_real_Variable_10                                            (Edit, ConstParm, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default                                            (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)

double UBPFL_GlobalFunctions_C::GetProcessedBarProgress(class UObject* __WorldContext, double* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double* CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetProcessedBarProgress");

	Params::UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_Conv_IntToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_IntToDouble_ReturnValue = Parms.CallFunc_Conv_IntToDouble_ReturnValue;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Divide_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleDouble_ReturnValue = Parms.CallFunc_Divide_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModAvailable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Is_Available                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetIsModAvailable(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModAvailable");

	Params::UBPFL_GlobalFunctions_C_GetIsModAvailable_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::CreateModPageFromID(class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromID");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromID_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStoreMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             UI_StoreMenu                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_GameSlot_C* UBPFL_GlobalFunctions_C::CreateModPageFromStoreMenu(class UUI_StoreMenu_C* UI_StoreMenu, class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStoreMenu");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStoreMenu_Params Parms{};

	Parms.UI_StoreMenu = UI_StoreMenu;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::FormatDownloadNumber(int64 Value, class UObject* __WorldContext, class FText FinalAmount, class FText* CallFunc_Conv_Int64ToText_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_Int64ToText_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "FormatDownloadNumber");

	Params::UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_Conv_Int64ToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_1 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_Int64ToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_2 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_2;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Concat_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_1 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_1);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue_2 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_2 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_2);

	if (CallFunc_Concat_StrStr_ReturnValue_3 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_3 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_3);

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_Int64ToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_3 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_3;

	if (CallFunc_Conv_Int64ToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_4 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_4;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_Concat_StrStr_ReturnValue_4 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_4 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_4);

	if (CallFunc_Concat_StrStr_ReturnValue_5 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_5 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_5);

	if (CallFunc_Concat_StrStr_ReturnValue_6 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_6 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_6);

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_Concat_StrStr_ReturnValue_7 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_7 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_7);

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// TArray<class FString>              NameLikeChar                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      ModsFileName                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FFile                       CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        Temp_text_Variable                                               (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_2                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FString UBPFL_GlobalFunctions_C::GetModVersion(class UObject* __WorldContext, class FText FinalAmount, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool* Temp_bool_Variable, TArray<class FString>* K2Node_MakeArray_Array, class FText* K2Node_Select_Default, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModVersion");

	Params::UBPFL_GlobalFunctions_C_GetModVersion_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_1 = Parms.CallFunc_Add_IntInt_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Add_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_2 = Parms.CallFunc_Add_IntInt_ReturnValue_2;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)

struct FInstallProgressMod UBPFL_GlobalFunctions_C::GetDownloadCount(class UObject* __WorldContext, class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetDownloadCount");

	Params::UBPFL_GlobalFunctions_C_GetDownloadCount_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)

struct FInstallProgressMod UBPFL_GlobalFunctions_C::GetModName(class UObject* __WorldContext, class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModName");

	Params::UBPFL_GlobalFunctions_C_GetModName_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModSize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FCFCoreFileSize             SizeStruct                                                       (EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FText                        SizeInText                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int64                              Bytes                                                            (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetModSize(class UObject* __WorldContext, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModSize");

	Params::UBPFL_GlobalFunctions_C_GetModSize_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CombinedAuthorsNames                                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Local_TotalAuthors                                               (ConstParm, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class FString UBPFL_GlobalFunctions_C::GetAuthorName(class UObject* __WorldContext, const class FString& Local_TotalAuthors, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetAuthorName");

	Params::UBPFL_GlobalFunctions_C_GetAuthorName_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_TotalAuthors = Local_TotalAuthors;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_Concat_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_1 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FButtonStyle                ButtonStyle                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FButtonStyle UBPFL_GlobalFunctions_C::CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject* __WorldContext, struct FButtonStyle* ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateButtonStyleFromSingleColor");

	Params::UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (ButtonStyle != nullptr)
		*ButtonStyle = std::move(Parms.ButtonStyle);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      First_value                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      Second_value                                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// uint8                              InputPin1                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, Net, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

TArray<class FString> UBPFL_GlobalFunctions_C::HEXtoByte(class UObject* __WorldContext, TArray<class FString>* K2Node_MakeArray_Array, int32* CallFunc_Array_Find_ReturnValue, int32* CallFunc_Array_Find_ReturnValue_1, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, uint8* CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoByte");

	Params::UBPFL_GlobalFunctions_C_HEXtoByte_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Array_Find_ReturnValue != nullptr)
		*CallFunc_Array_Find_ReturnValue = Parms.CallFunc_Array_Find_ReturnValue;

	if (CallFunc_Array_Find_ReturnValue_1 != nullptr)
		*CallFunc_Array_Find_ReturnValue_1 = Parms.CallFunc_Array_Find_ReturnValue_1;

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_And_IntInt_ReturnValue_1 = Parms.CallFunc_And_IntInt_ReturnValue_1;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Conv_IntToByte_ReturnValue != nullptr)
		*CallFunc_Conv_IntToByte_ReturnValue = Parms.CallFunc_Conv_IntToByte_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_3                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_4                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_5                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_6                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_7                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// uint8                              CallFunc_HEXtoByte_InputPin1_2                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_HEXtoByte_InputPin1_3                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference, NonTransactional)
// struct FColor                      K2Node_MakeStruct_Color                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

struct FColor UBPFL_GlobalFunctions_C::HEXtoSRGB(class FString* String, class UObject* __WorldContext, struct FColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoSRGB");

	Params::UBPFL_GlobalFunctions_C_HEXtoSRGB_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              String                                                           (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<uint8>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_ByteToHex_ReturnValue                                   (ConstParm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBPFL_GlobalFunctions_C::SRGBtoHEX(struct FColor* Color, class UObject* __WorldContext, class FString* ReturnValue, TArray<class FString>* String, TArray<uint8>* K2Node_MakeArray_Array, class FString* CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SRGBtoHEX");

	Params::UBPFL_GlobalFunctions_C_SRGBtoHEX_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_JoinStringArray_ReturnValue != nullptr)
		*CallFunc_JoinStringArray_ReturnValue = std::move(Parms.CallFunc_JoinStringArray_ReturnValue);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UBPFL_GlobalFunctions_C::ByteToHex(uint8* InputPin, class UObject* __WorldContext, class FString* ReturnValue, TArray<class FString>* K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_Divide_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ByteToHex");

	Params::UBPFL_GlobalFunctions_C_ByteToHex_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Divide_IntInt_ReturnValue != nullptr)
		*CallFunc_Divide_IntInt_ReturnValue = Parms.CallFunc_Divide_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_And_IntInt_ReturnValue_1 = Parms.CallFunc_And_IntInt_ReturnValue_1;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBPFL_GlobalFunctions_C::SetFocusedWidget(class UObject* __WorldContext, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SetFocusedWidget");

	Params::UBPFL_GlobalFunctions_C_SetFocusedWidget_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// int32                              Limit                                                            (BlueprintReadOnly, EditFixedSize, Transient, InstancedReference, SubobjectReference)
// class FString                      String                                                           (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::TextLimit(int32 Limit, class FString* String, class UObject* __WorldContext, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "TextLimit");

	Params::UBPFL_GlobalFunctions_C_TextLimit_Params Parms{};

	Parms.Limit = Limit;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// enum class ENUM_InputDevices       UsingGamepad_                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ENUM_InputDevices       K2Node_Select_Default                                            (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

bool UBPFL_GlobalFunctions_C::CheckPlayerInputDevices(class UObject* __WorldContext, bool* Temp_bool_Variable, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class ENUM_InputDevices* Temp_byte_Variable, enum class ENUM_InputDevices* Temp_byte_Variable_1, enum class ENUM_InputDevices* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CheckPlayerInputDevices");

	Params::UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;

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


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// int32                              Limit                                                            (BlueprintReadOnly, EditFixedSize, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      NewString                                                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      LocalString                                                      (ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::StringLimit(class FString* String, int32 Limit, class UObject* __WorldContext, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "StringLimit");

	Params::UBPFL_GlobalFunctions_C_StringLimit_Params Parms{};

	Parms.Limit = Limit;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_Concat_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue_1 = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FString                      ErrorMessage                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UBPFL_GlobalFunctions_C::ErrorMessage(class UObject** Object, const class FString& ErrorMessage, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ErrorMessage");

	Params::UBPFL_GlobalFunctions_C_ErrorMessage_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

}

}


