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
	float                                        RotationStiffness;                                 // 0x8(0x4)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionStiffness;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2353[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x14(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxX;                                              // 0x18(0x4)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x1C(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2354[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxY;                                              // 0x24(0x4)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x28(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2355[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxZ;                                              // 0x30(0x4)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x34(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_235A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x38(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PBIK.RootPrePullSettings
struct FRootPrePullSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlphaX;                                    // 0x4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlphaY;                                    // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlphaZ;                                    // 0xC(0x4)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionAlphaX;                                    // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionAlphaY;                                    // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionAlphaZ;                                    // 0x1C(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct PBIK.PBIKSolverSettings
struct FPBIKSolverSettings
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x8(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x9(0x1)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2361[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0xC(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        GlobalPullChainAlpha;                              // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAngle;                                          // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2363[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PBIK.PBIKSolver
struct FPBIKSolver
{
public:
	uint8                                        Pad_2365[0x68];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PBIK.PBIKDebug
struct FPBIKDebug
{
public:
	float                                        DrawScale;                                         // 0x0(0x4)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebug;                                        // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_236B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PBIK.PBIKEffector
struct FPBIKEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_236D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        PositionAlpha;                                     // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x74(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StrengthAlpha;                                     // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x7C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PinRotation;                                       // 0x80(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2371[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x250 - 0x130)
// ScriptStruct PBIK.RigUnit_PBIK
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Root;                                              // 0x130(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FPBIKEffector>                 Effectors;                                         // 0x138(0x10)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<int32>                                EffectorSolverIndices;                             // 0x148(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKBoneSetting>              BoneSettings;                                      // 0x158(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ExcludedBones;                                     // 0x168(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPBIKSolverSettings                   Settings;                                          // 0x178(0x3C)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	struct FPBIKDebug                            Debug;                                             // 0x1B4(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_237B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                BoneSettingToSolverBoneIndex;                      // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                SolverBoneToElementIndex;                          // 0x1D0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPBIKSolver                           Solver;                                            // 0x1E0(0x68)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNeedsInit;                                        // 0x248(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_237E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


