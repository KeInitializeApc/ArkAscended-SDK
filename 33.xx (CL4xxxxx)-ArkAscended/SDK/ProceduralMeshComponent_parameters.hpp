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
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               PlanePosition;                                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               PlaneNormal;                                       // 0x20(0x18)(ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         bCreateOtherHalf;                                  // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_35E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UProceduralMeshComponent*              OutOtherHalfProcMesh;                              // 0x40(0x8)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EProcMeshSliceCapOption           CapOption;                                         // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_35F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CapMaterial;                                       // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
public:
	class UStaticMesh*                           InMesh;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        LODIndex;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SectionIndex;                                      // 0xC(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
public:
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SectionIndex;                                      // 0x8(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
public:
	struct FVector                               BoxRadius;                                         // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x28(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x38(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UVs;                                               // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        GridSpacing;                                       // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bWinding;                                          // 0x8(0x1)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector2D>                     UV1s;                                              // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        GridSpacing;                                       // 0x48(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        LODIndex;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3C9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UProceduralMeshComponent*              ProcMeshComponent;                                 // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x18(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3CB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
public:
	TArray<int32>                                Triangles;                                         // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Vert0;                                             // 0x10(0x4)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Vert1;                                             // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Vert2;                                             // 0x18(0x4)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Vert3;                                             // 0x1C(0x4)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector2D>                     UVs;                                               // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV1;                                               // 0x38(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV2;                                               // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV3;                                               // 0x58(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSRGBConversion;                                   // 0x88(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3DC[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct UProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct UProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3EB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct UProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F0[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct UProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_403[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV1;                                               // 0x48(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV2;                                               // 0x58(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV3;                                               // 0x68(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSRGBConversion;                                   // 0x99(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_406[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct UProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_412[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_415[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct UProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

}
}


