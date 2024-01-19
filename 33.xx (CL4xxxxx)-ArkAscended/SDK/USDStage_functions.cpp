#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class USDStage.UsdPrimTwin
// (None)

class UClass* UUsdPrimTwin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdPrimTwin");

	return Clss;
}


// UsdPrimTwin USDStage.Default__UsdPrimTwin
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdPrimTwin* UUsdPrimTwin::GetDefaultObj()
{
	static class UUsdPrimTwin* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdPrimTwin*>(UUsdPrimTwin::StaticClass()->DefaultObject);

	return Default;
}


// Class USDStage.UsdStageActor
// (Actor)

class UClass* AUsdStageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdStageActor");

	return Clss;
}


// UsdStageActor USDStage.Default__UsdStageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AUsdStageActor* AUsdStageActor::GetDefaultObj()
{
	static class AUsdStageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsdStageActor*>(AUsdStageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function USDStage.UsdStageActor.SetTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

void AUsdStageActor::SetTime(float* InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetTime");

	Params::AUsdStageActor_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = Parms.InTime;

}


// Function USDStage.UsdStageActor.SetRootMotionHandling
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdRootMotionHandling  NewHandlingStrategy                                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetRootMotionHandling(enum class EUsdRootMotionHandling* NewHandlingStrategy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootMotionHandling");

	Params::AUsdStageActor_SetRootMotionHandling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewHandlingStrategy != nullptr)
		*NewHandlingStrategy = Parms.NewHandlingStrategy;

}


// Function USDStage.UsdStageActor.SetRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RootFilePath                                                     (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetRootLayer(class FString* RootFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootLayer");

	Params::AUsdStageActor_SetRootLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootFilePath != nullptr)
		*RootFilePath = std::move(Parms.RootFilePath);

}


// Function USDStage.UsdStageActor.SetRenderContext
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewRenderContext                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetRenderContext(class FName* NewRenderContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRenderContext");

	Params::AUsdStageActor_SetRenderContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewRenderContext != nullptr)
		*NewRenderContext = Parms.NewRenderContext;

}


// Function USDStage.UsdStageActor.SetPurposesToLoad
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPurposesToLoad                                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetPurposesToLoad(int32* NewPurposesToLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetPurposesToLoad");

	Params::AUsdStageActor_SetPurposesToLoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewPurposesToLoad != nullptr)
		*NewPurposesToLoad = Parms.NewPurposesToLoad;

}


// Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewNaniteTriangleThreshold                                       (EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetNaniteTriangleThreshold(int32* NewNaniteTriangleThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetNaniteTriangleThreshold");

	Params::AUsdStageActor_SetNaniteTriangleThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewNaniteTriangleThreshold != nullptr)
		*NewNaniteTriangleThreshold = Parms.NewNaniteTriangleThreshold;

}


// Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMerge                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetMergeIdenticalMaterialSlots(bool* bMerge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMergeIdenticalMaterialSlots");

	Params::AUsdStageActor_SetMergeIdenticalMaterialSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bMerge != nullptr)
		*bMerge = Parms.bMerge;

}


// Function USDStage.UsdStageActor.SetMaterialPurpose
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewMaterialPurpose                                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetMaterialPurpose(class FName* NewMaterialPurpose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMaterialPurpose");

	Params::AUsdStageActor_SetMaterialPurpose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewMaterialPurpose != nullptr)
		*NewMaterialPurpose = Parms.NewMaterialPurpose;

}


// Function USDStage.UsdStageActor.SetKindsToCollapse
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewKindsToCollapse                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetKindsToCollapse(int32* NewKindsToCollapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetKindsToCollapse");

	Params::AUsdStageActor_SetKindsToCollapse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewKindsToCollapse != nullptr)
		*NewKindsToCollapse = Parms.NewKindsToCollapse;

}


// Function USDStage.UsdStageActor.SetIsolatedRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IsolatedStageRootLayer                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetIsolatedRootLayer(class FString* IsolatedStageRootLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetIsolatedRootLayer");

	Params::AUsdStageActor_SetIsolatedRootLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsolatedStageRootLayer != nullptr)
		*IsolatedStageRootLayer = std::move(Parms.IsolatedStageRootLayer);

}


// Function USDStage.UsdStageActor.SetInterpolationType
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInterpolationType   NewType                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void AUsdStageActor::SetInterpolationType(enum class EUsdInterpolationType* NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInterpolationType");

	Params::AUsdStageActor_SetInterpolationType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewType != nullptr)
		*NewType = Parms.NewType;

}


// Function USDStage.UsdStageActor.SetInitialLoadSet
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInitialLoadSet      NewLoadSet                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetInitialLoadSet(enum class EUsdInitialLoadSet* NewLoadSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInitialLoadSet");

	Params::AUsdStageActor_SetInitialLoadSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewLoadSet != nullptr)
		*NewLoadSet = Parms.NewLoadSet;

}


// Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCollapse                                                        (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetCollapseTopLevelPointInstancers(bool* bCollapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetCollapseTopLevelPointInstancers");

	Params::AUsdStageActor_SetCollapseTopLevelPointInstancers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCollapse != nullptr)
		*bCollapse = Parms.bCollapse;

}


// Function USDStage.UsdStageActor.SetAssetCache
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UUsdAssetCache2*             NewCache                                                         (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AUsdStageActor::SetAssetCache(class UUsdAssetCache2** NewCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetAssetCache");

	Params::AUsdStageActor_SetAssetCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewCache != nullptr)
		*NewCache = Parms.NewCache;

}


// Function USDStage.UsdStageActor.NewStage
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void AUsdStageActor::NewStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "NewStage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetTime");

	Params::AUsdStageActor_GetTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetSourcePrimPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetSourcePrimPath(class UObject** Object, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetSourcePrimPath");

	Params::AUsdStageActor_GetSourcePrimPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

}


// Function USDStage.UsdStageActor.GetLevelSequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetLevelSequence(class ULevelSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetLevelSequence");

	Params::AUsdStageActor_GetLevelSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetIsolatedRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetIsolatedRootLayer(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetIsolatedRootLayer");

	Params::AUsdStageActor_GetIsolatedRootLayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetGeneratedComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PrimPath                                                         (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USceneComponent*             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetGeneratedComponent(class FString* PrimPath, class USceneComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetGeneratedComponent");

	Params::AUsdStageActor_GetGeneratedComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimPath != nullptr)
		*PrimPath = std::move(Parms.PrimPath);

}


// Function USDStage.UsdStageActor.GetGeneratedAssets
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PrimPath                                                         (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AUsdStageActor::GetGeneratedAssets(class FString* PrimPath, const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetGeneratedAssets");

	Params::AUsdStageActor_GetGeneratedAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimPath != nullptr)
		*PrimPath = std::move(Parms.PrimPath);

}


// Class USDStage.UsdTransactor
// (None)

class UClass* UUsdTransactor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdTransactor");

	return Clss;
}


// UsdTransactor USDStage.Default__UsdTransactor
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdTransactor* UUsdTransactor::GetDefaultObj()
{
	static class UUsdTransactor* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdTransactor*>(UUsdTransactor::StaticClass()->DefaultObject);

	return Default;
}

}


