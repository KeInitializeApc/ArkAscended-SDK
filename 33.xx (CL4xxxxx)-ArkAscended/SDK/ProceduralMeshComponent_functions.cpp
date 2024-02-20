#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// (None)

class UClass* UKismetProceduralMeshLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetProceduralMeshLibrary");

	return Clss;
}


// KismetProceduralMeshLibrary ProceduralMeshComponent.Default__KismetProceduralMeshLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetProceduralMeshLibrary* UKismetProceduralMeshLibrary::GetDefaultObj()
{
	static class UKismetProceduralMeshLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetProceduralMeshLibrary*>(UKismetProceduralMeshLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     PlanePosition                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               bCreateOtherHalf                                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EProcMeshSliceCapOption CapOption                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UMaterialInterface*          CapMaterial                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FVector UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, bool bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::UKismetProceduralMeshLibrary_SliceProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.PlanePosition = PlanePosition;
	Parms.bCreateOtherHalf = bCreateOtherHalf;
	Parms.OutOtherHalfProcMesh = OutOtherHalfProcMesh;
	Parms.CapOption = CapOption;
	Parms.CapMaterial = CapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 InMesh                                                           (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              LODIndex                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = BoxRadius;
	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              GridSpacing                                                      (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UKismetProceduralMeshLibrary::CreateGridMeshWelded(TArray<int32>* Triangles, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bWinding                                                         (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

int32 UKismetProceduralMeshLibrary::CreateGridMeshTriangles(bool bWinding, TArray<int32>* Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};

	Parms.bWinding = bWinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector2D>           UV1s                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              GridSpacing                                                      (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UKismetProceduralMeshLibrary::CreateGridMeshSplit(TArray<int32>* Triangles, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UVs, const TArray<struct FVector2D>& UV1s)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV1s = UV1s;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              LODIndex                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params Parms{};

	Parms.ProcMeshComponent = ProcMeshComponent;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Vert0                                                            (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Vert1                                                            (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Vert2                                                            (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Vert3                                                            (Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32>* Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");

	Params::UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params Parms{};

	Parms.Vert0 = Vert0;
	Parms.Vert1 = Vert1;
	Parms.Vert2 = Vert2;
	Parms.Vert3 = Vert3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UKismetProceduralMeshLibrary::CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Vertices = Vertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Class ProceduralMeshComponent.ProceduralMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UProceduralMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralMeshComponent");

	return Clss;
}


// ProceduralMeshComponent ProceduralMeshComponent.Default__ProceduralMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralMeshComponent* UProceduralMeshComponent::GetDefaultObj()
{
	static class UProceduralMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralMeshComponent*>(UProceduralMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSRGBConversion                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

TArray<struct FProcMeshTangent> UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.bSRGBConversion = bSRGBConversion;

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<struct FColor>* VertexColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

bool UProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UProceduralMeshComponent::GetNumSections(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::UProceduralMeshComponent_GetNumSections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSRGBConversion                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

TArray<struct FProcMeshTangent> UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, bool bCreateCollision, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.bCreateCollision = bCreateCollision;
	Parms.bSRGBConversion = bSRGBConversion;

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FProcMeshTangent> UProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FColor>* VertexColors, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)

void UProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::UProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

TArray<struct FVector> UProceduralMeshComponent::AddCollisionConvexMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


