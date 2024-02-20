#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HairStrandsCore.OptimusGroomDataInterface
// (None)

class UClass* UOptimusGroomDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomDataInterface");

	return Clss;
}


// OptimusGroomDataInterface HairStrandsCore.Default__OptimusGroomDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomDataInterface* UOptimusGroomDataInterface::GetDefaultObj()
{
	static class UOptimusGroomDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomDataInterface*>(UOptimusGroomDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomDataProvider
// (None)

class UClass* UOptimusGroomDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomDataProvider");

	return Clss;
}


// OptimusGroomDataProvider HairStrandsCore.Default__OptimusGroomDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomDataProvider* UOptimusGroomDataProvider::GetDefaultObj()
{
	static class UOptimusGroomDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomDataProvider*>(UOptimusGroomDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomExecDataInterface
// (None)

class UClass* UOptimusGroomExecDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomExecDataInterface");

	return Clss;
}


// OptimusGroomExecDataInterface HairStrandsCore.Default__OptimusGroomExecDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomExecDataInterface* UOptimusGroomExecDataInterface::GetDefaultObj()
{
	static class UOptimusGroomExecDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomExecDataInterface*>(UOptimusGroomExecDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomExecDataProvider
// (None)

class UClass* UOptimusGroomExecDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomExecDataProvider");

	return Clss;
}


// OptimusGroomExecDataProvider HairStrandsCore.Default__OptimusGroomExecDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomExecDataProvider* UOptimusGroomExecDataProvider::GetDefaultObj()
{
	static class UOptimusGroomExecDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomExecDataProvider*>(UOptimusGroomExecDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomWriteDataInterface
// (None)

class UClass* UOptimusGroomWriteDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomWriteDataInterface");

	return Clss;
}


// OptimusGroomWriteDataInterface HairStrandsCore.Default__OptimusGroomWriteDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomWriteDataInterface* UOptimusGroomWriteDataInterface::GetDefaultObj()
{
	static class UOptimusGroomWriteDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomWriteDataInterface*>(UOptimusGroomWriteDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomWriteDataProvider
// (None)

class UClass* UOptimusGroomWriteDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomWriteDataProvider");

	return Clss;
}


// OptimusGroomWriteDataProvider HairStrandsCore.Default__OptimusGroomWriteDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomWriteDataProvider* UOptimusGroomWriteDataProvider::GetDefaultObj()
{
	static class UOptimusGroomWriteDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomWriteDataProvider*>(UOptimusGroomWriteDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomComponentSource
// (None)

class UClass* UOptimusGroomComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomComponentSource");

	return Clss;
}


// OptimusGroomComponentSource HairStrandsCore.Default__OptimusGroomComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomComponentSource* UOptimusGroomComponentSource::GetDefaultObj()
{
	static class UOptimusGroomComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomComponentSource*>(UOptimusGroomComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportOptions
// (None)

class UClass* UGroomCacheImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportOptions");

	return Clss;
}


// GroomCacheImportOptions HairStrandsCore.Default__GroomCacheImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportOptions* UGroomCacheImportOptions::GetDefaultObj()
{
	static class UGroomCacheImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportOptions*>(UGroomCacheImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportData
// (None)

class UClass* UGroomCacheImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportData");

	return Clss;
}


// GroomCacheImportData HairStrandsCore.Default__GroomCacheImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportData* UGroomCacheImportData::GetDefaultObj()
{
	static class UGroomCacheImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportData*>(UGroomCacheImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomActor
// (Actor)

class UClass* AGroomActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomActor");

	return Clss;
}


// GroomActor HairStrandsCore.Default__GroomActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGroomActor* AGroomActor::GetDefaultObj()
{
	static class AGroomActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGroomActor*>(AGroomActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAsset
// (None)

class UClass* UGroomAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAsset");

	return Clss;
}


// GroomAsset HairStrandsCore.Default__GroomAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAsset* UGroomAsset::GetDefaultObj()
{
	static class UGroomAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAsset*>(UGroomAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.HairCardGenerationSettings
// (None)

class UClass* UHairCardGenerationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HairCardGenerationSettings");

	return Clss;
}


// HairCardGenerationSettings HairStrandsCore.Default__HairCardGenerationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHairCardGenerationSettings* UHairCardGenerationSettings::GetDefaultObj()
{
	static class UHairCardGenerationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHairCardGenerationSettings*>(UHairCardGenerationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAssetImportData
// (None)

class UClass* UGroomAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAssetImportData");

	return Clss;
}


// GroomAssetImportData HairStrandsCore.Default__GroomAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAssetImportData* UGroomAssetImportData::GetDefaultObj()
{
	static class UGroomAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAssetImportData*>(UGroomAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBindingAsset
// (None)

class UClass* UGroomBindingAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBindingAsset");

	return Clss;
}


// GroomBindingAsset HairStrandsCore.Default__GroomBindingAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBindingAsset* UGroomBindingAsset::GetDefaultObj()
{
	static class UGroomBindingAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBindingAsset*>(UGroomBindingAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBindingAssetList
// (None)

class UClass* UGroomBindingAssetList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBindingAssetList");

	return Clss;
}


// GroomBindingAssetList HairStrandsCore.Default__GroomBindingAssetList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBindingAssetList* UGroomBindingAssetList::GetDefaultObj()
{
	static class UGroomBindingAssetList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBindingAssetList*>(UGroomBindingAssetList::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBlueprintLibrary
// (None)

class UClass* UGroomBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBlueprintLibrary");

	return Clss;
}


// GroomBlueprintLibrary HairStrandsCore.Default__GroomBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBlueprintLibrary* UGroomBlueprintLibrary::GetDefaultObj()
{
	static class UGroomBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBlueprintLibrary*>(UGroomBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class UGroomAsset*                 InGroomAsset                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class USkeletalMesh*               InSkeletalMesh                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InNumInterpolationPoints                                         (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              InMatchingSection                                                (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGroomBindingAsset*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USkeletalMesh* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection, class UGroomBindingAsset* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params Parms{};

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InGroomAsset = InGroomAsset;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 InGroomAsset                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class USkeletalMesh*               InSkeletalMesh                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InNumInterpolationPoints                                         (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              InMatchingSection                                                (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGroomBindingAsset*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USkeletalMesh* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection, class UGroomBindingAsset* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params Parms{};

	Parms.InGroomAsset = InGroomAsset;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DesiredPackagePath                                               (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGroomAsset*                 GroomAsset                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UGeometryCache*              GeometryCache                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              NumInterpolationPoints                                           (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              MatchingSection                                                  (Edit, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGroomBindingAsset*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset** GroomAsset, class UGeometryCache** GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection, class UGroomBindingAsset* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params Parms{};

	Parms.DesiredPackagePath = DesiredPackagePath;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GroomAsset != nullptr)
		*GroomAsset = Parms.GroomAsset;

	if (GeometryCache != nullptr)
		*GeometryCache = Parms.GeometryCache;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 GroomAsset                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UGeometryCache*              GeometryCache                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              NumInterpolationPoints                                           (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              MatchingSection                                                  (Edit, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGroomBindingAsset*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset** GroomAsset, class UGeometryCache** GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection, class UGroomBindingAsset* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params Parms{};

	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GroomAsset != nullptr)
		*GroomAsset = Parms.GroomAsset;

	if (GeometryCache != nullptr)
		*GeometryCache = Parms.GeometryCache;

}


// Class HairStrandsCore.GroomCache
// (None)

class UClass* UGroomCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCache");

	return Clss;
}


// GroomCache HairStrandsCore.Default__GroomCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCache* UGroomCache::GetDefaultObj()
{
	static class UGroomCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCache*>(UGroomCache::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGroomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomComponent");

	return Clss;
}


// GroomComponent HairStrandsCore.Default__GroomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomComponent* UGroomComponent::GetDefaultObj()
{
	static class UGroomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomComponent*>(UGroomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicsAsset*               InPhysicsAsset                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UGroomComponent::SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetPhysicsAsset");

	Params::UGroomComponent_SetPhysicsAsset_Params Parms{};

	Parms.InPhysicsAsset = InPhysicsAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetMeshDeformer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshDeformer*               InMeshDeformer                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UGroomComponent::SetMeshDeformer(class UMeshDeformer* InMeshDeformer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetMeshDeformer");

	Params::UGroomComponent_SetMeshDeformer_Params Parms{};

	Parms.InMeshDeformer = InMeshDeformer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UGroomComponent::SetHairLengthScaleEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetHairLengthScaleEnable");

	Params::UGroomComponent_SetHairLengthScaleEnable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

void UGroomComponent::SetHairLengthScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetHairLengthScale");

	Params::UGroomComponent_SetHairLengthScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function HairStrandsCore.GroomComponent.SetGroomAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetGroomAsset");

	Params::UGroomComponent_SetGroomAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetEnableSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableSimulation                                              (ConstParm, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UGroomComponent::SetEnableSimulation(bool bInEnableSimulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetEnableSimulation");

	Params::UGroomComponent_SetEnableSimulation_Params Parms{};

	Parms.bInEnableSimulation = bInEnableSimulation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomBindingAsset*          InBinding                                                        (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UGroomBindingAsset* UGroomComponent::SetBindingAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetBindingAsset");

	Params::UGroomComponent_SetBindingAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.ResetSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "ResetSimulation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.ResetCollisionComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetCollisionComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "ResetCollisionComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UNiagaraComponent*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGroomComponent::GetNiagaraComponent(class UNiagaraComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "GetNiagaraComponent");

	Params::UGroomComponent_GetNiagaraComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGroomComponent::GetIsHairLengthScaleEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "GetIsHairLengthScaleEnabled");

	Params::UGroomComponent_GetIsHairLengthScaleEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.AddCollisionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class USkeletalMeshComponent* UGroomComponent::AddCollisionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "AddCollisionComponent");

	Params::UGroomComponent_AddCollisionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HairStrandsCore.GroomCreateBindingOptions
// (None)

class UClass* UGroomCreateBindingOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateBindingOptions");

	return Clss;
}


// GroomCreateBindingOptions HairStrandsCore.Default__GroomCreateBindingOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateBindingOptions* UGroomCreateBindingOptions::GetDefaultObj()
{
	static class UGroomCreateBindingOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateBindingOptions*>(UGroomCreateBindingOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// (None)

class UClass* UGroomCreateFollicleMaskOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateFollicleMaskOptions");

	return Clss;
}


// GroomCreateFollicleMaskOptions HairStrandsCore.Default__GroomCreateFollicleMaskOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateFollicleMaskOptions* UGroomCreateFollicleMaskOptions::GetDefaultObj()
{
	static class UGroomCreateFollicleMaskOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateFollicleMaskOptions*>(UGroomCreateFollicleMaskOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// (None)

class UClass* UGroomCreateStrandsTexturesOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateStrandsTexturesOptions");

	return Clss;
}


// GroomCreateStrandsTexturesOptions HairStrandsCore.Default__GroomCreateStrandsTexturesOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateStrandsTexturesOptions* UGroomCreateStrandsTexturesOptions::GetDefaultObj()
{
	static class UGroomCreateStrandsTexturesOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateStrandsTexturesOptions*>(UGroomCreateStrandsTexturesOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomImportOptions
// (None)

class UClass* UGroomImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomImportOptions");

	return Clss;
}


// GroomImportOptions HairStrandsCore.Default__GroomImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomImportOptions* UGroomImportOptions::GetDefaultObj()
{
	static class UGroomImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomImportOptions*>(UGroomImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomHairGroupsPreview
// (None)

class UClass* UGroomHairGroupsPreview::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomHairGroupsPreview");

	return Clss;
}


// GroomHairGroupsPreview HairStrandsCore.Default__GroomHairGroupsPreview
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomHairGroupsPreview* UGroomHairGroupsPreview::GetDefaultObj()
{
	static class UGroomHairGroupsPreview* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomHairGroupsPreview*>(UGroomHairGroupsPreview::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomPluginSettings
// (None)

class UClass* UGroomPluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomPluginSettings");

	return Clss;
}


// GroomPluginSettings HairStrandsCore.Default__GroomPluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomPluginSettings* UGroomPluginSettings::GetDefaultObj()
{
	static class UGroomPluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomPluginSettings*>(UGroomPluginSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheSection
// (None)

class UClass* UMovieSceneGroomCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheSection");

	return Clss;
}


// MovieSceneGroomCacheSection HairStrandsCore.Default__MovieSceneGroomCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheSection* UMovieSceneGroomCacheSection::GetDefaultObj()
{
	static class UMovieSceneGroomCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheSection*>(UMovieSceneGroomCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheTrack
// (None)

class UClass* UMovieSceneGroomCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheTrack");

	return Clss;
}


// MovieSceneGroomCacheTrack HairStrandsCore.Default__MovieSceneGroomCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheTrack* UMovieSceneGroomCacheTrack::GetDefaultObj()
{
	static class UMovieSceneGroomCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheTrack*>(UMovieSceneGroomCacheTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// (None)

class UClass* UNiagaraDataInterfaceHairStrands::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceHairStrands");

	return Clss;
}


// NiagaraDataInterfaceHairStrands HairStrandsCore.Default__NiagaraDataInterfaceHairStrands
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceHairStrands* UNiagaraDataInterfaceHairStrands::GetDefaultObj()
{
	static class UNiagaraDataInterfaceHairStrands* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceHairStrands*>(UNiagaraDataInterfaceHairStrands::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// (None)

class UClass* UNiagaraDataInterfaceVelocityGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVelocityGrid");

	return Clss;
}


// NiagaraDataInterfaceVelocityGrid HairStrandsCore.Default__NiagaraDataInterfaceVelocityGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVelocityGrid* UNiagaraDataInterfaceVelocityGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVelocityGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVelocityGrid*>(UNiagaraDataInterfaceVelocityGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// (None)

class UClass* UNiagaraDataInterfacePressureGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePressureGrid");

	return Clss;
}


// NiagaraDataInterfacePressureGrid HairStrandsCore.Default__NiagaraDataInterfacePressureGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePressureGrid* UNiagaraDataInterfacePressureGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfacePressureGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePressureGrid*>(UNiagaraDataInterfacePressureGrid::StaticClass()->DefaultObject);

	return Default;
}

}


