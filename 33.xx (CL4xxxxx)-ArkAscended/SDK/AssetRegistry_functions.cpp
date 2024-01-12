#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetRegistry.AssetRegistryHelpers
// (None)

class UClass* UAssetRegistryHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistryHelpers");

	return Clss;
}


// AssetRegistryHelpers AssetRegistry.Default__AssetRegistryHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetRegistryHelpers* UAssetRegistryHelpers::GetDefaultObj()
{
	static class UAssetRegistryHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetRegistryHelpers*>(UAssetRegistryHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSoftObjectPath             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::UAssetRegistryHelpers_ToSoftObjectPath_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FTagAndValue>        InTagsAndValues                                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FARFilter                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::UAssetRegistryHelpers_SetFilterTagsAndValues_Params Parms{};

	Parms.InFilter = InFilter;
	Parms.InTagsAndValues = InTagsAndValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::UAssetRegistryHelpers_IsValid_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::UAssetRegistryHelpers_IsUAsset_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::UAssetRegistryHelpers_IsRedirector_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::UAssetRegistryHelpers_IsAssetLoaded_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        InTagName                                                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      OutTagValue                                                      (Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, class FName InTagName, const class FString& OutTagValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::UAssetRegistryHelpers_GetTagValue_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.InTagName = InTagName;
	Parms.OutTagValue = OutTagValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::UAssetRegistryHelpers_GetFullName_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::UAssetRegistryHelpers_GetExportTextName_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::UAssetRegistryHelpers_GetClass_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAssetRegistryHelpers::GetBlueprintAssets(const struct FARFilter& InFilter, const TArray<struct FAssetData>& OutAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetBlueprintAssets");

	Params::UAssetRegistryHelpers_GetBlueprintAssets_Params Parms{};

	Parms.InFilter = InFilter;
	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IAssetRegistry>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TScriptInterface<class IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::UAssetRegistryHelpers_GetAssetRegistry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::UAssetRegistryHelpers_GetAsset_Params Parms{};

	Parms.InAssetData = InAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  AssetData                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAssetRegistryHelpers::FindAssetNativeClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "FindAssetNativeClass");

	Params::UAssetRegistryHelpers_FindAssetNativeClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InAsset                                                          (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAllowBlueprintClass                                             (ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(bool bAllowBlueprintClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::UAssetRegistryHelpers_CreateAssetData_Params Parms{};

	Parms.bAllowBlueprintClass = bAllowBlueprintClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AssetRegistry.AssetRegistry
// (None)

class UClass* IAssetRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistry");

	return Clss;
}


// AssetRegistry AssetRegistry.Default__AssetRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class IAssetRegistry* IAssetRegistry::GetDefaultObj()
{
	static class IAssetRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<IAssetRegistry*>(IAssetRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetRegistry.AssetRegistry.WaitForPackage
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PackageName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)

void IAssetRegistry::WaitForPackage(const class FString& PackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "WaitForPackage");

	Params::IAssetRegistry_WaitForPackage_Params Parms{};

	Parms.PackageName = PackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.WaitForCompletion
// (Native, Public, BlueprintCallable)
// Parameters:

void IAssetRegistry::WaitForCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "WaitForCompletion");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FARFilter                   Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)

void IAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, struct FARFilter* Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");

	Params::IAssetRegistry_UseFilterToExcludeAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetDataList != nullptr)
		*AssetDataList = std::move(Parms.AssetDataList);

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSynchronousSearch                                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::SearchAllAssets(bool* bSynchronousSearch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "SearchAllAssets");

	Params::IAssetRegistry_SearchAllAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSynchronousSearch != nullptr)
		*bSynchronousSearch = Parms.bSynchronousSearch;

}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InPaths                                                          (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceRescan                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIgnoreDenyListScanFilters                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void IAssetRegistry::ScanPathsSynchronous(TArray<class FString>* InPaths, bool* bForceRescan, bool bIgnoreDenyListScanFilters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::IAssetRegistry_ScanPathsSynchronous_Params Parms{};

	Parms.bIgnoreDenyListScanFilters = bIgnoreDenyListScanFilters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPaths != nullptr)
		*InPaths = std::move(Parms.InPaths);

	if (bForceRescan != nullptr)
		*bForceRescan = Parms.bForceRescan;

}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::ScanModifiedAssetFiles(TArray<class FString>* InFilePaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");

	Params::IAssetRegistry_ScanModifiedAssetFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFilePaths != nullptr)
		*InFilePaths = std::move(Parms.InFilePaths);

}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceRescan                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::ScanFilesSynchronous(TArray<class FString>* InFilePaths, bool* bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanFilesSynchronous");

	Params::IAssetRegistry_ScanFilesSynchronous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFilePaths != nullptr)
		*InFilePaths = std::move(Parms.InFilePaths);

	if (bForceRescan != nullptr)
		*bForceRescan = Parms.bForceRescan;

}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FARFilter                   Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)

void IAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, struct FARFilter* Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "RunAssetsThroughFilter");

	Params::IAssetRegistry_RunAssetsThroughFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetDataList != nullptr)
		*AssetDataList = std::move(Parms.AssetDataList);

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PathToPrioritize                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::PrioritizeSearchPath(class FString* PathToPrioritize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "PrioritizeSearchPath");

	Params::IAssetRegistry_PrioritizeSearchPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathToPrioritize != nullptr)
		*PathToPrioritize = std::move(Parms.PathToPrioritize);

}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// struct FAssetRegistryDependencyOptionsReferenceOptions                                                 (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FName>                OutReferencers                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::K2_GetReferencers(class FName PackageName, struct FAssetRegistryDependencyOptions* ReferenceOptions, TArray<class FName>* OutReferencers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::IAssetRegistry_K2_GetReferencers_Params Parms{};

	Parms.PackageName = PackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReferenceOptions != nullptr)
		*ReferenceOptions = std::move(Parms.ReferenceOptions);

	if (OutReferencers != nullptr)
		*OutReferencers = std::move(Parms.OutReferencers);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// struct FAssetRegistryDependencyOptionsDependencyOptions                                                (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FName>                OutDependencies                                                  (ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::K2_GetDependencies(class FName PackageName, struct FAssetRegistryDependencyOptions* DependencyOptions, TArray<class FName>* OutDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::IAssetRegistry_K2_GetDependencies_Params Parms{};

	Parms.PackageName = PackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DependencyOptions != nullptr)
		*DependencyOptions = std::move(Parms.DependencyOptions);

	if (OutDependencies != nullptr)
		*OutDependencies = std::move(Parms.OutDependencies);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
// (RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FSoftObjectPath             ObjectPath                                                       (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssetData IAssetRegistry::K2_GetAssetByObjectPath(bool* bIncludeOnlyOnDiskAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetAssetByObjectPath");

	Params::IAssetRegistry_K2_GetAssetByObjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.IsSearchAsync
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::IsSearchAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAsync");

	Params::IAssetRegistry_IsSearchAsync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::IsSearchAllAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAllAssets");

	Params::IAssetRegistry_IsSearchAllAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::IsLoadingAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::IAssetRegistry_IsLoadingAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bRecursive                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::HasAssets(bool bRecursive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::IAssetRegistry_HasAssets_Params Parms{};

	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      InBasePath                                                       (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FString>              OutPathList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bInRecurse                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::GetSubPaths(class FString* InBasePath, const TArray<class FString>& OutPathList, bool* bInRecurse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::IAssetRegistry_GetSubPaths_Params Parms{};

	Parms.OutPathList = OutPathList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBasePath != nullptr)
		*InBasePath = std::move(Parms.InBasePath);

	if (bInRecurse != nullptr)
		*bInRecurse = Parms.bInRecurse;

}


// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FTopLevelAssetPath>  ClassNames                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TSet<struct FTopLevelAssetPath>    ExcludedClassNames                                               (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TSet<struct FTopLevelAssetPath>    OutDerivedClassNames                                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTopLevelAssetPath> IAssetRegistry::GetDerivedClassNames(TSet<struct FTopLevelAssetPath>* ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetDerivedClassNames");

	Params::IAssetRegistry_GetDerivedClassNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExcludedClassNames != nullptr)
		*ExcludedClassNames = Parms.ExcludedClassNames;

	if (OutDerivedClassNames != nullptr)
		*OutDerivedClassNames = Parms.OutDerivedClassNames;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FName>                PackagePaths                                                     (ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPaths(const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool* bIncludeOnlyOnDiskAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPaths");

	Params::IAssetRegistry_GetAssetsByPaths_Params Parms{};

	Parms.OutAssetData = OutAssetData;
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPath(const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool* bIncludeOnlyOnDiskAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::IAssetRegistry_GetAssetsByPath_Params Parms{};

	Parms.OutAssetData = OutAssetData;
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSkipARFilteredAssets                                            (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPackageName(class FName PackageName, const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets, bool* bSkipARFilteredAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::IAssetRegistry_GetAssetsByPackageName_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	if (bSkipARFilteredAssets != nullptr)
		*bSkipARFilteredAssets = Parms.bSkipARFilteredAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bSearchSubClasses                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByClass(struct FTopLevelAssetPath* ClassPathName, const TArray<struct FAssetData>& OutAssetData, bool* bSearchSubClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::IAssetRegistry_GetAssetsByClass_Params Parms{};

	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClassPathName != nullptr)
		*ClassPathName = std::move(Parms.ClassPathName);

	if (bSearchSubClasses != nullptr)
		*bSearchSubClasses = Parms.bSearchSubClasses;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FARFilter                   Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bSkipARFilteredAssets                                            (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssets(struct FARFilter* Filter, const TArray<struct FAssetData>& OutAssetData, bool* bSkipARFilteredAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::IAssetRegistry_GetAssets_Params Parms{};

	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	if (bSkipARFilteredAssets != nullptr)
		*bSkipARFilteredAssets = Parms.bSkipARFilteredAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FName                        ObjectPath                                                       (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssetData IAssetRegistry::GetAssetByObjectPath(bool* bIncludeOnlyOnDiskAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::IAssetRegistry_GetAssetByObjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FTopLevelAssetPath>  OutAncestorClassNames                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAncestorClassNames(struct FTopLevelAssetPath* ClassPathName, const TArray<struct FTopLevelAssetPath>& OutAncestorClassNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAncestorClassNames");

	Params::IAssetRegistry_GetAncestorClassNames_Params Parms{};

	Parms.OutAncestorClassNames = OutAncestorClassNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClassPathName != nullptr)
		*ClassPathName = std::move(Parms.ClassPathName);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FString>              OutPathList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAssetRegistry::GetAllCachedPaths(const TArray<class FString>& OutPathList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::IAssetRegistry_GetAllCachedPaths_Params Parms{};

	Parms.OutPathList = OutPathList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          OutAssetData                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IAssetRegistry::GetAllAssets(const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::IAssetRegistry_GetAllAssets_Params Parms{};

	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeOnlyOnDiskAssets != nullptr)
		*bIncludeOnlyOnDiskAssets = Parms.bIncludeOnlyOnDiskAssets;

	return Parms.ReturnValue;

}


// Class AssetRegistry.AssetRegistryImpl
// (None)

class UClass* UAssetRegistryImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistryImpl");

	return Clss;
}


// AssetRegistryImpl AssetRegistry.Default__AssetRegistryImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetRegistryImpl* UAssetRegistryImpl::GetDefaultObj()
{
	static class UAssetRegistryImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetRegistryImpl*>(UAssetRegistryImpl::StaticClass()->DefaultObject);

	return Default;
}

}


