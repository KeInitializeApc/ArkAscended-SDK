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
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float AUsdStageActor::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetTime");

	Params::AUsdStageActor_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetRootMotionHandling
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdRootMotionHandling  NewHandlingStrategy                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EUsdRootMotionHandling AUsdStageActor::SetRootMotionHandling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootMotionHandling");

	Params::AUsdStageActor_SetRootMotionHandling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RootFilePath                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FString AUsdStageActor::SetRootLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootLayer");

	Params::AUsdStageActor_SetRootLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetRenderContext
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewRenderContext                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FName AUsdStageActor::SetRenderContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRenderContext");

	Params::AUsdStageActor_SetRenderContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetPurposesToLoad
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPurposesToLoad                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

int32 AUsdStageActor::SetPurposesToLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetPurposesToLoad");

	Params::AUsdStageActor_SetPurposesToLoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewNaniteTriangleThreshold                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

int32 AUsdStageActor::SetNaniteTriangleThreshold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetNaniteTriangleThreshold");

	Params::AUsdStageActor_SetNaniteTriangleThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMerge                                                           (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool AUsdStageActor::SetMergeIdenticalMaterialSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMergeIdenticalMaterialSlots");

	Params::AUsdStageActor_SetMergeIdenticalMaterialSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetMaterialPurpose
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewMaterialPurpose                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FName AUsdStageActor::SetMaterialPurpose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMaterialPurpose");

	Params::AUsdStageActor_SetMaterialPurpose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetKindsToCollapse
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewKindsToCollapse                                               (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

int32 AUsdStageActor::SetKindsToCollapse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetKindsToCollapse");

	Params::AUsdStageActor_SetKindsToCollapse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetIsolatedRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IsolatedStageRootLayer                                           (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FString AUsdStageActor::SetIsolatedRootLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetIsolatedRootLayer");

	Params::AUsdStageActor_SetIsolatedRootLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetInterpolationType
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInterpolationType   NewType                                                          (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)

void AUsdStageActor::SetInterpolationType(enum class EUsdInterpolationType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInterpolationType");

	Params::AUsdStageActor_SetInterpolationType_Params Parms{};

	Parms.NewType = NewType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetInitialLoadSet
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInitialLoadSet      NewLoadSet                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EUsdInitialLoadSet AUsdStageActor::SetInitialLoadSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInitialLoadSet");

	Params::AUsdStageActor_SetInitialLoadSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCollapse                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool AUsdStageActor::SetCollapseTopLevelPointInstancers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetCollapseTopLevelPointInstancers");

	Params::AUsdStageActor_SetCollapseTopLevelPointInstancers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.SetAssetCache
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UUsdAssetCache2*             NewCache                                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class UUsdAssetCache2* AUsdStageActor::SetAssetCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetAssetCache");

	Params::AUsdStageActor_SetAssetCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class ULevelSequence*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FString                      PrimPath                                                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class USceneComponent*             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString AUsdStageActor::GetGeneratedComponent(class USceneComponent* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function USDStage.UsdStageActor.GetGeneratedAssets
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PrimPath                                                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString AUsdStageActor::GetGeneratedAssets(const TArray<class UObject*>& ReturnValue)
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

	return Parms.ReturnValue;

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


