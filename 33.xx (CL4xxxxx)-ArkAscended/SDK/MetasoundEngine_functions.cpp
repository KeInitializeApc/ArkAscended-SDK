#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetasoundEngine.MetasoundGeneratorHandle
// (None)

class UClass* UMetasoundGeneratorHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundGeneratorHandle");

	return Clss;
}


// MetasoundGeneratorHandle MetasoundEngine.Default__MetasoundGeneratorHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::GetDefaultObj()
{
	static class UMetasoundGeneratorHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundGeneratorHandle*>(UMetasoundGeneratorHandle::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             OnComponent                                                      (Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UMetasoundGeneratorHandle*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent, class UMetasoundGeneratorHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "CreateMetaSoundGeneratorHandle");

	Params::UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params Parms{};

	Parms.OnComponent = OnComponent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     Pack                                                             (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMetasoundGeneratorHandle::ApplyParameterPack(class UMetasoundParameterPack* Pack, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "ApplyParameterPack");

	Params::UMetasoundGeneratorHandle_ApplyParameterPack_Params Parms{};

	Parms.Pack = Pack;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MetasoundEngine.MetaSoundSettings
// (None)

class UClass* UMetaSoundSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundSettings");

	return Clss;
}


// MetaSoundSettings MetasoundEngine.Default__MetaSoundSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundSettings* UMetaSoundSettings::GetDefaultObj()
{
	static class UMetaSoundSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundSettings*>(UMetaSoundSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetasoundEditorGraphBase
// (None)

class UClass* UMetasoundEditorGraphBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundEditorGraphBase");

	return Clss;
}


// MetasoundEditorGraphBase MetasoundEngine.Default__MetasoundEditorGraphBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundEditorGraphBase* UMetasoundEditorGraphBase::GetDefaultObj()
{
	static class UMetasoundEditorGraphBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundEditorGraphBase*>(UMetasoundEditorGraphBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetaSoundPatch
// (None)

class UClass* UMetaSoundPatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundPatch");

	return Clss;
}


// MetaSoundPatch MetasoundEngine.Default__MetaSoundPatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundPatch* UMetaSoundPatch::GetDefaultObj()
{
	static class UMetaSoundPatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundPatch*>(UMetaSoundPatch::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetaSoundAssetSubsystem
// (None)

class UClass* UMetaSoundAssetSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundAssetSubsystem");

	return Clss;
}


// MetaSoundAssetSubsystem MetasoundEngine.Default__MetaSoundAssetSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundAssetSubsystem* UMetaSoundAssetSubsystem::GetDefaultObj()
{
	static class UMetaSoundAssetSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundAssetSubsystem*>(UMetaSoundAssetSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory>Directories                                                      (Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>* Directories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "UnregisterAssetClassesInDirectories");

	Params::UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Directories != nullptr)
		*Directories = std::move(Parms.Directories);

}


// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory>Directories                                                      (Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>* Directories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "RegisterAssetClassesInDirectories");

	Params::UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Directories != nullptr)
		*Directories = std::move(Parms.Directories);

}


// Class MetasoundEngine.MetaSoundSource
// (None)

class UClass* UMetaSoundSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundSource");

	return Clss;
}


// MetaSoundSource MetasoundEngine.Default__MetaSoundSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundSource* UMetaSoundSource::GetDefaultObj()
{
	static class UMetaSoundSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundSource*>(UMetaSoundSource::StaticClass()->DefaultObject);

	return Default;
}

}


