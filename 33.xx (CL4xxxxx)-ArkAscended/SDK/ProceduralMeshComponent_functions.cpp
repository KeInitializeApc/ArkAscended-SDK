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
// class UProceduralMeshComponent*    InProcMesh                                                       (ConstParm, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PlanePosition                                                    (Edit, ExportObject, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bCreateOtherHalf                                                 (OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EProcMeshSliceCapOption CapOption                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInterface*          CapMaterial                                                      (ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, struct FVector* PlanePosition, const struct FVector& PlaneNormal, bool* bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::UKismetProceduralMeshLibrary_SliceProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.PlaneNormal = PlaneNormal;
	Parms.OutOtherHalfProcMesh = OutOtherHalfProcMesh;
	Parms.CapOption = CapOption;
	Parms.CapMaterial = CapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlanePosition != nullptr)
		*PlanePosition = std::move(Parms.PlanePosition);

	if (bCreateOtherHalf != nullptr)
		*bCreateOtherHalf = Parms.bCreateOtherHalf;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 InMesh                                                           (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              LODIndex                                                         (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (ConstParm, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = BoxRadius;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// float                              GridSpacing                                                      (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32 NumX, int32 NumY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bWinding                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)

TArray<int32> UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
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
// int32                              NumX                                                             (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumY                                                             (Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector2D>           UV1s                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              GridSpacing                                                      (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32 NumX, int32 NumY, const TArray<struct FVector2D>& UV1s)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.UV1s = UV1s;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              LODIndex                                                         (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (ConstParm, ExportObject, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent)
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

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// int32                              Vert0                                                            (ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Vert1                                                            (ConstParm, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Vert2                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Vert3                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

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
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector2D>           UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// bool                               bSRGBConversion                                                  (Edit, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::UpdateMeshSection_LinearColor(TArray<struct FVector>* Normals, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (bSRGBConversion != nullptr)
		*bSRGBConversion = Parms.bSRGBConversion;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UProceduralMeshComponent::UpdateMeshSection(TArray<struct FVector>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bNewVisibility                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV1                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV3                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSRGBConversion                                                  (Edit, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

bool UProceduralMeshComponent::CreateMeshSection_LinearColor(TArray<struct FVector>* Normals, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (bSRGBConversion != nullptr)
		*bSRGBConversion = Parms.bSRGBConversion;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             Vertices                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// TArray<int32>                      Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// TArray<struct FVector>             Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           UV0                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// bool                               bCreateCollision                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UProceduralMeshComponent::CreateMeshSection(TArray<struct FVector>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

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
// TArray<struct FVector>             ConvexVerts                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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


