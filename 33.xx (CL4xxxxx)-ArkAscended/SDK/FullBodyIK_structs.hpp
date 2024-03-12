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
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2700[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Limit;                                             // 0x8(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2702[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2705[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_270C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x70(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2721[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DrawSize;                                          // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2722[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(ConstParm, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Damping;                                           // 0x18(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_272E[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_272F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	float                                        PositionAlpha;                                     // 0x28(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PositionDepth;                                     // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        RotationAlpha;                                     // 0x50(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RotationDepth;                                     // 0x54(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pull;                                              // 0x58(0x4)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2739[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_273A[0x198];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x130(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_273D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x140(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x150(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	struct FSolverInput                          SolverProperty;                                    // 0x160(0x24)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x184(0x2)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x186(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2741[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFBIKDebugOption                      DebugOption;                                       // 0x190(0x80)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x210(0x198)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2743[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

}


