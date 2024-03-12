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
	double                                       NewIntensity;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
struct APreviewScene_Base_C_SetDebugLightRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0x18)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
struct APreviewScene_Base_C_UpdateFloorLocation_Params
{
public:
	bool                                         IsFemale;                                          // 0x0(0x1)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
struct APreviewScene_Base_C_NotifySetupPreviewScene_Params
{
public:
	class UMeshComponent*                        ForMeshComp;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class USceneComponent*>               ForChildComps;                                     // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
struct APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x15C (0x15C - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
struct APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3842[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x20(0x18)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x38(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x5C(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3846[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        K2Node_Event_ForMeshComp;                          // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class USceneComponent*>               K2Node_Event_ForChildComps;                        // 0x68(0x10)(BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x78(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x80(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3847[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x90(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x94(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x99(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3848[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0xA0(0x60)(Edit, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x100(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x118(0x18)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x130(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x148(0x8)(Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x150(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast; // 0x154(0x4)(Edit, ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast; // 0x158(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


