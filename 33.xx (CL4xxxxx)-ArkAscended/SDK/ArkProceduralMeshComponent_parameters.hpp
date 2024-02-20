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

// 0x88 (0x88 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_113F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x38(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x58(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
struct UArkProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1150[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
struct UArkProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1162[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
struct UArkProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1165[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
struct UArkProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
struct UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1172[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x48(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x58(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x68(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1174[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
struct UArkProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1185[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_118B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
struct UArkProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
struct UArkProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

}
}


