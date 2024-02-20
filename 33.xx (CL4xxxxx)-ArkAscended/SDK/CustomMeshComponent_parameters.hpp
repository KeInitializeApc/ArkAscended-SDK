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

// 0x18 (0x18 - 0x0)
// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct UCustomMeshComponent_SetCustomMeshTriangles_Params
{
public:
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1775[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
public:
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

}
}


