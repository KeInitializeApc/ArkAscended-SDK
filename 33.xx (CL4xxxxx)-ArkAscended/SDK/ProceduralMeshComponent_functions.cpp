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
// class UProceduralMeshComponent*    InProcMesh                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     PlanePosition                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               bCreateOtherHalf                                                 (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (ConstParm, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EProcMeshSliceCapOption CapOption                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMaterialInterface*          CapMaterial                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UStaticMesh*                 InMesh                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              LODIndex                                                         (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.InMesh = InMesh;
	Parms.Vertices = Vertices;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.Vertices = Vertices;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = BoxRadius;
	Parms.Vertices = Vertices;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              GridSpacing                                                      (Edit, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::CreateGridMeshWelded(const TArray<struct FVector>& Vertices, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bWinding                                                         (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

TArray<int32> UKismetProceduralMeshLibrary::CreateGridMeshTriangles(bool bWinding)
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

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector2D>           UV1s                                                             (Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              GridSpacing                                                      (Edit, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::CreateGridMeshSplit(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV1s, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV1s = UV1s;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// int32                              LODIndex                                                         (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)

int32 UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent, bool* bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params Parms{};

	Parms.ProcMeshComponent = ProcMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCreateCollision != nullptr)
		*bCreateCollision = Parms.bCreateCollision;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Vert0                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Vert1                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Vert2                                                            (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Vert3                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<int32> UKismetProceduralMeshLibrary::ConvertQuadToTriangles(int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
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

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector2D>           UVs                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector> UKismetProceduralMeshLibrary::CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSRGBConversion                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::UpdateMeshSection_LinearColor(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bSRGBConversion = bSRGBConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::UpdateMeshSection(const TArray<struct FVector>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UProceduralMeshComponent::SetMeshSectionVisible(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UProceduralMeshComponent::IsMeshSectionVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UProceduralMeshComponent::GetNumSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::UProceduralMeshComponent_GetNumSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               bSRGBConversion                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::CreateMeshSection_LinearColor(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bCreateCollision, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bSRGBConversion = bSRGBConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCreateCollision != nullptr)
		*bCreateCollision = Parms.bCreateCollision;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCreateCollision                                                 (BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::CreateMeshSection(const TArray<struct FVector>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UProceduralMeshComponent::ClearMeshSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::UProceduralMeshComponent_ClearMeshSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// TArray<struct FVector>             ConvexVerts                                                      (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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


