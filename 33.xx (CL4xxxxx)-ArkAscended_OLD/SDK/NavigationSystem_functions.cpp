#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NavigationSystem.NavigationInvokerComponent
// (None)

class UClass* UNavigationInvokerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationInvokerComponent");

	return Clss;
}


// NavigationInvokerComponent NavigationSystem.Default__NavigationInvokerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationInvokerComponent* UNavigationInvokerComponent::GetDefaultObj()
{
	static class UNavigationInvokerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationInvokerComponent*>(UNavigationInvokerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationSystemV1
// (None)

class UClass* UNavigationSystemV1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationSystemV1");

	return Clss;
}


// NavigationSystemV1 NavigationSystem.Default__NavigationSystemV1
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationSystemV1* UNavigationSystemV1::GetDefaultObj()
{
	static class UNavigationSystemV1* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationSystemV1*>(UNavigationSystemV1::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Invoker                                                          (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "UnregisterNavigationInvoker");

	Params::UNavigationSystemV1_UnregisterNavigationInvoker_Params Parms{};

	Parms.Invoker = Invoker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MaxNumberOfJobs                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "SetMaxSimultaneousTileGenerationJobsCount");

	Params::UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params Parms{};

	Parms.MaxNumberOfJobs = MaxNumberOfJobs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENavDataGatheringModeConfigNewMode                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ENavDataGatheringModeConfig UNavigationSystemV1::SetGeometryGatheringMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "SetGeometryGatheringMode");

	Params::UNavigationSystemV1_SetGeometryGatheringMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "ResetMaxSimultaneousTileGenerationJobsCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Invoker                                                          (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TileGenerationRadius                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TileRemovalRadius                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "RegisterNavigationInvoker");

	Params::UNavigationSystemV1_RegisterNavigationInvoker_Params Parms{};

	Parms.Invoker = Invoker;
	Parms.TileGenerationRadius = TileGenerationRadius;
	Parms.TileRemovalRadius = TileRemovalRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigationEx
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     Extent                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::ProjectPointToNavigationEx(class UObject* WorldContext, class UClass** FilterClass, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "ProjectPointToNavigationEx");

	Params::UNavigationSystemV1_ProjectPointToNavigationEx_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavMeshBoundsVolume*        NavVolume                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "OnNavigationBoundsUpdated");

	Params::UNavigationSystemV1_OnNavigationBoundsUpdated_Params Parms{};

	Parms.NavVolume = NavVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RayStart                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     RayEnd                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     HitLocation                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AController*                 Querier                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavigationSystemV1::NavigationRaycast(const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass** FilterClass, class AController* Querier, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "NavigationRaycast");

	Params::UNavigationSystemV1_NavigationRaycast_Params Parms{};

	Parms.RayStart = RayStart;
	Parms.RayEnd = RayEnd;
	Parms.Querier = Querier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class UClass*                      OldArea                                                          (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      NewArea                                                          (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject** Object, class UClass* OldArea, class UClass* NewArea, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ReplaceAreaInOctreeData");

	Params::UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params Parms{};

	Parms.OldArea = OldArea;
	Parms.NewArea = NewArea;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     ProjectedLocation                                                (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     QueryExtent                                                      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_ProjectPointToNavigation(const struct FVector& ProjectedLocation, class UClass** FilterClass, const struct FVector& QueryExtent, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ProjectPointToNavigation");

	Params::UNavigationSystemV1_K2_ProjectPointToNavigation_Params Parms{};

	Parms.ProjectedLocation = ProjectedLocation;
	Parms.QueryExtent = QueryExtent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomReachablePointInRadius(const struct FVector& RandomLocation, float Radius, class UClass** FilterClass, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomReachablePointInRadius");

	Params::UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params Parms{};

	Parms.RandomLocation = RandomLocation;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(const struct FVector& RandomLocation, float Radius, class UClass** FilterClass, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomPointInNavigableRadius");

	Params::UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params Parms{};

	Parms.RandomLocation = RandomLocation;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(const struct FVector& RandomLocation, float Radius, class UClass** FilterClass, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomLocationInNavigableRadius");

	Params::UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params Parms{};

	Parms.RandomLocation = RandomLocation;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "IsNavigationBeingBuiltOrLocked");

	Params::UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavigationSystemV1::IsNavigationBeingBuilt(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "IsNavigationBeingBuilt");

	Params::UNavigationSystemV1_IsNavigationBeingBuilt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInMinMaxRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FVector                     Origin                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRadius                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRadius                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FRandomStream               RandStream                                                       (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathDirection                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DotLimit                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetRandomReachablePointInMinMaxRadius(class UObject* WorldContext, float MinRadius, float MaxRadius, const struct FRandomStream& RandStream, const struct FVector& PathDirection, float DotLimit, class UClass** FilterClass, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetRandomReachablePointInMinMaxRadius");

	Params::UNavigationSystemV1_GetRandomReachablePointInMinMaxRadius_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.MinRadius = MinRadius;
	Parms.MaxRadius = MaxRadius;
	Parms.RandStream = RandStream;
	Parms.PathDirection = PathDirection;
	Parms.DotLimit = DotLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             PathLength                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ENavigationQueryResult  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetPathLength(struct FVector* PathStart, struct FVector* PathEnd, double PathLength, class UClass** FilterClass, enum class ENavigationQueryResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetPathLength");

	Params::UNavigationSystemV1_GetPathLength_Params Parms{};

	Parms.PathLength = PathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             PathCost                                                         (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ENavigationQueryResult  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetPathCost(struct FVector* PathStart, struct FVector* PathEnd, double PathCost, class UClass** FilterClass, enum class ENavigationQueryResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetPathCost");

	Params::UNavigationSystemV1_GetPathCost_Params Parms{};

	Parms.PathCost = PathCost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNavigationSystemV1*         ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavigationSystemV1::GetNavigationSystem(class UNavigationSystemV1** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetNavigationSystem");

	Params::UNavigationSystemV1_GetNavigationSystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      PathfindingContext                                               (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UNavigationPath*             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavigationSystemV1::FindPathToLocationSynchronously(struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass, class UNavigationPath** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "FindPathToLocationSynchronously");

	Params::UNavigationSystemV1_FindPathToLocationSynchronously_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

	if (PathfindingContext != nullptr)
		*PathfindingContext = Parms.PathfindingContext;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      GoalActor                                                        (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TetherDistance                                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      PathfindingContext                                               (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UNavigationPath*             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class AActor* UNavigationSystemV1::FindPathToActorSynchronously(struct FVector* PathStart, float TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass, class UNavigationPath** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "FindPathToActorSynchronously");

	Params::UNavigationSystemV1_FindPathToActorSynchronously_Params Parms{};

	Parms.TetherDistance = TetherDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathfindingContext != nullptr)
		*PathfindingContext = Parms.PathfindingContext;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class NavigationSystem.NavigationSystemModuleConfig
// (None)

class UClass* UNavigationSystemModuleConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationSystemModuleConfig");

	return Clss;
}


// NavigationSystemModuleConfig NavigationSystem.Default__NavigationSystemModuleConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationSystemModuleConfig* UNavigationSystemModuleConfig::GetDefaultObj()
{
	static class UNavigationSystemModuleConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationSystemModuleConfig*>(UNavigationSystemModuleConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavRelevantComponent
// (None)

class UClass* UNavRelevantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavRelevantComponent");

	return Clss;
}


// NavRelevantComponent NavigationSystem.Default__NavRelevantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavRelevantComponent* UNavRelevantComponent::GetDefaultObj()
{
	static class UNavRelevantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavRelevantComponent*>(UNavRelevantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRelevant                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavRelevantComponent::SetNavigationRelevancy(bool* bRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavRelevantComponent", "SetNavigationRelevancy");

	Params::UNavRelevantComponent_SetNavigationRelevancy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bRelevant != nullptr)
		*bRelevant = Parms.bRelevant;

}


// Class NavigationSystem.NavModifierComponent
// (None)

class UClass* UNavModifierComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavModifierComponent");

	return Clss;
}


// NavModifierComponent NavigationSystem.Default__NavModifierComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavModifierComponent* UNavModifierComponent::GetDefaultObj()
{
	static class UNavModifierComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavModifierComponent*>(UNavModifierComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      NewAreaClass                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavModifierComponent::SetAreaClass(class UClass** NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavModifierComponent", "SetAreaClass");

	Params::UNavModifierComponent_SetAreaClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewAreaClass != nullptr)
		*NewAreaClass = Parms.NewAreaClass;

}


// Class NavigationSystem.NavigationData
// (Actor)

class UClass* ANavigationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationData");

	return Clss;
}


// NavigationData NavigationSystem.Default__NavigationData
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationData* ANavigationData::GetDefaultObj()
{
	static class ANavigationData* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationData*>(ANavigationData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastNavMesh
// (Actor)

class UClass* ARecastNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastNavMesh");

	return Clss;
}


// RecastNavMesh NavigationSystem.Default__RecastNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class ARecastNavMesh* ARecastNavMesh::GetDefaultObj()
{
	static class ARecastNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecastNavMesh*>(ARecastNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        Bounds                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      OldArea                                                          (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      NewArea                                                          (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReplaceLinks                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(class UClass* OldArea, class UClass* NewArea, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecastNavMesh", "K2_ReplaceAreaInTileBounds");

	Params::ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params Parms{};

	Parms.OldArea = OldArea;
	Parms.NewArea = NewArea;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class NavigationSystem.CrowdManagerBase
// (None)

class UClass* UCrowdManagerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrowdManagerBase");

	return Clss;
}


// CrowdManagerBase NavigationSystem.Default__CrowdManagerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrowdManagerBase* UCrowdManagerBase::GetDefaultObj()
{
	static class UCrowdManagerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrowdManagerBase*>(UCrowdManagerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraphNode
// (Actor)

class UClass* ANavigationGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraphNode");

	return Clss;
}


// NavigationGraphNode NavigationSystem.Default__NavigationGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationGraphNode* ANavigationGraphNode::GetDefaultObj()
{
	static class ANavigationGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationGraphNode*>(ANavigationGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraphNodeComponent
// (SceneComponent)

class UClass* UNavigationGraphNodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraphNodeComponent");

	return Clss;
}


// NavigationGraphNodeComponent NavigationSystem.Default__NavigationGraphNodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationGraphNodeComponent* UNavigationGraphNodeComponent::GetDefaultObj()
{
	static class UNavigationGraphNodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationGraphNodeComponent*>(UNavigationGraphNodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationPathGenerator
// (None)

class UClass* INavigationPathGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationPathGenerator");

	return Clss;
}


// NavigationPathGenerator NavigationSystem.Default__NavigationPathGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class INavigationPathGenerator* INavigationPathGenerator::GetDefaultObj()
{
	static class INavigationPathGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<INavigationPathGenerator*>(INavigationPathGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkCustomInterface
// (None)

class UClass* INavLinkCustomInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkCustomInterface");

	return Clss;
}


// NavLinkCustomInterface NavigationSystem.Default__NavLinkCustomInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavLinkCustomInterface* INavLinkCustomInterface::GetDefaultObj()
{
	static class INavLinkCustomInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavLinkCustomInterface*>(INavLinkCustomInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkHostInterface
// (None)

class UClass* INavLinkHostInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkHostInterface");

	return Clss;
}


// NavLinkHostInterface NavigationSystem.Default__NavLinkHostInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavLinkHostInterface* INavLinkHostInterface::GetDefaultObj()
{
	static class INavLinkHostInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavLinkHostInterface*>(INavLinkHostInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkTrivial
// (None)

class UClass* UNavLinkTrivial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkTrivial");

	return Clss;
}


// NavLinkTrivial NavigationSystem.Default__NavLinkTrivial
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkTrivial* UNavLinkTrivial::GetDefaultObj()
{
	static class UNavLinkTrivial* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkTrivial*>(UNavLinkTrivial::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavNodeInterface
// (None)

class UClass* INavNodeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavNodeInterface");

	return Clss;
}


// NavNodeInterface NavigationSystem.Default__NavNodeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavNodeInterface* INavNodeInterface::GetDefaultObj()
{
	static class INavNodeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavNodeInterface*>(INavNodeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.AbstractNavData
// (Actor)

class UClass* AAbstractNavData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbstractNavData");

	return Clss;
}


// AbstractNavData NavigationSystem.Default__AbstractNavData
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbstractNavData* AAbstractNavData::GetDefaultObj()
{
	static class AAbstractNavData* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbstractNavData*>(AAbstractNavData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea
// (None)

class UClass* UNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea");

	return Clss;
}


// NavArea NavigationSystem.Default__NavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea* UNavArea::GetDefaultObj()
{
	static class UNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea*>(UNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavAreaMeta
// (None)

class UClass* UNavAreaMeta::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavAreaMeta");

	return Clss;
}


// NavAreaMeta NavigationSystem.Default__NavAreaMeta
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavAreaMeta* UNavAreaMeta::GetDefaultObj()
{
	static class UNavAreaMeta* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavAreaMeta*>(UNavAreaMeta::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// (None)

class UClass* UNavAreaMeta_SwitchByAgent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavAreaMeta_SwitchByAgent");

	return Clss;
}


// NavAreaMeta_SwitchByAgent NavigationSystem.Default__NavAreaMeta_SwitchByAgent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavAreaMeta_SwitchByAgent* UNavAreaMeta_SwitchByAgent::GetDefaultObj()
{
	static class UNavAreaMeta_SwitchByAgent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavAreaMeta_SwitchByAgent*>(UNavAreaMeta_SwitchByAgent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Default
// (None)

class UClass* UNavArea_Default::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Default");

	return Clss;
}


// NavArea_Default NavigationSystem.Default__NavArea_Default
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Default* UNavArea_Default::GetDefaultObj()
{
	static class UNavArea_Default* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Default*>(UNavArea_Default::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_LowHeight
// (None)

class UClass* UNavArea_LowHeight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_LowHeight");

	return Clss;
}


// NavArea_LowHeight NavigationSystem.Default__NavArea_LowHeight
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_LowHeight* UNavArea_LowHeight::GetDefaultObj()
{
	static class UNavArea_LowHeight* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_LowHeight*>(UNavArea_LowHeight::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Null
// (None)

class UClass* UNavArea_Null::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Null");

	return Clss;
}


// NavArea_Null NavigationSystem.Default__NavArea_Null
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Null* UNavArea_Null::GetDefaultObj()
{
	static class UNavArea_Null* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Null*>(UNavArea_Null::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Obstacle
// (None)

class UClass* UNavArea_Obstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Obstacle");

	return Clss;
}


// NavArea_Obstacle NavigationSystem.Default__NavArea_Obstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Obstacle* UNavArea_Obstacle::GetDefaultObj()
{
	static class UNavArea_Obstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Obstacle*>(UNavArea_Obstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavCollision
// (None)

class UClass* UNavCollision::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavCollision");

	return Clss;
}


// NavCollision NavigationSystem.Default__NavCollision
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavCollision* UNavCollision::GetDefaultObj()
{
	static class UNavCollision* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavCollision*>(UNavCollision::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationQueryFilter
// (None)

class UClass* UNavigationQueryFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationQueryFilter");

	return Clss;
}


// NavigationQueryFilter NavigationSystem.Default__NavigationQueryFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationQueryFilter* UNavigationQueryFilter::GetDefaultObj()
{
	static class UNavigationQueryFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationQueryFilter*>(UNavigationQueryFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastFilter_UseDefaultArea
// (None)

class UClass* URecastFilter_UseDefaultArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastFilter_UseDefaultArea");

	return Clss;
}


// RecastFilter_UseDefaultArea NavigationSystem.Default__RecastFilter_UseDefaultArea
// (Public, ClassDefaultObject, ArchetypeObject)

class URecastFilter_UseDefaultArea* URecastFilter_UseDefaultArea::GetDefaultObj()
{
	static class URecastFilter_UseDefaultArea* Default = nullptr;

	if (!Default)
		Default = static_cast<URecastFilter_UseDefaultArea*>(URecastFilter_UseDefaultArea::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraph
// (Actor)

class UClass* ANavigationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraph");

	return Clss;
}


// NavigationGraph NavigationSystem.Default__NavigationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationGraph* ANavigationGraph::GetDefaultObj()
{
	static class ANavigationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationGraph*>(ANavigationGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationPath
// (None)

class UClass* UNavigationPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationPath");

	return Clss;
}


// NavigationPath NavigationSystem.Default__NavigationPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationPath* UNavigationPath::GetDefaultObj()
{
	static class UNavigationPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationPath*>(UNavigationPath::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavigationPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsValid(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsValid");

	Params::UNavigationPath_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsStringPulled(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsStringPulled");

	Params::UNavigationPath_IsStringPulled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsPartial(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsPartial");

	Params::UNavigationPath_IsPartial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetPathLength(double* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathLength");

	Params::UNavigationPath_GetPathLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetPathCost(double* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathCost");

	Params::UNavigationPath_GetPathCost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetDebugString(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetDebugString");

	Params::UNavigationPath_GetDebugString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENavigationOptionFlag   DoRecalculation                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UNavigationPath::EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag* DoRecalculation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableRecalculationOnInvalidation");

	Params::UNavigationPath_EnableRecalculationOnInvalidation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DoRecalculation != nullptr)
		*DoRecalculation = Parms.DoRecalculation;

}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               bShouldDrawDebugData                                             (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                PathColor                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UNavigationPath::EnableDebugDrawing(bool* bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableDebugDrawing");

	Params::UNavigationPath_EnableDebugDrawing_Params Parms{};

	Parms.PathColor = PathColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShouldDrawDebugData != nullptr)
		*bShouldDrawDebugData = Parms.bShouldDrawDebugData;

}


// Class NavigationSystem.NavigationTestingActor
// (Actor)

class UClass* ANavigationTestingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationTestingActor");

	return Clss;
}


// NavigationTestingActor NavigationSystem.Default__NavigationTestingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationTestingActor* ANavigationTestingActor::GetDefaultObj()
{
	static class ANavigationTestingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationTestingActor*>(ANavigationTestingActor::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkComponent");

	return Clss;
}


// NavLinkComponent NavigationSystem.Default__NavLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkComponent* UNavLinkComponent::GetDefaultObj()
{
	static class UNavLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkComponent*>(UNavLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkCustomComponent
// (None)

class UClass* UNavLinkCustomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkCustomComponent");

	return Clss;
}


// NavLinkCustomComponent NavigationSystem.Default__NavLinkCustomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkCustomComponent* UNavLinkCustomComponent::GetDefaultObj()
{
	static class UNavLinkCustomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkCustomComponent*>(UNavLinkCustomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavLinkRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkRenderingComponent");

	return Clss;
}


// NavLinkRenderingComponent NavigationSystem.Default__NavLinkRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkRenderingComponent* UNavLinkRenderingComponent::GetDefaultObj()
{
	static class UNavLinkRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkRenderingComponent*>(UNavLinkRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavMeshBoundsVolume
// (Actor)

class UClass* ANavMeshBoundsVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavMeshBoundsVolume");

	return Clss;
}


// NavMeshBoundsVolume NavigationSystem.Default__NavMeshBoundsVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavMeshBoundsVolume* ANavMeshBoundsVolume::GetDefaultObj()
{
	static class ANavMeshBoundsVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavMeshBoundsVolume*>(ANavMeshBoundsVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavMeshRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavMeshRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavMeshRenderingComponent");

	return Clss;
}


// NavMeshRenderingComponent NavigationSystem.Default__NavMeshRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavMeshRenderingComponent* UNavMeshRenderingComponent::GetDefaultObj()
{
	static class UNavMeshRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavMeshRenderingComponent*>(UNavMeshRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavTestRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavTestRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavTestRenderingComponent");

	return Clss;
}


// NavTestRenderingComponent NavigationSystem.Default__NavTestRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavTestRenderingComponent* UNavTestRenderingComponent::GetDefaultObj()
{
	static class UNavTestRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavTestRenderingComponent*>(UNavTestRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastNavMeshDataChunk
// (None)

class UClass* URecastNavMeshDataChunk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastNavMeshDataChunk");

	return Clss;
}


// RecastNavMeshDataChunk NavigationSystem.Default__RecastNavMeshDataChunk
// (Public, ClassDefaultObject, ArchetypeObject)

class URecastNavMeshDataChunk* URecastNavMeshDataChunk::GetDefaultObj()
{
	static class URecastNavMeshDataChunk* Default = nullptr;

	if (!Default)
		Default = static_cast<URecastNavMeshDataChunk*>(URecastNavMeshDataChunk::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavModifierVolume
// (Actor)

class UClass* ANavModifierVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavModifierVolume");

	return Clss;
}


// NavModifierVolume NavigationSystem.Default__NavModifierVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavModifierVolume* ANavModifierVolume::GetDefaultObj()
{
	static class ANavModifierVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavModifierVolume*>(ANavModifierVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      NewAreaClass                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ANavModifierVolume::SetAreaClass(class UClass** NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavModifierVolume", "SetAreaClass");

	Params::ANavModifierVolume_SetAreaClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewAreaClass != nullptr)
		*NewAreaClass = Parms.NewAreaClass;

}


// Class NavigationSystem.NavSystemConfigOverride
// (Actor)

class UClass* ANavSystemConfigOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavSystemConfigOverride");

	return Clss;
}


// NavSystemConfigOverride NavigationSystem.Default__NavSystemConfigOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavSystemConfigOverride* ANavSystemConfigOverride::GetDefaultObj()
{
	static class ANavSystemConfigOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavSystemConfigOverride*>(ANavSystemConfigOverride::StaticClass()->DefaultObject);

	return Default;
}

}


