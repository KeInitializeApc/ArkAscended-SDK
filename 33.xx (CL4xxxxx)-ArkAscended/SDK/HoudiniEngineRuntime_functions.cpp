#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoudiniEngineRuntime.HoudiniAsset
// (None)

class UClass* UHoudiniAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAsset");

	return Clss;
}


// HoudiniAsset HoudiniEngineRuntime.Default__HoudiniAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAsset* UHoudiniAsset::GetDefaultObj()
{
	static class UHoudiniAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAsset*>(UHoudiniAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetActor
// (Actor)

class UClass* AHoudiniAssetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetActor");

	return Clss;
}


// HoudiniAssetActor HoudiniEngineRuntime.Default__HoudiniAssetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHoudiniAssetActor* AHoudiniAssetActor::GetDefaultObj()
{
	static class AHoudiniAssetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHoudiniAssetActor*>(AHoudiniAssetActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniAssetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetComponent");

	return Clss;
}


// HoudiniAssetComponent HoudiniEngineRuntime.Default__HoudiniAssetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetComponent* UHoudiniAssetComponent::GetDefaultObj()
{
	static class UHoudiniAssetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetComponent*>(UHoudiniAssetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniAssetBlueprintComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetBlueprintComponent");

	return Clss;
}


// HoudiniAssetBlueprintComponent HoudiniEngineRuntime.Default__HoudiniAssetBlueprintComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetBlueprintComponent* UHoudiniAssetBlueprintComponent::GetDefaultObj()
{
	static class UHoudiniAssetBlueprintComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetBlueprintComponent*>(UHoudiniAssetBlueprintComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UHoudiniAssetBlueprintComponent::SetToggleValueAt(class FString* Name, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetToggleValueAt");

	Params::UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UHoudiniAssetBlueprintComponent::SetFloatParameter(class FString* Name, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetFloatParameter");

	Params::UHoudiniAssetBlueprintComponent_SetFloatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniAssetBlueprintComponent::HasParameter(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "HasParameter");

	Params::UHoudiniAssetBlueprintComponent_HasParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// (None)

class UClass* IHoudiniEngineCopyPropertiesInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniEngineCopyPropertiesInterface");

	return Clss;
}


// HoudiniEngineCopyPropertiesInterface HoudiniEngineRuntime.Default__HoudiniEngineCopyPropertiesInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IHoudiniEngineCopyPropertiesInterface* IHoudiniEngineCopyPropertiesInterface::GetDefaultObj()
{
	static class IHoudiniEngineCopyPropertiesInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IHoudiniEngineCopyPropertiesInterface*>(IHoudiniEngineCopyPropertiesInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniEngineEditorSettings
// (None)

class UClass* UHoudiniEngineEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniEngineEditorSettings");

	return Clss;
}


// HoudiniEngineEditorSettings HoudiniEngineRuntime.Default__HoudiniEngineEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniEngineEditorSettings* UHoudiniEngineEditorSettings::GetDefaultObj()
{
	static class UHoudiniEngineEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniEngineEditorSettings*>(UHoudiniEngineEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniHandleParameter
// (None)

class UClass* UHoudiniHandleParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniHandleParameter");

	return Clss;
}


// HoudiniHandleParameter HoudiniEngineRuntime.Default__HoudiniHandleParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniHandleParameter* UHoudiniHandleParameter::GetDefaultObj()
{
	static class UHoudiniHandleParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniHandleParameter*>(UHoudiniHandleParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniHandleComponent
// (SceneComponent)

class UClass* UHoudiniHandleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniHandleComponent");

	return Clss;
}


// HoudiniHandleComponent HoudiniEngineRuntime.Default__HoudiniHandleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniHandleComponent* UHoudiniHandleComponent::GetDefaultObj()
{
	static class UHoudiniHandleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniHandleComponent*>(UHoudiniHandleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInput
// (None)

class UClass* UHoudiniInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInput");

	return Clss;
}


// HoudiniInput HoudiniEngineRuntime.Default__HoudiniInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UHoudiniInput* UHoudiniInput::GetDefaultObj()
{
	static class UHoudiniInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInput*>(UHoudiniInput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputObject
// (None)

class UClass* UHoudiniInputObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputObject");

	return Clss;
}


// HoudiniInputObject HoudiniEngineRuntime.Default__HoudiniInputObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputObject* UHoudiniInputObject::GetDefaultObj()
{
	static class UHoudiniInputObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputObject*>(UHoudiniInputObject::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// (None)

class UClass* UHoudiniInputStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputStaticMesh");

	return Clss;
}


// HoudiniInputStaticMesh HoudiniEngineRuntime.Default__HoudiniInputStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputStaticMesh* UHoudiniInputStaticMesh::GetDefaultObj()
{
	static class UHoudiniInputStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputStaticMesh*>(UHoudiniInputStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// (None)

class UClass* UHoudiniInputSkeletalMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSkeletalMesh");

	return Clss;
}


// HoudiniInputSkeletalMesh HoudiniEngineRuntime.Default__HoudiniInputSkeletalMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSkeletalMesh* UHoudiniInputSkeletalMesh::GetDefaultObj()
{
	static class UHoudiniInputSkeletalMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSkeletalMesh*>(UHoudiniInputSkeletalMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputAnimation
// (None)

class UClass* UHoudiniInputAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputAnimation");

	return Clss;
}


// HoudiniInputAnimation HoudiniEngineRuntime.Default__HoudiniInputAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputAnimation* UHoudiniInputAnimation::GetDefaultObj()
{
	static class UHoudiniInputAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputAnimation*>(UHoudiniInputAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// (None)

class UClass* UHoudiniInputGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputGeometryCollection");

	return Clss;
}


// HoudiniInputGeometryCollection HoudiniEngineRuntime.Default__HoudiniInputGeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputGeometryCollection* UHoudiniInputGeometryCollection::GetDefaultObj()
{
	static class UHoudiniInputGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputGeometryCollection*>(UHoudiniInputGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// (None)

class UClass* UHoudiniInputSceneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSceneComponent");

	return Clss;
}


// HoudiniInputSceneComponent HoudiniEngineRuntime.Default__HoudiniInputSceneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSceneComponent* UHoudiniInputSceneComponent::GetDefaultObj()
{
	static class UHoudiniInputSceneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSceneComponent*>(UHoudiniInputSceneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// (None)

class UClass* UHoudiniInputMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputMeshComponent");

	return Clss;
}


// HoudiniInputMeshComponent HoudiniEngineRuntime.Default__HoudiniInputMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputMeshComponent* UHoudiniInputMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputMeshComponent*>(UHoudiniInputMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// (None)

class UClass* UHoudiniInputInstancedMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputInstancedMeshComponent");

	return Clss;
}


// HoudiniInputInstancedMeshComponent HoudiniEngineRuntime.Default__HoudiniInputInstancedMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputInstancedMeshComponent* UHoudiniInputInstancedMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputInstancedMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputInstancedMeshComponent*>(UHoudiniInputInstancedMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// (None)

class UClass* UHoudiniInputSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSplineComponent");

	return Clss;
}


// HoudiniInputSplineComponent HoudiniEngineRuntime.Default__HoudiniInputSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSplineComponent* UHoudiniInputSplineComponent::GetDefaultObj()
{
	static class UHoudiniInputSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSplineComponent*>(UHoudiniInputSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// (None)

class UClass* UHoudiniInputGeometryCollectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputGeometryCollectionComponent");

	return Clss;
}


// HoudiniInputGeometryCollectionComponent HoudiniEngineRuntime.Default__HoudiniInputGeometryCollectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputGeometryCollectionComponent* UHoudiniInputGeometryCollectionComponent::GetDefaultObj()
{
	static class UHoudiniInputGeometryCollectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputGeometryCollectionComponent*>(UHoudiniInputGeometryCollectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// (None)

class UClass* UHoudiniInputSkeletalMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSkeletalMeshComponent");

	return Clss;
}


// HoudiniInputSkeletalMeshComponent HoudiniEngineRuntime.Default__HoudiniInputSkeletalMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSkeletalMeshComponent* UHoudiniInputSkeletalMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputSkeletalMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSkeletalMeshComponent*>(UHoudiniInputSkeletalMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// (None)

class UClass* UHoudiniInputHoudiniSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputHoudiniSplineComponent");

	return Clss;
}


// HoudiniInputHoudiniSplineComponent HoudiniEngineRuntime.Default__HoudiniInputHoudiniSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputHoudiniSplineComponent* UHoudiniInputHoudiniSplineComponent::GetDefaultObj()
{
	static class UHoudiniInputHoudiniSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputHoudiniSplineComponent*>(UHoudiniInputHoudiniSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// (None)

class UClass* UHoudiniInputCameraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputCameraComponent");

	return Clss;
}


// HoudiniInputCameraComponent HoudiniEngineRuntime.Default__HoudiniInputCameraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputCameraComponent* UHoudiniInputCameraComponent::GetDefaultObj()
{
	static class UHoudiniInputCameraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputCameraComponent*>(UHoudiniInputCameraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// (None)

class UClass* UHoudiniInputHoudiniAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputHoudiniAsset");

	return Clss;
}


// HoudiniInputHoudiniAsset HoudiniEngineRuntime.Default__HoudiniInputHoudiniAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputHoudiniAsset* UHoudiniInputHoudiniAsset::GetDefaultObj()
{
	static class UHoudiniInputHoudiniAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputHoudiniAsset*>(UHoudiniInputHoudiniAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputActor
// (None)

class UClass* UHoudiniInputActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputActor");

	return Clss;
}


// HoudiniInputActor HoudiniEngineRuntime.Default__HoudiniInputActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputActor* UHoudiniInputActor::GetDefaultObj()
{
	static class UHoudiniInputActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputActor*>(UHoudiniInputActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputLevelInstance
// (None)

class UClass* UHoudiniInputLevelInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputLevelInstance");

	return Clss;
}


// HoudiniInputLevelInstance HoudiniEngineRuntime.Default__HoudiniInputLevelInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputLevelInstance* UHoudiniInputLevelInstance::GetDefaultObj()
{
	static class UHoudiniInputLevelInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputLevelInstance*>(UHoudiniInputLevelInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputLandscape
// (None)

class UClass* UHoudiniInputLandscape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputLandscape");

	return Clss;
}


// HoudiniInputLandscape HoudiniEngineRuntime.Default__HoudiniInputLandscape
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputLandscape* UHoudiniInputLandscape::GetDefaultObj()
{
	static class UHoudiniInputLandscape* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputLandscape*>(UHoudiniInputLandscape::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputBrush
// (None)

class UClass* UHoudiniInputBrush::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputBrush");

	return Clss;
}


// HoudiniInputBrush HoudiniEngineRuntime.Default__HoudiniInputBrush
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputBrush* UHoudiniInputBrush::GetDefaultObj()
{
	static class UHoudiniInputBrush* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputBrush*>(UHoudiniInputBrush::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputDataTable
// (None)

class UClass* UHoudiniInputDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputDataTable");

	return Clss;
}


// HoudiniInputDataTable HoudiniEngineRuntime.Default__HoudiniInputDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputDataTable* UHoudiniInputDataTable::GetDefaultObj()
{
	static class UHoudiniInputDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputDataTable*>(UHoudiniInputDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// (None)

class UClass* UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputFoliageType_InstancedStaticMesh");

	return Clss;
}


// HoudiniInputFoliageType_InstancedStaticMesh HoudiniEngineRuntime.Default__HoudiniInputFoliageType_InstancedStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputFoliageType_InstancedStaticMesh* UHoudiniInputFoliageType_InstancedStaticMesh::GetDefaultObj()
{
	static class UHoudiniInputFoliageType_InstancedStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputFoliageType_InstancedStaticMesh*>(UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputBlueprint
// (None)

class UClass* UHoudiniInputBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputBlueprint");

	return Clss;
}


// HoudiniInputBlueprint HoudiniEngineRuntime.Default__HoudiniInputBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputBlueprint* UHoudiniInputBlueprint::GetDefaultObj()
{
	static class UHoudiniInputBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputBlueprint*>(UHoudiniInputBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputPackedLevelActor
// (None)

class UClass* UHoudiniInputPackedLevelActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputPackedLevelActor");

	return Clss;
}


// HoudiniInputPackedLevelActor HoudiniEngineRuntime.Default__HoudiniInputPackedLevelActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputPackedLevelActor* UHoudiniInputPackedLevelActor::GetDefaultObj()
{
	static class UHoudiniInputPackedLevelActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputPackedLevelActor*>(UHoudiniInputPackedLevelActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineActor
// (None)

class UClass* UHoudiniInputLandscapeSplineActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputLandscapeSplineActor");

	return Clss;
}


// HoudiniInputLandscapeSplineActor HoudiniEngineRuntime.Default__HoudiniInputLandscapeSplineActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputLandscapeSplineActor* UHoudiniInputLandscapeSplineActor::GetDefaultObj()
{
	static class UHoudiniInputLandscapeSplineActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputLandscapeSplineActor*>(UHoudiniInputLandscapeSplineActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplinesComponent
// (None)

class UClass* UHoudiniInputLandscapeSplinesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputLandscapeSplinesComponent");

	return Clss;
}


// HoudiniInputLandscapeSplinesComponent HoudiniEngineRuntime.Default__HoudiniInputLandscapeSplinesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputLandscapeSplinesComponent* UHoudiniInputLandscapeSplinesComponent::GetDefaultObj()
{
	static class UHoudiniInputLandscapeSplinesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputLandscapeSplinesComponent*>(UHoudiniInputLandscapeSplinesComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSplineMeshComponent
// (None)

class UClass* UHoudiniInputSplineMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSplineMeshComponent");

	return Clss;
}


// HoudiniInputSplineMeshComponent HoudiniEngineRuntime.Default__HoudiniInputSplineMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSplineMeshComponent* UHoudiniInputSplineMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputSplineMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSplineMeshComponent*>(UHoudiniInputSplineMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// (SceneComponent)

class UClass* UHoudiniInstancedActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInstancedActorComponent");

	return Clss;
}


// HoudiniInstancedActorComponent HoudiniEngineRuntime.Default__HoudiniInstancedActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInstancedActorComponent* UHoudiniInstancedActorComponent::GetDefaultObj()
{
	static class UHoudiniInstancedActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInstancedActorComponent*>(UHoudiniInstancedActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// (SceneComponent)

class UClass* UHoudiniMeshSplitInstancerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniMeshSplitInstancerComponent");

	return Clss;
}


// HoudiniMeshSplitInstancerComponent HoudiniEngineRuntime.Default__HoudiniMeshSplitInstancerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniMeshSplitInstancerComponent* UHoudiniMeshSplitInstancerComponent::GetDefaultObj()
{
	static class UHoudiniMeshSplitInstancerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniMeshSplitInstancerComponent*>(UHoudiniMeshSplitInstancerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// (None)

class UClass* UHoudiniLandscapePtr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapePtr");

	return Clss;
}


// HoudiniLandscapePtr HoudiniEngineRuntime.Default__HoudiniLandscapePtr
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapePtr* UHoudiniLandscapePtr::GetDefaultObj()
{
	static class UHoudiniLandscapePtr* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapePtr*>(UHoudiniLandscapePtr::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
// (None)

class UClass* UHoudiniLandscapeTargetLayerOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapeTargetLayerOutput");

	return Clss;
}


// HoudiniLandscapeTargetLayerOutput HoudiniEngineRuntime.Default__HoudiniLandscapeTargetLayerOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapeTargetLayerOutput* UHoudiniLandscapeTargetLayerOutput::GetDefaultObj()
{
	static class UHoudiniLandscapeTargetLayerOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapeTargetLayerOutput*>(UHoudiniLandscapeTargetLayerOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
// (None)

class UClass* UHoudiniLandscapeOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapeOutput");

	return Clss;
}


// HoudiniLandscapeOutput HoudiniEngineRuntime.Default__HoudiniLandscapeOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapeOutput* UHoudiniLandscapeOutput::GetDefaultObj()
{
	static class UHoudiniLandscapeOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapeOutput*>(UHoudiniLandscapeOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapeSplineTargetLayerOutput
// (None)

class UClass* UHoudiniLandscapeSplineTargetLayerOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapeSplineTargetLayerOutput");

	return Clss;
}


// HoudiniLandscapeSplineTargetLayerOutput HoudiniEngineRuntime.Default__HoudiniLandscapeSplineTargetLayerOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapeSplineTargetLayerOutput* UHoudiniLandscapeSplineTargetLayerOutput::GetDefaultObj()
{
	static class UHoudiniLandscapeSplineTargetLayerOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapeSplineTargetLayerOutput*>(UHoudiniLandscapeSplineTargetLayerOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapeSplinesOutput
// (None)

class UClass* UHoudiniLandscapeSplinesOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapeSplinesOutput");

	return Clss;
}


// HoudiniLandscapeSplinesOutput HoudiniEngineRuntime.Default__HoudiniLandscapeSplinesOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapeSplinesOutput* UHoudiniLandscapeSplinesOutput::GetDefaultObj()
{
	static class UHoudiniLandscapeSplinesOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapeSplinesOutput*>(UHoudiniLandscapeSplinesOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniOutput
// (None)

class UClass* UHoudiniOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniOutput");

	return Clss;
}


// HoudiniOutput HoudiniEngineRuntime.Default__HoudiniOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniOutput* UHoudiniOutput::GetDefaultObj()
{
	static class UHoudiniOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniOutput*>(UHoudiniOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameter
// (None)

class UClass* UHoudiniParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameter");

	return Clss;
}


// HoudiniParameter HoudiniEngineRuntime.Default__HoudiniParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameter* UHoudiniParameter::GetDefaultObj()
{
	static class UHoudiniParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameter*>(UHoudiniParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterButton
// (None)

class UClass* UHoudiniParameterButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterButton");

	return Clss;
}


// HoudiniParameterButton HoudiniEngineRuntime.Default__HoudiniParameterButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterButton* UHoudiniParameterButton::GetDefaultObj()
{
	static class UHoudiniParameterButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterButton*>(UHoudiniParameterButton::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// (None)

class UClass* UHoudiniParameterButtonStrip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterButtonStrip");

	return Clss;
}


// HoudiniParameterButtonStrip HoudiniEngineRuntime.Default__HoudiniParameterButtonStrip
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterButtonStrip* UHoudiniParameterButtonStrip::GetDefaultObj()
{
	static class UHoudiniParameterButtonStrip* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterButtonStrip*>(UHoudiniParameterButtonStrip::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterChoice
// (None)

class UClass* UHoudiniParameterChoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterChoice");

	return Clss;
}


// HoudiniParameterChoice HoudiniEngineRuntime.Default__HoudiniParameterChoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterChoice* UHoudiniParameterChoice::GetDefaultObj()
{
	static class UHoudiniParameterChoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterChoice*>(UHoudiniParameterChoice::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterColor
// (None)

class UClass* UHoudiniParameterColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterColor");

	return Clss;
}


// HoudiniParameterColor HoudiniEngineRuntime.Default__HoudiniParameterColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterColor* UHoudiniParameterColor::GetDefaultObj()
{
	static class UHoudiniParameterColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterColor*>(UHoudiniParameterColor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFile
// (None)

class UClass* UHoudiniParameterFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFile");

	return Clss;
}


// HoudiniParameterFile HoudiniEngineRuntime.Default__HoudiniParameterFile
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFile* UHoudiniParameterFile::GetDefaultObj()
{
	static class UHoudiniParameterFile* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFile*>(UHoudiniParameterFile::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFloat
// (None)

class UClass* UHoudiniParameterFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFloat");

	return Clss;
}


// HoudiniParameterFloat HoudiniEngineRuntime.Default__HoudiniParameterFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFloat* UHoudiniParameterFloat::GetDefaultObj()
{
	static class UHoudiniParameterFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFloat*>(UHoudiniParameterFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFolder
// (None)

class UClass* UHoudiniParameterFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFolder");

	return Clss;
}


// HoudiniParameterFolder HoudiniEngineRuntime.Default__HoudiniParameterFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFolder* UHoudiniParameterFolder::GetDefaultObj()
{
	static class UHoudiniParameterFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFolder*>(UHoudiniParameterFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// (None)

class UClass* UHoudiniParameterFolderList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFolderList");

	return Clss;
}


// HoudiniParameterFolderList HoudiniEngineRuntime.Default__HoudiniParameterFolderList
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFolderList* UHoudiniParameterFolderList::GetDefaultObj()
{
	static class UHoudiniParameterFolderList* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFolderList*>(UHoudiniParameterFolderList::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterInt
// (None)

class UClass* UHoudiniParameterInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterInt");

	return Clss;
}


// HoudiniParameterInt HoudiniEngineRuntime.Default__HoudiniParameterInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterInt* UHoudiniParameterInt::GetDefaultObj()
{
	static class UHoudiniParameterInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterInt*>(UHoudiniParameterInt::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterLabel
// (None)

class UClass* UHoudiniParameterLabel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterLabel");

	return Clss;
}


// HoudiniParameterLabel HoudiniEngineRuntime.Default__HoudiniParameterLabel
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterLabel* UHoudiniParameterLabel::GetDefaultObj()
{
	static class UHoudiniParameterLabel* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterLabel*>(UHoudiniParameterLabel::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// (None)

class UClass* UHoudiniParameterMultiParm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterMultiParm");

	return Clss;
}


// HoudiniParameterMultiParm HoudiniEngineRuntime.Default__HoudiniParameterMultiParm
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterMultiParm* UHoudiniParameterMultiParm::GetDefaultObj()
{
	static class UHoudiniParameterMultiParm* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterMultiParm*>(UHoudiniParameterMultiParm::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// (None)

class UClass* UHoudiniParameterOperatorPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterOperatorPath");

	return Clss;
}


// HoudiniParameterOperatorPath HoudiniEngineRuntime.Default__HoudiniParameterOperatorPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterOperatorPath* UHoudiniParameterOperatorPath::GetDefaultObj()
{
	static class UHoudiniParameterOperatorPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterOperatorPath*>(UHoudiniParameterOperatorPath::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// (None)

class UClass* UHoudiniParameterRampModificationEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampModificationEvent");

	return Clss;
}


// HoudiniParameterRampModificationEvent HoudiniEngineRuntime.Default__HoudiniParameterRampModificationEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampModificationEvent* UHoudiniParameterRampModificationEvent::GetDefaultObj()
{
	static class UHoudiniParameterRampModificationEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampModificationEvent*>(UHoudiniParameterRampModificationEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// (None)

class UClass* UHoudiniParameterRampFloatPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampFloatPoint");

	return Clss;
}


// HoudiniParameterRampFloatPoint HoudiniEngineRuntime.Default__HoudiniParameterRampFloatPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampFloatPoint* UHoudiniParameterRampFloatPoint::GetDefaultObj()
{
	static class UHoudiniParameterRampFloatPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampFloatPoint*>(UHoudiniParameterRampFloatPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// (None)

class UClass* UHoudiniParameterRampColorPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampColorPoint");

	return Clss;
}


// HoudiniParameterRampColorPoint HoudiniEngineRuntime.Default__HoudiniParameterRampColorPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampColorPoint* UHoudiniParameterRampColorPoint::GetDefaultObj()
{
	static class UHoudiniParameterRampColorPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampColorPoint*>(UHoudiniParameterRampColorPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// (None)

class UClass* UHoudiniParameterRampFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampFloat");

	return Clss;
}


// HoudiniParameterRampFloat HoudiniEngineRuntime.Default__HoudiniParameterRampFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampFloat* UHoudiniParameterRampFloat::GetDefaultObj()
{
	static class UHoudiniParameterRampFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampFloat*>(UHoudiniParameterRampFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// (None)

class UClass* UHoudiniParameterRampColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampColor");

	return Clss;
}


// HoudiniParameterRampColor HoudiniEngineRuntime.Default__HoudiniParameterRampColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampColor* UHoudiniParameterRampColor::GetDefaultObj()
{
	static class UHoudiniParameterRampColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampColor*>(UHoudiniParameterRampColor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// (None)

class UClass* UHoudiniParameterSeparator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterSeparator");

	return Clss;
}


// HoudiniParameterSeparator HoudiniEngineRuntime.Default__HoudiniParameterSeparator
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterSeparator* UHoudiniParameterSeparator::GetDefaultObj()
{
	static class UHoudiniParameterSeparator* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterSeparator*>(UHoudiniParameterSeparator::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterString
// (None)

class UClass* UHoudiniParameterString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterString");

	return Clss;
}


// HoudiniParameterString HoudiniEngineRuntime.Default__HoudiniParameterString
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterString* UHoudiniParameterString::GetDefaultObj()
{
	static class UHoudiniParameterString* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterString*>(UHoudiniParameterString::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterToggle
// (None)

class UClass* UHoudiniParameterToggle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterToggle");

	return Clss;
}


// HoudiniParameterToggle HoudiniEngineRuntime.Default__HoudiniParameterToggle
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterToggle* UHoudiniParameterToggle::GetDefaultObj()
{
	static class UHoudiniParameterToggle* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterToggle*>(UHoudiniParameterToggle::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.TOPNode
// (None)

class UClass* UTOPNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TOPNode");

	return Clss;
}


// TOPNode HoudiniEngineRuntime.Default__TOPNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UTOPNode* UTOPNode::GetDefaultObj()
{
	static class UTOPNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UTOPNode*>(UTOPNode::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.TOPNetwork
// (None)

class UClass* UTOPNetwork::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TOPNetwork");

	return Clss;
}


// TOPNetwork HoudiniEngineRuntime.Default__TOPNetwork
// (Public, ClassDefaultObject, ArchetypeObject)

class UTOPNetwork* UTOPNetwork::GetDefaultObj()
{
	static class UTOPNetwork* Default = nullptr;

	if (!Default)
		Default = static_cast<UTOPNetwork*>(UTOPNetwork::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// (None)

class UClass* UHoudiniPDGAssetLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniPDGAssetLink");

	return Clss;
}


// HoudiniPDGAssetLink HoudiniEngineRuntime.Default__HoudiniPDGAssetLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniPDGAssetLink* UHoudiniPDGAssetLink::GetDefaultObj()
{
	static class UHoudiniPDGAssetLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniPDGAssetLink*>(UHoudiniPDGAssetLink::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// (None)

class UClass* UHoudiniRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniRuntimeSettings");

	return Clss;
}


// HoudiniRuntimeSettings HoudiniEngineRuntime.Default__HoudiniRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniRuntimeSettings* UHoudiniRuntimeSettings::GetDefaultObj()
{
	static class UHoudiniRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniRuntimeSettings*>(UHoudiniRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniSplineComponent
// (SceneComponent)

class UClass* UHoudiniSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniSplineComponent");

	return Clss;
}


// HoudiniSplineComponent HoudiniEngineRuntime.Default__HoudiniSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniSplineComponent* UHoudiniSplineComponent::GetDefaultObj()
{
	static class UHoudiniSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniSplineComponent*>(UHoudiniSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniStaticMesh
// (None)

class UClass* UHoudiniStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniStaticMesh");

	return Clss;
}


// HoudiniStaticMesh HoudiniEngineRuntime.Default__HoudiniStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniStaticMesh* UHoudiniStaticMesh::GetDefaultObj()
{
	static class UHoudiniStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniStaticMesh*>(UHoudiniStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InVertexIndex                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector3f                   InPosition                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetVertexPosition(uint32* InVertexIndex, struct FVector3f* InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetVertexPosition");

	Params::UHoudiniStaticMesh_SetVertexPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InVertexIndex != nullptr)
		*InVertexIndex = Parms.InVertexIndex;

	if (InPosition != nullptr)
		*InPosition = std::move(Parms.InPosition);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InTriangleVertexIndex                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector3f                   InVTangent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InVTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexVTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexVTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndex != nullptr)
		*InTriangleVertexIndex = Parms.InTriangleVertexIndex;

	if (InVTangent != nullptr)
		*InVTangent = std::move(Parms.InVTangent);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InTriangleVertexIndex                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InUVLayer                                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2f                   InUV                                                             (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexUV(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, uint8* InUVLayer, struct FVector2f* InUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUV");

	Params::UHoudiniStaticMesh_SetTriangleVertexUV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndex != nullptr)
		*InTriangleVertexIndex = Parms.InTriangleVertexIndex;

	if (InUVLayer != nullptr)
		*InUVLayer = Parms.InUVLayer;

	if (InUV != nullptr)
		*InUV = std::move(Parms.InUV);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InTriangleVertexIndex                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector3f                   InUTangent                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InUTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexUTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndex != nullptr)
		*InTriangleVertexIndex = Parms.InTriangleVertexIndex;

	if (InUTangent != nullptr)
		*InUTangent = std::move(Parms.InUTangent);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InTriangleVertexIndex                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector3f                   InNormal                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexNormal");

	Params::UHoudiniStaticMesh_SetTriangleVertexNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndex != nullptr)
		*InTriangleVertexIndex = Parms.InTriangleVertexIndex;

	if (InNormal != nullptr)
		*InNormal = std::move(Parms.InNormal);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  InTriangleVertexIndices                                          (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32* InTriangleIndex, struct FIntVector* InTriangleVertexIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexIndices");

	Params::UHoudiniStaticMesh_SetTriangleVertexIndices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndices != nullptr)
		*InTriangleVertexIndices = std::move(Parms.InTriangleVertexIndices);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              InTriangleVertexIndex                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FColor                      InColor                                                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleVertexColor(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FColor* InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexColor");

	Params::UHoudiniStaticMesh_SetTriangleVertexColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InTriangleVertexIndex != nullptr)
		*InTriangleVertexIndex = Parms.InTriangleVertexIndex;

	if (InColor != nullptr)
		*InColor = std::move(Parms.InColor);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
// (Final, Native, Public)
// Parameters:
// uint32                             InTriangleIndex                                                  (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InMaterialID                                                     (Edit, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetTriangleMaterialID(uint32* InTriangleIndex, int32* InMaterialID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleMaterialID");

	Params::UHoudiniStaticMesh_SetTriangleMaterialID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTriangleIndex != nullptr)
		*InTriangleIndex = Parms.InTriangleIndex;

	if (InMaterialID != nullptr)
		*InMaterialID = Parms.InMaterialID;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// uint32                             InMaterialIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FStaticMaterial             InStaticMaterial                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetStaticMaterial(uint32* InMaterialIndex, struct FStaticMaterial* InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetStaticMaterial");

	Params::UHoudiniStaticMesh_SetStaticMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMaterialIndex != nullptr)
		*InMaterialIndex = Parms.InMaterialIndex;

	if (InStaticMaterial != nullptr)
		*InStaticMaterial = std::move(Parms.InStaticMaterial);

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
// (Final, Native, Public)
// Parameters:
// uint32                             InNumUVLayers                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetNumUVLayers(uint32* InNumUVLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumUVLayers");

	Params::UHoudiniStaticMesh_SetNumUVLayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNumUVLayers != nullptr)
		*InNumUVLayers = Parms.InNumUVLayers;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
// (Final, Native, Public)
// Parameters:
// uint32                             InNumStaticMaterials                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetNumStaticMaterials(uint32* InNumStaticMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumStaticMaterials");

	Params::UHoudiniStaticMesh_SetNumStaticMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNumStaticMaterials != nullptr)
		*InNumStaticMaterials = Parms.InNumStaticMaterials;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInHasTangents                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetHasTangents(bool* bInHasTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasTangents");

	Params::UHoudiniStaticMesh_SetHasTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInHasTangents != nullptr)
		*bInHasTangents = Parms.bInHasTangents;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
// (Final, Native, Public)
// Parameters:
// bool                               bInHasPerFaceMaterials                                           (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool* bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasPerFaceMaterials");

	Params::UHoudiniStaticMesh_SetHasPerFaceMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInHasPerFaceMaterials != nullptr)
		*bInHasPerFaceMaterials = Parms.bInHasPerFaceMaterials;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInHasNormals                                                    (Edit, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetHasNormals(bool* bInHasNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasNormals");

	Params::UHoudiniStaticMesh_SetHasNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInHasNormals != nullptr)
		*bInHasNormals = Parms.bInHasNormals;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
// (Final, Native, Public)
// Parameters:
// bool                               bInHasColors                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::SetHasColors(bool* bInHasColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasColors");

	Params::UHoudiniStaticMesh_SetHasColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInHasColors != nullptr)
		*bInHasColors = Parms.bInHasColors;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMesh::Optimize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Optimize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
// (Final, Native, Public, Const)
// Parameters:
// bool                               bInSkipVertexIndicesCheck                                        (BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMesh::IsValid(bool* bInSkipVertexIndicesCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "IsValid");

	Params::UHoudiniStaticMesh_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInSkipVertexIndicesCheck != nullptr)
		*bInSkipVertexIndicesCheck = Parms.bInSkipVertexIndicesCheck;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
// (Final, Native, Public)
// Parameters:
// uint32                             InNumVertices                                                    (ExportObject, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint32                             InNumTriangles                                                   (Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint32                             InNumUVLayers                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint32                             InInitialNumStaticMaterials                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInHasNormals                                                    (Edit, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInHasTangents                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInHasColors                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInHasPerFaceMaterials                                           (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::Initialize(uint32* InNumVertices, uint32* InNumTriangles, uint32* InNumUVLayers, uint32* InInitialNumStaticMaterials, bool* bInHasNormals, bool* bInHasTangents, bool* bInHasColors, bool* bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Initialize");

	Params::UHoudiniStaticMesh_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNumVertices != nullptr)
		*InNumVertices = Parms.InNumVertices;

	if (InNumTriangles != nullptr)
		*InNumTriangles = Parms.InNumTriangles;

	if (InNumUVLayers != nullptr)
		*InNumUVLayers = Parms.InNumUVLayers;

	if (InInitialNumStaticMaterials != nullptr)
		*InInitialNumStaticMaterials = Parms.InInitialNumStaticMaterials;

	if (bInHasNormals != nullptr)
		*bInHasNormals = Parms.bInHasNormals;

	if (bInHasTangents != nullptr)
		*bInHasTangents = Parms.bInHasTangents;

	if (bInHasColors != nullptr)
		*bInHasColors = Parms.bInHasColors;

	if (bInHasPerFaceMaterials != nullptr)
		*bInHasPerFaceMaterials = Parms.bInHasPerFaceMaterials;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMesh::HasTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasTangents");

	Params::UHoudiniStaticMesh_HasTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMesh::HasPerFaceMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasPerFaceMaterials");

	Params::UHoudiniStaticMesh_HasPerFaceMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMesh::HasNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasNormals");

	Params::UHoudiniStaticMesh_HasNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMesh::HasColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasColors");

	Params::UHoudiniStaticMesh_HasColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexPositions");

	Params::UHoudiniStaticMesh_GetVertexPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceVTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceVTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceVTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector2f>           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector2f> UHoudiniStaticMesh::GetVertexInstanceUVs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUVs");

	Params::UHoudiniStaticMesh_GetVertexInstanceUVs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceUTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceUTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceNormals");

	Params::UHoudiniStaticMesh_GetVertexInstanceNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FColor>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FColor> UHoudiniStaticMesh::GetVertexInstanceColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceColors");

	Params::UHoudiniStaticMesh_GetVertexInstanceColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FIntVector>          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FIntVector> UHoudiniStaticMesh::GetTriangleIndices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetTriangleIndices");

	Params::UHoudiniStaticMesh_GetTriangleIndices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FStaticMaterial>     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetStaticMaterials");

	Params::UHoudiniStaticMesh_GetStaticMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::GetNumVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertices");

	Params::UHoudiniStaticMesh_GetNumVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::GetNumVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertexInstances");

	Params::UHoudiniStaticMesh_GetNumVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::GetNumUVLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumUVLayers");

	Params::UHoudiniStaticMesh_GetNumUVLayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::GetNumTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumTriangles");

	Params::UHoudiniStaticMesh_GetNumTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::GetNumStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumStaticMaterials");

	Params::UHoudiniStaticMesh_GetNumStaticMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
// (Final, Native, Public, Const)
// Parameters:
// class FName                        InMaterialSlotName                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UHoudiniStaticMesh::GetMaterialIndex(class FName* InMaterialSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIndex");

	Params::UHoudiniStaticMesh_GetMaterialIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMaterialSlotName != nullptr)
		*InMaterialSlotName = Parms.InMaterialSlotName;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
// (Final, Native, Public, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<int32> UHoudiniStaticMesh::GetMaterialIDsPerTriangle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIDsPerTriangle");

	Params::UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
// (Final, Native, Public)
// Parameters:
// int32                              InMaterialIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMaterialInterface*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int32* InMaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterial");

	Params::UHoudiniStaticMesh_GetMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMaterialIndex != nullptr)
		*InMaterialIndex = Parms.InMaterialIndex;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::CalculateTangents(bool* bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateTangents");

	Params::UHoudiniStaticMesh_CalculateTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInComputeWeightedNormals != nullptr)
		*bInComputeWeightedNormals = Parms.bInComputeWeightedNormals;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMesh::CalculateNormals(bool* bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateNormals");

	Params::UHoudiniStaticMesh_CalculateNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInComputeWeightedNormals != nullptr)
		*bInComputeWeightedNormals = Parms.bInComputeWeightedNormals;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBox UHoudiniStaticMesh::CalcBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalcBounds");

	Params::UHoudiniStaticMesh_CalcBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStaticMaterial             InStaticMaterial                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint32                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

uint32 UHoudiniStaticMesh::AddStaticMaterial(struct FStaticMaterial* InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "AddStaticMaterial");

	Params::UHoudiniStaticMesh_AddStaticMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStaticMaterial != nullptr)
		*InStaticMaterial = std::move(Parms.InStaticMaterial);

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniStaticMeshComponent");

	return Clss;
}


// HoudiniStaticMeshComponent HoudiniEngineRuntime.Default__HoudiniStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniStaticMeshComponent* UHoudiniStaticMeshComponent::GetDefaultObj()
{
	static class UHoudiniStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniStaticMeshComponent*>(UHoudiniStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          InMesh                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMeshComponent::SetMesh(class UHoudiniStaticMesh* InMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetMesh");

	Params::UHoudiniStaticMeshComponent_SetMesh_Params Parms{};

	Parms.InMesh = InMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
// (Final, Native, Public)
// Parameters:
// bool                               bInHoudiniIconVisible                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params Parms{};

	Parms.bInHoudiniIconVisible = bInHoudiniIconVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "NotifyMeshUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "IsHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "GetMesh");

	Params::UHoudiniStaticMeshComponent_GetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniToolData
// (None)

class UClass* UHoudiniToolData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniToolData");

	return Clss;
}


// HoudiniToolData HoudiniEngineRuntime.Default__HoudiniToolData
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniToolData* UHoudiniToolData::GetDefaultObj()
{
	static class UHoudiniToolData* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniToolData*>(UHoudiniToolData::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniToolData.SaveToJSONFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonFilePath                                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniToolData::SaveToJSONFile(const class FString& JsonFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniToolData", "SaveToJSONFile");

	Params::UHoudiniToolData_SaveToJSONFile_Params Parms{};

	Parms.JsonFilePath = JsonFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniToolData.PopulateFromJSONFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonFilePath                                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniToolData::PopulateFromJSONFile(const class FString& JsonFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniToolData", "PopulateFromJSONFile");

	Params::UHoudiniToolData_PopulateFromJSONFile_Params Parms{};

	Parms.JsonFilePath = JsonFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniToolData.PopulateFromJSONData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JSONData                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniToolData::PopulateFromJSONData(const class FString& JSONData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniToolData", "PopulateFromJSONData");

	Params::UHoudiniToolData_PopulateFromJSONData_Params Parms{};

	Parms.JSONData = JSONData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniToolData.ConvertToJSONData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      JSONData                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHoudiniToolData::ConvertToJSONData(const class FString& JSONData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniToolData", "ConvertToJSONData");

	Params::UHoudiniToolData_ConvertToJSONData_Params Parms{};

	Parms.JSONData = JSONData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniToolsPackageAsset
// (None)

class UClass* UHoudiniToolsPackageAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniToolsPackageAsset");

	return Clss;
}


// HoudiniToolsPackageAsset HoudiniEngineRuntime.Default__HoudiniToolsPackageAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniToolsPackageAsset* UHoudiniToolsPackageAsset::GetDefaultObj()
{
	static class UHoudiniToolsPackageAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniToolsPackageAsset*>(UHoudiniToolsPackageAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// (None)

class UClass* IHoudiniAssetStateEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetStateEvents");

	return Clss;
}


// HoudiniAssetStateEvents HoudiniEngineRuntime.Default__HoudiniAssetStateEvents
// (Public, ClassDefaultObject, ArchetypeObject)

class IHoudiniAssetStateEvents* IHoudiniAssetStateEvents::GetDefaultObj()
{
	static class IHoudiniAssetStateEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<IHoudiniAssetStateEvents*>(IHoudiniAssetStateEvents::StaticClass()->DefaultObject);

	return Default;
}

}


