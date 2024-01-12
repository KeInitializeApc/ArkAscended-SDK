#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESplineType : uint8
{
	BSpline                        = 0,
	Hermite                        = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct FControlRigSplineImpl
{
public:
	uint8                                        Pad_2FCB[0x58];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
public:
	uint8                                        Pad_2FCC[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClosed;                                           // 0x19(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FCE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Compression;                                       // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Stretch;                                           // 0x24(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FControlRigSpline                     Spline;                                            // 0x28(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2FD0[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	float                                        U;                                                 // 0x20(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        Pad_2FD2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x28(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               UpVector;                                          // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        Roll;                                              // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	float                                        U;                                                 // 0x3C(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	float                                        U;                                                 // 0x20(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        Pad_2FD5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Tangent;                                           // 0x28(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x130(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	struct FLinearColor                          Color;                                             // 0x148(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x158(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Detail;                                            // 0x15C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	float                                        Length;                                            // 0x20(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm)
	uint8                                        Pad_2FD6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FD7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x15C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x160(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FD9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x1C4(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FDA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FDB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FDE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x15C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x160(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FE2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x1C4(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2FE3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FE4[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2FE5[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2FE6[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        U;                                                 // 0x38(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        Pad_2FE7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	float                                        Percentage;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        U;                                                 // 0x24(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
};

}


