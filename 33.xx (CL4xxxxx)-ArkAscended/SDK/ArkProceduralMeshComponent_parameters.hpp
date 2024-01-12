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
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5A3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x38(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
struct UArkProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5AA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
struct UArkProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5AB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
struct UArkProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5AD[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
struct UArkProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
struct UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5B4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV1;                                               // 0x48(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV2;                                               // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV3;                                               // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B6[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
struct UArkProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5BA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
struct UArkProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
struct UArkProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

}
}


