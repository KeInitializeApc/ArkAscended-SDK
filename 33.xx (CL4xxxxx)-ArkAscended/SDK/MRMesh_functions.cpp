#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MRMesh.MockDataMeshTrackerComponent
// (SceneComponent)

class UClass* UMockDataMeshTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MockDataMeshTrackerComponent");

	return Clss;
}


// MockDataMeshTrackerComponent MRMesh.Default__MockDataMeshTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMockDataMeshTrackerComponent* UMockDataMeshTrackerComponent::GetDefaultObj()
{
	static class UMockDataMeshTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMockDataMeshTrackerComponent*>(UMockDataMeshTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<float>                      Confidence                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

TArray<int32> UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(TArray<struct FVector>* Normals, TArray<float>* Confidence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MockDataMeshTrackerComponent", "OnMockDataMeshTrackerUpdated__DelegateSignature");

	Params::UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (Confidence != nullptr)
		*Confidence = std::move(Parms.Confidence);

	return Parms.ReturnValue;

}


// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent** InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MockDataMeshTrackerComponent", "DisconnectMRMesh");

	Params::UMockDataMeshTrackerComponent_DisconnectMRMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMRMeshPtr != nullptr)
		*InMRMeshPtr = Parms.InMRMeshPtr;

}


// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent** InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MockDataMeshTrackerComponent", "ConnectMRMesh");

	Params::UMockDataMeshTrackerComponent_ConnectMRMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMRMeshPtr != nullptr)
		*InMRMeshPtr = Parms.InMRMeshPtr;

}


// Class MRMesh.MRMeshBodyHolder
// (None)

class UClass* UMRMeshBodyHolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MRMeshBodyHolder");

	return Clss;
}


// MRMeshBodyHolder MRMesh.Default__MRMeshBodyHolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMRMeshBodyHolder* UMRMeshBodyHolder::GetDefaultObj()
{
	static class UMRMeshBodyHolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMRMeshBodyHolder*>(UMRMeshBodyHolder::StaticClass()->DefaultObject);

	return Default;
}


// Class MRMesh.MRMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMRMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MRMeshComponent");

	return Clss;
}


// MRMeshComponent MRMesh.Default__MRMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMRMeshComponent* UMRMeshComponent::GetDefaultObj()
{
	static class UMRMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMRMeshComponent*>(UMRMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MRMesh.MRMeshComponent.SetWireframeMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UMRMeshComponent::SetWireframeMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "SetWireframeMaterial");

	Params::UMRMeshComponent_SetWireframeMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.SetWireframeColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMRMeshComponent::SetWireframeColor(struct FLinearColor* InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "SetWireframeColor");

	Params::UMRMeshComponent_SetWireframeColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColor != nullptr)
		*InColor = std::move(Parms.InColor);

}


// Function MRMesh.MRMeshComponent.SetUseWireframe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseWireframe                                                    (Edit, BlueprintReadOnly, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMRMeshComponent::SetUseWireframe(bool bUseWireframe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "SetUseWireframe");

	Params::UMRMeshComponent_SetUseWireframe_Params Parms{};

	Parms.bUseWireframe = bUseWireframe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UMRMeshComponent::SetEnableMeshOcclusion(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "SetEnableMeshOcclusion");

	Params::UMRMeshComponent_SetEnableMeshOcclusion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function MRMesh.MRMeshComponent.RequestNavMeshUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMRMeshComponent::RequestNavMeshUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "RequestNavMeshUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MRMeshComponent.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMRMeshComponent::IsConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "IsConnected");

	Params::UMRMeshComponent_IsConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.GetWireframeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UMRMeshComponent::GetWireframeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "GetWireframeColor");

	Params::UMRMeshComponent_GetWireframeColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.GetUseWireframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMRMeshComponent::GetUseWireframe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "GetUseWireframe");

	Params::UMRMeshComponent_GetUseWireframe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMRMeshComponent::GetEnableMeshOcclusion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "GetEnableMeshOcclusion");

	Params::UMRMeshComponent_GetEnableMeshOcclusion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "ForceNavMeshUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MRMeshComponent.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMRMeshComponent::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MRMesh.MeshReconstructorBase
// (None)

class UClass* UMeshReconstructorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReconstructorBase");

	return Clss;
}


// MeshReconstructorBase MRMesh.Default__MeshReconstructorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshReconstructorBase* UMeshReconstructorBase::GetDefaultObj()
{
	static class UMeshReconstructorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshReconstructorBase*>(UMeshReconstructorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StopReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "StopReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StartReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "StartReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::PauseReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "PauseReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionStarted");

	Params::UMeshReconstructorBase_IsReconstructionStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionPaused");

	Params::UMeshReconstructorBase_IsReconstructionPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (Native, Public)
// Parameters:

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "DisconnectMRMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (Native, Public)
// Parameters:
// class UMRMeshComponent*            Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMRMeshComponent* UMeshReconstructorBase::ConnectMRMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "ConnectMRMesh");

	Params::UMeshReconstructorBase_ConnectMRMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


