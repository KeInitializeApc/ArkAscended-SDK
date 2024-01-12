#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
public:
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PlanePosition;                                     // 0x8(0x18)(Edit, ExportObject, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PlaneNormal;                                       // 0x20(0x18)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCreateOtherHalf;                                  // 0x38(0x1)(OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2422[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UProceduralMeshComponent*              OutOtherHalfProcMesh;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EProcMeshSliceCapOption           CapOption;                                         // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2423[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CapMaterial;                                       // 0x50(0x8)(ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
public:
	class UStaticMesh*                           InMesh;                                            // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LODIndex;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SectionIndex;                                      // 0xC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
public:
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        SectionIndex;                                      // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_242A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
public:
	struct FVector                               BoxRadius;                                         // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x28(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x38(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	float                                        GridSpacing;                                       // 0x38(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2433[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWinding;                                          // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2439[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector2D>                     UV1s;                                              // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        GridSpacing;                                       // 0x48(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_243C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        LODIndex;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_243F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UProceduralMeshComponent*              ProcMeshComponent;                                 // 0x10(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2440[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
public:
	TArray<int32>                                Triangles;                                         // 0x0(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	int32                                        Vert0;                                             // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Vert1;                                             // 0x14(0x4)(ConstParm, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Vert2;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Vert3;                                             // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector2D>                     UVs;                                               // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2445[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV1;                                               // 0x38(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV2;                                               // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV3;                                               // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
	bool                                         bSRGBConversion;                                   // 0x88(0x1)(Edit, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2449[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct UProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_244D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct UProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2452[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct UProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2454[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct UProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2459[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV1;                                               // 0x48(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV2;                                               // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV3;                                               // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSRGBConversion;                                   // 0x99(0x1)(Edit, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_245B[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct UProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_245E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2460[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct UProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

}
}


