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
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FSoftObjectPath             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData, const struct FSoftObjectPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::UAssetRegistryHelpers_ToSoftObjectPath_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTagAndValue>        InTagsAndValues                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FARFilter                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::SetFilterTagsAndValues(struct FARFilter* InFilter, TArray<struct FTagAndValue>* InTagsAndValues, const struct FARFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::UAssetRegistryHelpers_SetFilterTagsAndValues_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFilter != nullptr)
		*InFilter = std::move(Parms.InFilter);

	if (InTagsAndValues != nullptr)
		*InTagsAndValues = std::move(Parms.InTagsAndValues);

}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::UAssetRegistryHelpers_IsValid_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::UAssetRegistryHelpers_IsUAsset_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::UAssetRegistryHelpers_IsRedirector_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::UAssetRegistryHelpers_IsAssetLoaded_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        InTagName                                                        (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      OutTagValue                                                      (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, class FName* InTagName, class FString* OutTagValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::UAssetRegistryHelpers_GetTagValue_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTagName != nullptr)
		*InTagName = Parms.InTagName;

	if (OutTagValue != nullptr)
		*OutTagValue = std::move(Parms.OutTagValue);

}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::UAssetRegistryHelpers_GetFullName_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::UAssetRegistryHelpers_GetExportTextName_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::UAssetRegistryHelpers_GetClass_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UAssetRegistryHelpers::GetBlueprintAssets(struct FARFilter* InFilter, TArray<struct FAssetData>* OutAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetBlueprintAssets");

	Params::UAssetRegistryHelpers_GetBlueprintAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFilter != nullptr)
		*InFilter = std::move(Parms.InFilter);

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IAssetRegistry>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetAssetRegistry(TScriptInterface<class IAssetRegistry> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::UAssetRegistryHelpers_GetAssetRegistry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::UAssetRegistryHelpers_GetAsset_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  AssetData                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAssetData UAssetRegistryHelpers::FindAssetNativeClass(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "FindAssetNativeClass");

	Params::UAssetRegistryHelpers_FindAssetNativeClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InAsset                                                          (EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bAllowBlueprintClass                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAssetRegistryHelpers::CreateAssetData(bool bAllowBlueprintClass, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::UAssetRegistryHelpers_CreateAssetData_Params Parms{};

	Parms.bAllowBlueprintClass = bAllowBlueprintClass;
	Parms.ReturnValue = ReturnValue;

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
// class FString                      PackageName                                                      (ExportObject, OutParm, Transient, Config, SubobjectReference)

void IAssetRegistry::WaitForPackage(class FString* PackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "WaitForPackage");

	Params::IAssetRegistry_WaitForPackage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackageName != nullptr)
		*PackageName = std::move(Parms.PackageName);

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
// TArray<struct FAssetData>          AssetDataList                                                    (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FARFilter                   Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)

struct FARFilter IAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList)
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

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSynchronousSearch                                               (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// TArray<class FString>              InPaths                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceRescan                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIgnoreDenyListScanFilters                                       (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

bool IAssetRegistry::ScanPathsSynchronous(TArray<class FString>* InPaths, bool* bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::IAssetRegistry_ScanPathsSynchronous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPaths != nullptr)
		*InPaths = std::move(Parms.InPaths);

	if (bForceRescan != nullptr)
		*bForceRescan = Parms.bForceRescan;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// TArray<class FString>              InFilePaths                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceRescan                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// TArray<struct FAssetData>          AssetDataList                                                    (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FARFilter                   Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)

struct FARFilter IAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList)
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

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PathToPrioritize                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        PackageName                                                      (ExportObject, OutParm, Transient, Config, SubobjectReference)
// struct FAssetRegistryDependencyOptionsReferenceOptions                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                OutReferencers                                                   (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::K2_GetReferencers(class FName* PackageName, struct FAssetRegistryDependencyOptions* ReferenceOptions, TArray<class FName>* OutReferencers, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::IAssetRegistry_K2_GetReferencers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackageName != nullptr)
		*PackageName = Parms.PackageName;

	if (ReferenceOptions != nullptr)
		*ReferenceOptions = std::move(Parms.ReferenceOptions);

	if (OutReferencers != nullptr)
		*OutReferencers = std::move(Parms.OutReferencers);

}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (ExportObject, OutParm, Transient, Config, SubobjectReference)
// struct FAssetRegistryDependencyOptionsDependencyOptions                                                (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                OutDependencies                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::K2_GetDependencies(class FName* PackageName, struct FAssetRegistryDependencyOptions* DependencyOptions, TArray<class FName>* OutDependencies, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::IAssetRegistry_K2_GetDependencies_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackageName != nullptr)
		*PackageName = Parms.PackageName;

	if (DependencyOptions != nullptr)
		*DependencyOptions = std::move(Parms.DependencyOptions);

	if (OutDependencies != nullptr)
		*OutDependencies = std::move(Parms.OutDependencies);

}


// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
// (RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FSoftObjectPath             ObjectPath                                                       (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::K2_GetAssetByObjectPath(struct FSoftObjectPath* ObjectPath, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetAssetByObjectPath");

	Params::IAssetRegistry_K2_GetAssetByObjectPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectPath != nullptr)
		*ObjectPath = std::move(Parms.ObjectPath);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.IsSearchAsync
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::IsSearchAsync(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAsync");

	Params::IAssetRegistry_IsSearchAsync_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::IsSearchAllAssets(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAllAssets");

	Params::IAssetRegistry_IsSearchAllAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::IsLoadingAssets(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::IAssetRegistry_IsLoadingAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bRecursive                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::HasAssets(class FName* PackagePath, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::IAssetRegistry_HasAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackagePath != nullptr)
		*PackagePath = Parms.PackagePath;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      InBasePath                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class FString>              OutPathList                                                      (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bInRecurse                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void IAssetRegistry::GetSubPaths(class FString* InBasePath, TArray<class FString>* OutPathList, bool* bInRecurse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::IAssetRegistry_GetSubPaths_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBasePath != nullptr)
		*InBasePath = std::move(Parms.InBasePath);

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);

	if (bInRecurse != nullptr)
		*bInRecurse = Parms.bInRecurse;

}


// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FTopLevelAssetPath>  ClassNames                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// TSet<struct FTopLevelAssetPath>    ExcludedClassNames                                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TSet<struct FTopLevelAssetPath>    OutDerivedClassNames                                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void IAssetRegistry::GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames, TSet<struct FTopLevelAssetPath>* ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetDerivedClassNames");

	Params::IAssetRegistry_GetDerivedClassNames_Params Parms{};

	Parms.ClassNames = ClassNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExcludedClassNames != nullptr)
		*ExcludedClassNames = Parms.ExcludedClassNames;

	if (OutDerivedClassNames != nullptr)
		*OutDerivedClassNames = Parms.OutDerivedClassNames;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FName>                PackagePaths                                                     (Edit, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPaths(TArray<class FName>* PackagePaths, TArray<struct FAssetData>* OutAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPaths");

	Params::IAssetRegistry_GetAssetsByPaths_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackagePaths != nullptr)
		*PackagePaths = std::move(Parms.PackagePaths);

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPath(class FName* PackagePath, TArray<struct FAssetData>* OutAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::IAssetRegistry_GetAssetsByPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackagePath != nullptr)
		*PackagePath = Parms.PackagePath;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (ExportObject, OutParm, Transient, Config, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bSkipARFilteredAssets                                            (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetsByPackageName(class FName* PackageName, TArray<struct FAssetData>* OutAssetData, bool* bSkipARFilteredAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::IAssetRegistry_GetAssetsByPackageName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PackageName != nullptr)
		*PackageName = Parms.PackageName;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	if (bSkipARFilteredAssets != nullptr)
		*bSkipARFilteredAssets = Parms.bSkipARFilteredAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bSearchSubClasses                                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::GetAssetsByClass(struct FTopLevelAssetPath* ClassPathName, TArray<struct FAssetData>* OutAssetData, bool* bSearchSubClasses, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::IAssetRegistry_GetAssetsByClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClassPathName != nullptr)
		*ClassPathName = std::move(Parms.ClassPathName);

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	if (bSearchSubClasses != nullptr)
		*bSearchSubClasses = Parms.bSearchSubClasses;

}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FARFilter                   Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bSkipARFilteredAssets                                            (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FARFilter IAssetRegistry::GetAssets(TArray<struct FAssetData>* OutAssetData, bool* bSkipARFilteredAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::IAssetRegistry_GetAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	if (bSkipARFilteredAssets != nullptr)
		*bSkipARFilteredAssets = Parms.bSkipARFilteredAssets;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FName                        ObjectPath                                                       (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::GetAssetByObjectPath(class FName* ObjectPath, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::IAssetRegistry_GetAssetByObjectPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectPath != nullptr)
		*ObjectPath = Parms.ObjectPath;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTopLevelAssetPath>  OutAncestorClassNames                                            (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAssetRegistry::GetAncestorClassNames(struct FTopLevelAssetPath* ClassPathName, TArray<struct FTopLevelAssetPath>* OutAncestorClassNames, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAncestorClassNames");

	Params::IAssetRegistry_GetAncestorClassNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClassPathName != nullptr)
		*ClassPathName = std::move(Parms.ClassPathName);

	if (OutAncestorClassNames != nullptr)
		*OutAncestorClassNames = std::move(Parms.OutAncestorClassNames);

}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FString>              OutPathList                                                      (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void IAssetRegistry::GetAllCachedPaths(TArray<class FString>* OutPathList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::IAssetRegistry_GetAllCachedPaths_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);

}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          OutAssetData                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIncludeOnlyOnDiskAssets                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::IAssetRegistry_GetAllAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

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


