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
// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
struct URigHierarchy_UnsetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.UnsetCurveValue
struct URigHierarchy_UnsetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B74[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToWorldSpace
struct URigHierarchy_SwitchToWorldSpace_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B87[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SwitchToParent
struct URigHierarchy_SwitchToParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x18(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B95[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToDefaultParent
struct URigHierarchy_SwitchToDefaultParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BC4[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SortKeys
struct URigHierarchy_SortKeys_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorMetadata
struct URigHierarchy_SetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BD4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InValue;                                           // 0x18(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BD7[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
struct URigHierarchy_SetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BDF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformMetadata
struct URigHierarchy_SetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE8[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InValue;                                           // 0x20(0x60)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x80(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BEA[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
struct URigHierarchy_SetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BF4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BF5[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetTag
struct URigHierarchy_SetTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InTag;                                             // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BFF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorMetadata
struct URigHierarchy_SetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C04[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              InValue;                                           // 0x18(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C05[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
struct URigHierarchy_SetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C0F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRotator>                      InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C11[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
struct URigHierarchy_SetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InValue;                                           // 0x14(0xC)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C17[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
struct URigHierarchy_SetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C1C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C1D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatMetadata
struct URigHierarchy_SetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C2C[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InValue;                                           // 0x20(0x20)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C2D[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
struct URigHierarchy_SetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C31[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FQuat>                         InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C33[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
struct URigHierarchy_SetPose_ForBlueprint_Params
{
public:
	struct FRigPose                              InPose;                                            // 0x0(0x70)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeightArray
struct URigHierarchy_SetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C38[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementWeight>             InWeights;                                         // 0x10(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x20(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x22(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C39[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeight
struct URigHierarchy_SetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FRigElementWeight                     InWeight;                                          // 0x18(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x24(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x25(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x26(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C3E[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SetNameMetadata
struct URigHierarchy_SetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InValue;                                           // 0x14(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C48[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetNameArrayMetadata
struct URigHierarchy_SetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C50[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C51[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
struct URigHierarchy_SetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C59[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C5B[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransform
struct URigHierarchy_SetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C6B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C6E[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorMetadata
struct URigHierarchy_SetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x14(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x24(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C80[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
struct URigHierarchy_SetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C86[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLinearColor>                  InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C87[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetInt32Metadata
struct URigHierarchy_SetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InValue;                                           // 0x14(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C95[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
struct URigHierarchy_SetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CA2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CA3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
struct URigHierarchy_SetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CA9[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CAB[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransform
struct URigHierarchy_SetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CB3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CB7[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetFloatMetadata
struct URigHierarchy_SetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InValue;                                           // 0x14(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CBF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
struct URigHierarchy_SetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CC5[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValueByIndex
struct URigHierarchy_SetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InValue;                                           // 0x4(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CCB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValue
struct URigHierarchy_SetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InValue;                                           // 0xC(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD3[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
struct URigHierarchy_SetControlVisibilityByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bVisibility;                                       // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD7[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibility
struct URigHierarchy_SetControlVisibility_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bVisibility;                                       // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CDB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.SetControlValueByIndex
struct URigHierarchy_SetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigControlValue                      InValue;                                           // 0x4(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ERigControlValueType              InValueType;                                       // 0x88(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x89(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x8A(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CE2[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.SetControlValue
struct URigHierarchy_SetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigControlValue                      InValue;                                           // 0xC(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ERigControlValueType              InValueType;                                       // 0x90(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x91(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x92(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CEB[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
struct URigHierarchy_SetControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CEF[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF0[0xE];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransform
struct URigHierarchy_SetControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_CFA[0xE];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C0 (0x1C0 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
struct URigHierarchy_SetControlSettingsByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D00[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   InSettings;                                        // 0x8(0x1B0)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x1B8(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bForce;                                            // 0x1B9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x1BA(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D02[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettings
struct URigHierarchy_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D0B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B0)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x1C0(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bForce;                                            // 0x1C1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x1C2(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D0D[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
struct URigHierarchy_SetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D19[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              InValue;                                           // 0x8(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInitial;                                          // 0x20(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFixEulerFlips;                                    // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D1B[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotator
struct URigHierarchy_SetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D24[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              InValue;                                           // 0x10(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInitial;                                          // 0x28(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFixEulerFlips;                                    // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D25[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
struct URigHierarchy_SetControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D2D[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D30[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransform
struct URigHierarchy_SetControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D35[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x70(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D36[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolMetadata
struct URigHierarchy_SetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         InValue;                                           // 0x14(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x15(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D3C[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
struct URigHierarchy_SetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D46[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<bool>                                 InValue;                                           // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D48[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SendAutoKeyEvent
struct URigHierarchy_SendAutoKeyEvent_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InOffsetInSeconds;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAsynchronous;                                     // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D52[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.ResetPoseToInitial
struct URigHierarchy_ResetPoseToInitial_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.RemoveMetadata
struct URigHierarchy_RemoveMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D60[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.RemoveAllMetadata
struct URigHierarchy_RemoveAllMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D63[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.RigHierarchy.Num
struct URigHierarchy_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
struct URigHierarchy_MakeControlValueFromVector2D_Params
{
public:
	struct FVector2D                             InValue;                                           // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D68[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector
struct URigHierarchy_MakeControlValueFromVector_Params
{
public:
	struct FVector                               InValue;                                           // 0x0(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D6B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
struct URigHierarchy_MakeControlValueFromTransformNoScale_Params
{
public:
	struct FTransformNoScale                     InValue;                                           // 0x0(0x40)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x40(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D70[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
struct URigHierarchy_MakeControlValueFromTransform_Params
{
public:
	struct FTransform                            InValue;                                           // 0x0(0x60)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x60(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D74[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
struct URigHierarchy_MakeControlValueFromRotator_Params
{
public:
	struct FRotator                              InValue;                                           // 0x0(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D77[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromInt
struct URigHierarchy_MakeControlValueFromInt_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
struct URigHierarchy_MakeControlValueFromFloat_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
struct URigHierarchy_MakeControlValueFromEulerTransform_Params
{
public:
	struct FEulerTransform                       InValue;                                           // 0x0(0x48)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      ReturnValue;                                       // 0x48(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D82[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromBool
struct URigHierarchy_MakeControlValueFromBool_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D8E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsValidIndex
struct URigHierarchy_IsValidIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D98[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsSelectedByIndex
struct URigHierarchy_IsSelectedByIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D9D[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsSelected
struct URigHierarchy_IsSelected_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DA6[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsProcedural
struct URigHierarchy_IsProcedural_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DAB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.IsParentedTo
struct URigHierarchy_IsParentedTo_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DB2[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
struct URigHierarchy_IsCurveValueSetByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DB9[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSet
struct URigHierarchy_IsCurveValueSet_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DBC[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.IsControllerAvailable
struct URigHierarchy_IsControllerAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.HasTag
struct URigHierarchy_HasTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InTag;                                             // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_DC5[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorMetadata
struct URigHierarchy_GetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DD2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DefaultValue;                                      // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorFromControlValue
struct URigHierarchy_GetVectorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x88(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
struct URigHierarchy_GetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DD7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
struct URigHierarchy_GetVector2DFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DDD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x88(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
struct URigHierarchy_GetTransformNoScaleFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DE0[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransformNoScale                     ReturnValue;                                       // 0x90(0x40)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformMetadata
struct URigHierarchy_GetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DEA[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DefaultValue;                                      // 0x20(0x60)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x80(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformFromControlValue
struct URigHierarchy_GetTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DF4[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
struct URigHierarchy_GetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DFF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetTags
struct URigHierarchy_GetTags_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E09[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetSelectedKeys
struct URigHierarchy_GetSelectedKeys_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E12[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorMetadata
struct URigHierarchy_GetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E23[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              DefaultValue;                                      // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
struct URigHierarchy_GetRotatorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_E29[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ReturnValue;                                       // 0x88(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
struct URigHierarchy_GetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E2F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRotator>                      ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetRootElementKeys
struct URigHierarchy_GetRootElementKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetRigidBodyKeys
struct URigHierarchy_GetRigidBodyKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E36[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
struct URigHierarchy_GetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        DefaultValue;                                      // 0x14(0xC)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0x20(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
struct URigHierarchy_GetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E46[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetReferenceKeys
struct URigHierarchy_GetReferenceKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E4E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatMetadata
struct URigHierarchy_GetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E53[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 DefaultValue;                                      // 0x20(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 ReturnValue;                                       // 0x40(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
struct URigHierarchy_GetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E5E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FQuat>                         ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousParent
struct URigHierarchy_GetPreviousParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousName
struct URigHierarchy_GetPreviousName_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function ControlRig.RigHierarchy.GetPose
struct URigHierarchy_GetPose_Params
{
public:
	bool                                         bInitial;                                          // 0x0(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E67[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigPose                              ReturnValue;                                       // 0x8(0x70)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeightArray
struct URigHierarchy_GetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E69[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementWeight>             ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeight
struct URigHierarchy_GetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x18(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E6C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementWeight                     ReturnValue;                                       // 0x1C(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransformByIndex
struct URigHierarchy_GetParentTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E71[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransform
struct URigHierarchy_GetParentTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E7F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParents
struct URigHierarchy_GetParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRecursive;                                        // 0xC(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E8E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetNumberOfParents
struct URigHierarchy_GetNumberOfParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetNullKeys
struct URigHierarchy_GetNullKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E93[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.GetNameMetadata
struct URigHierarchy_GetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  DefaultValue;                                      // 0x14(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x1C(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetNameArrayMetadata
struct URigHierarchy_GetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EA5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataType
struct URigHierarchy_GetMetadataType_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERigMetadataType                  ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_EAF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataNames
struct URigHierarchy_GetMetadataNames_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EB8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
struct URigHierarchy_GetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC3[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransform
struct URigHierarchy_GetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
struct URigHierarchy_GetLocalIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
struct URigHierarchy_GetLocalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED6[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
struct URigHierarchy_GetLocalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorMetadata
struct URigHierarchy_GetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          DefaultValue;                                      // 0x14(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ReturnValue;                                       // 0x24(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
struct URigHierarchy_GetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetKeys
struct URigHierarchy_GetKeys_Params
{
public:
	TArray<int32>                                InElementIndices;                                  // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetKey
struct URigHierarchy_GetKey_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0x4(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetIntFromControlValue
struct URigHierarchy_GetIntFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x84(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetInt32Metadata
struct URigHierarchy_GetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DefaultValue;                                      // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
struct URigHierarchy_GetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_F26[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
struct URigHierarchy_GetIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
struct URigHierarchy_GetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F33[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransform
struct URigHierarchy_GetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F38[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
struct URigHierarchy_GetGlobalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F42[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
struct URigHierarchy_GetGlobalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F52[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
struct URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F56[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
struct URigHierarchy_GetGlobalControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F64[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetFloatMetadata
struct URigHierarchy_GetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultValue;                                      // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatFromControlValue
struct URigHierarchy_GetFloatFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x84(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
struct URigHierarchy_GetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_F8C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetFirstParent
struct URigHierarchy_GetFirstParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
struct URigHierarchy_GetEulerTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_FA2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FEulerTransform                       ReturnValue;                                       // 0x88(0x48)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetDefaultParent
struct URigHierarchy_GetDefaultParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValueByIndex
struct URigHierarchy_GetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValue
struct URigHierarchy_GetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveKeys
struct URigHierarchy_GetCurveKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.GetControlValueByIndex
struct URigHierarchy_GetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERigControlValueType              InValueType;                                       // 0x4(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_FBF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      ReturnValue;                                       // 0x8(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.GetControlValue
struct URigHierarchy_GetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERigControlValueType              InValueType;                                       // 0xC(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_FC7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
struct URigHierarchy_GetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FD5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotator
struct URigHierarchy_GetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0xC(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FDC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetController
struct URigHierarchy_GetController_Params
{
public:
	bool                                         bCreateIfNeeded;                                   // 0x0(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FE8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class URigHierarchyController*               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetControlKeys
struct URigHierarchy_GetControlKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_FF1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetChildren
struct URigHierarchy_GetChildren_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRecursive;                                        // 0xC(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FF6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolMetadata
struct URigHierarchy_GetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         DefaultValue;                                      // 0x14(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x15(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_FFB[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
struct URigHierarchy_GetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1003[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<bool>                                 ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoneKeys
struct URigHierarchy_GetBoneKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1009[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
struct URigHierarchy_GetAllKeys_ForBlueprint_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1012[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x400 (0x400 - 0x0)
// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
struct URigHierarchy_FindNull_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1018[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigNullElement                       ReturnValue;                                       // 0x10(0x3F0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x970 (0x970 - 0x0)
// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
struct URigHierarchy_FindControl_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_101F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlElement                    ReturnValue;                                       // 0x10(0x960)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x310 (0x310 - 0x0)
// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
struct URigHierarchy_FindBone_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1027[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigBoneElement                       ReturnValue;                                       // 0x10(0x300)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.CopyPose
struct URigHierarchy_CopyPose_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurrent;                                          // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInitial;                                          // 0x9(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWeights;                                          // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMatchPoseInGlobalIfNeeded;                        // 0xB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_104B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.CopyHierarchy
struct URigHierarchy_CopyHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.Contains_ForBlueprint
struct URigHierarchy_Contains_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1057[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRigClass
struct UControlRig_SetInteractionRigClass_Params
{
public:
	class UClass*                                InInteractionRigClass;                             // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRig
struct UControlRig_SetInteractionRig_Params
{
public:
	class UControlRig*                           InInteractionRig;                                  // 0x0(0x8)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.SelectControl
struct UControlRig_SelectControl_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSelect;                                           // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10C8[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x980 (0x980 - 0x0)
// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
struct UControlRig_OnControlSelectedBP__DelegateSignature_Params
{
public:
	class UControlRig*                           Rig;                                               // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        Pad_10CE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlElement                    Control;                                           // 0x10(0x960)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bSelected;                                         // 0x970(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10CF[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.IsControlSelected
struct UControlRig_IsControlSelected_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_10D8[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRigClass
struct UControlRig_GetInteractionRigClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRig
struct UControlRig_GetInteractionRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHostingActor
struct UControlRig_GetHostingActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHierarchy
struct UControlRig_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.ControlRig.FindControlRigs
struct UControlRig_FindControlRigs_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class UClass*                                OptionalClass;                                     // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UControlRig*>                   ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRig.CurrentControlSelection
struct UControlRig_CurrentControlSelection_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRig.CreateTransformableControlHandle
struct UControlRig_CreateTransformableControlHandle_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FName                                  ControlName;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTransformableControlHandle*           ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRig.ClearControlSelection
struct UControlRig_ClearControlSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.Update
struct UControlRigComponent_Update_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetObjectBinding
struct UControlRigComponent_SetObjectBinding_Params
{
public:
	class UObject*                               InObjectToBind;                                    // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.SetMappedElements
struct UControlRigComponent_SetMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
struct UControlRigComponent_SetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1129[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_112A[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
struct UControlRigComponent_SetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1133[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x71(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1134[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlVector2D
struct UControlRigComponent_SetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             Value;                                             // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlTransform
struct UControlRigComponent_SetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1141[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x10(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1142[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlScale
struct UControlRigComponent_SetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Value;                                             // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1149[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRotator
struct UControlRigComponent_SetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRotator                              Value;                                             // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_115E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRigClass
struct UControlRigComponent_SetControlRigClass_Params
{
public:
	class UClass*                                InControlRigClass;                                 // 0x0(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlPosition
struct UControlRigComponent_SetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Value;                                             // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1169[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlOffset
struct UControlRigComponent_SetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_116D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0x10(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_116E[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlInt
struct UControlRigComponent_SetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Value;                                             // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlFloat
struct UControlRigComponent_SetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlBool
struct UControlRigComponent_SetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Value;                                             // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1173[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneTransform
struct UControlRigComponent_SetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1177[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1179[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x74(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x78(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_117A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
struct UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
struct UControlRigComponent_OnPreForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreConstruction
struct UControlRigComponent_OnPreConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
struct UControlRigComponent_OnPostForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostConstruction
struct UControlRigComponent_OnPostConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetSpaceTransform
struct UControlRigComponent_GetSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1190[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
struct UControlRigComponent_GetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1196[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
struct UControlRigComponent_GetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_119B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetElementNames
struct UControlRigComponent_GetElementNames_Params
{
public:
	enum class ERigElementType                   ElementType;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_119E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlVector2D
struct UControlRigComponent_GetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlTransform
struct UControlRigComponent_GetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlScale
struct UControlRigComponent_GetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRotator
struct UControlRigComponent_GetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11AE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRig
struct UControlRigComponent_GetControlRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlPosition
struct UControlRigComponent_GetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11B8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlOffset
struct UControlRigComponent_GetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlInt
struct UControlRigComponent_GetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlFloat
struct UControlRigComponent_GetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlBool
struct UControlRigComponent_GetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_11C9[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetBoneTransform
struct UControlRigComponent_GetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.GetAbsoluteTime
struct UControlRigComponent_GetAbsoluteTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.DoesElementExist
struct UControlRigComponent_DoesElementExist_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	enum class ERigElementType                   ElementType;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x9(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_11E0[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigComponent.CanExecute
struct UControlRigComponent_CanExecute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
struct UControlRigComponent_AddMappedSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	TArray<struct FControlRigComponentMappedBone> Bones;                                             // 0x8(0x10)(ConstParm, OutParm, ZeroConstructor, Config, EditConst)
	TArray<struct FControlRigComponentMappedCurve> Curves;                                            // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedElements
struct UControlRigComponent_AddMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedComponents
struct UControlRigComponent_AddMappedComponents_Params
{
public:
	TArray<struct FControlRigComponentMappedComponent> Components;                                        // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
struct UControlRigComponent_AddMappedCompleteSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelected
struct AControlRigShapeActor_SetSelected_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelectable
struct AControlRigShapeActor_SetSelectable_Params
{
public:
	bool                                         bInSelectable;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetHovered
struct AControlRigShapeActor_SetHovered_Params
{
public:
	bool                                         bInHovered;                                        // 0x0(0x1)(BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
struct AControlRigShapeActor_SetGlobalTransform_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetEnabled
struct AControlRigShapeActor_SetEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(ConstParm, ExportObject, Parm, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnTransformChanged
struct AControlRigShapeActor_OnTransformChanged_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x60)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
struct AControlRigShapeActor_OnSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
struct AControlRigShapeActor_OnManipulatingChanged_Params
{
public:
	bool                                         bIsManipulating;                                   // 0x0(0x1)(Edit, Parm, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
struct AControlRigShapeActor_OnHoveredChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
struct AControlRigShapeActor_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
struct AControlRigShapeActor_IsSelectedInEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsHovered
struct AControlRigShapeActor_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsEnabled
struct AControlRigShapeActor_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
struct AControlRigShapeActor_GetGlobalTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.SetupReplay
struct UControlRigTestData_SetupReplay_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         bGroundTruth;                                      // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x9(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1271[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.Record
struct UControlRigTestData_Record_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	double                                       InRecordingDuration;                               // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1278[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsReplaying
struct UControlRigTestData_IsReplaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsRecording
struct UControlRigTestData_IsRecording_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.GetTimeRange
struct UControlRigTestData_GetTimeRange_Params
{
public:
	bool                                         bInput;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_127E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.GetPlaybackMode
struct UControlRigTestData_GetPlaybackMode_Params
{
public:
	enum class EControlRigTestDataPlaybackMode   ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
struct UControlRigTestData_GetFrameIndexForTime_Params
{
public:
	double                                       InSeconds;                                         // 0x0(0x8)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         bInput;                                            // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1284[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigTestData.CreateNewAsset
struct UControlRigTestData_CreateNewAsset_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                InBlueprintPathName;                               // 0x10(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class UControlRigTestData*                   ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchyController.SetSelection
struct URigHierarchyController_SetSelection_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_129C[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.SetParent
struct URigHierarchyController_SetParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.SetHierarchy
struct URigHierarchyController_SetHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.SetDisplayName
struct URigHierarchyController_SetDisplayName_Params
{
public:
	struct FRigElementKey                        InControl;                                         // 0x0(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class FName                                  InDisplayName;                                     // 0xC(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRenameElement;                                    // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x15(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x16(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12AD[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchyController.SetControlSettings
struct URigHierarchyController_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B0)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x1C0(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12B9[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.SelectElement
struct URigHierarchyController_SelectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelect;                                           // 0xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bClearSelection;                                   // 0xD(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12C9[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchyController.ReorderElement
struct URigHierarchyController_ReorderElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InIndex;                                           // 0xC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x12(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12D2[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchyController.RenameElement
struct URigHierarchyController_RenameElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  InName;                                            // 0xC(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x14(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClearSelection;                                   // 0x16(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D9[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x18(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.RemoveParent
struct URigHierarchyController_RemoveParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveElement
struct URigHierarchyController_RemoveElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12EB[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveAllParents
struct URigHierarchyController_RemoveAllParents_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMaintainGlobalTransform;                          // 0xC(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0xD(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xF(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchyController.MirrorElements
struct URigHierarchyController_MirrorElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigVMMirrorSettings                  InSettings;                                        // 0x10(0x28)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectNewElements;                                // 0x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x39(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x3A(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F9[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x40(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportFromText
struct URigHierarchyController_ImportFromText_Params
{
public:
	class FString                                InContent;                                         // 0x0(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bReplaceExistingElements;                          // 0x10(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSelectNewElements;                                // 0x11(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x12(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x13(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1306[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportCurves
struct URigHierarchyController_ImportCurves_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, InstancedReference, SubobjectReference)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSelectCurves;                                     // 0x10(0x1)(BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1310[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportBones
struct URigHierarchyController_ImportBones_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, InstancedReference, SubobjectReference)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bReplaceExistingBones;                             // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bRemoveObsoleteBones;                              // 0x11(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSelectBones;                                      // 0x12(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x13(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_131E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.GetHierarchy
struct URigHierarchyController_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C0 (0x1C0 - 0x0)
// Function ControlRig.RigHierarchyController.GetControlSettings
struct URigHierarchyController_GetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_132A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   ReturnValue;                                       // 0x10(0x1B0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.ExportToText
struct URigHierarchyController_ExportToText_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.ExportSelectionToText
struct URigHierarchyController_ExportSelectionToText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.DuplicateElements
struct URigHierarchyController_DuplicateElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bSelectNewElements;                                // 0x10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommands;                              // 0x12(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_133D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.DeselectElement
struct URigHierarchyController_DeselectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1345[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchyController.ClearSelection
struct URigHierarchyController_ClearSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddRigidBody
struct URigHierarchyController_AddRigidBody_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FRigRigidBodySettings                 InSettings;                                        // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1347[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InLocalTransform;                                  // 0x20(0x60)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x80(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x81(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1348[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.AddParent
struct URigHierarchyController_AddParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	float                                        InWeight;                                          // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMaintainGlobalTransform;                          // 0x1C(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x1D(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1E(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_134B[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddNull
struct URigHierarchyController_AddNull_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_134F[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x20(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x81(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x82(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1351[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.AddCurve
struct URigHierarchyController_AddCurve_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1356[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x10(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x260 (0x260 - 0x0)
// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
struct URigHierarchyController_AddControl_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_135D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B0)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigControlValue                      InValue;                                           // 0x1C8(0x84)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x24C(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x24D(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1361[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x250(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1362[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddBone
struct URigHierarchyController_AddBone_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1368[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x20(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	enum class ERigBoneType                      InBoneType;                                        // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x82(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x83(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1D8 (0x1D8 - 0x0)
// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
struct URigHierarchyController_AddAnimationChannel_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRigElementKey                        InParentControl;                                   // 0x8(0xC)(BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1375[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B0)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetupUndo;                                        // 0x1C8(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPrintPythonCommand;                               // 0x1C9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1376[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ReturnValue;                                       // 0x1CC(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SelectControls
struct UControlRigPoseAsset_SelectControls_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         bDoMirror;                                         // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_13AE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SavePose
struct UControlRigPoseAsset_SavePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         bUseAll;                                           // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
struct UControlRigPoseAsset_ReplaceControlName_Params
{
public:
	class FName                                  CurrentName;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FName                                  NewName;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.PastePose
struct UControlRigPoseAsset_PastePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	bool                                         bDoKey;                                            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bDoMirror;                                         // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_13C2[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
struct UControlRigPoseAsset_GetCurrentPose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FControlRigControlPose                OutPose;                                           // 0x8(0x60)(ConstParm, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetControlNames
struct UControlRigPoseAsset_GetControlNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
struct UControlRigPoseAsset_DoesMirrorMatch_Params
{
public:
	class UControlRig*                           ControlRig;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13CC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
struct UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
struct UControlRigTransformWorkflowOptions_ProvideWorkflows_Params
{
public:
	class UObject*                               InSubject;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FRigVMUserWorkflow>            ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


