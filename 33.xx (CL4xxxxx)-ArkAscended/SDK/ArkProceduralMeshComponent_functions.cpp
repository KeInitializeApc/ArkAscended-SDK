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
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<struct FVector2f>* UV3, TArray<struct FLinearColor>* VertexColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UV3 != nullptr)
		*UV3 = std::move(Parms.UV3);

	if (VertexColors != nullptr)
		*VertexColors = std::move(Parms.VertexColors);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector3f>           Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<struct FColor>* VertexColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexColors != nullptr)
		*VertexColors = std::move(Parms.VertexColors);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

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
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UArkProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UArkProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UArkProceduralMeshComponent::GetNumSections(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "GetNumSections");

	Params::UArkProceduralMeshComponent_GetNumSections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV1                                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV3                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2f>* UV3, TArray<struct FLinearColor>* VertexColors, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UV3 != nullptr)
		*UV3 = std::move(Parms.UV3);

	if (VertexColors != nullptr)
		*VertexColors = std::move(Parms.VertexColors);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector3f>           Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector3f>           Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2f>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FArkProcMeshTangent> UArkProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<int32>* Triangles, TArray<struct FColor>* VertexColors, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection");

	Params::UArkProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (VertexColors != nullptr)
		*VertexColors = std::move(Parms.VertexColors);

	return Parms.ReturnValue;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)

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
// TArray<struct FVector>             ConvexVerts                                                      (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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


