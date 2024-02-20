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
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_44E[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Limit;                                             // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_450[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_452[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_453[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x70(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_455[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        DrawSize;                                          // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_456[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x14(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        Damping;                                           // 0x18(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_45A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_45C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        PositionAlpha;                                     // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PositionDepth;                                     // 0x2C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        RotationAlpha;                                     // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RotationDepth;                                     // 0x54(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pull;                                              // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_45D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_45E[0x198];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x130(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_461[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x140(0x10)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	struct FSolverInput                          SolverProperty;                                    // 0x160(0x24)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x184(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x186(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_465[0x9];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFBIKDebugOption                      DebugOption;                                       // 0x190(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x210(0x198)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_46D[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

}


