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
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_2BD4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UV;                                                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	int32                                        UVIndex;                                           // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_2BD5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	class FName                                  SlotName;                                          // 0x4(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	int32                                        UVIndex;                                           // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               HalfExtents;                                       // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPolygonGroupID                       PolygonGroup;                                      // 0x30(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusX;                                   // 0x34(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusX;                                  // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusY;                                   // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusY;                                  // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_PlusZ;                                   // 0x44(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            PolygonID_MinusZ;                                  // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BEB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


