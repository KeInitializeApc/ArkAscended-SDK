#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class USDClasses.UsdAssetCache
// (None)

class UClass* UUsdAssetCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdAssetCache");

	return Clss;
}


// UsdAssetCache USDClasses.Default__UsdAssetCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdAssetCache* UUsdAssetCache::GetDefaultObj()
{
	static class UUsdAssetCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdAssetCache*>(UUsdAssetCache::StaticClass()->DefaultObject);

	return Default;
}


// Class USDClasses.UsdAssetCache2
// (None)

class UClass* UUsdAssetCache2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdAssetCache2");

	return Clss;
}


// UsdAssetCache2 USDClasses.Default__UsdAssetCache2
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdAssetCache2* UUsdAssetCache2::GetDefaultObj()
{
	static class UUsdAssetCache2* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdAssetCache2*>(UUsdAssetCache2::StaticClass()->DefaultObject);

	return Default;
}


// Function USDClasses.UsdAssetCache2.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUsdAssetCache2::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.RemoveAssetReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::RemoveAssetReference(class UObject* Asset, class UObject* Referencer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAssetReference");

	Params::UUsdAssetCache2_RemoveAssetReference_Params Parms{};

	Parms.Asset = Asset;
	Parms.Referencer = Referencer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.RemoveAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UUsdAssetCache2::RemoveAsset(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAsset");

	Params::UUsdAssetCache2_RemoveAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Referencer                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::RemoveAllAssetReferences(class UObject* Referencer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAllAssetReferences");

	Params::UUsdAssetCache2_RemoveAllAssetReferences_Params Parms{};

	Parms.Referencer = Referencer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.RefreshStorage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUsdAssetCache2::RefreshStorage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RefreshStorage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AssetPath                                                        (BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::IsAssetOwnedByCache(class FString* AssetPath, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "IsAssetOwnedByCache");

	Params::UUsdAssetCache2_IsAssetOwnedByCache_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPath != nullptr)
		*AssetPath = std::move(Parms.AssetPath);

}


// Function USDClasses.UsdAssetCache2.GetNumAssets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::GetNumAssets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetNumAssets");

	Params::UUsdAssetCache2_GetNumAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.GetHashForAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::GetHashForAsset(class UObject* Asset, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetHashForAsset");

	Params::UUsdAssetCache2_GetHashForAsset_Params Parms{};

	Parms.Asset = Asset;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.GetCachedAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UUsdAssetCache2::GetCachedAsset(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetCachedAsset");

	Params::UUsdAssetCache2_GetCachedAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::GetAllLoadedAssets(const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllLoadedAssets");

	Params::UUsdAssetCache2_GetAllLoadedAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::GetAllCachedAssetPaths(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllCachedAssetPaths");

	Params::UUsdAssetCache2_GetAllCachedAssetPaths_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.GetAllAssetHashes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::GetAllAssetHashes(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllAssetHashes");

	Params::UUsdAssetCache2_GetAllAssetHashes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDClasses.UsdAssetCache2.CanRemoveAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UUsdAssetCache2::CanRemoveAsset(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "CanRemoveAsset");

	Params::UUsdAssetCache2_CanRemoveAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.CacheAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class FString UUsdAssetCache2::CacheAsset(class UObject* Asset, class UObject* Referencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "CacheAsset");

	Params::UUsdAssetCache2_CacheAsset_Params Parms{};

	Parms.Asset = Asset;
	Parms.Referencer = Referencer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.AddAssetReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUsdAssetCache2::AddAssetReference(class UObject* Asset, class UObject* Referencer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "AddAssetReference");

	Params::UUsdAssetCache2_AddAssetReference_Params Parms{};

	Parms.Asset = Asset;
	Parms.Referencer = Referencer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class USDClasses.UsdAssetImportData
// (None)

class UClass* UUsdAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdAssetImportData");

	return Clss;
}


// UsdAssetImportData USDClasses.Default__UsdAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdAssetImportData* UUsdAssetImportData::GetDefaultObj()
{
	static class UUsdAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdAssetImportData*>(UUsdAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class USDClasses.UsdAnimSequenceAssetImportData
// (None)

class UClass* UUsdAnimSequenceAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdAnimSequenceAssetImportData");

	return Clss;
}


// UsdAnimSequenceAssetImportData USDClasses.Default__UsdAnimSequenceAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdAnimSequenceAssetImportData* UUsdAnimSequenceAssetImportData::GetDefaultObj()
{
	static class UUsdAnimSequenceAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdAnimSequenceAssetImportData*>(UUsdAnimSequenceAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class USDClasses.UsdMeshAssetImportData
// (None)

class UClass* UUsdMeshAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdMeshAssetImportData");

	return Clss;
}


// UsdMeshAssetImportData USDClasses.Default__UsdMeshAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdMeshAssetImportData* UUsdMeshAssetImportData::GetDefaultObj()
{
	static class UUsdMeshAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdMeshAssetImportData*>(UUsdMeshAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class USDClasses.UsdProjectSettings
// (None)

class UClass* UUsdProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdProjectSettings");

	return Clss;
}


// UsdProjectSettings USDClasses.Default__UsdProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdProjectSettings* UUsdProjectSettings::GetDefaultObj()
{
	static class UUsdProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdProjectSettings*>(UUsdProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class USDClasses.UsdReferenceOptions
// (None)

class UClass* UUsdReferenceOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdReferenceOptions");

	return Clss;
}


// UsdReferenceOptions USDClasses.Default__UsdReferenceOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdReferenceOptions* UUsdReferenceOptions::GetDefaultObj()
{
	static class UUsdReferenceOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdReferenceOptions*>(UUsdReferenceOptions::StaticClass()->DefaultObject);

	return Default;
}

}


