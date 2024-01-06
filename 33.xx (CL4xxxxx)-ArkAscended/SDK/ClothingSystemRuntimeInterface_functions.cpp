#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// (None)

class UClass* UClothingAssetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetBase");

	return Clss;
}


// ClothingAssetBase ClothingSystemRuntimeInterface.Default__ClothingAssetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetBase* UClothingAssetBase::GetDefaultObj()
{
	static class UClothingAssetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetBase*>(UClothingAssetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothConfigBase
// (None)

class UClass* UClothConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothConfigBase");

	return Clss;
}


// ClothConfigBase ClothingSystemRuntimeInterface.Default__ClothConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothConfigBase* UClothConfigBase::GetDefaultObj()
{
	static class UClothConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothConfigBase*>(UClothConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// (None)

class UClass* UClothSharedSimConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothSharedSimConfigBase");

	return Clss;
}


// ClothSharedSimConfigBase ClothingSystemRuntimeInterface.Default__ClothSharedSimConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothSharedSimConfigBase* UClothSharedSimConfigBase::GetDefaultObj()
{
	static class UClothSharedSimConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothSharedSimConfigBase*>(UClothSharedSimConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// (None)

class UClass* UClothingSimulationFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationFactory");

	return Clss;
}


// ClothingSimulationFactory ClothingSystemRuntimeInterface.Default__ClothingSimulationFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationFactory* UClothingSimulationFactory::GetDefaultObj()
{
	static class UClothingSimulationFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationFactory*>(UClothingSimulationFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingInteractor
// (None)

class UClass* UClothingInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingInteractor");

	return Clss;
}


// ClothingInteractor ClothingSystemRuntimeInterface.Default__ClothingInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingInteractor* UClothingInteractor::GetDefaultObj()
{
	static class UClothingInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingInteractor*>(UClothingInteractor::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// (None)

class UClass* UClothingSimulationInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationInteractor");

	return Clss;
}


// ClothingSimulationInteractor ClothingSystemRuntimeInterface.Default__ClothingSimulationInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationInteractor* UClothingSimulationInteractor::GetDefaultObj()
{
	static class UClothingSimulationInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationInteractor*>(UClothingSimulationInteractor::StaticClass()->DefaultObject);

	return Default;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSubsteps                                                      (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UClothingSimulationInteractor::SetNumSubsteps(int32* NumSubsteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumSubsteps");

	Params::UClothingSimulationInteractor_SetNumSubsteps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumSubsteps != nullptr)
		*NumSubsteps = Parms.NumSubsteps;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumIterations                                                    (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UClothingSimulationInteractor::SetNumIterations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumIterations");

	Params::UClothingSimulationInteractor_SetNumIterations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              MaxNumIterations                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UClothingSimulationInteractor::SetMaxNumIterations(int32* MaxNumIterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetMaxNumIterations");

	Params::UClothingSimulationInteractor_SetMaxNumIterations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaxNumIterations != nullptr)
		*MaxNumIterations = Parms.MaxNumIterations;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float* InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStiffness != nullptr)
		*InStiffness = Parms.InStiffness;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetSimulationTime(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetSimulationTime");

	Params::UClothingSimulationInteractor_GetSimulationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetNumSubsteps(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumSubsteps");

	Params::UClothingSimulationInteractor_GetNumSubsteps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetNumKinematicParticles(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumKinematicParticles");

	Params::UClothingSimulationInteractor_GetNumKinematicParticles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetNumIterations(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumIterations");

	Params::UClothingSimulationInteractor_GetNumIterations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetNumDynamicParticles(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumDynamicParticles");

	Params::UClothingSimulationInteractor_GetNumDynamicParticles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetNumCloths(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumCloths");

	Params::UClothingSimulationInteractor_GetNumCloths_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ClothingAssetName                                                (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UClothingInteractor*         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UClothingSimulationInteractor::GetClothingInteractor(class FString* ClothingAssetName, class UClothingInteractor** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetClothingInteractor");

	Params::UClothingSimulationInteractor_GetClothingInteractor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClothingAssetName != nullptr)
		*ClothingAssetName = std::move(Parms.ClothingAssetName);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UClothingSimulationInteractor::EnableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");

	Params::UClothingSimulationInteractor_EnableGravityOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// (None)

class UClass* UClothPhysicalMeshDataBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothPhysicalMeshDataBase_Legacy");

	return Clss;
}


// ClothPhysicalMeshDataBase_Legacy ClothingSystemRuntimeInterface.Default__ClothPhysicalMeshDataBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothPhysicalMeshDataBase_Legacy* UClothPhysicalMeshDataBase_Legacy::GetDefaultObj()
{
	static class UClothPhysicalMeshDataBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothPhysicalMeshDataBase_Legacy*>(UClothPhysicalMeshDataBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}

}


