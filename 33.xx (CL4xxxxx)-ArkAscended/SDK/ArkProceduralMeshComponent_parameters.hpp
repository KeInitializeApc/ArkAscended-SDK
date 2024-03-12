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
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14D2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x38(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
struct UArkProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
struct UArkProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14FC[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
struct UArkProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1505[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
struct UArkProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
struct UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1530[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x48(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1536[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
struct UArkProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1545[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1549[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
struct UArkProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
struct UArkProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


