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
// struct FSoftObjectPath             AssetPath                                                        (BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath, TArray<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "K2_GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AssetPtr                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr, TArray<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params Parms{};

	Parms.AssetPtr = AssetPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData                  AssetData                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssetData UAssetTagsSubsystem::GetCollectionsContainingAssetData(TArray<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AssetPathName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollectionsContainingAsset(class FName AssetPathName, TArray<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAsset_Params Parms{};

	Parms.AssetPathName = AssetPathName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollections(TArray<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollections");

	Params::UAssetTagsSubsystem_GetCollections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// TArray<struct FAssetData>          ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetAssetsInCollection(class FName* Name, TArray<struct FAssetData>* ReturnValue)
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

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::CollectionExists(class FName* Name, bool* ReturnValue)
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

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}

}


