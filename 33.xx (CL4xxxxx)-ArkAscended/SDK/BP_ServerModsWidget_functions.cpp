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
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnEventBroadcasted");

	Params::UBP_ServerModsWidget_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBP_ServerModsWidget_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BPHighlightWidgetOnStart");

	Params::UBP_ServerModsWidget_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)

struct FKey UBP_ServerModsWidget_C::BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BPGamepadReleased");

	Params::UBP_ServerModsWidget_C_BPGamepadReleased_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

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
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::CreateModList(class UWrapBoxSlot** CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateModList");

	Params::UBP_ServerModsWidget_C_CreateModList_Params Parms{};


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
// struct FInstallProgressMod         ModInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int64 UBP_ServerModsWidget_C::AddToTotalSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AddToTotalSize");

	Params::UBP_ServerModsWidget_C_AddToTotalSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BP_ServerModsWidget_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsWidget_C::BP_ServerModsWidget_AutoGenFunc(enum class EViewState State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BP_ServerModsWidget_AutoGenFunc");

	Params::UBP_ServerModsWidget_C_BP_ServerModsWidget_AutoGenFunc_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetEnoughSpaceToDownloadAllMods
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_Int64Int64_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::GetEnoughSpaceToDownloadAllMods(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetEnoughSpaceToDownloadAllMods");

	Params::UBP_ServerModsWidget_C_GetEnoughSpaceToDownloadAllMods_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetCompleteInstalledModsStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AllModsInstalled                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              TotalInstalledMods                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              TotalNonInstalledMods                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> InstalledMods                                                    (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> NonInstalledModList                                              (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListYes                                                      (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListNo                                                       (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         Temp_struct_Variable                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsWidget_C::GetCompleteInstalledModsStatus(int32* TotalInstalledMods, int32 TotalNonInstalledMods, const TArray<struct FInstallProgressMod>& NonInstalledModList, TArray<struct FInstallProgressMod>* TempListNo, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetCompleteInstalledModsStatus");

	Params::UBP_ServerModsWidget_C_GetCompleteInstalledModsStatus_Params Parms{};

	Parms.TotalNonInstalledMods = TotalNonInstalledMods;
	Parms.NonInstalledModList = NonInstalledModList;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalInstalledMods != nullptr)
		*TotalInstalledMods = Parms.TotalInstalledMods;

	if (TempListNo != nullptr)
		*TempListNo = std::move(Parms.TempListNo);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePurchaseButtonEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ExportObject, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UBP_ServerModsWidget_C::UpdateFreeSpaceText(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateFreeSpaceText");

	Params::UBP_ServerModsWidget_C_UpdateFreeSpaceText_Params Parms{};

	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

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
// class FText                        PurchaseAndDownloadModsText                                      (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FText                        DownloadModsText                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)

bool UBP_ServerModsWidget_C::UpdatePurchaseState(class FText PurchaseAndDownloadModsText, class FText* DownloadModsText, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, int32* CallFunc_SelectInt_ReturnValue, class FText* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdatePurchaseState");

	Params::UBP_ServerModsWidget_C_UpdatePurchaseState_Params Parms{};

	Parms.PurchaseAndDownloadModsText = PurchaseAndDownloadModsText;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;

	UObject::ProcessEvent(Func, &Parms);

	if (DownloadModsText != nullptr)
		*DownloadModsText = Parms.DownloadModsText;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

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
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UBP_ServerModsWidget_C::InitializePageState(class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "InitializePageState");

	Params::UBP_ServerModsWidget_C_InitializePageState_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Debug_SuccessFileInfosFromIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFile>               Files                                                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// TArray<int64>                      TargetArray                                                      (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// TArray<int64>                      ModsIds                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

int32 UBP_ServerModsWidget_C::CreateFileModToIDList(TArray<struct FFile>* Array, TArray<int64>* ModsIds, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateFileModToIDList");

	Params::UBP_ServerModsWidget_C_CreateFileModToIDList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (ModsIds != nullptr)
		*ModsIds = std::move(Parms.ModsIds);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.InitDropdownMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::InitDropdownMenu(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "InitDropdownMenu");

	Params::UBP_ServerModsWidget_C_InitDropdownMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAnyPremiumModsExist
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exist                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_ServerModsWidget_C::GetAnyPremiumModsExist(bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetAnyPremiumModsExist");

	Params::UBP_ServerModsWidget_C_GetAnyPremiumModsExist_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::AnimationPlayFadeInOnInit(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AnimationPlayFadeInOnInit");

	Params::UBP_ServerModsWidget_C_AnimationPlayFadeInOnInit_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_ServerModsWidget_C::AnimationPlayFadeInOnStart(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "AnimationPlayFadeInOnStart");

	Params::UBP_ServerModsWidget_C_AnimationPlayFadeInOnStart_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAllModsPurchased
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AllModsPurchased                                                 (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      NotPurchasedModIDs                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      TEMP_ModsWhichWillBePurchased                                    (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int64                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::GetAllModsPurchased(TArray<int64>* NotPurchasedModIDs, bool* CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "GetAllModsPurchased");

	Params::UBP_ServerModsWidget_C_GetAllModsPurchased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NotPurchasedModIDs != nullptr)
		*NotPurchasedModIDs = std::move(Parms.NotPurchasedModIDs);

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

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
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsWidget_C::DestroyPremiumBuyHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "DestroyPremiumBuyHandle");

	Params::UBP_ServerModsWidget_C_DestroyPremiumBuyHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModPricingList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWBP_PriceColumns_C*         CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_MakeFInstallProgressMod_ReturnValue                     (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<double>                     CallFunc_Map_Keys_Keys                                           (ExportObject, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Map_Length_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Map_Find_Value                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Map_Find_Value_1                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class UVerticalBoxSlot* UBP_ServerModsWidget_C::CreateModPricingList(class FText* CallFunc_Format_ReturnValue, TArray<double>* CallFunc_Map_Keys_Keys, double CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateModPricingList");

	Params::UBP_ServerModsWidget_C_CreateModPricingList_Params Parms{};

	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Map_Keys_Keys != nullptr)
		*CallFunc_Map_Keys_Keys = std::move(Parms.CallFunc_Map_Keys_Keys);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePageDiskSpaceAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetEnoughSpaceToDownloadAllMods_ReturnValue             (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_ServerModsWidget_C::UpdatePageDiskSpaceAvailability(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility* K2Node_Select_Default, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdatePageDiskSpaceAvailability");

	Params::UBP_ServerModsWidget_C_UpdatePageDiskSpaceAvailability_Params Parms{};

	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;
	Parms.CallFunc_GetNotifManager_Output = CallFunc_GetNotifManager_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Get Server Mods Delegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 JoinEvent                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 BackEvent                                                        (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ReportEvent                                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// FDelegateProperty_                 FavoriteEvent                                                    (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ErrorEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UBP_ServerModsWidget_C::Get_Server_Mods_Delegate(FDelegateProperty_* FavoriteEvent, FDelegateProperty_ ErrorEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Get Server Mods Delegate");

	Params::UBP_ServerModsWidget_C_Get_Server_Mods_Delegate_Params Parms{};

	Parms.ErrorEvent = ErrorEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (FavoriteEvent != nullptr)
		*FavoriteEvent = Parms.FavoriteEvent;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.EndDownloadCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FInstallProgressMod> UBP_ServerModsWidget_C::EndDownloadCheck(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "EndDownloadCheck");

	Params::UBP_ServerModsWidget_C_EndDownloadCheck_Params Parms{};

	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ExportObject, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

int32 UBP_ServerModsWidget_C::UpdateTexts(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_FormatFileSize_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateTexts");

	Params::UBP_ServerModsWidget_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	if (CallFunc_Conv_IntToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue_1 = Parms.CallFunc_Conv_IntToText_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

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
// struct FModsDirInfo                ModsDirInfo                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)

void UBP_ServerModsWidget_C::OnModsDirInfo(struct FModsDirInfo* ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnModsDirInfo");

	Params::UBP_ServerModsWidget_C_OnModsDirInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ModsDirInfo != nullptr)
		*ModsDirInfo = std::move(Parms.ModsDirInfo);

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
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UBP_ServerModsWidget_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "PreConstruct");

	Params::UBP_ServerModsWidget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

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
// bool                               Is_authenticated                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

void UBP_ServerModsWidget_C::Event_Result(bool* Is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event Result");

	Params::UBP_ServerModsWidget_C_Event_Result_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Is_authenticated != nullptr)
		*Is_authenticated = Parms.Is_authenticated;

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
// struct FMe                         Me                                                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)

void UBP_ServerModsWidget_C::Event_On_Get_User_Info(struct FMe* Me)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Event On Get User Info");

	Params::UBP_ServerModsWidget_C_Event_On_Get_User_Info_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Me != nullptr)
		*Me = std::move(Parms.Me);

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
// struct FModsDirInfo                ModsDirInfo                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)

void UBP_ServerModsWidget_C::OnSuccessSpaceCheck(struct FModsDirInfo* ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnSuccessSpaceCheck");

	Params::UBP_ServerModsWidget_C_OnSuccessSpaceCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ModsDirInfo != nullptr)
		*ModsDirInfo = std::move(Parms.ModsDirInfo);

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
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// TArray<struct FFile>               Files                                                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBP_ServerModsWidget_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Tick");

	Params::UBP_ServerModsWidget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// bool                               bAuth                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

bool UBP_ServerModsWidget_C::OnAuthenticated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnAuthenticated");

	Params::UBP_ServerModsWidget_C_OnAuthenticated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ExecuteUbergraph_BP_ServerModsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo_1                                 (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_7                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      K2Node_CustomEvent_url                                           (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_6                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_5                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_CustomEvent_is_authenticated                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FMe                         K2Node_CustomEvent_me                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class UBP_ServerModsLoading_C*     CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_5                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_6                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_7                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_8                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_Int64Int64_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// TArray<int64>                      K2Node_CustomEvent_ModIds_1                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_9                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_1                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FGenPremiumCheckoutUrlRequestK2Node_MakeStruct_GenPremiumCheckoutUrlRequest                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// struct FMatchPlatformFilesFilter   K2Node_MakeStruct_MatchPlatformFilesFilter                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_10                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// TArray<struct FFile>               K2Node_CustomEvent_files                                         (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      CallFunc_CreateFileModToIDList_ModsIds                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_2                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DidAllTheModsGetBought_ReturnValue                      (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_11                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_GetAllModsPurchased_AllModsPurchased_3                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// TArray<int64>                      CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods    (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods            (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList      (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1  (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_InstalledMods_1          (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<struct FInstallProgressMod> CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1    (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               K2Node_CustomEvent_bAuth                                         (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)

FDelegateProperty_ UBP_ServerModsWidget_C::ExecuteUbergraph_BP_ServerModsWidget(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo_1, struct FCFCoreError* K2Node_CustomEvent_error_7, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, struct FCFCoreError* K2Node_CustomEvent_error_6, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, struct FCFCoreError* K2Node_CustomEvent_error_5, bool* Temp_bool_Variable, struct FCFCoreError* K2Node_CustomEvent_error_4, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, struct FCFCoreError* K2Node_CustomEvent_error_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FMatchPlatformFilesFilter& K2Node_MakeStruct_MatchPlatformFilesFilter, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_10, TArray<int64>* CallFunc_CreateFileModToIDList_ModsIds, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2, enum class ESlateVisibility* K2Node_Select_Default, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_11, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_bAuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ExecuteUbergraph_BP_ServerModsWidget");

	Params::UBP_ServerModsWidget_C_ExecuteUbergraph_BP_ServerModsWidget_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_ModsDirInfo_1 = K2Node_CustomEvent_ModsDirInfo_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_3 = CallFunc_GetEngineSubsystem_ReturnValue_3;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_4 = CallFunc_GetEngineSubsystem_ReturnValue_4;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_5 = CallFunc_GetEngineSubsystem_ReturnValue_5;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_6 = CallFunc_GetEngineSubsystem_ReturnValue_6;
	Parms.K2Node_CustomEvent_ModsDirInfo = K2Node_CustomEvent_ModsDirInfo;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_7 = CallFunc_GetEngineSubsystem_ReturnValue_7;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_8 = CallFunc_GetEngineSubsystem_ReturnValue_8;
	Parms.CallFunc_GetNotifManager_Output = CallFunc_GetNotifManager_Output;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_9 = CallFunc_GetEngineSubsystem_ReturnValue_9;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs = CallFunc_GetAllModsPurchased_NotPurchasedModIDs;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1;
	Parms.K2Node_MakeStruct_MatchPlatformFilesFilter = K2Node_MakeStruct_MatchPlatformFilesFilter;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_10 = CallFunc_GetEngineSubsystem_ReturnValue_10;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_11 = CallFunc_GetEngineSubsystem_ReturnValue_11;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3 = CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3;
	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods = CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods;
	Parms.CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1 = CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1 = CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1;
	Parms.CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1 = CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_CustomEvent_bAuth = K2Node_CustomEvent_bAuth;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	if (K2Node_CustomEvent_error_7 != nullptr)
		*K2Node_CustomEvent_error_7 = std::move(Parms.K2Node_CustomEvent_error_7);

	if (K2Node_CustomEvent_error_6 != nullptr)
		*K2Node_CustomEvent_error_6 = std::move(Parms.K2Node_CustomEvent_error_6);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_CustomEvent_error_5 != nullptr)
		*K2Node_CustomEvent_error_5 = std::move(Parms.K2Node_CustomEvent_error_5);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_CustomEvent_error_4 != nullptr)
		*K2Node_CustomEvent_error_4 = std::move(Parms.K2Node_CustomEvent_error_4);

	if (CallFunc_MakeSettingsFromProjectConfig_ReturnValue != nullptr)
		*CallFunc_MakeSettingsFromProjectConfig_ReturnValue = std::move(Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue);

	if (K2Node_CustomEvent_error_3 != nullptr)
		*K2Node_CustomEvent_error_3 = std::move(Parms.K2Node_CustomEvent_error_3);

	if (K2Node_CustomEvent_error_2 != nullptr)
		*K2Node_CustomEvent_error_2 = std::move(Parms.K2Node_CustomEvent_error_2);

	if (K2Node_CustomEvent_error_1 != nullptr)
		*K2Node_CustomEvent_error_1 = std::move(Parms.K2Node_CustomEvent_error_1);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_2 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2;

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_3 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3;

	if (CallFunc_CreateFileModToIDList_ModsIds != nullptr)
		*CallFunc_CreateFileModToIDList_ModsIds = std::move(Parms.CallFunc_CreateFileModToIDList_ModsIds);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

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
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

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


