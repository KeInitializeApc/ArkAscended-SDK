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


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBP_ServerModsLoading_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BPEscapeClosed");

	Params::UBP_ServerModsLoading_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BP_ServerModsLoading_AutoGenFunc1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       Installed_mods                                                   (ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)

void UBP_ServerModsLoading_C::BP_ServerModsLoading_AutoGenFunc1(const TArray<struct FInstalledMod>& Installed_mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BP_ServerModsLoading_AutoGenFunc1");

	Params::UBP_ServerModsLoading_C_BP_ServerModsLoading_AutoGenFunc1_Params Parms{};

	Parms.Installed_mods = Installed_mods;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BP_ServerModsLoading_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsUpdateProgress         UpdateProgress                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
// struct FLibraryProgress            ModInstallProgress                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, SubobjectReference)
// struct FCFCoreMod                  Mod                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

struct FCFCoreMod UBP_ServerModsLoading_C::BP_ServerModsLoading_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BP_ServerModsLoading_AutoGenFunc");

	Params::UBP_ServerModsLoading_C_BP_ServerModsLoading_AutoGenFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.StartDownload_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int64>                      ModsToDownload                                                   (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCFCoreMod>          Mods_to_Download                                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UCFCoreSubsystem* UBP_ServerModsLoading_C::StartDownload_0(const TArray<int64>& ModsToDownload, const TArray<struct FCFCoreMod>& Mods_to_Download)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "StartDownload_0");

	Params::UBP_ServerModsLoading_C_StartDownload_0_Params Parms{};

	Parms.ModsToDownload = ModsToDownload;
	Parms.Mods_to_Download = Mods_to_Download;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int64                              FileId                                                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   PregressState                                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Progress                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// int64                              TransferredBytes                                                 (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue_1                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::Update_Downloading_Proggress_Text_New(enum class ELibraryProgressState PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, struct FCFCoreFileSize* CallFunc_BreakFileSize_ReturnValue, struct FCFCoreFileSize* CallFunc_BreakFileSize_ReturnValue_1, int32* CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Update Downloading Proggress Text_New");

	Params::UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_New_Params Parms{};

	Parms.PregressState = PregressState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (TransferredBytes != nullptr)
		*TransferredBytes = Parms.TransferredBytes;

	if (CallFunc_BreakFileSize_ReturnValue != nullptr)
		*CallFunc_BreakFileSize_ReturnValue = std::move(Parms.CallFunc_BreakFileSize_ReturnValue);

	if (CallFunc_BreakFileSize_ReturnValue_1 != nullptr)
		*CallFunc_BreakFileSize_ReturnValue_1 = std::move(Parms.CallFunc_BreakFileSize_ReturnValue_1);

	if (CallFunc_Len_ReturnValue != nullptr)
		*CallFunc_Len_ReturnValue = Parms.CallFunc_Len_ReturnValue;

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::UpdateTexts(int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateTexts");

	Params::UBP_ServerModsLoading_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CalculateTatalModsSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBP_ServerModsLoading_C::CalculateTatalModsSize(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, struct FFile* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, int64* CallFunc_Add_Int64Int64_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CalculateTatalModsSize");

	Params::UBP_ServerModsLoading_C_CalculateTatalModsSize_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Add_Int64Int64_ReturnValue != nullptr)
		*CallFunc_Add_Int64Int64_ReturnValue = Parms.CallFunc_Add_Int64Int64_ReturnValue;

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateProgressBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UBP_ServerModsLoading_C::UpdateProgressBar(int64* CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateProgressBar");

	Params::UBP_ServerModsLoading_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Divide_Int64Int64_ReturnValue != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue = Parms.CallFunc_Divide_Int64Int64_ReturnValue;

	if (CallFunc_Divide_Int64Int64_ReturnValue_1 != nullptr)
		*CallFunc_Divide_Int64Int64_ReturnValue_1 = Parms.CallFunc_Divide_Int64Int64_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.GetDelegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 BackDelegate                                                     (EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 CompletedDelegate                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 ErrorDelegate                                                    (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UBP_ServerModsLoading_C::GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_* CompletedDelegate, FDelegateProperty_* ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "GetDelegate");

	Params::UBP_ServerModsLoading_C_GetDelegate_Params Parms{};

	Parms.BackDelegate = BackDelegate;

	UObject::ProcessEvent(Func, &Parms);

	if (CompletedDelegate != nullptr)
		*CompletedDelegate = Parms.CompletedDelegate;

	if (ErrorDelegate != nullptr)
		*ErrorDelegate = Parms.ErrorDelegate;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CheckIfAllDownloaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBP_ServerModsLoading_C::CheckIfAllDownloaded(int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CheckIfAllDownloaded");

	Params::UBP_ServerModsLoading_C_CheckIfAllDownloaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingModsFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FFile                       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBP_ServerModsLoading_C::ParsingModsFile(int32* CallFunc_Array_Length_ReturnValue, struct FFile* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingModsFile");

	Params::UBP_ServerModsLoading_C_ParsingModsFile_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsLoading_C::ParsingMods(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingMods");

	Params::UBP_ServerModsLoading_C_ParsingMods_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int64                              FileId                                                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   PregressState                                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Progress                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// int64                              TransferredBytes                                                 (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// struct FFile                       CallFunc_Map_Find_Value                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Map_Find_Value_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::Update_Downloading_Proggress_Text(enum class ELibraryProgressState PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32* CallFunc_Len_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Update Downloading Proggress Text");

	Params::UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_Params Parms{};

	Parms.PregressState = PregressState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (TransferredBytes != nullptr)
		*TransferredBytes = Parms.TransferredBytes;

	if (CallFunc_Len_ReturnValue != nullptr)
		*CallFunc_Len_ReturnValue = Parms.CallFunc_Len_ReturnValue;

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.SetDounloadingCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

TArray<struct FFormatArgumentData> UBP_ServerModsLoading_C::SetDounloadingCountText(int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "SetDounloadingCountText");

	Params::UBP_ServerModsLoading_C_SetDounloadingCountText_Params Parms{};

	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue_1                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

struct FCFCoreError UBP_ServerModsLoading_C::ModInstallingError(int32* CallFunc_Int32_AddOne_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingError");

	Params::UBP_ServerModsLoading_C_ModInstallingError_Params Parms{};

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
// struct FInstalledMod               InstalledMod                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue_1                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

void UBP_ServerModsLoading_C::ModInstallingSuccess(const struct FInstalledMod& InstalledMod, int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingSuccess");

	Params::UBP_ServerModsLoading_C_ModInstallingSuccess_Params Parms{};

	Parms.InstalledMod = InstalledMod;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue_1 != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue_1 = Parms.CallFunc_Int32_AddOne_ReturnValue_1;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLibraryProgress            Progress                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<int64>                      CallFunc_Map_Values_Values                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsLoading_C::ModInstallingProgress(struct FLibraryProgress* Progress, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int64>* CallFunc_Map_Values_Values, int32* CallFunc_Array_Length_ReturnValue, int64* CallFunc_Array_Get_Item, int64* CallFunc_Add_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingProgress");

	Params::UBP_ServerModsLoading_C_ModInstallingProgress_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = std::move(Parms.Progress);

	if (CallFunc_Map_Values_Values != nullptr)
		*CallFunc_Map_Values_Values = std::move(Parms.CallFunc_Map_Values_Values);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Add_Int64Int64_ReturnValue != nullptr)
		*CallFunc_Add_Int64Int64_ReturnValue = Parms.CallFunc_Add_Int64Int64_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Downloading
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsLoading_C::Downloading(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, struct FCFCoreMod* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Downloading");

	Params::UBP_ServerModsLoading_C_Downloading_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.StartDownload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FCFCoreMod>          ModsToDownload                                                   (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText UBP_ServerModsLoading_C::StartDownload(const TArray<struct FCFCoreMod>& ModsToDownload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "StartDownload");

	Params::UBP_ServerModsLoading_C_StartDownload_Params Parms{};

	Parms.ModsToDownload = ModsToDownload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

void UBP_ServerModsLoading_C::ControllerAction(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ControllerAction");

	Params::UBP_ServerModsLoading_C_ControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UBP_ServerModsLoading_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Tick");

	Params::UBP_ServerModsLoading_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.DelayComplitedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::DelayComplitedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "DelayComplitedEvent");



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


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ExecuteUbergraph_BP_ServerModsLoading
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_CustomEvent_Key                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_ServerModsLoading_C::ExecuteUbergraph_BP_ServerModsLoading(struct FCFCoreMod* CallFunc_Array_Get_Item, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ExecuteUbergraph_BP_ServerModsLoading");

	Params::UBP_ServerModsLoading_C_ExecuteUbergraph_BP_ServerModsLoading_Params Parms{};

	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

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


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ComplitedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::ComplitedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ComplitedEvent__DelegateSignature");



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


