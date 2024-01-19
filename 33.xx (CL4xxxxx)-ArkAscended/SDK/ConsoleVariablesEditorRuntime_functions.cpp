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
// class FString                      InVariableCollectionDescription                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)

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
// TArray<struct FConsoleVariablesEditorAssetSaveData>Replacement                                                      (Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

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
// class FString                      InCommandString                                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UConsoleVariablesAsset::RemoveConsoleVariable(class FString* InCommandString, bool ReturnValue)
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

	if (InCommandString != nullptr)
		*InCommandString = std::move(Parms.InCommandString);

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::GetSavedCommandsAsStringArray(const TArray<class FString>& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(const class FString& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      InCommandString                                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FConsoleVariablesEditorAssetSaveDataOutValue                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESearchCase             SearchCase                                                       (Edit, BlueprintVisible, ExportObject, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FConsoleVariablesEditorAssetSaveData UConsoleVariablesAsset::FindSavedDataByCommandString(class FString* InCommandString, enum class ESearchCase* SearchCase, bool ReturnValue)
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

	if (InCommandString != nullptr)
		*InCommandString = std::move(Parms.InCommandString);

	if (SearchCase != nullptr)
		*SearchCase = Parms.SearchCase;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bOnlyIncludeChecked                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UConsoleVariablesAsset::ExecuteSavedCommands(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ExecuteSavedCommands");

	Params::UConsoleVariablesAsset_ExecuteSavedCommands_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConsoleVariablesAsset*      InAssetToCopy                                                    (Edit, BlueprintVisible, Net, OutParm, EditConst, InstancedReference, SubobjectReference)

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
// struct FConsoleVariablesEditorAssetSaveDataInData                                                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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


