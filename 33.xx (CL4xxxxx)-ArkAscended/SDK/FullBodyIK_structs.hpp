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
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEB[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Limit;                                             // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FED[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x70(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FF0[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	float                                        DrawSize;                                          // 0x70(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2FF1[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Precision;                                         // 0x14(0x4)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        Damping;                                           // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FF3[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
	uint8                                        Pad_2FF5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        PositionAlpha;                                     // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PositionDepth;                                     // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        RotationAlpha;                                     // 0x50(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RotationDepth;                                     // 0x54(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Pull;                                              // 0x58(0x4)(ConstParm, BlueprintVisible, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2FF6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_2FF7[0x198];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x130(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_2FF8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x140(0x10)(ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FSolverInput                          SolverProperty;                                    // 0x160(0x24)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x184(0x2)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x186(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FF9[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKDebugOption                      DebugOption;                                       // 0x190(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x210(0x198)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FFA[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

}


