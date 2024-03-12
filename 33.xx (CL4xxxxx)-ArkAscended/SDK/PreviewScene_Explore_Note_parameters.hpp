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

// 0x4 (0x4 - 0x0)
// Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.NotifyPreviewSceneUpdated
struct APreviewScene_Explore_Note_C_NotifyPreviewSceneUpdated_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ExecuteUbergraph_PreviewScene_Explore_Note
struct APreviewScene_Explore_Note_C_ExecuteUbergraph_PreviewScene_Explore_Note_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E7F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_1E82[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTime;                            // 0x14(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x18(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x20(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


