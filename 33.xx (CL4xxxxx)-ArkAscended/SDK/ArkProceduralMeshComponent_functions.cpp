#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UArkProceduralMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArkProceduralMeshComponent");

	return Clss;
}


// ArkProceduralMeshComponent ArkProceduralMeshComponent.Default__ArkProceduralMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UArkProceduralMeshComponent* UArkProceduralMeshComponent::GetDefaultObj()
{
	static class UArkProceduralMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UArkProceduralMeshComponent*>(UArkProceduralMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector2f>& UV0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.UV0 = UV0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

bool UArkProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UArkProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UArkProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UArkProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UArkProceduralMeshComponent::GetNumSections(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "GetNumSections");

	Params::UArkProceduralMeshComponent_GetNumSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<struct FVector2f>& UV0, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection");

	Params::UArkProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.UV0 = UV0;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UArkProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearMeshSection");

	Params::UArkProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UArkProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearCollisionConvexMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UArkProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearAllMeshSections");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UArkProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UArkProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};

	Parms.ConvexVerts = ConvexVerts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}

