#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEulerRotationOrder : uint8
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EEulerRotationOrder_MAX        = 6,
};

enum class EConstraintType : uint8
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2,
};

enum class ETransformConstraintType : uint8
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	LookAt                         = 4,
	ETransformConstraintType_MAX   = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis
{
public:
	bool                                         bX;                                                // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x1(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD (0xD - 0x0)
// ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription
{
public:
	bool                                         bTranslation;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRotation;                                         // 0x1(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bScale;                                            // 0x2(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParent;                                           // 0x3(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  TranslationAxes;                                   // 0x4(0x3)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  RotationAxes;                                      // 0x7(0x3)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  ScaleAxes;                                         // 0xA(0x3)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint
{
public:
	struct FConstraintDescription                Operator;                                          // 0x0(0xD)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2871[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceNode;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TargetNode;                                        // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x20(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bMaintainOffset;                                   // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2873[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset
{
public:
	struct FVector                               Translation;                                       // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2876[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2877[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Parent;                                            // 0x60(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeObject
struct FNodeObject
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  ParentName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData
{
public:
	TArray<struct FNodeObject>                   Nodes;                                             // 0x0(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Transforms;                                        // 0x10(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     NodeNameToIndexMapping;                            // 0x20(0x50)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData
{
public:
	uint8                                        Pad_287D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNodeHierarchyData                    Hierarchy;                                         // 0x8(0x70)(ConstParm, ExportObject, BlueprintReadOnly, Config, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter
{
public:
	struct FFilterOptionPerAxis                  TranslationFilter;                                 // 0x0(0x3)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  RotationFilter;                                    // 0x3(0x3)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  ScaleFilter;                                       // 0x6(0x3)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x30(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor
{
public:
	enum class EConstraintType                   Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_2881[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData
{
public:
	struct FConstraintDescriptor                 Constraint;                                        // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Weight;                                            // 0x10(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bMaintainOffset;                                   // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2885[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Offset;                                            // 0x20(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	struct FTransform                            CurrentTransform;                                  // 0x80(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.CCDIKChainLink
struct FCCDIKChainLink
{
public:
	uint8                                        Pad_2886[0xE0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimationCore.FABRIKChainLink
struct FFABRIKChainLink
{
public:
	uint8                                        Pad_2887[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationCore.Axis
struct FAxis
{
public:
	struct FVector                               Axis;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	bool                                         bInLocalSpace;                                     // 0x18(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2888[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeChain
struct FNodeChain
{
public:
	TArray<class FName>                          Nodes;                                             // 0x0(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx
{
public:
	uint8                                        Pad_2889[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFilterOptionPerAxis                  AxesFilterOption;                                  // 0x8(0x3)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_288A[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x18 - 0x10)
// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
public:
	enum class ETransformConstraintType          TransformType;                                     // 0x10(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_288C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x70 - 0x10)
// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
public:
	struct FAxis                                 LookAt_Axis;                                       // 0x10(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FAxis                                 LookUp_Axis;                                       // 0x30(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLookUp;                                        // 0x50(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_288D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookUpTarget;                                      // 0x58(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_288F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

}


