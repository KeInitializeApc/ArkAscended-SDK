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

// 0x20 (0x20 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DD9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UV;                                                // 0x8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        UVIndex;                                           // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DDF[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class FName                                  SlotName;                                          // 0x4(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        UVIndex;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               HalfExtents;                                       // 0x18(0x18)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPolygonGroupID                       PolygonGroup;                                      // 0x30(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusX;                                   // 0x34(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusX;                                  // 0x38(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusY;                                   // 0x3C(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusY;                                  // 0x40(0x4)(ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusZ;                                   // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusZ;                                  // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E2C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


