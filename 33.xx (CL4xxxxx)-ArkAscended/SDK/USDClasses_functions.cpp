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
// class UObject*                     Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (ConstParm, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUsdAssetCache2::RemoveAssetReference(class UObject** Asset, class UObject** Referencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAssetReference");

	Params::UUsdAssetCache2_RemoveAssetReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

	if (Referencer != nullptr)
		*Referencer = Parms.Referencer;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.RemoveAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UUsdAssetCache2::RemoveAsset(const class FString& Hash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAsset");

	Params::UUsdAssetCache2_RemoveAsset_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Referencer                                                       (ConstParm, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUsdAssetCache2::RemoveAllAssetReferences(class UObject** Referencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "RemoveAllAssetReferences");

	Params::UUsdAssetCache2_RemoveAllAssetReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Referencer != nullptr)
		*Referencer = Parms.Referencer;

	return Parms.ReturnValue;

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
// class FString                      AssetPath                                                        (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUsdAssetCache2::IsAssetOwnedByCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "IsAssetOwnedByCache");

	Params::UUsdAssetCache2_IsAssetOwnedByCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetNumAssets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UUsdAssetCache2::GetNumAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetNumAssets");

	Params::UUsdAssetCache2_GetNumAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetHashForAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UUsdAssetCache2::GetHashForAsset(class UObject** Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetHashForAsset");

	Params::UUsdAssetCache2_GetHashForAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetCachedAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UUsdAssetCache2::GetCachedAsset(const class FString& Hash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetCachedAsset");

	Params::UUsdAssetCache2_GetCachedAsset_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UObject*> UUsdAssetCache2::GetAllLoadedAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllLoadedAssets");

	Params::UUsdAssetCache2_GetAllLoadedAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> UUsdAssetCache2::GetAllCachedAssetPaths()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllCachedAssetPaths");

	Params::UUsdAssetCache2_GetAllCachedAssetPaths_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.GetAllAssetHashes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> UUsdAssetCache2::GetAllAssetHashes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "GetAllAssetHashes");

	Params::UUsdAssetCache2_GetAllAssetHashes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.CanRemoveAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUsdAssetCache2::CanRemoveAsset(const class FString& Hash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "CanRemoveAsset");

	Params::UUsdAssetCache2_CanRemoveAsset_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDClasses.UsdAssetCache2.CacheAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class UObject*                     Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (ConstParm, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UUsdAssetCache2::CacheAsset(const class FString& Hash, class UObject** Asset, class UObject** Referencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "CacheAsset");

	Params::UUsdAssetCache2_CacheAsset_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

	if (Referencer != nullptr)
		*Referencer = Parms.Referencer;

}


// Function USDClasses.UsdAssetCache2.AddAssetReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     Referencer                                                       (ConstParm, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUsdAssetCache2::AddAssetReference(class UObject** Asset, class UObject** Referencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdAssetCache2", "AddAssetReference");

	Params::UUsdAssetCache2_AddAssetReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

	if (Referencer != nullptr)
		*Referencer = Parms.Referencer;

	return Parms.ReturnValue;

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


