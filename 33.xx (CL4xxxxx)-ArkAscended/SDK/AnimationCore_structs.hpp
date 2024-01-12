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
	bool                                         bX;                                                // 0x0(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x1(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD (0xD - 0x0)
// ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription
{
public:
	bool                                         bTranslation;                                      // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRotation;                                         // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bScale;                                            // 0x2(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParent;                                           // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  TranslationAxes;                                   // 0x4(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  RotationAxes;                                      // 0x7(0x3)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  ScaleAxes;                                         // 0xA(0x3)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint
{
public:
	struct FConstraintDescription                Operator;                                          // 0x0(0xD)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_284D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceNode;                                        // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TargetNode;                                        // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x20(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bMaintainOffset;                                   // 0x24(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_284F[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset
{
public:
	struct FVector                               Translation;                                       // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2850[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2851[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Parent;                                            // 0x60(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeObject
struct FNodeObject
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  ParentName;                                        // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData
{
public:
	TArray<struct FNodeObject>                   Nodes;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Transforms;                                        // 0x10(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     NodeNameToIndexMapping;                            // 0x20(0x50)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData
{
public:
	uint8                                        Pad_2854[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNodeHierarchyData                    Hierarchy;                                         // 0x8(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
};

// 0x9 (0x9 - 0x0)
// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter
{
public:
	struct FFilterOptionPerAxis                  TranslationFilter;                                 // 0x0(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  RotationFilter;                                    // 0x3(0x3)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  ScaleFilter;                                       // 0x6(0x3)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
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
	uint8                                        Pad_2856[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData
{
public:
	struct FConstraintDescriptor                 Constraint;                                        // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Weight;                                            // 0x10(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bMaintainOffset;                                   // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2857[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Offset;                                            // 0x20(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	struct FTransform                            CurrentTransform;                                  // 0x80(0x60)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.CCDIKChainLink
struct FCCDIKChainLink
{
public:
	uint8                                        Pad_285A[0xE0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimationCore.FABRIKChainLink
struct FFABRIKChainLink
{
public:
	uint8                                        Pad_285B[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationCore.Axis
struct FAxis
{
public:
	struct FVector                               Axis;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	bool                                         bInLocalSpace;                                     // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_285C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeChain
struct FNodeChain
{
public:
	TArray<class FName>                          Nodes;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx
{
public:
	uint8                                        Pad_285E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFilterOptionPerAxis                  AxesFilterOption;                                  // 0x8(0x3)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_285F[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x18 - 0x10)
// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
public:
	enum class ETransformConstraintType          TransformType;                                     // 0x10(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2860[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x70 - 0x10)
// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
public:
	struct FAxis                                 LookAt_Axis;                                       // 0x10(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FAxis                                 LookUp_Axis;                                       // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLookUp;                                        // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2864[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookUpTarget;                                      // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_2867[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

}


