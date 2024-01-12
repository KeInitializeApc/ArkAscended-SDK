#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPBIKLimitType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	Locked                         = 2,
	EPBIKLimitType_MAX             = 3,
};

enum class EPBIKRootBehavior : uint8
{
	PrePull                        = 0,
	PinToInput                     = 1,
	Free                           = 2,
	EPBIKRootBehavior_MAX          = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct PBIK.PBIKBoneSetting
struct FPBIKBoneSetting
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        RotationStiffness;                                 // 0x8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionStiffness;                                 // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_A4E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x14(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxX;                                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_A50[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x20(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxY;                                              // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_A51[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x2C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxZ;                                              // 0x30(0x4)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x34(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A54[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PBIK.RootPrePullSettings
struct FRootPrePullSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaX;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaY;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaZ;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaX;                                    // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaY;                                    // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaZ;                                    // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct PBIK.PBIKSolverSettings
struct FPBIKSolverSettings
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A59[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0xC(0x20)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GlobalPullChainAlpha;                              // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngle;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x34(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5B[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PBIK.PBIKSolver
struct FPBIKSolver
{
public:
	uint8                                        Pad_A5C[0x68];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PBIK.PBIKDebug
struct FPBIKDebug
{
public:
	float                                        DrawScale;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebug;                                        // 0x4(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_A5E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PBIK.PBIKEffector
struct FPBIKEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_A60[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        PositionAlpha;                                     // 0x70(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x74(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StrengthAlpha;                                     // 0x78(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x7C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PinRotation;                                       // 0x80(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A69[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x250 - 0x130)
// ScriptStruct PBIK.RigUnit_PBIK
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Root;                                              // 0x130(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FPBIKEffector>                 Effectors;                                         // 0x138(0x10)(ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	TArray<int32>                                EffectorSolverIndices;                             // 0x148(0x10)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FPBIKBoneSetting>              BoneSettings;                                      // 0x158(0x10)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          ExcludedBones;                                     // 0x168(0x10)(OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FPBIKSolverSettings                   Settings;                                          // 0x178(0x3C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPBIKDebug                            Debug;                                             // 0x1B4(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                BoneSettingToSolverBoneIndex;                      // 0x1C0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                SolverBoneToElementIndex;                          // 0x1D0(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPBIKSolver                           Solver;                                            // 0x1E0(0x68)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsInit;                                        // 0x248(0x1)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A71[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


