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

// 0x8 (0x8 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
struct APreviewScene_Base_C_SetDebugLightIntensity_Params
{
public:
	double                                       NewIntensity;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
struct APreviewScene_Base_C_SetDebugLightRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
struct APreviewScene_Base_C_UpdateFloorLocation_Params
{
public:
	bool                                         IsFemale;                                          // 0x0(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
struct APreviewScene_Base_C_NotifySetupPreviewScene_Params
{
public:
	class UMeshComponent*                        ForMeshComp;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class USceneComponent*>               ForChildComps;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
struct APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x15C (0x15C - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
struct APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3866[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x20(0x18)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x38(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x58(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x5C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3868[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        K2Node_Event_ForMeshComp;                          // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class USceneComponent*>               K2Node_Event_ForChildComps;                        // 0x68(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x78(0x8)(ConstParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8C(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3869[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x90(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x94(0x4)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x99(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_386B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0xA0(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x100(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x118(0x18)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x130(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x148(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x150(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast; // 0x154(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast; // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

}
}


