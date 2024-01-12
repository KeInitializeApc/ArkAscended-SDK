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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(TArray<struct FVector3f>* Normals, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::UpdateMeshSection(TArray<struct FVector3f>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

int32 UArkProceduralMeshComponent::SetMeshSectionVisible(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UArkProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UArkProceduralMeshComponent::IsMeshSectionVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UArkProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UArkProceduralMeshComponent::GetNumSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "GetNumSections");

	Params::UArkProceduralMeshComponent_GetNumSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UArkProceduralMeshComponent::CreateMeshSection_LinearColor(TArray<struct FVector3f>* Normals, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UArkProceduralMeshComponent::CreateMeshSection(TArray<struct FVector3f>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection");

	Params::UArkProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UArkProceduralMeshComponent::ClearMeshSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearMeshSection");

	Params::UArkProceduralMeshComponent_ClearMeshSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// TArray<struct FVector>             ConvexVerts                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<struct FVector> UArkProceduralMeshComponent::AddCollisionConvexMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UArkProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


