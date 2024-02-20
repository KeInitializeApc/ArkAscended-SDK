#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
// (None)

class UClass* UConsoleVariablesAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleVariablesAsset");

	return Clss;
}


// ConsoleVariablesAsset ConsoleVariablesEditorRuntime.Default__ConsoleVariablesAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleVariablesAsset* UConsoleVariablesAsset::GetDefaultObj()
{
	static class UConsoleVariablesAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleVariablesAsset*>(UConsoleVariablesAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableCollectionDescription                                  (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class FString UConsoleVariablesAsset::SetVariableCollectionDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "SetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_SetVariableCollectionDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>Replacement                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FConsoleVariablesEditorAssetSaveData> UConsoleVariablesAsset::ReplaceSavedCommands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ReplaceSavedCommands");

	Params::UConsoleVariablesAsset_ReplaceSavedCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InCommandString                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UConsoleVariablesAsset::RemoveConsoleVariable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "RemoveConsoleVariable");

	Params::UConsoleVariablesAsset_RemoveConsoleVariable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UConsoleVariablesAsset::GetVariableCollectionDescription(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_GetVariableCollectionDescription_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UConsoleVariablesAsset::GetSavedCommandsCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsCount");

	Params::UConsoleVariablesAsset_GetSavedCommandsCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UConsoleVariablesAsset::GetSavedCommandsAsStringArray(bool* bOnlyIncludeChecked, const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsStringArray");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnlyIncludeChecked != nullptr)
		*bOnlyIncludeChecked = Parms.bOnlyIncludeChecked;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(bool* bOnlyIncludeChecked, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsCommaSeparatedString");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnlyIncludeChecked != nullptr)
		*bOnlyIncludeChecked = Parms.bOnlyIncludeChecked;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UConsoleVariablesAsset::GetSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommands");

	Params::UConsoleVariablesAsset_GetSavedCommands_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InCommandString                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FConsoleVariablesEditorAssetSaveDataOutValue                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// enum class ESearchCase             SearchCase                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESearchCase UConsoleVariablesAsset::FindSavedDataByCommandString(struct FConsoleVariablesEditorAssetSaveData* OutValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "FindSavedDataByCommandString");

	Params::UConsoleVariablesAsset_FindSavedDataByCommandString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bOnlyIncludeChecked                                              (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UObject* UConsoleVariablesAsset::ExecuteSavedCommands(bool* bOnlyIncludeChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ExecuteSavedCommands");

	Params::UConsoleVariablesAsset_ExecuteSavedCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnlyIncludeChecked != nullptr)
		*bOnlyIncludeChecked = Parms.bOnlyIncludeChecked;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConsoleVariablesAsset*      InAssetToCopy                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class UConsoleVariablesAsset* UConsoleVariablesAsset::CopyFrom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "CopyFrom");

	Params::UConsoleVariablesAsset_CopyFrom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConsoleVariablesEditorAssetSaveDataInData                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FConsoleVariablesEditorAssetSaveData UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "AddOrSetConsoleObjectSavedData");

	Params::UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


