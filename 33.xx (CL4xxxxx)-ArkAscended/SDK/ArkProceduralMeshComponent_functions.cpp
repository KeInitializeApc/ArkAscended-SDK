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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(const TArray<struct FVector3f>& Vertices, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::UpdateMeshSection(const TArray<struct FVector3f>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::CreateMeshSection_LinearColor(const TArray<struct FVector3f>& Vertices, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool* bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCreateCollision != nullptr)
		*bCreateCollision = Parms.bCreateCollision;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)

TArray<struct FVector2f> UArkProceduralMeshComponent::CreateMeshSection(const TArray<struct FVector3f>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool* bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection");

	Params::UArkProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCreateCollision != nullptr)
		*bCreateCollision = Parms.bCreateCollision;

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// TArray<struct FVector>             ConvexVerts                                                      (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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


