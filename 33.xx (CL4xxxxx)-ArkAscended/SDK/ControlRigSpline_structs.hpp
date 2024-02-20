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
	uint8                                        Pad_2338[0x58];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
public:
	uint8                                        Pad_2339[0x18];                                    // Fixing Size Of Struct > TateDumper <
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
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClosed;                                           // 0x19(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_233D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Compression;                                       // 0x20(0x4)(OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Stretch;                                           // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FControlRigSpline                     Spline;                                            // 0x28(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_233F[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	float                                        U;                                                 // 0x20(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_2341[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	struct FVector                               UpVector;                                          // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	float                                        Roll;                                              // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	float                                        U;                                                 // 0x3C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	float                                        U;                                                 // 0x20(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_2345[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Tangent;                                           // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x130(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	struct FLinearColor                          Color;                                             // 0x148(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x158(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	int32                                        Detail;                                            // 0x15C(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	float                                        Length;                                            // 0x20(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm)
	uint8                                        Pad_234C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2352[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x15C(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x160(0x4)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2356[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x1C4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_235B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_235C[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_235F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x15C(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x160(0x4)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2362[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x1C4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2364[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2367[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_236E[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_2370[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        U;                                                 // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_2375[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
	float                                        Percentage;                                        // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        U;                                                 // 0x24(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

}


