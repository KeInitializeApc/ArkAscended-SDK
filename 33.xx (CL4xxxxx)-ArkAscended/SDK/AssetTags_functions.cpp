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
// struct FSoftObjectPath             AssetPath                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(struct FSoftObjectPath* AssetPath, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "K2_GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPath != nullptr)
		*AssetPath = std::move(Parms.AssetPath);

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AssetPtr                                                         (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject** AssetPtr, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPtr != nullptr)
		*AssetPtr = Parms.AssetPtr;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData                  AssetData                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// TArray<class FName>                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssetData UAssetTagsSubsystem::GetCollectionsContainingAssetData(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AssetPathName                                                    (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollectionsContainingAsset(class FName* AssetPathName, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPathName != nullptr)
		*AssetPathName = Parms.AssetPathName;

}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetCollections(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollections");

	Params::UAssetTagsSubsystem_GetCollections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// TArray<struct FAssetData>          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::GetAssetsInCollection(class FName* Name, const TArray<struct FAssetData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetAssetsInCollection");

	Params::UAssetTagsSubsystem_GetAssetsInCollection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAssetTagsSubsystem::CollectionExists(class FName* Name, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "CollectionExists");

	Params::UAssetTagsSubsystem_CollectionExists_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

}

}


