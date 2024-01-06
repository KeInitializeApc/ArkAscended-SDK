#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFBIKBoneLimitType : uint8
{
	Free                           = 0,
	Limit                          = 1,
	Locked                         = 2,
	EFBIKBoneLimitType_MAX         = 3,
};

enum class EPoleVectorOption : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EPoleVectorOption_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit
{
public:
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2765[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Limit;                                             // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2768[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_276B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_276D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x70(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(BlueprintVisible, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(Edit, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_276F[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        DrawSize;                                          // 0x70(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2770[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Precision;                                         // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Damping;                                           // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2774[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
	uint8                                        Pad_2775[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        PositionAlpha;                                     // 0x28(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PositionDepth;                                     // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        RotationAlpha;                                     // 0x50(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RotationDepth;                                     // 0x54(0x4)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Pull;                                              // 0x58(0x4)(ConstParm, BlueprintVisible, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2776[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_2778[0x198];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x130(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_2779[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x140(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FSolverInput                          SolverProperty;                                    // 0x160(0x24)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x184(0x2)(Edit, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x186(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_277A[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKDebugOption                      DebugOption;                                       // 0x190(0x80)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x210(0x198)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_277B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

}


