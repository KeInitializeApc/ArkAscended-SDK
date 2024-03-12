#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetTags.AssetTagsSubsystem
// (None)

class UClass* UAssetTagsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTagsSubsystem");

	return Clss;
}


// AssetTagsSubsystem AssetTags.Default__AssetTagsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTagsSubsystem* UAssetTagsSubsystem::GetDefaultObj()
{
	static class UAssetTagsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTagsSubsystem*>(UAssetTagsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AssetPath                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(struct FSoftObjectPath* AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "K2_GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPath != nullptr)
		*AssetPath = std::move(Parms.AssetPath);

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AssetPtr                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData                  AssetData                                                        (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AssetPathName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UAssetTagsSubsystem::GetCollections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollections");

	Params::UAssetTagsSubsystem_GetCollections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// TArray<struct FAssetData>          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetAssetsInCollection");

	Params::UAssetTagsSubsystem_GetAssetsInCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UAssetTagsSubsystem::CollectionExists(class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "CollectionExists");

	Params::UAssetTagsSubsystem_CollectionExists_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}

}


