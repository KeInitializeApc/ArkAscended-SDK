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
// class FString                      InVariableCollectionDescription                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

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
// TArray<struct FConsoleVariablesEditorAssetSaveData>Replacement                                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)

void UConsoleVariablesAsset::ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData>* Replacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ReplaceSavedCommands");

	Params::UConsoleVariablesAsset_ReplaceSavedCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Replacement != nullptr)
		*Replacement = std::move(Parms.Replacement);

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InCommandString                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::RemoveConsoleVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "RemoveConsoleVariable");

	Params::UConsoleVariablesAsset_RemoveConsoleVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               bOnlyIncludeChecked                                              (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> UConsoleVariablesAsset::GetSavedCommandsAsStringArray(bool* bOnlyIncludeChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsStringArray");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnlyIncludeChecked != nullptr)
		*bOnlyIncludeChecked = Parms.bOnlyIncludeChecked;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(bool* bOnlyIncludeChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsCommaSeparatedString");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnlyIncludeChecked != nullptr)
		*bOnlyIncludeChecked = Parms.bOnlyIncludeChecked;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      InCommandString                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FConsoleVariablesEditorAssetSaveDataOutValue                                                         (EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESearchCase             SearchCase                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UConsoleVariablesAsset::FindSavedDataByCommandString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "FindSavedDataByCommandString");

	Params::UConsoleVariablesAsset_FindSavedDataByCommandString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bOnlyIncludeChecked                                              (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class UConsoleVariablesAsset*      InAssetToCopy                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

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
// struct FConsoleVariablesEditorAssetSaveDataInData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

void UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData(struct FConsoleVariablesEditorAssetSaveData* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "AddOrSetConsoleObjectSavedData");

	Params::UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

}

}


