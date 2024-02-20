#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsLoading.BP_ServerModsLoading_C
// (None)

class UClass* UBP_ServerModsLoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsLoading_C");

	return Clss;
}


// BP_ServerModsLoading_C BP_ServerModsLoading.Default__BP_ServerModsLoading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsLoading_C* UBP_ServerModsLoading_C::GetDefaultObj()
{
	static class UBP_ServerModsLoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsLoading_C*>(UBP_ServerModsLoading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.PlayFadeInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UBP_ServerModsLoading_C::PlayFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "PlayFadeInAnimation");

	Params::UBP_ServerModsLoading_C_PlayFadeInAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AddToProgressSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// int64                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int64>                      CallFunc_Map_Values_Values                                       (ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_ServerModsLoading_C::AddToProgressSize(int64* Value, const TArray<int64>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "AddToProgressSize");

	Params::UBP_ServerModsLoading_C_AddToProgressSize_Params Parms{};

	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AssureClientModsUpdated_OnUpdatedFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       Installed_mods                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

void UBP_ServerModsLoading_C::AssureClientModsUpdated_OnUpdatedFinished(TArray<struct FInstalledMod>* Installed_mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "AssureClientModsUpdated_OnUpdatedFinished");

	Params::UBP_ServerModsLoading_C_AssureClientModsUpdated_OnUpdatedFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Installed_mods != nullptr)
		*Installed_mods = std::move(Parms.Installed_mods);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AssureClientModsUpdated_OnProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsUpdateProgress         UpdateProgress                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FLibraryProgress            ModInstallProgress                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, SubobjectReference)
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_ServerModsLoading_C::AssureClientModsUpdated_OnProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "AssureClientModsUpdated_OnProgress");

	Params::UBP_ServerModsLoading_C_AssureClientModsUpdated_OnProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.DownloadAllModsByFileIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      ModsToDownload                                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> Mods_to_Download                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UBP_ServerModsLoading_C::DownloadAllModsByFileIDs(class FText* ServerName, TArray<int64>* ModsToDownload, TArray<struct FInstallProgressMod>* Mods_to_Download, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "DownloadAllModsByFileIDs");

	Params::UBP_ServerModsLoading_C_DownloadAllModsByFileIDs_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ServerName != nullptr)
		*ServerName = Parms.ServerName;

	if (ModsToDownload != nullptr)
		*ModsToDownload = std::move(Parms.ModsToDownload);

	if (Mods_to_Download != nullptr)
		*Mods_to_Download = std::move(Parms.Mods_to_Download);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int64                              FileId                                                           (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class ELibraryProgressState   PregressState                                                    (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Progress                                                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// int64                              TransferredBytes                                                 (BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Format_ReturnValue_2                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::Update_Downloading_Proggress_Text(enum class ELibraryProgressState* PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState* Temp_byte_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Format_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool* Temp_bool_Variable, class FText* K2Node_Select_Default, class FText* CallFunc_Format_ReturnValue_2, class FText* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Update Downloading Proggress Text");

	Params::UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PregressState != nullptr)
		*PregressState = Parms.PregressState;

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (TransferredBytes != nullptr)
		*TransferredBytes = Parms.TransferredBytes;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Format_ReturnValue_1 != nullptr)
		*CallFunc_Format_ReturnValue_1 = Parms.CallFunc_Format_ReturnValue_1;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Format_ReturnValue_2 != nullptr)
		*CallFunc_Format_ReturnValue_2 = Parms.CallFunc_Format_ReturnValue_2;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::UpdateTexts(int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateTexts");

	Params::UBP_ServerModsLoading_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CalculateTatalModsSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_Get_Mod_Size_SizeStruct                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Get_Mod_Size_SizeInText                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Get_Mod_Size_bytes                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FFile                       CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

int32 UBP_ServerModsLoading_C::CalculateTatalModsSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CalculateTatalModsSize");

	Params::UBP_ServerModsLoading_C_CalculateTatalModsSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateProgressBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::UpdateProgressBar(int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateProgressBar");

	Params::UBP_ServerModsLoading_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.GetDelegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 BackDelegate                                                     (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 CompletedDelegate                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ErrorDelegate                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UBP_ServerModsLoading_C::GetDelegate(FDelegateProperty_ CompletedDelegate, FDelegateProperty_ ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "GetDelegate");

	Params::UBP_ServerModsLoading_C_GetDelegate_Params Parms{};

	Parms.CompletedDelegate = CompletedDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CheckIfAllDownloaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UBP_ServerModsLoading_C::CheckIfAllDownloaded(bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CheckIfAllDownloaded");

	Params::UBP_ServerModsLoading_C_CheckIfAllDownloaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingModsFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UBP_ServerModsLoading_C::ParsingModsFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingModsFile");

	Params::UBP_ServerModsLoading_C_ParsingModsFile_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_ServerModsLoading_C::ParsingMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingMods");

	Params::UBP_ServerModsLoading_C_ParsingMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.SetDounloadingCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::SetDounloadingCountText(int32* CallFunc_Int32_AddOne_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "SetDounloadingCountText");

	Params::UBP_ServerModsLoading_C_SetDounloadingCountText_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Mod Installing Error
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue_1                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

struct FCFCoreError UBP_ServerModsLoading_C::Mod_Installing_Error(int32* CallFunc_Int32_AddOne_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Mod Installing Error");

	Params::UBP_ServerModsLoading_C_Mod_Installing_Error_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue_1 != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue_1 = Parms.CallFunc_Int32_AddOne_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstalledMod               InstalledMod                                                     (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue_1                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

void UBP_ServerModsLoading_C::ModInstallingSuccess(struct FInstalledMod* InstalledMod, int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingSuccess");

	Params::UBP_ServerModsLoading_C_ModInstallingSuccess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InstalledMod != nullptr)
		*InstalledMod = std::move(Parms.InstalledMod);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue_1 != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue_1 = Parms.CallFunc_Int32_AddOne_ReturnValue_1;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::OnSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "OnSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsLoading_C::OnError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "OnError");

	Params::UBP_ServerModsLoading_C_OnError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

struct FKey UBP_ServerModsLoading_C::ControllerAction(enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ControllerAction");

	Params::UBP_ServerModsLoading_C_ControllerAction_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.DelayComplition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::DelayComplition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "DelayComplition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBP_ServerModsLoading_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Tick");

	Params::UBP_ServerModsLoading_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ExecuteUbergraph_BP_ServerModsLoading
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_CustomEvent_Key                                           (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)

bool UBP_ServerModsLoading_C::ExecuteUbergraph_BP_ServerModsLoading(class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ExecuteUbergraph_BP_ServerModsLoading");

	Params::UBP_ServerModsLoading_C_ExecuteUbergraph_BP_ServerModsLoading_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ErrorEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::ErrorEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ErrorEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CompetedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::CompetedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CompetedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::BackEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BackEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


