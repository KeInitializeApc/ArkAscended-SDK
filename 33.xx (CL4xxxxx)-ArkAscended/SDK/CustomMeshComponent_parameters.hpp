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
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_480[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
public:
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
};

}
}


