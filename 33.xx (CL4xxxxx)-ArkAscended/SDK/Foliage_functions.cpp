#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Foliage.FoliageInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageInstancedStaticMeshComponent");

	return Clss;
}


// FoliageInstancedStaticMeshComponent Foliage.Default__FoliageInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageInstancedStaticMeshComponent* UFoliageInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UFoliageInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageInstancedStaticMeshComponent*>(UFoliageInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType
// (None)

class UClass* UFoliageType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType");

	return Clss;
}


// FoliageType Foliage.Default__FoliageType
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType* UFoliageType::GetDefaultObj()
{
	static class UFoliageType* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType*>(UFoliageType::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.FoliageType.GetResponseToChannel
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECollisionChannel       Channel                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// enum class ECollisionResponse      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ECollisionChannel UFoliageType::GetResponseToChannel(enum class ECollisionResponse ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageType", "GetResponseToChannel");

	Params::UFoliageType_GetResponseToChannel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Foliage.FoliageType_Actor
// (None)

class UClass* UFoliageType_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_Actor");

	return Clss;
}


// FoliageType_Actor Foliage.Default__FoliageType_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_Actor* UFoliageType_Actor::GetDefaultObj()
{
	static class UFoliageType_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_Actor*>(UFoliageType_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType_InstancedStaticMesh
// (None)

class UClass* UFoliageType_InstancedStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_InstancedStaticMesh");

	return Clss;
}


// FoliageType_InstancedStaticMesh Foliage.Default__FoliageType_InstancedStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_InstancedStaticMesh* UFoliageType_InstancedStaticMesh::GetDefaultObj()
{
	static class UFoliageType_InstancedStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_InstancedStaticMesh*>(UFoliageType_InstancedStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InstancedFoliageActor
// (Actor)

class UClass* AInstancedFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstancedFoliageActor");

	return Clss;
}


// InstancedFoliageActor Foliage.Default__InstancedFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInstancedFoliageActor* AInstancedFoliageActor::GetDefaultObj()
{
	static class AInstancedFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInstancedFoliageActor*>(AInstancedFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class AInstancedFoliageActor*      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* AInstancedFoliageActor::BPGetInstancedFoliageActorForCurrentLevel(class AInstancedFoliageActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstancedFoliageActor", "BPGetInstancedFoliageActorForCurrentLevel");

	Params::AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AStaticMeshActor*>    Actors                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class AStaticMeshActor*>    ConvertedActors                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class AStaticMeshActor*> AInstancedFoliageActor::BPConvertStaticMeshActorsToFoliage(const TArray<class AStaticMeshActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstancedFoliageActor", "BPConvertStaticMeshActorsToFoliage");

	Params::AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params Parms{};

	Parms.Actors = Actors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Foliage.InteractiveFoliageComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UInteractiveFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageComponent");

	return Clss;
}


// InteractiveFoliageComponent Foliage.Default__InteractiveFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveFoliageComponent* UInteractiveFoliageComponent::GetDefaultObj()
{
	static class UInteractiveFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveFoliageComponent*>(UInteractiveFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageStatistics
// (None)

class UClass* UFoliageStatistics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageStatistics");

	return Clss;
}


// FoliageStatistics Foliage.Default__FoliageStatistics
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageStatistics* UFoliageStatistics::GetDefaultObj()
{
	static class UFoliageStatistics* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageStatistics*>(UFoliageStatistics::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
// struct FVector                     CenterPosition                                                   (ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, float Radius, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::UFoliageStatistics_FoliageOverlappingSphereCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// TArray<struct FTransform>          OutTransforms                                                    (ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTransform> UFoliageStatistics::FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, struct FBox* Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxTransforms");

	Params::UFoliageStatistics_FoliageOverlappingBoxTransforms_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UStaticMesh* UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, struct FBox* Box, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::UFoliageStatistics_FoliageOverlappingBoxCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Class Foliage.GrassInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGrassInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrassInstancedStaticMeshComponent");

	return Clss;
}


// GrassInstancedStaticMeshComponent Foliage.Default__GrassInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrassInstancedStaticMeshComponent* UGrassInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UGrassInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrassInstancedStaticMeshComponent*>(UGrassInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InteractiveFoliageActor
// (Actor)

class UClass* AInteractiveFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageActor");

	return Clss;
}


// InteractiveFoliageActor Foliage.Default__InteractiveFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInteractiveFoliageActor* AInteractiveFoliageActor::GetDefaultObj()
{
	static class AInteractiveFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractiveFoliageActor*>(AInteractiveFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Other                                                            (Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UPrimitiveComponent*         OtherComp                                                        (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              OtherBodyIndex                                                   (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bFromSweep                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FHitResult                  OverlapInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FHitResult AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor** Other, class UPrimitiveComponent** OtherComp, int32* OtherBodyIndex, bool* bFromSweep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::AInteractiveFoliageActor_CapsuleTouched_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Other != nullptr)
		*Other = Parms.Other;

	if (OtherComp != nullptr)
		*OtherComp = Parms.OtherComp;

	if (OtherBodyIndex != nullptr)
		*OtherBodyIndex = Parms.OtherBodyIndex;

	if (bFromSweep != nullptr)
		*bFromSweep = Parms.bFromSweep;

	return Parms.ReturnValue;

}


// Class Foliage.ProceduralFoliageBlockingVolume
// (Actor)

class UClass* AProceduralFoliageBlockingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageBlockingVolume");

	return Clss;
}


// ProceduralFoliageBlockingVolume Foliage.Default__ProceduralFoliageBlockingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageBlockingVolume* AProceduralFoliageBlockingVolume::GetDefaultObj()
{
	static class AProceduralFoliageBlockingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageBlockingVolume*>(AProceduralFoliageBlockingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageComponent
// (None)

class UClass* UProceduralFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageComponent");

	return Clss;
}


// ProceduralFoliageComponent Foliage.Default__ProceduralFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageComponent* UProceduralFoliageComponent::GetDefaultObj()
{
	static class UProceduralFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageComponent*>(UProceduralFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageSpawner
// (None)

class UClass* UProceduralFoliageSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageSpawner");

	return Clss;
}


// ProceduralFoliageSpawner Foliage.Default__ProceduralFoliageSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageSpawner* UProceduralFoliageSpawner::GetDefaultObj()
{
	static class UProceduralFoliageSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageSpawner*>(UProceduralFoliageSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSteps                                                         (Edit, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UProceduralFoliageSpawner::Simulate(int32* NumSteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::UProceduralFoliageSpawner_Simulate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumSteps != nullptr)
		*NumSteps = Parms.NumSteps;

}


// Class Foliage.ProceduralFoliageTile
// (None)

class UClass* UProceduralFoliageTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageTile");

	return Clss;
}


// ProceduralFoliageTile Foliage.Default__ProceduralFoliageTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageTile* UProceduralFoliageTile::GetDefaultObj()
{
	static class UProceduralFoliageTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageTile*>(UProceduralFoliageTile::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageVolume
// (Actor)

class UClass* AProceduralFoliageVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageVolume");

	return Clss;
}


// ProceduralFoliageVolume Foliage.Default__ProceduralFoliageVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageVolume* AProceduralFoliageVolume::GetDefaultObj()
{
	static class AProceduralFoliageVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageVolume*>(AProceduralFoliageVolume::StaticClass()->DefaultObject);

	return Default;
}

}


