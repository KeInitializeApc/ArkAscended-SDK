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

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
struct UGizmoBaseComponent_UpdateWorldLocalState_Params
{
public:
	bool                                         bWorldIn;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
struct UGizmoBaseComponent_UpdateHoverState_Params
{
public:
	bool                                         bHoveringIn;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
struct IGizmoTransformSource_SetTransform_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x60)(Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
struct IGizmoTransformSource_GetTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
struct IGizmoAxisSource_HasTangentVectors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
struct IGizmoAxisSource_GetTangentVectors_Params
{
public:
	struct FVector                               TangentXOut;                                       // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               TangentYOut;                                       // 0x18(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
struct IGizmoAxisSource_GetOrigin_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
struct IGizmoAxisSource_GetDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
struct IGizmoClickTarget_UpdateInteractingState_Params
{
public:
	bool                                         bInteracting;                                      // 0x0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
struct IGizmoClickTarget_UpdateHoverState_Params
{
public:
	bool                                         bHovering;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
struct IGizmoClickMultiTarget_UpdateInteractingState_Params
{
public:
	bool                                         bInteracting;                                      // 0x0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8F4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
struct IGizmoClickMultiTarget_UpdateHoverState_Params
{
public:
	bool                                         bHovering;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8F8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
struct IGizmoClickMultiTarget_UpdateHittableState_Params
{
public:
	bool                                         bHittable;                                         // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8FD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
struct IGizmoRenderMultiTarget_UpdateVisibilityState_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_908[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
struct IGizmoFloatParameterSource_SetParameter_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
struct IGizmoFloatParameterSource_GetParameter_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
struct IGizmoVec2ParameterSource_SetParameter_Params
{
public:
	struct FVector2D                             NewValue;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
struct IGizmoVec2ParameterSource_GetParameter_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


