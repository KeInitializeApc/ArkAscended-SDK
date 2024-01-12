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
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               ForcePaid                                                        (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ForcePurchased                                                   (Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// double                             Price                                                            (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Paid                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               Purchased                                                        (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

double UBPFL_GlobalFunctions_C::GetIsModPaidStatus(const struct FInstallProgressMod& ModInfo, bool* ForcePaid, bool* ForcePurchased, class UObject** __WorldContext, bool* Paid, bool* Purchased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModPaidStatus");

	Params::UBPFL_GlobalFunctions_C_GetIsModPaidStatus_Params Parms{};

	Parms.ModInfo = ModInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcePaid != nullptr)
		*ForcePaid = Parms.ForcePaid;

	if (ForcePurchased != nullptr)
		*ForcePurchased = Parms.ForcePurchased;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Paid != nullptr)
		*Paid = Parms.Paid;

	if (Purchased != nullptr)
		*Purchased = Parms.Purchased;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStandalone
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromStandalone(int64 Mod_ID, int32* DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStandalone");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStandalone_Params Parms{};

	Parms.Mod_ID = Mod_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (DrawUIOnZOrder != nullptr)
		*DrawUIOnZOrder = Parms.DrawUIOnZOrder;

	if (UI_GameSlotRef != nullptr)
		*UI_GameSlotRef = Parms.UI_GameSlotRef;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModValid
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetIsModValid(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModValid");

	Params::UBPFL_GlobalFunctions_C_GetIsModValid_Params Parms{};

	Parms.ModInfo = ModInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DebugMod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         InstallProgressMod                                               (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, Config)
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Debug_BroadcastEvent                                             (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// enum class EGameModsEvent          Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               DebugInstallingUpdating                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// struct FInstallProgressMod         DebugingMod                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      TotalPrint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// enum class EGameModsEvent          CalledEvent                                                      (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// enum class EInstallStatus          Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// class FString                      Temp_string_Variable_4                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class FString                      Temp_string_Variable_5                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// class FString                      Temp_string_Variable_6                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// enum class EInstallStatus          Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_7                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly)
// class FString                      Temp_string_Variable_8                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly)
// class FString                      Temp_string_Variable_9                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly)
// class FString                      Temp_string_Variable_10                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      Temp_string_Variable_11                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_12                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_13                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_GetModName_Name                                         (EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsModAvailable_Is_Available                          (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsModValid_IsValid                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)

class FString UBPFL_GlobalFunctions_C::DebugMod(const struct FInstallProgressMod& InstallProgressMod, bool Debug_BroadcastEvent, bool DebugInstallingUpdating, class UObject** __WorldContext, const struct FInstallProgressMod& DebugingMod, class FString* TotalPrint, enum class EGameModsEvent* CalledEvent, class UObject** Owner, enum class EInstallStatus Temp_byte_Variable, int32 CallFunc_ReplaceInline_ReturnValue, enum class EInstallStatus Temp_byte_Variable_1, const class FString& CallFunc_GetModName_Name, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "DebugMod");

	Params::UBPFL_GlobalFunctions_C_DebugMod_Params Parms{};

	Parms.InstallProgressMod = InstallProgressMod;
	Parms.Debug_BroadcastEvent = Debug_BroadcastEvent;
	Parms.DebugInstallingUpdating = DebugInstallingUpdating;
	Parms.DebugingMod = DebugingMod;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetModName_Name = CallFunc_GetModName_Name;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (TotalPrint != nullptr)
		*TotalPrint = std::move(Parms.TotalPrint);

	if (CalledEvent != nullptr)
		*CalledEvent = Parms.CalledEvent;

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_Conv_Int64ToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_1 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_1;

	if (CallFunc_Conv_Int64ToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_2 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              DiskSpace                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         ModToInstall                                                     (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               EnoughSpace                                                      (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_GetModSize_SizeStruct                                   (Edit, ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetModSize_SizeInText                                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// int64                              CallFunc_GetModSize_bytes                                        (BlueprintVisible, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

int64 UBPFL_GlobalFunctions_C::Is_There_Enough_Space_to_Install_Mod(int64 DiskSpace, struct FInstallProgressMod* ModToInstall, class UObject** __WorldContext, bool* EnoughSpace, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "Is There Enough Space to Install Mod");

	Params::UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params Parms{};

	Parms.DiskSpace = DiskSpace;
	Parms.CallFunc_GreaterEqual_Int64Int64_ReturnValue = CallFunc_GreaterEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              Amount                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstallProgressState                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               MaintainPreviousValue                                            (ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// double                             Temp_real_Variable                                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
// double                             Temp_real_Variable_4                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             Temp_real_Variable_5                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             Temp_real_Variable_6                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             Temp_real_Variable_7                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, EditorOnly)
// double                             Temp_real_Variable_8                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             Temp_real_Variable_9                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, EditorOnly)
// double                             Temp_real_Variable_10                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)

double UBPFL_GlobalFunctions_C::GetProcessedBarProgress(int32* Amount, enum class ELibraryProgressState* InstallProgressState, class UObject** __WorldContext, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetProcessedBarProgress");

	Params::UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params Parms{};

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
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (InstallProgressState != nullptr)
		*InstallProgressState = Parms.InstallProgressState;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModAvailable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Is_Available                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UBPFL_GlobalFunctions_C::GetIsModAvailable(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, bool* Is_Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetIsModAvailable");

	Params::UBPFL_GlobalFunctions_C_GetIsModAvailable_Params Parms{};

	Parms.ModInfo = ModInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Is_Available != nullptr)
		*Is_Available = Parms.Is_Available;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromID(int64 Mod_ID, int32* DrawUIOnZOrder, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromID");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromID_Params Parms{};

	Parms.Mod_ID = Mod_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (DrawUIOnZOrder != nullptr)
		*DrawUIOnZOrder = Parms.DrawUIOnZOrder;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStoreMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             UI_StoreMenu                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class UUI_ModPage_C*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UUI_ModPage_C* UBPFL_GlobalFunctions_C::CreateModPageFromStoreMenu(int64 Mod_ID, int32* DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UUI_StoreMenu_C** UI_StoreMenu, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromStoreMenu");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromStoreMenu_Params Parms{};

	Parms.Mod_ID = Mod_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (DrawUIOnZOrder != nullptr)
		*DrawUIOnZOrder = Parms.DrawUIOnZOrder;

	if (UI_GameSlotRef != nullptr)
		*UI_GameSlotRef = Parms.UI_GameSlotRef;

	if (UI_StoreMenu != nullptr)
		*UI_StoreMenu = Parms.UI_StoreMenu;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
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
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
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
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::FormatDownloadNumber(int64 Value, class UObject** __WorldContext, class FText* FinalAmount, class FText* CallFunc_Conv_Int64ToText_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, int64* CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64* CallFunc_Divide_Int64Int64_ReturnValue_2, int64* CallFunc_Divide_Int64Int64_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_Less_Int64Int64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "FormatDownloadNumber");

	Params::UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params Parms{};

	Parms.Value = Value;
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
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_1 = CallFunc_Less_Int64Int64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FinalAmount != nullptr)
		*FinalAmount = Parms.FinalAmount;

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_Divide_Int64Int64_ReturnValue != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue = Parms.CallFunc_Divide_Int64Int64_ReturnValue;

	if (CallFunc_Conv_Int64ToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_1 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_1;

	if (CallFunc_Divide_Int64Int64_ReturnValue_1 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_1 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_1;

	if (CallFunc_Conv_Int64ToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_2 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_2;

	if (CallFunc_Divide_Int64Int64_ReturnValue_2 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_2 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_2;

	if (CallFunc_Divide_Int64Int64_ReturnValue_3 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_3 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_3;

	if (CallFunc_Conv_Int64ToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_3 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_3;

	if (CallFunc_Conv_Int64ToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue_4 = Parms.CallFunc_Conv_Int64ToText_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              NameLikeChar                                                     (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      ModsFileName                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetModVersion(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, class FText* FinalAmount, TArray<class FString>* NameLikeChar, class FString* ModsFileName, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, struct FFile* CallFunc_Array_Get_Item, class FString* CallFunc_Array_Get_Item_1, bool CallFunc_IsNumeric_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, class FText* K2Node_Select_Default, class FString* CallFunc_Array_Get_Item_2, int32 CallFunc_ReplaceInline_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Len_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModVersion");

	Params::UBPFL_GlobalFunctions_C_GetModVersion_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FinalAmount != nullptr)
		*FinalAmount = Parms.FinalAmount;

	if (NameLikeChar != nullptr)
		*NameLikeChar = std::move(Parms.NameLikeChar);

	if (ModsFileName != nullptr)
		*ModsFileName = std::move(Parms.ModsFileName);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = std::move(Parms.CallFunc_Array_Get_Item_2);

	if (CallFunc_Array_Length_ReturnValue_3 != nullptr)
		*CallFunc_Array_Length_ReturnValue_3 = Parms.CallFunc_Array_Length_ReturnValue_3;

	if (CallFunc_Len_ReturnValue != nullptr)
		*CallFunc_Len_ReturnValue = Parms.CallFunc_Len_ReturnValue;

	if (CallFunc_FindSubstring_ReturnValue != nullptr)
		*CallFunc_FindSubstring_ReturnValue = Parms.CallFunc_FindSubstring_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FText                        FinalAmount                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UBPFL_GlobalFunctions_C::GetDownloadCount(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, class FText* FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetDownloadCount");

	Params::UBPFL_GlobalFunctions_C_GetDownloadCount_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FinalAmount != nullptr)
		*FinalAmount = Parms.FinalAmount;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UBPFL_GlobalFunctions_C::GetModName(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModName");

	Params::UBPFL_GlobalFunctions_C_GetModName_Params Parms{};

	Parms.ModInfo = ModInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModSize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// struct FCFCoreFileSize             SizeStruct                                                       (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        SizeInText                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int64                              Bytes                                                            (Net, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UBPFL_GlobalFunctions_C::GetModSize(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, struct FCFCoreFileSize* SizeStruct, class FText* SizeInText, int64 Bytes, struct FFile* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, struct FCFCoreFileSize* CallFunc_BreakFileSize_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModSize");

	Params::UBPFL_GlobalFunctions_C_GetModSize_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.Bytes = Bytes;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (SizeStruct != nullptr)
		*SizeStruct = std::move(Parms.SizeStruct);

	if (SizeInText != nullptr)
		*SizeInText = Parms.SizeInText;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_BreakFileSize_ReturnValue != nullptr)
		*CallFunc_BreakFileSize_ReturnValue = std::move(Parms.CallFunc_BreakFileSize_ReturnValue);

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      CombinedAuthorsNames                                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FString                      Local_TotalAuthors                                               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::GetAuthorName(const struct FInstallProgressMod& ModInfo, class UObject** __WorldContext, class FString* Local_TotalAuthors, struct FModAuthor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetAuthorName");

	Params::UBPFL_GlobalFunctions_C_GetAuthorName_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Local_TotalAuthors != nullptr)
		*Local_TotalAuthors = std::move(Parms.Local_TotalAuthors);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// struct FButtonStyle                ButtonStyle                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FSlateColor UBPFL_GlobalFunctions_C::CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject** __WorldContext, struct FButtonStyle* ButtonStyle, struct FLinearColor* CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateButtonStyleFromSingleColor");

	Params::UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (ButtonStyle != nullptr)
		*ButtonStyle = std::move(Parms.ButtonStyle);

	if (CallFunc_Add_LinearColorLinearColor_ReturnValue != nullptr)
		*CallFunc_Add_LinearColorLinearColor_ReturnValue = std::move(Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      First_value                                                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      Second_value                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// uint8                              InputPin1                                                        (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::HEXtoByte(class FString* First_value, class FString* Second_value, class UObject** __WorldContext, uint8* InputPin1, TArray<class FString>* HexDigits, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoByte");

	Params::UBPFL_GlobalFunctions_C_HEXtoByte_Params Parms{};

	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
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

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// uint8                              CallFunc_HEXtoByte_InputPin1_1                                   (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// uint8                              CallFunc_HEXtoByte_InputPin1_2                                   (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_HEXtoByte_InputPin1_3                                   (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, NonTransactional)
// struct FColor                      K2Node_MakeStruct_Color                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

TArray<class FString> UBPFL_GlobalFunctions_C::HEXtoSRGB(const class FString& String, class UObject** __WorldContext, struct FColor* Color, class FString* CallFunc_Array_Get_Item, class FString* CallFunc_Array_Get_Item_1, class FString* CallFunc_Array_Get_Item_2, class FString* CallFunc_Array_Get_Item_3, uint8 CallFunc_HEXtoByte_InputPin1, class FString* CallFunc_Array_Get_Item_4, class FString* CallFunc_Array_Get_Item_5, uint8 CallFunc_HEXtoByte_InputPin1_1, class FString* CallFunc_Array_Get_Item_6, class FString* CallFunc_Array_Get_Item_7, uint8 CallFunc_HEXtoByte_InputPin1_2, uint8 CallFunc_HEXtoByte_InputPin1_3, struct FColor* K2Node_MakeStruct_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoSRGB");

	Params::UBPFL_GlobalFunctions_C_HEXtoSRGB_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_HEXtoByte_InputPin1 = CallFunc_HEXtoByte_InputPin1;
	Parms.CallFunc_HEXtoByte_InputPin1_1 = CallFunc_HEXtoByte_InputPin1_1;
	Parms.CallFunc_HEXtoByte_InputPin1_2 = CallFunc_HEXtoByte_InputPin1_2;
	Parms.CallFunc_HEXtoByte_InputPin1_3 = CallFunc_HEXtoByte_InputPin1_3;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = std::move(Parms.CallFunc_Array_Get_Item_2);

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = std::move(Parms.CallFunc_Array_Get_Item_3);

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = std::move(Parms.CallFunc_Array_Get_Item_4);

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = std::move(Parms.CallFunc_Array_Get_Item_5);

	if (CallFunc_Array_Get_Item_6 != nullptr)
		*CallFunc_Array_Get_Item_6 = std::move(Parms.CallFunc_Array_Get_Item_6);

	if (CallFunc_Array_Get_Item_7 != nullptr)
		*CallFunc_Array_Get_Item_7 = std::move(Parms.CallFunc_Array_Get_Item_7);

	if (K2Node_MakeStruct_Color != nullptr)
		*K2Node_MakeStruct_Color = std::move(Parms.K2Node_MakeStruct_Color);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              String                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<uint8>                      K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_ByteToHex_ReturnValue                                   (ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBPFL_GlobalFunctions_C::SRGBtoHEX(struct FColor* Color, class UObject** __WorldContext, const TArray<class FString>& String, uint8* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_ByteToHex_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SRGBtoHEX");

	Params::UBPFL_GlobalFunctions_C_SRGBtoHEX_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_ByteToHex_ReturnValue = CallFunc_ByteToHex_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              HexDigits                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

int32 UBPFL_GlobalFunctions_C::ByteToHex(uint8* InputPin, class UObject** __WorldContext, TArray<class FString>* HexDigits, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, class FString* CallFunc_Array_Get_Item, class FString* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ByteToHex");

	Params::UBPFL_GlobalFunctions_C_ByteToHex_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (HexDigits != nullptr)
		*HexDigits = std::move(Parms.HexDigits);

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	if (CallFunc_And_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_And_IntInt_ReturnValue_1 = Parms.CallFunc_And_IntInt_ReturnValue_1;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UWidget* UBPFL_GlobalFunctions_C::SetFocusedWidget(class UObject** __WorldContext, TArray<class UUI_StoreMenu_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StoreMenu_C** CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SetFocusedWidget");

	Params::UBPFL_GlobalFunctions_C_SetFocusedWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_GetAllWidgetsOfClass_FoundWidgets != nullptr)
		*CallFunc_GetAllWidgetsOfClass_FoundWidgets = std::move(Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// int32                              Limit                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      String                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_StringLimit_NewString                                   (ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBPFL_GlobalFunctions_C::TextLimit(const class FString& String, class UObject** __WorldContext, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "TextLimit");

	Params::UBPFL_GlobalFunctions_C_TextLimit_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// enum class ENUM_InputDevices       UsingGamepad_                                                    (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENUM_InputDevices       Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ENUM_InputDevices       K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

void UBPFL_GlobalFunctions_C::CheckPlayerInputDevices(class UObject** __WorldContext, enum class ENUM_InputDevices* UsingGamepad_, bool Temp_bool_Variable, TArray<class UUI_StoreMenu_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class ENUM_InputDevices Temp_byte_Variable, class UUI_StoreMenu_C** CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_InputDevices Temp_byte_Variable_1, enum class ENUM_InputDevices* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CheckPlayerInputDevices");

	Params::UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (UsingGamepad_ != nullptr)
		*UsingGamepad_ = Parms.UsingGamepad_;

	if (CallFunc_GetAllWidgetsOfClass_FoundWidgets != nullptr)
		*CallFunc_GetAllWidgetsOfClass_FoundWidgets = std::move(Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Limit                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      NewString                                                        (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class FString                      LocalString                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBPFL_GlobalFunctions_C::StringLimit(const class FString& String, class UObject** __WorldContext, class FString* NewString, class FString* LocalString, int32* CallFunc_Int32_AddOne_ReturnValue, class FString* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "StringLimit");

	Params::UBPFL_GlobalFunctions_C_StringLimit_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (NewString != nullptr)
		*NewString = std::move(Parms.NewString);

	if (LocalString != nullptr)
		*LocalString = std::move(Parms.LocalString);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FString                      ErrorMessage                                                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)

void UBPFL_GlobalFunctions_C::ErrorMessage(class UObject** Object, const class FString& ErrorMessage, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ErrorMessage");

	Params::UBPFL_GlobalFunctions_C_ErrorMessage_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

}

}


