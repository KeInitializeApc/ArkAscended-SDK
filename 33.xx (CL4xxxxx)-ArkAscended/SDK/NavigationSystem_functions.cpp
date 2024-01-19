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
// class AActor*                      Invoker                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor** Invoker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "UnregisterNavigationInvoker");

	Params::UNavigationSystemV1_UnregisterNavigationInvoker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Invoker != nullptr)
		*Invoker = Parms.Invoker;

}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MaxNumberOfJobs                                                  (BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class ENavDataGatheringModeConfigNewMode                                                          (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class AActor*                      Invoker                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TileGenerationRadius                                             (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TileRemovalRadius                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor** Invoker, float* TileGenerationRadius, float* TileRemovalRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "RegisterNavigationInvoker");

	Params::UNavigationSystemV1_RegisterNavigationInvoker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Invoker != nullptr)
		*Invoker = Parms.Invoker;

	if (TileGenerationRadius != nullptr)
		*TileGenerationRadius = Parms.TileGenerationRadius;

	if (TileRemovalRadius != nullptr)
		*TileRemovalRadius = Parms.TileRemovalRadius;

}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigationEx
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     Extent                                                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::ProjectPointToNavigationEx(class UObject* WorldContext, const struct FVector& Extent, class UClass** FilterClass, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "ProjectPointToNavigationEx");

	Params::UNavigationSystemV1_ProjectPointToNavigationEx_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Extent = Extent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavMeshBoundsVolume*        NavVolume                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume** NavVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "OnNavigationBoundsUpdated");

	Params::UNavigationSystemV1_OnNavigationBoundsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NavVolume != nullptr)
		*NavVolume = Parms.NavVolume;

}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RayStart                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     RayEnd                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     HitLocation                                                      (Edit, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AController*                 Querier                                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::NavigationRaycast(class UObject* WorldContextObject, struct FVector* RayStart, struct FVector* RayEnd, const struct FVector& HitLocation, class UClass** FilterClass, class AController** Querier, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "NavigationRaycast");

	Params::UNavigationSystemV1_NavigationRaycast_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HitLocation = HitLocation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RayStart != nullptr)
		*RayStart = std::move(Parms.RayStart);

	if (RayEnd != nullptr)
		*RayEnd = std::move(Parms.RayEnd);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (Querier != nullptr)
		*Querier = Parms.Querier;

}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class UClass*                      OldArea                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      NewArea                                                          (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject** Object, class UClass** OldArea, class UClass** NewArea, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ReplaceAreaInOctreeData");

	Params::UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	if (OldArea != nullptr)
		*OldArea = Parms.OldArea;

	if (NewArea != nullptr)
		*NewArea = Parms.NewArea;

}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     ProjectedLocation                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     QueryExtent                                                      (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector* ProjectedLocation, class UClass** FilterClass, struct FVector* QueryExtent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ProjectPointToNavigation");

	Params::UNavigationSystemV1_K2_ProjectPointToNavigation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = std::move(Parms.ProjectedLocation);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (QueryExtent != nullptr)
		*QueryExtent = std::move(Parms.QueryExtent);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector* RandomLocation, float Radius, class UClass** FilterClass, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomReachablePointInRadius");

	Params::UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector* RandomLocation, float Radius, class UClass** FilterClass, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomPointInNavigableRadius");

	Params::UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     RandomLocation                                                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, struct FVector* RandomLocation, float Radius, class UClass** FilterClass, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomLocationInNavigableRadius");

	Params::UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "IsNavigationBeingBuiltOrLocked");

	Params::UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::IsNavigationBeingBuilt(class UObject* WorldContextObject, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "IsNavigationBeingBuilt");

	Params::UNavigationSystemV1_IsNavigationBeingBuilt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInMinMaxRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              MinRadius                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MaxRadius                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRandomStream               RandStream                                                       (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathDirection                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DotLimit                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetRandomReachablePointInMinMaxRadius(class UObject* WorldContext, float* MinRadius, float MaxRadius, struct FRandomStream* RandStream, struct FVector* PathDirection, float* DotLimit, class UClass** FilterClass, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetRandomReachablePointInMinMaxRadius");

	Params::UNavigationSystemV1_GetRandomReachablePointInMinMaxRadius_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.MaxRadius = MaxRadius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinRadius != nullptr)
		*MinRadius = Parms.MinRadius;

	if (RandStream != nullptr)
		*RandStream = std::move(Parms.RandStream);

	if (PathDirection != nullptr)
		*PathDirection = std::move(Parms.PathDirection);

	if (DotLimit != nullptr)
		*DotLimit = Parms.DotLimit;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// double                             PathLength                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ENavigationQueryResult  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetPathLength(class UObject* WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, double* PathLength, class UClass** FilterClass, enum class ENavigationQueryResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetPathLength");

	Params::UNavigationSystemV1_GetPathLength_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

	if (PathLength != nullptr)
		*PathLength = Parms.PathLength;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// double                             PathCost                                                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ENavigationQueryResult  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ANavigationData* UNavigationSystemV1::GetPathCost(class UObject* WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, double* PathCost, class UClass** FilterClass, enum class ENavigationQueryResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetPathCost");

	Params::UNavigationSystemV1_GetPathCost_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

	if (PathCost != nullptr)
		*PathCost = Parms.PathCost;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNavigationSystemV1*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject, class UNavigationSystemV1* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetNavigationSystem");

	Params::UNavigationSystemV1_GetNavigationSystem_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PathEnd                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      PathfindingContext                                               (Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UNavigationPath*             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::FindPathToLocationSynchronously(class UObject* WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass, class UNavigationPath* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "FindPathToLocationSynchronously");

	Params::UNavigationSystemV1_FindPathToLocationSynchronously_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

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

}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PathStart                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      GoalActor                                                        (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TetherDistance                                                   (ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      PathfindingContext                                               (Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UNavigationPath*             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationSystemV1::FindPathToActorSynchronously(class UObject* WorldContextObject, struct FVector* PathStart, class AActor* GoalActor, float* TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass, class UNavigationPath* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "FindPathToActorSynchronously");

	Params::UNavigationSystemV1_FindPathToActorSynchronously_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActor = GoalActor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathStart != nullptr)
		*PathStart = std::move(Parms.PathStart);

	if (TetherDistance != nullptr)
		*TetherDistance = Parms.TetherDistance;

	if (PathfindingContext != nullptr)
		*PathfindingContext = Parms.PathfindingContext;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

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
// bool                               bRelevant                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavRelevantComponent", "SetNavigationRelevancy");

	Params::UNavRelevantComponent_SetNavigationRelevancy_Params Parms{};

	Parms.bRelevant = bRelevant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UClass*                      NewAreaClass                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FBox                        Bounds                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      OldArea                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      NewArea                                                          (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReplaceLinks                                                     (ConstParm, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(class UClass** OldArea, class UClass** NewArea, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecastNavMesh", "K2_ReplaceAreaInTileBounds");

	Params::ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OldArea != nullptr)
		*OldArea = Parms.OldArea;

	if (NewArea != nullptr)
		*NewArea = Parms.NewArea;

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsValid(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsValid");

	Params::UNavigationPath_IsValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsStringPulled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsStringPulled");

	Params::UNavigationPath_IsStringPulled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::IsPartial(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsPartial");

	Params::UNavigationPath_IsPartial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetPathLength(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathLength");

	Params::UNavigationPath_GetPathLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetPathCost(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathCost");

	Params::UNavigationPath_GetPathCost_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNavigationPath::GetDebugString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetDebugString");

	Params::UNavigationPath_GetDebugString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENavigationOptionFlag   DoRecalculation                                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class ENavigationOptionFlag UNavigationPath::EnableRecalculationOnInvalidation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableRecalculationOnInvalidation");

	Params::UNavigationPath_EnableRecalculationOnInvalidation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               bShouldDrawDebugData                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                PathColor                                                        (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FLinearColor UNavigationPath::EnableDebugDrawing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableDebugDrawing");

	Params::UNavigationPath_EnableDebugDrawing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UClass*                      NewAreaClass                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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


