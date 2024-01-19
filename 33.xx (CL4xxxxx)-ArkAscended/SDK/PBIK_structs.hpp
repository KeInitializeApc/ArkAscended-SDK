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
	float                                        RotationStiffness;                                 // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionStiffness;                                 // 0xC(0x4)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_6F9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxX;                                              // 0x18(0x4)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_6FE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxY;                                              // 0x24(0x4)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_6FF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x2C(0x4)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxZ;                                              // 0x30(0x4)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x34(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_705[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x38(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PBIK.RootPrePullSettings
struct FRootPrePullSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaX;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaY;                                    // 0x8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlphaZ;                                    // 0xC(0x4)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaX;                                    // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaY;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionAlphaZ;                                    // 0x1C(0x4)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct PBIK.PBIKSolverSettings
struct FPBIKSolverSettings
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x9(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_712[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0xC(0x20)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        GlobalPullChainAlpha;                              // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngle;                                          // 0x30(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x34(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x38(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_714[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PBIK.PBIKSolver
struct FPBIKSolver
{
public:
	uint8                                        Pad_716[0x68];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PBIK.PBIKDebug
struct FPBIKDebug
{
public:
	float                                        DrawScale;                                         // 0x0(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebug;                                        // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_719[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PBIK.PBIKEffector
struct FPBIKEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_71B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        PositionAlpha;                                     // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x74(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        StrengthAlpha;                                     // 0x78(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x7C(0x4)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PinRotation;                                       // 0x80(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_71D[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x250 - 0x130)
// ScriptStruct PBIK.RigUnit_PBIK
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Root;                                              // 0x130(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FPBIKEffector>                 Effectors;                                         // 0x138(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<int32>                                EffectorSolverIndices;                             // 0x148(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FPBIKBoneSetting>              BoneSettings;                                      // 0x158(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          ExcludedBones;                                     // 0x168(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPBIKSolverSettings                   Settings;                                          // 0x178(0x3C)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FPBIKDebug                            Debug;                                             // 0x1B4(0x8)(ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_722[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                BoneSettingToSolverBoneIndex;                      // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                SolverBoneToElementIndex;                          // 0x1D0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPBIKSolver                           Solver;                                            // 0x1E0(0x68)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsInit;                                        // 0x248(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_724[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


