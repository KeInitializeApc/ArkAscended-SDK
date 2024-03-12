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
// class FString                      InVariableCollectionDescription                                  (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UConsoleVariablesAsset::SetVariableCollectionDescription(class FString* InVariableCollectionDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "SetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_SetVariableCollectionDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InVariableCollectionDescription != nullptr)
		*InVariableCollectionDescription = std::move(Parms.InVariableCollectionDescription);

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>Replacement                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class FString                      InCommandString                                                  (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::RemoveConsoleVariable(class FString* InCommandString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "RemoveConsoleVariable");

	Params::UConsoleVariablesAsset_RemoveConsoleVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCommandString != nullptr)
		*InCommandString = std::move(Parms.InCommandString);

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UConsoleVariablesAsset::GetVariableCollectionDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_GetVariableCollectionDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UConsoleVariablesAsset::GetSavedCommandsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsCount");

	Params::UConsoleVariablesAsset_GetSavedCommandsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FString> UConsoleVariablesAsset::GetSavedCommandsAsStringArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsStringArray");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsCommaSeparatedString");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FConsoleVariablesEditorAssetSaveData> UConsoleVariablesAsset::GetSavedCommands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommands");

	Params::UConsoleVariablesAsset_GetSavedCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InCommandString                                                  (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FConsoleVariablesEditorAssetSaveDataOutValue                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// enum class ESearchCase             SearchCase                                                       (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::FindSavedDataByCommandString(class FString* InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, enum class ESearchCase* SearchCase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "FindSavedDataByCommandString");

	Params::UConsoleVariablesAsset_FindSavedDataByCommandString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCommandString != nullptr)
		*InCommandString = std::move(Parms.InCommandString);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	if (SearchCase != nullptr)
		*SearchCase = Parms.SearchCase;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UConsoleVariablesAsset::ExecuteSavedCommands(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ExecuteSavedCommands");

	Params::UConsoleVariablesAsset_ExecuteSavedCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConsoleVariablesAsset*      InAssetToCopy                                                    (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UConsoleVariablesAsset::CopyFrom(class UConsoleVariablesAsset** InAssetToCopy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "CopyFrom");

	Params::UConsoleVariablesAsset_CopyFrom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAssetToCopy != nullptr)
		*InAssetToCopy = Parms.InAssetToCopy;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConsoleVariablesEditorAssetSaveDataInData                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

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


