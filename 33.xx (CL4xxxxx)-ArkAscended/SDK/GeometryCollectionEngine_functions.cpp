#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCollectionEngine.PrimalDestructibleActor
// (Actor)

class UClass* APrimalDestructibleActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalDestructibleActor");

	return Clss;
}


// PrimalDestructibleActor GeometryCollectionEngine.Default__PrimalDestructibleActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APrimalDestructibleActor* APrimalDestructibleActor::GetDefaultObj()
{
	static class APrimalDestructibleActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimalDestructibleActor*>(APrimalDestructibleActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.PrimalDestructibleActor.StaticBPPreDestructionHandleAttachedComponentClass
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UClass*                      AttachedComponentClass                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UInstancedStaticMeshComponent*ForMeshComp                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     InstancePosition                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    InstanceRotation                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InstanceIndex                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     HitDirection                                                     (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Damage                                                           (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              TotalHealth                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float APrimalDestructibleActor::StaticBPPreDestructionHandleAttachedComponentClass(class UInstancedStaticMeshComponent* ForMeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "StaticBPPreDestructionHandleAttachedComponentClass");

	Params::APrimalDestructibleActor_StaticBPPreDestructionHandleAttachedComponentClass_Params Parms{};

	Parms.ForMeshComp = ForMeshComp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollection*         GeoCollection                                                    (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UGeometryCollection* APrimalDestructibleActor::SetGeoCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "SetGeoCollection");

	Params::APrimalDestructibleActor_SetGeoCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UGeometryCollection*         DestructionAsset                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     HitDirection                                                     (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Damage                                                           (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              TotalHealth                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float APrimalDestructibleActor::BPStartDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "BPStartDestruction");

	Params::APrimalDestructibleActor_BPStartDestruction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class GeometryCollectionEngine.ChaosDestructionListener
// (SceneComponent)

class UClass* UChaosDestructionListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosDestructionListener");

	return Clss;
}


// ChaosDestructionListener GeometryCollectionEngine.Default__ChaosDestructionListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosDestructionListener* UChaosDestructionListener::GetDefaultObj()
{
	static class UChaosDestructionListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosDestructionListener*>(UChaosDestructionListener::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData>TrailingEvents                                                   (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EChaosTrailingSortMethodSortMethod                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

enum class EChaosTrailingSortMethod UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortTrailingEvents");

	Params::UChaosDestructionListener_SortTrailingEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TrailingEvents != nullptr)
		*TrailingEvents = std::move(Parms.TrailingEvents);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosRemovalEventData>RemovalEvents                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EChaosRemovalSortMethod SortMethod                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

enum class EChaosRemovalSortMethod UChaosDestructionListener::SortRemovalEvents(TArray<struct FChaosRemovalEventData>* RemovalEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortRemovalEvents");

	Params::UChaosDestructionListener_SortRemovalEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RemovalEvents != nullptr)
		*RemovalEvents = std::move(Parms.RemovalEvents);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData>CollisionEvents                                                  (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EChaosCollisionSortMethodSortMethod                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

enum class EChaosCollisionSortMethod UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortCollisionEvents");

	Params::UChaosDestructionListener_SortCollisionEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CollisionEvents != nullptr)
		*CollisionEvents = std::move(Parms.CollisionEvents);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData>BreakingEvents                                                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EChaosBreakingSortMethodSortMethod                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

enum class EChaosBreakingSortMethod UChaosDestructionListener::SortBreakingEvents(const TArray<struct FChaosBreakingEventData>& BreakingEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortBreakingEvents");

	Params::UChaosDestructionListener_SortBreakingEvents_Params Parms{};

	Parms.BreakingEvents = BreakingEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettingsInSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FChaosTrailingEventRequestSettings UChaosDestructionListener::SetTrailingEventRequestSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventRequestSettings");

	Params::UChaosDestructionListener_SetTrailingEventRequestSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)

bool UChaosDestructionListener::SetTrailingEventEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventEnabled");

	Params::UChaosDestructionListener_SetTrailingEventEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosRemovalEventRequestSettingsInSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FChaosRemovalEventRequestSettings UChaosDestructionListener::SetRemovalEventRequestSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventRequestSettings");

	Params::UChaosDestructionListener_SetRemovalEventRequestSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)

bool UChaosDestructionListener::SetRemovalEventEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventEnabled");

	Params::UChaosDestructionListener_SetRemovalEventEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettingsInSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FChaosCollisionEventRequestSettings UChaosDestructionListener::SetCollisionEventRequestSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventRequestSettings");

	Params::UChaosDestructionListener_SetCollisionEventRequestSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)

bool UChaosDestructionListener::SetCollisionEventEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventEnabled");

	Params::UChaosDestructionListener_SetCollisionEventEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettingsInSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FChaosBreakingEventRequestSettings UChaosDestructionListener::SetBreakingEventRequestSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventRequestSettings");

	Params::UChaosDestructionListener_SetBreakingEventRequestSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)

bool UChaosDestructionListener::SetBreakingEventEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventEnabled");

	Params::UChaosDestructionListener_SetBreakingEventEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

class AGeometryCollectionActor* UChaosDestructionListener::RemoveGeometryCollectionActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "RemoveGeometryCollectionActor");

	Params::UChaosDestructionListener_RemoveGeometryCollectionActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "RemoveChaosSolverActor");

	Params::UChaosDestructionListener_RemoveChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UChaosDestructionListener::IsEventListening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "IsEventListening");

	Params::UChaosDestructionListener_IsEventListening_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

class AGeometryCollectionActor* UChaosDestructionListener::AddGeometryCollectionActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "AddGeometryCollectionActor");

	Params::UChaosDestructionListener_AddGeometryCollectionActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "AddChaosSolverActor");

	Params::UChaosDestructionListener_AddChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionActor
// (Actor)

class UClass* AGeometryCollectionActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionActor");

	return Clss;
}


// GeometryCollectionActor GeometryCollectionEngine.Default__GeometryCollectionActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionActor* AGeometryCollectionActor::GetDefaultObj()
{
	static class AGeometryCollectionActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionActor*>(AGeometryCollectionActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector                     End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FHitResult                  OutHit                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool AGeometryCollectionActor::RaycastSingle(struct FVector* Start, const struct FVector& End, const struct FHitResult& OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionActor", "RaycastSingle");

	Params::AGeometryCollectionActor_RaycastSingle_Params Parms{};

	Parms.End = End;
	Parms.OutHit = OutHit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	return Parms.ReturnValue;

}


// Class GeometryCollectionEngine.GeometryCollectionCache
// (None)

class UClass* UGeometryCollectionCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionCache");

	return Clss;
}


// GeometryCollectionCache GeometryCollectionEngine.Default__GeometryCollectionCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionCache* UGeometryCollectionCache::GetDefaultObj()
{
	static class UGeometryCollectionCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionCache*>(UGeometryCollectionCache::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCollectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionComponent");

	return Clss;
}


// GeometryCollectionComponent GeometryCollectionEngine.Default__GeometryCollectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionComponent* UGeometryCollectionComponent::GetDefaultObj()
{
	static class UGeometryCollectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionComponent*>(UGeometryCollectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollection*         RestCollectionIn                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryCollection* UGeometryCollectionComponent::SetRestCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetRestCollection");

	Params::UGeometryCollectionComponent_SetRestCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyRemovals                                               (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UGeometryCollectionComponent::SetNotifyRemovals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyRemovals");

	Params::UGeometryCollectionComponent_SetNotifyRemovals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyCrumblings                                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bNewCrumblingEventIncludesChildren                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UGeometryCollectionComponent::SetNotifyCrumblings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyCrumblings");

	Params::UGeometryCollectionComponent_SetNotifyCrumblings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyBreaks                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UGeometryCollectionComponent::SetNotifyBreaks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyBreaks");

	Params::UGeometryCollectionComponent_SetNotifyBreaks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGeometryCollectionComponent::SetEnableDamageFromCollision(bool* bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetEnableDamageFromCollision");

	Params::UGeometryCollectionComponent_SetEnableDamageFromCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValue != nullptr)
		*bValue = Parms.bValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bAnchored                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              MaxLevel                                                         (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UGeometryCollectionComponent::SetAnchoredByTransformedBox(struct FBox* Box, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByTransformedBox");

	Params::UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bAnchored                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UGeometryCollectionComponent::SetAnchoredByIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByIndex");

	Params::UGeometryCollectionComponent_SetAnchoredByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        WorldSpaceBox                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAnchored                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              MaxLevel                                                         (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UGeometryCollectionComponent::SetAnchoredByBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByBox");

	Params::UGeometryCollectionComponent_SetAnchoredByBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::RemoveAllAnchors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "RemoveAllAnchors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (Edit, ConstParm, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ReceivePhysicsCollision");

	Params::UGeometryCollectionComponent_ReceivePhysicsCollision_Params Parms{};

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryCollectionComponent* UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryCollectionComponent* UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryCollectionComponent::GetRootIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetRootIndex");

	Params::UGeometryCollectionComponent_GetRootIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              OutMass                                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBox                        OutExtents                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FBox UGeometryCollectionComponent::GetMassAndExtents(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetMassAndExtents");

	Params::UGeometryCollectionComponent_GetMassAndExtents_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryCollectionComponent::GetLocalBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetLocalBounds");

	Params::UGeometryCollectionComponent_GetLocalBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryCollectionComponent::GetInitialLevel(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetInitialLevel");

	Params::UGeometryCollectionComponent_GetInitialLevel_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UGeometryCollectionComponent::GetDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetDebugInfo");

	Params::UGeometryCollectionComponent_GetDebugInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryCollectionComponent::CrumbleCluster(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleCluster");

	Params::UGeometryCollectionComponent_CrumbleCluster_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::CrumbleActiveClusters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleActiveClusters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryCollectionComponent::BPGetMaxIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "BPGetMaxIndex");

	Params::UGeometryCollectionComponent_BPGetMaxIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EGeometryCollectionPhysicsTypeEnumTarget                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UGeometryCollectionComponent::ApplyPhysicsField(bool* Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyPhysicsField");

	Params::UGeometryCollectionComponent_ApplyPhysicsField_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     LinearVelocity                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGeometryCollectionComponent::ApplyLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyLinearVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)

float UGeometryCollectionComponent::ApplyKinematicField(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyKinematicField");

	Params::UGeometryCollectionComponent_ApplyKinematicField_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              PropagationDepth                                                 (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              PropagationFactor                                                (EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Strain                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UGeometryCollectionComponent::ApplyInternalStrain(int32 ItemIndex, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyInternalStrain");

	Params::UGeometryCollectionComponent_ApplyInternalStrain_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              PropagationDepth                                                 (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              PropagationFactor                                                (EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Strain                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UGeometryCollectionComponent::ApplyExternalStrain(int32 ItemIndex, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyExternalStrain");

	Params::UGeometryCollectionComponent_ApplyExternalStrain_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     LinearVelocity                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     AngularVelocity                                                  (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

struct FVector UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     AngularVelocity                                                  (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

struct FVector UGeometryCollectionComponent::ApplyAngularVelocity(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyAngularVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// (Actor)

class UClass* AGeometryCollectionDebugDrawActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawActor");

	return Clss;
}


// GeometryCollectionDebugDrawActor GeometryCollectionEngine.Default__GeometryCollectionDebugDrawActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionDebugDrawActor* AGeometryCollectionDebugDrawActor::GetDefaultObj()
{
	static class AGeometryCollectionDebugDrawActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionDebugDrawActor*>(AGeometryCollectionDebugDrawActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// (None)

class UClass* UGeometryCollectionDebugDrawComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawComponent");

	return Clss;
}


// GeometryCollectionDebugDrawComponent GeometryCollectionEngine.Default__GeometryCollectionDebugDrawComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionDebugDrawComponent* UGeometryCollectionDebugDrawComponent::GetDefaultObj()
{
	static class UGeometryCollectionDebugDrawComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionDebugDrawComponent*>(UGeometryCollectionDebugDrawComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
// (Actor)

class UClass* AGeometryCollectionISMPoolActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionISMPoolActor");

	return Clss;
}


// GeometryCollectionISMPoolActor GeometryCollectionEngine.Default__GeometryCollectionISMPoolActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionISMPoolActor* AGeometryCollectionISMPoolActor::GetDefaultObj()
{
	static class AGeometryCollectionISMPoolActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionISMPoolActor*>(AGeometryCollectionISMPoolActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
// (SceneComponent)

class UClass* UGeometryCollectionISMPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionISMPoolComponent");

	return Clss;
}


// GeometryCollectionISMPoolComponent GeometryCollectionEngine.Default__GeometryCollectionISMPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionISMPoolComponent* UGeometryCollectionISMPoolComponent::GetDefaultObj()
{
	static class UGeometryCollectionISMPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionISMPoolComponent*>(UGeometryCollectionISMPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollection
// (None)

class UClass* UGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollection");

	return Clss;
}


// GeometryCollection GeometryCollectionEngine.Default__GeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollection* UGeometryCollection::GetDefaultObj()
{
	static class UGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollection*>(UGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// (Actor)

class UClass* AGeometryCollectionRenderLevelSetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionRenderLevelSetActor");

	return Clss;
}


// GeometryCollectionRenderLevelSetActor GeometryCollectionEngine.Default__GeometryCollectionRenderLevelSetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionRenderLevelSetActor* AGeometryCollectionRenderLevelSetActor::GetDefaultObj()
{
	static class AGeometryCollectionRenderLevelSetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionRenderLevelSetActor*>(AGeometryCollectionRenderLevelSetActor::StaticClass()->DefaultObject);

	return Default;
}

}


