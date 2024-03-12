#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsWidget.BP_ServerModsWidget_C
// (None)

class UClass* UBP_ServerModsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsWidget_C");

	return Clss;
}


// BP_ServerModsWidget_C BP_ServerModsWidget.Default__BP_ServerModsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsWidget_C* UBP_ServerModsWidget_C::GetDefaultObj()
{
	static class UBP_ServerModsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsWidget_C*>(UBP_ServerModsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UCFCoreUISubsystem* UBP_ServerModsWidget_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnEventBroadcasted");

	Params::UBP_ServerModsWidget_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBP_ServerModsWidget_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BPHighlightWidgetOnStart");

	Params::UBP_ServerModsWidget_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BPGamepadReleased");

	Params::UBP_ServerModsWidget_C_BPGamepadReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TheKey != nullptr)
		*TheKey = std::move(Parms.TheKey);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DEBUG_ForceAllModsBought
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::DEBUG_ForceAllModsBought()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DEBUG_ForceAllModsBought");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::CreateModList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UWrapBoxSlot** CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateModList");

	Params::UBP_ServerModsWidget_C_CreateModList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_AddChildToWrapBox_ReturnValue != nullptr)
		*CallFunc_AddChildToWrapBox_ReturnValue = Parms.CallFunc_AddChildToWrapBox_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DebugDiskSizeUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::DebugDiskSizeUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DebugDiskSizeUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AddToTotalSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UBP_ServerModsWidget_C::AddToTotalSize(struct FInstallProgressMod* ModInfo, struct FCFCoreFileSize* CallFunc_Get_Mod_Size_SizeStruct, class FText CallFunc_Get_Mod_Size_SizeInText, int64 CallFunc_Get_Mod_Size_bytes, int64 CallFunc_Add_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AddToTotalSize");

	Params::UBP_ServerModsWidget_C_AddToTotalSize_Params Parms{};

	Parms.CallFunc_Get_Mod_Size_SizeInText = CallFunc_Get_Mod_Size_SizeInText;
	Parms.CallFunc_Get_Mod_Size_bytes = CallFunc_Get_Mod_Size_bytes;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModInfo != nullptr)
		*ModInfo = std::move(Parms.ModInfo);

	if (CallFunc_Get_Mod_Size_SizeStruct != nullptr)
		*CallFunc_Get_Mod_Size_SizeStruct = std::move(Parms.CallFunc_Get_Mod_Size_SizeStruct);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BP_ServerModsWidget_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsWidget_C::BP_ServerModsWidget_AutoGenFunc(const struct FKey& Key, enum class EViewState State, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BP_ServerModsWidget_AutoGenFunc");

	Params::UBP_ServerModsWidget_C_BP_ServerModsWidget_AutoGenFunc_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetEnoughSpaceToDownloadAllMods
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_Int64Int64_ReturnValue                          (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::GetEnoughSpaceToDownloadAllMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetEnoughSpaceToDownloadAllMods");

	Params::UBP_ServerModsWidget_C_GetEnoughSpaceToDownloadAllMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetCompleteInstalledModsStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AllModsInstalled                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              TotalInstalledMods                                               (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              TotalNonInstalledMods                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> InstalledMods                                                    (Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> NonInstalledModList                                              (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListYes                                                      (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListNo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsWidget_C::GetCompleteInstalledModsStatus(int32* TotalInstalledMods, int32 TotalNonInstalledMods, TArray<struct FInstallProgressMod>* InstalledMods, TArray<struct FInstallProgressMod>* NonInstalledModList, TArray<struct FInstallProgressMod>* TempListNo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetCompleteInstalledModsStatus");

	Params::UBP_ServerModsWidget_C_GetCompleteInstalledModsStatus_Params Parms{};

	Parms.TotalNonInstalledMods = TotalNonInstalledMods;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalInstalledMods != nullptr)
		*TotalInstalledMods = Parms.TotalInstalledMods;

	if (InstalledMods != nullptr)
		*InstalledMods = std::move(Parms.InstalledMods);

	if (NonInstalledModList != nullptr)
		*NonInstalledModList = std::move(Parms.NonInstalledModList);

	if (TempListNo != nullptr)
		*TempListNo = std::move(Parms.TempListNo);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePurchaseButtonEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::UpdatePurchaseButtonEnabled(const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdatePurchaseButtonEnabled");

	Params::UBP_ServerModsWidget_C_UpdatePurchaseButtonEnabled_Params Parms{};

	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateDownloadButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::UpdateDownloadButtonEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateDownloadButtonEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateFreeSpaceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UBP_ServerModsWidget_C::UpdateFreeSpaceText(class FString* CallFunc_FormatFileSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateFreeSpaceText");

	Params::UBP_ServerModsWidget_C_UpdateFreeSpaceText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FormatFileSize_ReturnValue != nullptr)
		*CallFunc_FormatFileSize_ReturnValue = std::move(Parms.CallFunc_FormatFileSize_ReturnValue);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::UpdateInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePurchaseState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PurchaseAndDownloadModsText                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        DownloadModsText                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

int32 UBP_ServerModsWidget_C::UpdatePurchaseState(class FText PurchaseAndDownloadModsText, class FText* DownloadModsText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdatePurchaseState");

	Params::UBP_ServerModsWidget_C_UpdatePurchaseState_Params Parms{};

	Parms.PurchaseAndDownloadModsText = PurchaseAndDownloadModsText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (DownloadModsText != nullptr)
		*DownloadModsText = Parms.DownloadModsText;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateWholePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::UpdateWholePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateWholePage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.InitializePageState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UBindButtonSystem* UBP_ServerModsWidget_C::InitializePageState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "InitializePageState");

	Params::UBP_ServerModsWidget_C_InitializePageState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Debug_SuccessFileInfosFromIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFile>               Files                                                            (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FFile> UBP_ServerModsWidget_C::Debug_SuccessFileInfosFromIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Debug_SuccessFileInfosFromIDs");

	Params::UBP_ServerModsWidget_C_Debug_SuccessFileInfosFromIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Debug_RequestFileInfosFromIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      TargetArray                                                      (ConstParm, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)

TArray<int64> UBP_ServerModsWidget_C::Debug_RequestFileInfosFromIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Debug_RequestFileInfosFromIDs");

	Params::UBP_ServerModsWidget_C_Debug_RequestFileInfosFromIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateFileModToIDList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFile>               Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<int64>                      ModsIds                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UBP_ServerModsWidget_C::CreateFileModToIDList(TArray<struct FFile>* Array, const TArray<int64>& ModsIds, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateFileModToIDList");

	Params::UBP_ServerModsWidget_C_CreateFileModToIDList_Params Parms{};

	Parms.ModsIds = ModsIds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.InitDropdownMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::InitDropdownMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "InitDropdownMenu");

	Params::UBP_ServerModsWidget_C_InitDropdownMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAnyPremiumModsExist
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exist                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::GetAnyPremiumModsExist(bool* Exist, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetAnyPremiumModsExist");

	Params::UBP_ServerModsWidget_C_GetAnyPremiumModsExist_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::AnimationPlayFadeInOnInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AnimationPlayFadeInOnInit");

	Params::UBP_ServerModsWidget_C_AnimationPlayFadeInOnInit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::AnimationPlayFadeInOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AnimationPlayFadeInOnStart");

	Params::UBP_ServerModsWidget_C_AnimationPlayFadeInOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAllModsPurchased
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AllModsPurchased                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      NotPurchasedModIDs                                               (Edit, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      TEMP_ModsWhichWillBePurchased                                    (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int64                              CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::GetAllModsPurchased(TArray<int64>* NotPurchasedModIDs, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, int64 CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetAllModsPurchased");

	Params::UBP_ServerModsWidget_C_GetAllModsPurchased_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotPurchasedModIDs != nullptr)
		*NotPurchasedModIDs = std::move(Parms.NotPurchasedModIDs);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DebugLogin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::DebugLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DebugLogin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DestroyPremiumBuyHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UBP_ServerModsWidget_C::DestroyPremiumBuyHandle(bool* CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DestroyPremiumBuyHandle");

	Params::UBP_ServerModsWidget_C_DestroyPremiumBuyHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_IsValidTimerHandle_ReturnValue != nullptr)
		*CallFunc_K2_IsValidTimerHandle_ReturnValue = Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModPricingList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UWBP_PriceColumns_C*         CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_MakeFInstallProgressMod_ReturnValue                     (Edit, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// TArray<double>                     CallFunc_Map_Keys_Keys                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Map_Length_ReturnValue                                  (Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class UVerticalBoxSlot* UBP_ServerModsWidget_C::CreateModPricingList(int32 Temp_int_Array_Index_Variable, class UWBP_PriceColumns_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, TArray<double>* CallFunc_Map_Keys_Keys, double CallFunc_Array_Get_Item_1, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateModPricingList");

	Params::UBP_ServerModsWidget_C_CreateModPricingList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetIsModPaidStatus_Currency_Symbol = CallFunc_GetIsModPaidStatus_Currency_Symbol;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Map_Keys_Keys != nullptr)
		*CallFunc_Map_Keys_Keys = std::move(Parms.CallFunc_Map_Keys_Keys);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Multiply_IntFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue = Parms.CallFunc_Multiply_IntFloat_ReturnValue;

	if (CallFunc_GetIsModPaidStatus_Premium != nullptr)
		*CallFunc_GetIsModPaidStatus_Premium = Parms.CallFunc_GetIsModPaidStatus_Premium;

	if (CallFunc_GetIsModPaidStatus_Purchased != nullptr)
		*CallFunc_GetIsModPaidStatus_Purchased = Parms.CallFunc_GetIsModPaidStatus_Purchased;

	if (CallFunc_GetIsModPaidStatus_Tier_Price != nullptr)
		*CallFunc_GetIsModPaidStatus_Tier_Price = Parms.CallFunc_GetIsModPaidStatus_Tier_Price;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePageDiskSpaceAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetEnoughSpaceToDownloadAllMods_ReturnValue             (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_ServerModsWidget_C::UpdatePageDiskSpaceAvailability(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdatePageDiskSpaceAvailability");

	Params::UBP_ServerModsWidget_C_UpdatePageDiskSpaceAvailability_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Get Server Mods Delegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 JoinEvent                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 BackEvent                                                        (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ReportEvent                                                      (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig)
// FDelegateProperty_                 FavoriteEvent                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ErrorEvent                                                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UBP_ServerModsWidget_C::Get_Server_Mods_Delegate(FDelegateProperty_ BackEvent, FDelegateProperty_ FavoriteEvent, FDelegateProperty_* ErrorEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Get Server Mods Delegate");

	Params::UBP_ServerModsWidget_C_Get_Server_Mods_Delegate_Params Parms{};

	Parms.BackEvent = BackEvent;
	Parms.FavoriteEvent = FavoriteEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (ErrorEvent != nullptr)
		*ErrorEvent = Parms.ErrorEvent;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.EndDownloadCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (Edit, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UCFCoreUISubsystem* UBP_ServerModsWidget_C::EndDownloadCheck(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "EndDownloadCheck");

	Params::UBP_ServerModsWidget_C_EndDownloadCheck_Params Parms{};

	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;

	if (CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList = std::move(Parms.CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (Edit, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UBP_ServerModsWidget_C::UpdateTexts(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList, class FString* CallFunc_FormatFileSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateTexts");

	Params::UBP_ServerModsWidget_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;

	if (CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList = std::move(Parms.CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList);

	if (CallFunc_FormatFileSize_ReturnValue != nullptr)
		*CallFunc_FormatFileSize_ReturnValue = std::move(Parms.CallFunc_FormatFileSize_ReturnValue);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::OnError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnError");

	Params::UBP_ServerModsWidget_C_OnError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.LoadingBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::LoadingBackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "LoadingBackEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CompletedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::CompletedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CompletedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ErrorEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::ErrorEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ErrorEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDowloadingMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::StartDowloadingMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "StartDowloadingMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CalculateFreeSpaceAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::CalculateFreeSpaceAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CalculateFreeSpaceAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnModsDirInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient)

struct FModsDirInfo UBP_ServerModsWidget_C::OnModsDirInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnModsDirInfo");

	Params::UBP_ServerModsWidget_C_OnModsDirInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnModsDirInfoError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::OnModsDirInfoError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnModsDirInfoError");

	Params::UBP_ServerModsWidget_C_OnModsDirInfoError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessGeneratePremium
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)

class FString UBP_ServerModsWidget_C::OnSuccessGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnSuccessGeneratePremium");

	Params::UBP_ServerModsWidget_C_OnSuccessGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnErrorGeneratePremium
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::OnErrorGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnErrorGeneratePremium");

	Params::UBP_ServerModsWidget_C_OnErrorGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "PreConstruct");

	Params::UBP_ServerModsWidget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On CFCore Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Event_On_CFCore_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On CFCore Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On CFCore Init Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::Event_On_CFCore_Init_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On CFCore Init Error");

	Params::UBP_ServerModsWidget_C_Event_On_CFCore_Init_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event Result
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBP_ServerModsWidget_C::Event_Result()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event Result");

	Params::UBP_ServerModsWidget_C_Event_Result_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Get User Info Failed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::Event_On_Get_User_Info_Failed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On Get User Info Failed");

	Params::UBP_ServerModsWidget_C_Event_On_Get_User_Info_Failed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Get User Info
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMe                         Me                                                               (ConstParm, BlueprintVisible, ReturnParm, Transient)

struct FMe UBP_ServerModsWidget_C::Event_On_Get_User_Info()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On Get User Info");

	Params::UBP_ServerModsWidget_C_Event_On_Get_User_Info_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Sync Installed Mods Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::Event_On_Sync_Installed_Mods_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On Sync Installed Mods Error");

	Params::UBP_ServerModsWidget_C_Event_On_Sync_Installed_Mods_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Sync Installed Mods Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Event_On_Sync_Installed_Mods_Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On Sync Installed Mods Success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AuthenticateSignIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::AuthenticateSignIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AuthenticateSignIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessSpaceCheck
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient)

struct FModsDirInfo UBP_ServerModsWidget_C::OnSuccessSpaceCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnSuccessSpaceCheck");

	Params::UBP_ServerModsWidget_C_OnSuccessSpaceCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnErrorSpaceCheck
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::OnErrorSpaceCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnErrorSpaceCheck");

	Params::UBP_ServerModsWidget_C_OnErrorSpaceCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.PremiumModChecking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::PremiumModChecking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "PremiumModChecking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessPremiumModsCheck
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int64> UBP_ServerModsWidget_C::OnSuccessPremiumModsCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnSuccessPremiumModsCheck");

	Params::UBP_ServerModsWidget_C_OnSuccessPremiumModsCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FailedPremiumModsChecks
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::FailedPremiumModsChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "FailedPremiumModsChecks");

	Params::UBP_ServerModsWidget_C_FailedPremiumModsChecks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Success
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int64> UBP_ServerModsWidget_C::Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Success");

	Params::UBP_ServerModsWidget_C_Success_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FailedToFindPremium
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsWidget_C::FailedToFindPremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "FailedToFindPremium");

	Params::UBP_ServerModsWidget_C_FailedToFindPremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.SuccessGetFileInfoByIDs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFile>               Files                                                            (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FFile> UBP_ServerModsWidget_C::SuccessGetFileInfoByIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "SuccessGetFileInfoByIDs");

	Params::UBP_ServerModsWidget_C_SuccessGetFileInfoByIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.RefreshPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::RefreshPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "RefreshPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DisablePurchaseButtonTemporarily
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::DisablePurchaseButtonTemporarily()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DisablePurchaseButtonTemporarily");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FadeInPageAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::FadeInPageAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "FadeInPageAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBP_ServerModsWidget_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Tick");

	Params::UBP_ServerModsWidget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnAuthenticated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAuth                                                            (BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBP_ServerModsWidget_C::OnAuthenticated(bool bAuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnAuthenticated");

	Params::UBP_ServerModsWidget_C_OnAuthenticated_Params Parms{};

	Parms.bAuth = bAuth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ExecuteUbergraph_BP_ServerModsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo_1                                 (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_7                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      K2Node_CustomEvent_url                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_6                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_5                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_CustomEvent_is_authenticated                              (Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FMe                         K2Node_CustomEvent_me                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
// class UBP_ServerModsLoading_C*     CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_5                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_6                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_7                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_8                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_Int64Int64_ReturnValue                          (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NoDestructor)
// TArray<int64>                      K2Node_CustomEvent_ModIds_1                                      (EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NoDestructor)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_9                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_1                  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FGenPremiumCheckoutUrlRequestK2Node_MakeStruct_GenPremiumCheckoutUrlRequest                   (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, NoDestructor)
// struct FMatchPlatformFilesFilter   K2Node_MakeStruct_MatchPlatformFilesFilter                       (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_10                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// TArray<struct FFile>               K2Node_CustomEvent_files                                         (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_CreateFileModToIDList_ModsIds                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_2                  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DidAllTheModsGetBought_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_11                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_3                  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (Edit, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1       (Edit, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1     (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods_1          (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_CustomEvent_bAuth                                         (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly, NoDestructor)

FDelegateProperty_ UBP_ServerModsWidget_C::ExecuteUbergraph_BP_ServerModsWidget(int32* EntryPoint, class FString* K2Node_CustomEvent_url, bool CallFunc_CanLaunchURL_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_is_authenticated, bool Temp_bool_Variable, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UBP_ServerModsLoading_C* CallFunc_Create_ReturnValue, bool* CallFunc_K2_IsValidTimerHandle_ReturnValue, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1, const struct FMatchPlatformFilesFilter& K2Node_MakeStruct_MatchPlatformFilesFilter, const TArray<int64>& CallFunc_CreateFileModToIDList_ModsIds, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2, enum class ESlateVisibility K2Node_Select_Default, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_bAuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ExecuteUbergraph_BP_ServerModsWidget");

	Params::UBP_ServerModsWidget_C_ExecuteUbergraph_BP_ServerModsWidget_Params Parms{};

	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_is_authenticated = K2Node_CustomEvent_is_authenticated;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue = CallFunc_MakeSettingsFromProjectConfig_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1;
	Parms.K2Node_MakeStruct_MatchPlatformFilesFilter = K2Node_MakeStruct_MatchPlatformFilesFilter;
	Parms.CallFunc_CreateFileModToIDList_ModsIds = CallFunc_CreateFileModToIDList_ModsIds;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3;
	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;
	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1 = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1 = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_bAuth = K2Node_CustomEvent_bAuth;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_url != nullptr)
		*K2Node_CustomEvent_url = std::move(Parms.K2Node_CustomEvent_url);

	if (CallFunc_K2_IsValidTimerHandle_ReturnValue != nullptr)
		*CallFunc_K2_IsValidTimerHandle_ReturnValue = Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue;

	if (CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;

	if (CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList = std::move(Parms.CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList);

	if (CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1 != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1 = Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1;

	if (CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1 != nullptr)
		*CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1 = std::move(Parms.CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Error__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Error__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Error__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDownloads__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::StartDownloads__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "StartDownloads__DelegateSignature");

	Params::UBP_ServerModsWidget_C_StartDownloads__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BackEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BackEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.JoinEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::JoinEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "JoinEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_JoinEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FavoriteEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::FavoriteEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "FavoriteEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_FavoriteEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.RepotrEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::RepotrEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "RepotrEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_RepotrEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}

}


