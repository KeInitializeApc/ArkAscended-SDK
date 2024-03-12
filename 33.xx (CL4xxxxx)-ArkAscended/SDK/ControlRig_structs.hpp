#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERigElementType : uint8
{
	None                           = 0,
	Bone                           = 1,
	Null                           = 2,
	Space                          = 2,
	Control                        = 4,
	Curve                          = 8,
	RigidBody                      = 16,
	Reference                      = 32,
	Last                           = 64,
	All                            = 63,
	ToResetAfterConstructionEvent  = 13,
	ERigElementType_MAX            = 65,
};

enum class ERigControlTransformChannel : uint8
{
	TranslationX                   = 0,
	TranslationY                   = 1,
	TranslationZ                   = 2,
	Pitch                          = 3,
	Yaw                            = 4,
	Roll                           = 5,
	ScaleX                         = 6,
	ScaleY                         = 7,
	ScaleZ                         = 8,
	ERigControlTransformChannel_MAX = 9,
};

enum class ERigControlVisibility : uint8
{
	UserDefined                    = 0,
	BasedOnSelection               = 1,
	ERigControlVisibility_MAX      = 2,
};

enum class ERigControlAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3,
};

enum class ERigControlType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10,
};

enum class ERigControlAnimationType : uint8
{
	AnimationControl               = 0,
	AnimationChannel               = 1,
	ProxyControl                   = 2,
	VisualCue                      = 3,
	ERigControlAnimationType_MAX   = 4,
};

enum class ERigExecutionType : uint8
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2,
};

enum class ERigTransformStackEntryType : uint8
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4,
};

enum class ERigTransformType : uint8
{
	InitialLocal                   = 0,
	CurrentLocal                   = 1,
	InitialGlobal                  = 2,
	CurrentGlobal                  = 3,
	NumTransformTypes              = 4,
	ERigTransformType_MAX          = 5,
};

enum class EControlRigInteractionType : uint8
{
	None                           = 0,
	Translate                      = 1,
	Rotate                         = 2,
	Scale                          = 4,
	All                            = 7,
	EControlRigInteractionType_MAX = 8,
};

enum class EControlRigVectorKind : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2,
};

enum class EControlRigComponentSpace : uint8
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5,
};

enum class EControlRigComponentMapDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2,
};

enum class ETransformSpaceMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4,
};

enum class ETransformGetterType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2,
};

enum class EControlRigTestDataPlaybackMode : uint8
{
	Live                           = 0,
	ReplayInputs                   = 1,
	GroundTruth                    = 2,
	Max                            = 3,
};

enum class ECRSimConstraintType : uint8
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4,
};

enum class ECRSimPointForceType : uint8
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	Replace                        = 0,
	Additive                       = 1,
	Direct                         = 2,
	Max                            = 3,
};

enum class ERigBoneType : uint8
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2,
};

enum class ERigMetadataType : uint8
{
	Bool                           = 0,
	BoolArray                      = 1,
	Float                          = 2,
	FloatArray                     = 3,
	Int32                          = 4,
	Int32Array                     = 5,
	Name                           = 6,
	NameArray                      = 7,
	Vector                         = 8,
	VectorArray                    = 9,
	Rotator                        = 10,
	RotatorArray                   = 11,
	Quat                           = 12,
	QuatArray                      = 13,
	Transform                      = 14,
	TransformArray                 = 15,
	LinearColor                    = 16,
	LinearColorArray               = 17,
	RigElementKey                  = 18,
	RigElementKeyArray             = 19,
	Invalid                        = 20,
	ERigMetadataType_MAX           = 21,
};

enum class ERigHierarchyNotification : uint8
{
	ElementAdded                   = 0,
	ElementRemoved                 = 1,
	ElementRenamed                 = 2,
	ElementSelected                = 3,
	ElementDeselected              = 4,
	ParentChanged                  = 5,
	HierarchyReset                 = 6,
	ControlSettingChanged          = 7,
	ControlVisibilityChanged       = 8,
	ControlDrivenListChanged       = 9,
	ControlShapeTransformChanged   = 10,
	ParentWeightsChanged           = 11,
	InteractionBracketOpened       = 12,
	InteractionBracketClosed       = 13,
	ElementReordered               = 14,
	Max                            = 15,
};

enum class ERigEvent : uint8
{
	None                           = 0,
	RequestAutoKey                 = 1,
	OpenUndoBracket                = 2,
	CloseUndoBracket               = 3,
	Max                            = 4,
};

enum class EControlRigSetKey : uint8
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3,
};

enum class ERigControlValueType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4,
};

enum class ERigSpaceType : uint8
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4,
};

enum class EMovieSceneControlRigSpaceType : uint8
{
	Parent                         = 0,
	World                          = 1,
	ControlRig                     = 2,
	EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	Axes                           = 0,
	Max                            = 1,
};

enum class EAimMode : uint8
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2,
};

enum class EApplyTransformMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigSwitchParentMode : uint8
{
	World                          = 0,
	DefaultParent                  = 1,
	ParentItem                     = 2,
	ERigSwitchParentMode_MAX       = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2,
};

enum class EControlRigModifyBoneMode : uint8
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4,
};

enum class EConstraintInterpType : uint8
{
	Average                        = 0,
	Shortest                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_A44[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x4(0x8)(ConstParm, Net, OutParm)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigBaseElement
struct FRigBaseElement
{
public:
	uint8                                        Pad_A45[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Key;                                               // 0x8(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_A48[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                NameString;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x28(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        SubIndex;                                          // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSelected;                                         // 0x30(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A4C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CreatedAtInstructionIndex;                         // 0x34(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A4E[0xB8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigComputedTransform
struct FRigComputedTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	uint8                                        Pad_A52[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct FRigLocalAndGlobalTransform
{
public:
	struct FRigComputedTransform                 Local;                                             // 0x0(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor)
	struct FRigComputedTransform                 Global;                                            // 0x70(0x70)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct FRigCurrentAndInitialTransform
{
public:
	struct FRigLocalAndGlobalTransform           Current;                                           // 0x0(0xE0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigLocalAndGlobalTransform           Initial;                                           // 0xE0(0xE0)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
};

// 0x200 (0x2F0 - 0xF0)
// ScriptStruct ControlRig.RigTransformElement
struct FRigTransformElement : public FRigBaseElement
{
public:
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0xF0(0x1C0)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_A5D[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x3F0 - 0x2F0)
// ScriptStruct ControlRig.RigMultiParentElement
struct FRigMultiParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_A5F[0x100];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigControlLimitEnabled
struct FRigControlLimitEnabled
{
public:
	bool                                         bMinimum;                                          // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bMaximum;                                          // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float01;                                           // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float02;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float03;                                           // 0xC(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float10;                                           // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float11;                                           // 0x14(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float12;                                           // 0x18(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float13;                                           // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float20;                                           // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float21;                                           // 0x24(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float22;                                           // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float23;                                           // 0x2C(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float30;                                           // 0x30(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float31;                                           // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float32;                                           // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float33;                                           // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Float00_2;                                         // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float01_2;                                         // 0x44(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float02_2;                                         // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float03_2;                                         // 0x4C(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float10_2;                                         // 0x50(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float11_2;                                         // 0x54(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float12_2;                                         // 0x58(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float13_2;                                         // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float20_2;                                         // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float21_2;                                         // 0x64(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float22_2;                                         // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float23_2;                                         // 0x6C(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float30_2;                                         // 0x70(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float31_2;                                         // 0x74(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float32_2;                                         // 0x78(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        Float33_2;                                         // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         bValid;                                            // 0x80(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A7E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
public:
	struct FRigControlValueStorage               FloatStorage;                                      // 0x0(0x84)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigControlElementCustomization
struct FRigControlElementCustomization
{
public:
	TArray<struct FRigElementKey>                AvailableSpaces;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FRigElementKey>                RemovedSpaces;                                     // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ControlRig.RigControlSettings
struct FRigControlSettings
{
public:
	enum class ERigControlAnimationType          AnimationType;                                     // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ERigControlType                   ControlType;                                       // 0x1(0x1)(ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A88[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayName;                                       // 0x4(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsCurve;                                          // 0xD(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A8B[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigControlLimitEnabled>       LimitEnabled;                                      // 0x10(0x10)(Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A8D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      MinimumValue;                                      // 0x24(0x84)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      MaximumValue;                                      // 0xA8(0x84)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bShapeVisible;                                     // 0x12C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x12D(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A90[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ShapeName;                                         // 0x130(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          ShapeColor;                                        // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTransientControl;                               // 0x148(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A96[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UEnum*                                 ControlEnum;                                       // 0x150(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlElementCustomization       Customization;                                     // 0x158(0x20)(BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x178(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A99[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bGroupWithParentControl;                           // 0x198(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRestrictSpaceSwitching;                           // 0x199(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A9C[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x1A0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigPreferredEulerAngles
struct FRigPreferredEulerAngles
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A9F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Initial;                                           // 0x20(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
};

// 0x570 (0x960 - 0x3F0)
// ScriptStruct ControlRig.RigControlElement
struct FRigControlElement : public FRigMultiParentElement
{
public:
	struct FRigControlSettings                   Settings;                                          // 0x3F0(0x1B0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRigCurrentAndInitialTransform        Offset;                                            // 0x5A0(0x1C0)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	struct FRigCurrentAndInitialTransform        Shape;                                             // 0x760(0x1C0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigPreferredEulerAngles              PreferredEulerAngles;                              // 0x920(0x38)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AA6[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
public:
	struct FRigElementKey                        Source;                                            // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_AB1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x10(0x10)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FRigInfluenceEntry>            Entries;                                           // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<struct FRigElementKey, int32>           KeyToIndex;                                        // 0x18(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
public:
	TArray<struct FRigInfluenceMap>              Maps;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigHierarchySettings
struct FRigHierarchySettings
{
public:
	int32                                        ProceduralElementLimit;                            // 0x0(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x140 (0x148 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AC6[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FInputBlendPose                       BoneFilter;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0x130(0x14)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ACA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigTransformStackEntry
struct FRigTransformStackEntry
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class ERigTransformStackEntryType       EntryType;                                         // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigTransformType                 TransformType;                                     // 0xD(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ACE[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OldTransform;                                      // 0x10(0x60)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            NewTransform;                                      // 0x70(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAffectChildren;                                   // 0xD0(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AD4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Callstack;                                         // 0xD8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AD5[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x2F8 - 0x2F0)
// ScriptStruct ControlRig.RigSingleParentElement
struct FRigSingleParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_AD7[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementWeight
struct FRigElementWeight
{
public:
	float                                        Location;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Rotation;                                          // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Scale;                                             // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigElementParentConstraint
struct FRigElementParentConstraint
{
public:
	uint8                                        Pad_ADB[0x90];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigBoneElement
struct FRigBoneElement : public FRigSingleParentElement
{
public:
	enum class ERigBoneType                      BoneType;                                          // 0x2F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ADF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x3F0 - 0x3F0)
// ScriptStruct ControlRig.RigNullElement
struct FRigNullElement : public FRigMultiParentElement
{
public:
};

// 0x8 (0xF8 - 0xF0)
// ScriptStruct ControlRig.RigCurveElement
struct FRigCurveElement : public FRigBaseElement
{
public:
	uint8                                        Pad_AE0[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigRigidBodySettings
struct FRigRigidBodySettings
{
public:
	float                                        Mass;                                              // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigRigidBodyElement
struct FRigRigidBodyElement : public FRigSingleParentElement
{
public:
	struct FRigRigidBodySettings                 Settings;                                          // 0x2F8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_AEE[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x310 - 0x2F8)
// ScriptStruct ControlRig.RigReferenceElement
struct FRigReferenceElement : public FRigSingleParentElement
{
public:
	uint8                                        Pad_AEF[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x200 (0x200 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct FRigHierarchyCopyPasteContentPerElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_AF1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Content;                                           // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FRigElementKey>                Parents;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FRigElementWeight>             ParentWeights;                                     // 0x30(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0x40(0x1C0)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
public:
	TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;                                          // 0x0(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class ERigElementType>           Types;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class FString>                        Contents;                                          // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    GlobalTransforms;                                  // 0x40(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
	uint8                                        Pad_AF9[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct FRigUnit : public FRigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : public FRigUnit
{
public:
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : public FRigUnit
{
public:
	uint8                                        Pad_AFC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct FStructReference
{
public:
	uint8                                        Pad_AFE[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct FControlRigAnimNodeEventName
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x218 (0x270 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         bResetInputPoseToInitial;                          // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTransferInputPose;                                // 0x69(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTransferInputCurves;                              // 0x6A(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTransferPoseInGlobalSpace;                        // 0x6B(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B0E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBoneReference>                InputBonesToTransfer;                              // 0x70(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B11[0x1C0];                                    // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x240(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	struct FControlRigIOSettings                 InputSettings;                                     // 0x248(0x2)(BlueprintVisible, ZeroConstructor, ReturnParm, EditConst, GlobalConfig)
	struct FControlRigIOSettings                 OutputSettings;                                    // 0x24A(0x2)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExecute;                                          // 0x24C(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B14[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FControlRigAnimNodeEventName>  EventQueue;                                        // 0x258(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B15[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x200 (0x470 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
public:
	class UClass*                                ControlRigClass;                                   // 0x270(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UControlRig*                           ControlRig;                                        // 0x278(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	float                                        Alpha;                                             // 0x280(0x4)(Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x284(0x1)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x285(0x1)(Edit, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x285(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_55 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_B18[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x290(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0x2D8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x2E0(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class FName>               InputMapping;                                      // 0x310(0x50)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x360(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B1E[0xB0];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODThreshold;                                      // 0x460(0x4)(ConstParm, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B20[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x278 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x270(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_B24[0xA8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
public:
	struct FComponentReference                   ComponentReference;                                // 0x0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	int32                                        TransformIndex;                                    // 0x28(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TransformName;                                     // 0x2C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	enum class ERigElementType                   ElementType;                                       // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B2A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ElementName;                                       // 0x38(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x40(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B2B[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Offset;                                            // 0x50(0x60)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	enum class EControlRigComponentSpace         Space;                                             // 0xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B2D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	int32                                        ElementIndex;                                      // 0xC0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        SubIndex;                                          // 0xC4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B2E[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  ElementName;                                       // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   ElementType;                                       // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x11(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B33[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct ControlRig.ControlShapeActorCreationParam
struct FControlShapeActorCreationParam
{
public:
	uint8                                        Pad_B39[0x1D0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.ControlRigShapeDefinition
struct FControlRigShapeDefinition
{
public:
	class FName                                  ShapeName;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	uint8                                        Pad_B3D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	uint8                                        Pad_B3E[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataVariable
struct FControlRigTestDataVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  CPPType;                                           // 0x8(0x8)(Edit, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Value;                                             // 0x10(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint16                                       Index;                                             // 0xC(0x2)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_B47[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ContainerVersion;                                  // 0x10(0x4)(Edit, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B49[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
public:
	struct FCachedRigElement                     Index;                                             // 0x0(0x20)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FTransform                            GlobalTransform;                                   // 0x20(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x80(0x60)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	float                                        CurveValue;                                        // 0xE0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B4C[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigPose
struct FRigPose
{
public:
	TArray<struct FRigPoseElement>               Elements;                                          // 0x0(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HierarchyTopologyVersion;                          // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PoseHash;                                          // 0x14(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B50[0x58];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataFrame
struct FControlRigTestDataFrame
{
public:
	double                                       AbsoluteTime;                                      // 0x0(0x8)(ConstParm, ExportObject, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       DeltaTime;                                         // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FControlRigTestDataVariable>   Variables;                                         // 0x10(0x10)(BlueprintVisible, ExportObject, Transient, Config)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
public:
	uint8                                        Pad_B58[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
public:
	uint8                                        Pad_B5A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TimeStep;                                          // 0x8(0x4)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B5B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SubjectB;                                          // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Coefficient;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Equilibrium;                                       // 0xC(0x4)(ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_B61[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SubjectA;                                          // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SubjectB;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B63[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DataA;                                             // 0x10(0x18)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DataB;                                             // 0x28(0x18)(EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B6A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vector;                                            // 0x8(0x18)(Edit, BlueprintVisible, Net, OutParm)
	float                                        Coefficient;                                       // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNormalize;                                        // 0x24(0x1)(Edit, ExportObject, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B6B[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B71[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDistance;                                   // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaximumDistance;                                   // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              FalloffType;                                       // 0x6C(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B73[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Coefficient;                                       // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInverted;                                         // 0x74(0x1)(Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B75[0xB];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : public FCRSimContainer
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FCRSimLinearSpring>            Springs;                                           // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x38(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCRSimPointConstraint>         Constraints;                                       // 0x58(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	TArray<struct FRigVMSimPoint>                PreviousStep;                                      // 0x68(0x10)(ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
public:
	struct FTransform                            RelativeParent;                                    // 0x0(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FConstraintOffset                     ConstraintOffset;                                  // 0x60(0xC0)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  LinkedNode;                                        // 0x120(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransformConstraint>          Constraints;                                       // 0x128(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_B7B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
public:
	TArray<struct FConstraintNodeData>           UserData;                                          // 0x78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigElement
struct FRigElement
{
public:
	uint8                                        Pad_B80[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_B81[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x170 - 0x18)
// ScriptStruct ControlRig.RigBone
struct FRigBone : public FRigElement
{
public:
	class FName                                  ParentName;                                        // 0x18(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParentIndex;                                       // 0x20(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B88[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(Edit, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            GlobalTransform;                                   // 0x90(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0xF0(0x60)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	TArray<int32>                                Dependents;                                        // 0x150(0x10)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigBoneType                      Type;                                              // 0x160(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_B8B[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
public:
	TArray<struct FRigBone>                      Bones;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x348 (0x360 - 0x18)
// ScriptStruct ControlRig.RigControl
struct FRigControl : public FRigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B8F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayName;                                       // 0x1C(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FName                                  ParentName;                                        // 0x24(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParentIndex;                                       // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SpaceName;                                         // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SpaceIndex;                                        // 0x38(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B94[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0x40(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlValue                      InitialValue;                                      // 0xA0(0x84)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlValue                      Value;                                             // 0x124(0x84)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x1A8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsCurve;                                          // 0x1A9(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAnimatable;                                       // 0x1AA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitTranslation;                                 // 0x1AB(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitRotation;                                    // 0x1AC(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitScale;                                       // 0x1AD(0x1)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0x1AE(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B9C[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      MinimumValue;                                      // 0x1B0(0x84)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigControlValue                      MaximumValue;                                      // 0x234(0x84)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bGizmoEnabled;                                     // 0x2B8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bGizmoVisible;                                     // 0x2B9(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B9E[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  GizmoName;                                         // 0x2BC(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B9F[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            GizmoTransform;                                    // 0x2D0(0x60)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          GizmoColor;                                        // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<int32>                                Dependents;                                        // 0x340(0x10)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTransientControl;                               // 0x350(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_BA2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UEnum*                                 ControlEnum;                                       // 0x358(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
public:
	TArray<struct FRigControl>                   Controls;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct ControlRig.RigCurve
struct FRigCurve : public FRigElement
{
public:
	float                                        Value;                                             // 0x18(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_BA9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
public:
	TArray<struct FRigCurve>                     Curves;                                            // 0x0(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct ControlRig.RigSpace
struct FRigSpace : public FRigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BAE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ParentName;                                        // 0x1C(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParentIndex;                                       // 0x24(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BB0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(Edit, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x90(0x60)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
public:
	TArray<struct FRigSpace>                     Spaces;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
public:
	struct FRigBoneHierarchy                     BoneHierarchy;                                     // 0x0(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigSpaceHierarchy                    SpaceHierarchy;                                    // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlHierarchy                  ControlHierarchy;                                  // 0x20(0x10)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x30(0x10)(ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
public:
	uint8                                        Pad_BB9[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
public:
	uint8                                        Pad_BBA[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
public:
	TArray<struct FRigElementKey>                Keys;                                              // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
public:
	uint8                                        Pad_BBC[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigBaseMetadata
struct FRigBaseMetadata
{
public:
	uint8                                        Pad_BBE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	enum class ERigMetadataType                  Type;                                              // 0x18(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_BBF[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigBoolMetadata
struct FRigBoolMetadata : public FRigBaseMetadata
{
public:
	bool                                         Value;                                             // 0x28(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_BC1[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigBoolArrayMetadata
struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<bool>                                 Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigFloatMetadata
struct FRigFloatMetadata : public FRigBaseMetadata
{
public:
	float                                        Value;                                             // 0x28(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_BC4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigFloatArrayMetadata
struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<float>                                Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigInt32Metadata
struct FRigInt32Metadata : public FRigBaseMetadata
{
public:
	int32                                        Value;                                             // 0x28(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_BC7[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigInt32ArrayMetadata
struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<int32>                                Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigNameMetadata
struct FRigNameMetadata : public FRigBaseMetadata
{
public:
	class FName                                  Value;                                             // 0x28(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigNameArrayMetadata
struct FRigNameArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<class FName>                          Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigVectorMetadata
struct FRigVectorMetadata : public FRigBaseMetadata
{
public:
	struct FVector                               Value;                                             // 0x28(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigVectorArrayMetadata
struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FVector>                       Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigRotatorMetadata
struct FRigRotatorMetadata : public FRigBaseMetadata
{
public:
	struct FRotator                              Value;                                             // 0x28(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigRotatorArrayMetadata
struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRotator>                      Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct ControlRig.RigQuatMetadata
struct FRigQuatMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_BD1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x30(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigQuatArrayMetadata
struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FQuat>                         Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct ControlRig.RigTransformMetadata
struct FRigTransformMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_BD4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x30(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigTransformArrayMetadata
struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FTransform>                    Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorMetadata
struct FRigLinearColorMetadata : public FRigBaseMetadata
{
public:
	struct FLinearColor                          Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorArrayMetadata
struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FLinearColor>                  Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyMetadata
struct FRigElementKeyMetadata : public FRigBaseMetadata
{
public:
	struct FRigElementKey                        Value;                                             // 0x28(0xC)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_BE4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyArrayMetadata
struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRigElementKey>                Value;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
public:
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x0(0x10)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BE8[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_BEA[0xA8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
public:
	class UClass*                                ControlRigClass;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
public:
	TArray<struct FControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneByteChannel                ParameterCurve;                                    // 0x8(0x108)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneIntegerChannel             ParameterCurve;                                    // 0x8(0x100)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct FMovieSceneControlRigSpaceBaseKey
{
public:
	enum class EMovieSceneControlRigSpaceType    SpaceType;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BF5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        ControlRigElement;                                 // 0x4(0xC)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues;                                         // 0x60(0x10)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BF9[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x118 (0x118 - 0x0)
// ScriptStruct ControlRig.SpaceControlNameAndChannel
struct FSpaceControlNameAndChannel
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FMovieSceneControlRigSpaceChannel     SpaceCurve;                                        // 0x8(0x110)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ChannelTypeName;                                   // 0x10(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDoesHaveSpace;                                    // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C00[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SpaceChannelIndex;                                 // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaskIndex;                                         // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CategoryIndex;                                     // 0x24(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C02[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               ConstraintsIndex;                                  // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<struct FEnumParameterNameAndCurve>    Enums;                                             // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FIntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSpaceControlNameAndChannel>   Spaces;                                            // 0xA0(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FConstraintAndActiveChannel>   Constraints;                                       // 0xB0(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct ControlRig.RigControlCopy
struct FRigControlCopy
{
public:
	uint8                                        Pad_C06[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C07[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigControlValue                      Value;                                             // 0x1C(0x84)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FRigElementKey                        ParentKey;                                         // 0xA0(0xC)(ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C08[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0xB0(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            ParentTransform;                                   // 0x110(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x170(0x60)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	struct FTransform                            GlobalTransform;                                   // 0x1D0(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigControlPose
struct FControlRigControlPose
{
public:
	TArray<struct FRigControlCopy>               CopyOfControls;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C0B[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatchFactory
struct FRigDispatchFactory : public FRigVMDispatchFactory
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_C0E[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x120 (0x250 - 0x130)
// ScriptStruct ControlRig.RigUnit_PrimalHitResultNotifyActor
struct FRigUnit_PrimalHitResultNotifyActor : public FRigUnitMutable
{
public:
	class FName                                  NotifyName;                                        // 0x130(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  CustomTag;                                         // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	struct FHitResult                            HitResult;                                         // 0x140(0xF0)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst)
	struct FVector                               Velocity;                                          // 0x230(0x18)(Config, EditConst, GlobalConfig)
	uint8                                        Pad_C11[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x168 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x20(0x18)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class ECollisionChannel                 Channel;                                           // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C13[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bHit;                                              // 0x40(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C15[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLocation;                                       // 0x48(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x78(0xF0)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x160 (0x168 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x20(0x18)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_C1A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bHit;                                              // 0x40(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C1B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLocation;                                       // 0x48(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x78(0xF0)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x168 (0x170 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x20(0x18)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x38(0x10)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Radius;                                            // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bHit;                                              // 0x4C(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C1D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLocation;                                       // 0x50(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               HitNormal;                                         // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x80(0xF0)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : public FRigUnit
{
public:
	struct FEulerTransform                       Transform;                                         // 0x8(0x48)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransform                            Base;                                              // 0x50(0x60)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DuplicateTransient)
	struct FTransform                            InitTransform;                                     // 0xB0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Result;                                            // 0x110(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FTransformFilter                      Filter;                                            // 0x170(0x9)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	bool                                         bIsInitialized;                                    // 0x179(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C23[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
public:
	struct FTransform                            MeshTransform;                                     // 0x180(0x60)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumU;                                          // 0x160(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  Space;                                             // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C27[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_C28[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumU;                                          // 0x160(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Space;                                             // 0x180(0xC)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C30[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_C33[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1B8 (0x1C0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_C35[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Scale;                                             // 0x130(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FLinearColor                          Color;                                             // 0x134(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x144(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_C39[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x150(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x1B0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_C3A[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x228 (0x230 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPose
struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_C3B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FRigPose                              Pose;                                              // 0x130(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	float                                        Scale;                                             // 0x1A0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FLinearColor                          Color;                                             // 0x1A4(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Thickness;                                         // 0x1B4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_C3C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x1C0(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x220(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_C3E[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x100 - 0x100)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
};

// 0x30 (0x130 - 0x100)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x100(0x4)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C40[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Prefix;                                            // 0x108(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                        AccumulatedTime;                                   // 0x118(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MeasurementsLeft;                                  // 0x11C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x120(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C43[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
	uint8                                        Pad_C44[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Input;                                             // 0x10(0x60)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C45[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
	struct FEulerTransform                       Input;                                             // 0x8(0x48)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FTransform                            Result;                                            // 0x50(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FQuat                                 Result;                                            // 0x20(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
public:
	uint8                                        Pad_C4C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FRotator                              Result;                                            // 0x30(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C4F[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FRotator                              Result;                                            // 0x20(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FQuat                                 Result;                                            // 0x20(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FVector                               Result;                                            // 0x20(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
	uint8                                        Pad_C56[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FVector                               Result;                                            // 0x30(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C57[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
public:
	uint8                                        Pad_C58[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Swing;                                             // 0x50(0x20)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Argument1;                                         // 0xC(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Result;                                            // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C61[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Min;                                               // 0xC(0x4)(ExportObject, Net, ReturnParm, Transient, Config)
	float                                        Max;                                               // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config)
	float                                        Result;                                            // 0x14(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        MinIn;                                             // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxIn;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinOut;                                            // 0x14(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxOut;                                            // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Result;                                            // 0x1C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_C6C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Argument0;                                         // 0x10(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Argument1;                                         // 0x30(0x20)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Result;                                            // 0x50(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_C70[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 Result;                                            // 0x30(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
public:
	uint8                                        Pad_C71[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Axis;                                              // 0x30(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Angle;                                             // 0x48(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C72[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Angle;                                             // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C74[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Result;                                            // 0x30(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FQuat                                 Argument;                                          // 0x20(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Angle;                                             // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C78[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
	uint8                                        Pad_C7A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Argument0;                                         // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Argument1;                                         // 0x70(0x60)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Result;                                            // 0xD0(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Result;                                            // 0x38(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Result;                                            // 0x38(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C83[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        T;                                                 // 0x68(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_C88[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Result;                                            // 0x70(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FVector                               Tangent;                                           // 0x88(0x18)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_C8C[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FVector                               AlignVector;                                       // 0x70(0x18)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C8E[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x70 (0x1A0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAimMode                          AimMode;                                           // 0x138(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAimMode                          UpMode;                                            // 0x139(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C93[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AimVector;                                         // 0x140(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               UpVector;                                          // 0x158(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FAimTarget>                    AimTargets;                                        // 0x170(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FAimTarget>                    UpTargets;                                         // 0x180(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_AimConstraint_WorkData       WorkData;                                          // 0x190(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0x220 - 0x130)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C97[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransformFilter                      Filter;                                            // 0x1A0(0x9)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0x1A9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0x1AA(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C9A[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BaseTransform;                                     // 0x1B0(0x60)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BaseJoint;                                         // 0x210(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C9B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_C9C[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
	uint8                                        Pad_C9D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Source;                                            // 0x10(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	TArray<struct FBlendTarget>                  Targets;                                           // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Result;                                            // 0x80(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0xE0 (0x210 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ETransformGetterType              Type;                                              // 0x138(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x139(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CA1[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BaseJoint;                                         // 0x1A0(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CA3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Output;                                            // 0x1B0(0x60)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
};

// 0x310 (0x440 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x130(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndJoint;                                          // 0x138(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleTarget;                                        // 0x140(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Spin;                                              // 0x158(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CAB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            EndEffector;                                       // 0x160(0x60)(Edit, ConstParm, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        IKBlend;                                           // 0x1C0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CAE[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartJointFKTransform;                             // 0x1D0(0x60)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            MidJointFKTransform;                               // 0x230(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            EndJointFKTransform;                               // 0x290(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviousFKIKBlend;                                 // 0x2F0(0x4)(ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB1[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartJointIKTransform;                             // 0x300(0x60)(ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            MidJointIKTransform;                               // 0x360(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            EndJointIKTransform;                               // 0x3C0(0x60)(BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StartJointIndex;                                   // 0x420(0x4)(Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MidJointIndex;                                     // 0x424(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndJointIndex;                                     // 0x428(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpperLimbLength;                                   // 0x42C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LowerLimbLength;                                   // 0x430(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x434(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CBC[0xB];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x138(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_CC5[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x140 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Thickness;                                         // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_CC9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x1A0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CCA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : public FRigUnit
{
public:
	uint8                                        Pad_CCE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Reverse;                                           // 0x20(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig)
	uint8                                        Pad_CD2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChainArray
struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Reverse;                                           // 0x20(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig)
	uint8                                        Pad_CD4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecursive;                                        // 0x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CDD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecursive;                                        // 0x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE2[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetAll
struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
public:
	enum class ERigElementType                   TypeToSearch;                                      // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  New;                                               // 0x20(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CEB[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  New;                                               // 0x20(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CF0[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bAllowDuplicates;                                  // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CF3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetItems
struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         bAllowDuplicates;                                  // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CFB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	struct FRigElementKeyCollection              Reversed;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	int32                                        Count;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_CFE[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FRigElementKey                        Item;                                              // 0x1C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x150 (0x280 - 0x130)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x130(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FRigElementKeyCollection              Collection;                                        // 0x138(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	struct FRigElementKey                        Item;                                              // 0x148(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	int32                                        Index;                                             // 0x154(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Count;                                             // 0x158(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Ratio;                                             // 0x15C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	struct FControlRigExecuteContext             Completed;                                         // 0x160(0x120)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionAddItem
struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	struct FRigElementKey                        Item;                                              // 0x18(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_D08[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Result;                                            // 0x28(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_AddParent
struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	uint8                                        Pad_D0C[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetDefaultParent
struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	uint8                                        Pad_D0D[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SwitchParent
struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	enum class ERigSwitchParentMode              Mode;                                              // 0x130(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_D10[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Child;                                             // 0x134(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x140(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bMaintainGlobal;                                   // 0x14C(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D12[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D16[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FRigElementKeyCollection              Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D18[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FRigElementKey>                Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D1B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementWeight>             Weights;                                           // 0x140(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyReset
struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	class FName                                  Namespace;                                         // 0x130(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	bool                                         bIncludeCurves;                                    // 0x138(0x1)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D1E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x140(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x140 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bSuccess;                                          // 0x13C(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D22[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Parent;                                            // 0x130(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	class FName                                  Name;                                              // 0x13C(0x8)(ConstParm, Net, OutParm)
	struct FRigElementKey                        Item;                                              // 0x144(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x70 (0x1C0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x1B0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D2B[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x1C0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x1B0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D30[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControl_Settings
{
public:
	uint8                                        Pad_D36[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayName;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D39[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x4(0x8)(ConstParm, Net, OutParm)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_D3A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct FRigUnit_HierarchyAddControl_ProxySettings
{
public:
	bool                                         bIsProxy;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D40[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x18(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D42[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D43[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinValue;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D44[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D52[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;                                            // 0x14(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D54[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x1B0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x150(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE0 (0x290 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{
public:
	float                                        InitialValue;                                      // 0x1B0(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D58[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings;                                          // 0x1C0(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D59[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MinValue;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        MaxValue;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D5C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D5D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;                                            // 0x14(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D60[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE0 (0x290 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{
public:
	int32                                        InitialValue;                                      // 0x1B0(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D62[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings;                                          // 0x1C0(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D63[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MinValue;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             MaxValue;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D64[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D66[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                            // 0x18(0x30)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D67[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x110 (0x2C0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x1B0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings;                                          // 0x1C0(0x100)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlLimitEnabled               LimitZ;                                            // 0x4(0x2)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D72[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MinValue;                                          // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D74[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x110 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	bool                                         bIsPosition;                                       // 0x10(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D79[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits;                                            // 0x18(0x40)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D7C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x100(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x130 (0x2E0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector                               InitialValue;                                      // 0x1B0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D80[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlVector_Settings Settings;                                          // 0x1D0(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitPitch;                                        // 0x0(0x2)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlLimitEnabled               LimitYaw;                                          // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigControlLimitEnabled               LimitRoll;                                         // 0x4(0x2)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D88[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              MinValue;                                          // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FRotator                              MaxValue;                                          // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D8A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;                                            // 0x10(0x40)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x120 (0x2D0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x1B0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D92[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings;                                          // 0x1D0(0x100)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x10(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0x90(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xB0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x120 (0x2D0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FTransform                            InitialValue;                                      // 0x1B0(0x60)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings;                                          // 0x210(0xC0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
public:
	bool                                         InitialValue;                                      // 0x150(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         MinimumValue;                                      // 0x151(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         MaximumValue;                                      // 0x152(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DAE[0xD];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
public:
	float                                        InitialValue;                                      // 0x150(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumValue;                                      // 0x154(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MaximumValue;                                      // 0x158(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DB0[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
public:
	int32                                        InitialValue;                                      // 0x150(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinimumValue;                                      // 0x154(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        MaximumValue;                                      // 0x158(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DB2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x180 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x150(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             MinimumValue;                                      // 0x160(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             MaximumValue;                                      // 0x170(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x1A0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector                               InitialValue;                                      // 0x150(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MinimumValue;                                      // 0x168(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               MaximumValue;                                      // 0x180(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DB5[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x1A0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x150(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              MinimumValue;                                      // 0x168(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRotator                              MaximumValue;                                      // 0x180(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DB7[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_DBB[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x20(0x80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_DC1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x140(0x80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x14(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	struct FCachedRigElement                     CachedChild;                                       // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x40(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReverse;                                          // 0x15(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DC5[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReverse;                                          // 0x15(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DCA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecursive;                                        // 0x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DE0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Children;                                          // 0x18(0x10)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FCachedRigElement                     CachedParent;                                      // 0x28(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              CachedChildren;                                    // 0x48(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DE7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Siblings;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DF3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Siblings;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DF8[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              ItemsToGet;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DFA[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ItemsToGet;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetPose
struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x130(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class ERigElementType                   ElementType;                                       // 0x1A0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DFF[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              ItemsToSet;                                        // 0x1A8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1B8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_E01[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x130(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class ERigElementType                   ElementType;                                       // 0x1A0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E05[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                ItemsToSet;                                        // 0x1A8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1B8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_E07[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         IsEmpty;                                           // 0x78(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E09[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItems
struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E0F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              Items;                                             // 0x80(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E14[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x80(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetDelta
struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              PoseA;                                             // 0x8(0x70)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigPose                              PoseB;                                             // 0x78(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionThreshold;                                 // 0xE8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationThreshold;                                 // 0xEC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleThreshold;                                    // 0xF0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurveThreshold;                                    // 0xF4(0x4)(Edit, ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigElementType                   ElementType;                                       // 0xF8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0xF9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1D[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              ItemsToCompare;                                    // 0x100(0x10)(Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PosesAreEqual;                                     // 0x110(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKeyCollection              ItemsWithDelta;                                    // 0x118(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransform
struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FRigElementKey                        Item;                                              // 0x78(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x84(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Valid;                                             // 0x85(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E25[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x90(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        CurveValue;                                        // 0xF0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CachedPoseElementIndex;                            // 0xF4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CachedPoseHash;                                    // 0xF8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E29[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class ERigVMTransformSpace              Space;                                             // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Valid;                                             // 0x79(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E30[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    Transforms;                                        // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetCurve
struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class FName                                  Curve;                                             // 0x78(0x8)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config)
	bool                                         Valid;                                             // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E3C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CurveValue;                                        // 0x84(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CachedPoseElementIndex;                            // 0x88(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CachedPoseHash;                                    // 0x8C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_PoseLoop
struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x130(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FRigPose                              Pose;                                              // 0x138(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FRigElementKey                        Item;                                              // 0x1A8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_E42[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            GlobalTransform;                                   // 0x1C0(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x220(0x60)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	float                                        CurveValue;                                        // 0x280(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x284(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Count;                                             // 0x288(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Ratio;                                             // 0x28C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	struct FControlRigExecuteContext             Completed;                                         // 0x290(0x120)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_InteractionExecution
struct FRigUnit_InteractionExecution : public FRigUnit
{
public:
	uint8                                        Pad_E47[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
	uint8                                        Pad_E49[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : public FRigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTranslating;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsRotating;                                       // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsScaling;                                        // 0xB(0x1)(ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E50[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         Exists;                                            // 0x14(0x1)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E56[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Old;                                               // 0x14(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  New;                                               // 0x1C(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Result;                                            // 0x24(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemEquals
struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E5A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemNotEquals
struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E5E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E61[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E64[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemToName
struct FRigUnit_ItemToName : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Value;                                             // 0x8(0xC)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	class FName                                  Result;                                            // 0x14(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E68[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : public FRigUnit
{
public:
	uint8                                        Pad_E6B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x5A8 (0x5B0 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
	uint8                                        Pad_E6D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FControlRigExecuteContext             A;                                                 // 0x130(0x120)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FControlRigExecuteContext             B;                                                 // 0x250(0x120)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FControlRigExecuteContext             C;                                                 // 0x370(0x120)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FControlRigExecuteContext             D;                                                 // 0x490(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x368 (0x370 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceAggregate
struct FRigUnit_SequenceAggregate : public FRigUnit
{
public:
	uint8                                        Pad_E72[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FControlRigExecuteContext             A;                                                 // 0x130(0x120)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FControlRigExecuteContext             B;                                                 // 0x250(0x120)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_E74[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPostMultiply;                                     // 0x1A4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1A5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E77[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E79[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_E7C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemArray
struct FRigUnit_ItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FName                                  Channel;                                           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bInitial;                                          // 0x18(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E89[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        CachedChannelKey;                                  // 0x1C(0xC)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CachedChannelHash;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E8D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x30(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_E90[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x30(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_E92[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x30(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_E99[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x40 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x30(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x30(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x30(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x30(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x120 (0x150 - 0x30)
// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x30(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x150(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EA1[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x150(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EA3[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x150(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EA8[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x150(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x20 (0x170 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x150(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EAC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x170 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x150(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EAF[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x1B0 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x150(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EB3[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EB8[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         BoolValue;                                         // 0x10(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EBC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        FloatValue;                                        // 0x10(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        Minimum;                                           // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        IntegerValue;                                      // 0x10(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Minimum;                                           // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        Maximum;                                           // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Vector;                                            // 0x10(0x10)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector2D                             Minimum;                                           // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FVector2D                             Maximum;                                           // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ECB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vector;                                            // 0x18(0x18)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector                               Minimum;                                           // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FVector                               Maximum;                                           // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Rotator;                                           // 0x18(0x18)(Edit, ExportObject, Net, OutParm)
	struct FRotator                              Minimum;                                           // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FRotator                              Maximum;                                           // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED8[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransform                            Minimum;                                           // 0x80(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            Maximum;                                           // 0xE0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : public FRigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x8)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config)
	bool                                         Valid;                                             // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EDB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Value;                                             // 0x14(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x18(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EDF[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	class FName                                  Space;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EE3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedSpace;                                       // 0xA0(0x20)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EE9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Parent;                                            // 0x18(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bParentInitial;                                    // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EEB[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x30(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCachedRigElement                     CachedChild;                                       // 0x90(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0xB0(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EF5[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x80(0x20)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x15(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EFC[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedIndex;                                       // 0x80(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformArray
struct FRigUnit_GetTransformArray : public FRigUnit
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F04[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
struct FRigUnit_GetTransformItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F13[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_MetadataBase
struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_F16[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetMetadata
struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetMetadata
struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveMetadata
struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Name;                                              // 0x13C(0x8)(ConstParm, Net, OutParm)
	bool                                         Removed;                                           // 0x144(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F19[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F1A[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         Removed;                                           // 0x13C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F1C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x140(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadata
struct FRigUnit_HasMetadata : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Name;                                              // 0x14(0x8)(ConstParm, Net, OutParm)
	enum class ERigMetadataType                  Type;                                              // 0x1C(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	bool                                         Found;                                             // 0x1D(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_F21[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	enum class ERigMetadataType                  Type;                                              // 0x10(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_F23[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetMetadataTags
struct FRigUnit_GetMetadataTags : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_F28[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)
	struct FCachedRigElement                     CachedIndex;                                       // 0x28(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMetadataTag
struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Tag;                                               // 0x13C(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_F2A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F2B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_F2E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          Tags;                                              // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)
	struct FCachedRigElement                     CachedIndex;                                       // 0x150(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Tag;                                               // 0x13C(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Removed;                                           // 0x144(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F30[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F31[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTag
struct FRigUnit_HasMetadataTag : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class FName                                  Tag;                                               // 0x14(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Found;                                             // 0x1C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_F35[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_F37[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_F39[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x30(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
public:
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)
	bool                                         Inclusive;                                         // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F40[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<struct FCachedRigElement>             CachedIndices;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_F45[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0x140(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F46[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x1A8(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F47[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x130(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParentIndex;                                       // 0x13C(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKeyCollection              Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FTransform                            InitialGlobalTransform;                            // 0x150(0x60)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1B0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_F4D[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         Switched;                                          // 0x220(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F4F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedSubject;                                     // 0x228(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x248(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F50[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeOffset;                                    // 0x270(0x60)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x130(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParentIndex;                                       // 0x13C(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigElementKey>                Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FTransform                            InitialGlobalTransform;                            // 0x150(0x60)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1B0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_F57[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         Switched;                                          // 0x220(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F59[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedSubject;                                     // 0x228(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x248(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F5B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeOffset;                                    // 0x270(0x60)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F60[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        OldParent;                                         // 0x18(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOldParentInitial;                                 // 0x24(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F63[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        NewParent;                                         // 0x28(0xC)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNewParentInitial;                                 // 0x34(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F66[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedChild;                                       // 0xA0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedOldParent;                                   // 0xC0(0x20)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedNewParent;                                   // 0xE0(0x20)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bRecomputeGlobal;                                  // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyToChildren;                                  // 0x13D(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecursive;                                        // 0x13E(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F6C[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x140(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x130(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_F71[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Item;                                              // 0x134(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	float                                        OffsetInSeconds;                                   // 0x140(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnable;                                           // 0x144(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyDuringInteraction;                            // 0x145(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F74[0xA];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_F76[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x201(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F7B[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x208(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F7C[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_F7E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x140(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ERigVMTransformSpace              Space;                                             // 0x160(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F80[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x164(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x168(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F82[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x170(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_F85[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F86[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x204(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x208(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F87[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x210(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	struct FVector                               Translation;                                       // 0x138(0x18)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x150(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F88[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F8B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x160(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlColor
struct FRigUnit_GetControlColor : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FLinearColor                          Color;                                             // 0x138(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x148(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F8F[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
struct FRigUnit_GetControlDrivenList : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TArray<struct FRigElementKey>                Driven;                                            // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TArray<struct FRigElementKey>                Driven;                                            // 0x138(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x148(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F95[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_F97[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Offset;                                            // 0x140(0x60)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F99[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A8(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F9A[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetShapeTransform
struct FRigUnit_GetShapeTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetShapeTransform
struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_F9F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A0(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         BoolValue;                                         // 0x138(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FA2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         BoolValue;                                         // 0x8(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FA5[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x140(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        FloatValue;                                        // 0x13C(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        FloatValue;                                        // 0x8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FAB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FAC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	int32                                        IntegerValue;                                      // 0x13C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        IntegerValue;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FBA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FBC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FBE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Vector;                                            // 0x140(0x10)(Edit, BlueprintVisible, Net, OutParm)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x150(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Vector;                                            // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FC6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FC7[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FC8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vector;                                            // 0x140(0x18)(Edit, BlueprintVisible, Net, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FC9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x160(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FCB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Rotator;                                           // 0x140(0x18)(Edit, ExportObject, Net, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FCE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x160(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotator;                                           // 0x8(0x18)(Edit, ExportObject, Net, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FD2[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FD6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FD8[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_FDD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FDE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A8(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FDF[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVisibility
struct FRigUnit_GetControlVisibility : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bVisible;                                          // 0x14(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FE3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_FE5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Pattern;                                           // 0x140(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bVisible;                                          // 0x150(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FE8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x158(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FE9[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x130(0x8)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config)
	float                                        Value;                                             // 0x138(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_FEB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x140(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	class FName                                  Space;                                             // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FEE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedBone;                                        // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1C8(0x20)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FF0[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bParentInitial;                                    // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FF4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x150(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x1B0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1B4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FF7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedChild;                                       // 0x1B8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x1D8(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FF9[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bParentInitial;                                    // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FFD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x150(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x16C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1000[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedChild;                                       // 0x170(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x190(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	bool                                         bParentInitial;                                    // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1003[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x150(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1004[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedChild;                                       // 0x178(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedParent;                                      // 0x198(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1006[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1007[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1009[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x208(0x20)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_100A[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x138(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_100E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x140(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x1A0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1010[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1A8(0x20)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1011[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x13D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1016[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x140(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1018[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x1A8(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1019[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x13D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_101B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x140(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_101D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x160(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x13D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1021[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x140(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        Weight;                                            // 0x160(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x164(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1023[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x168(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1024[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x13D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1028[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale;                                             // 0x140(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Weight;                                            // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_102A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     CachedIndex;                                       // 0x160(0x20)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransformArray
struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x141(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1030[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    Transforms;                                        // 0x148(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1034[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x160(0x10)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              Space;                                             // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitial;                                          // 0x141(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1038[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    Transforms;                                        // 0x148(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_103A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x160(0x10)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x130(0x8)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x138(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_103B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_103E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x10(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FTransform                            World;                                             // 0x70(0x60)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_1040[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x10(0x60)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FTransform                            Global;                                            // 0x70(0x60)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               World;                                             // 0x20(0x18)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               Global;                                            // 0x20(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_1045[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x10(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FQuat                                 World;                                             // 0x30(0x20)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_1047[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x10(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FQuat                                 Global;                                            // 0x30(0x20)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        Ratio;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	float                                        Ratio;                                             // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveTime;                                          // 0x10(0x18)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst)
	struct FVector                               WaveSpeed;                                         // 0x140(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveFrequency;                                     // 0x158(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveAmplitude;                                     // 0x170(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveOffset;                                        // 0x188(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveNoise;                                         // 0x1A0(0x18)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1B8(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1056[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaveMinimum;                                       // 0x1BC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaveMaximum;                                       // 0x1C0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1C4(0x1)(Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1C5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1059[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1C8(0x28)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_Harmonics_TargetItem> Targets;                                           // 0x130(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveSpeed;                                         // 0x140(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveFrequency;                                     // 0x158(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveAmplitude;                                     // 0x170(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveOffset;                                        // 0x188(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveNoise;                                         // 0x1A0(0x18)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1B8(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1066[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaveMinimum;                                       // 0x1BC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaveMaximum;                                       // 0x1C0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1C4(0x1)(Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1067[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1C8(0x28)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_106A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReachTarget;                                       // 0x8(0x18)(EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ReachAxis;                                         // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReachMinimum;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReachMaximum;                                      // 0x3C(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              ReachEase;                                         // 0x40(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_106C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_106F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WaveFrequency;                                     // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveAmplitude;                                     // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveOffset;                                        // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WaveNoise;                                         // 0x50(0x18)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaveMinimum;                                       // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaveMaximum;                                       // 0x6C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x70(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1073[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_1074[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PendulumStiffness;                                 // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PendulumGravity;                                   // 0x8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PendulumBlend;                                     // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PendulumDrag;                                      // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PendulumMinimum;                                   // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PendulumMaximum;                                   // 0x2C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              PendulumEase;                                      // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1078[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               UnwindAxis;                                        // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnwindMinimum;                                     // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnwindMaximum;                                     // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
public:
	struct FVector                               Time;                                              // 0x0(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<struct FCachedRigElement>             Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<float>                                Ratio;                                             // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	TArray<struct FVector>                       LocalTip;                                          // 0x38(0x10)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       PendulumTip;                                       // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       PendulumPosition;                                  // 0x58(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       PendulumVelocity;                                  // 0x68(0x10)(ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       HierarchyLine;                                     // 0x78(0x10)(Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       VelocityLines;                                     // 0x88(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2D0 (0x400 - 0x130)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Speed;                                             // 0x138(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x150(0x48)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x198(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x210(0x88)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x298(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebug;                                        // 0x2F0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_1083[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x300(0x60)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x360(0x98)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1084[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2D0 (0x400 - 0x130)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ChainRoot;                                         // 0x130(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1085[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Speed;                                             // 0x140(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x158(0x48)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x1A0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x218(0x88)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x2A0(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawDebug;                                        // 0x2F8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_1089[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DrawWorldOffset;                                   // 0x300(0x60)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x360(0x98)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_108B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_108F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Axis;                                              // 0x8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1094[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Space;                                             // 0x3C(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1095[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1099[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Axis;                                              // 0x8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_109E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Space;                                             // 0x3C(0xC)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_10A0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_10A1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x228 (0x230 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_10A3[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InputTransform;                                    // 0x10(0x60)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x70(0x48)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0xB8(0x48)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x100(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_10A4[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Result;                                            // 0x110(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x170(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x1E0(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x200(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x220(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10A9[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x180 (0x2B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	struct FRigUnit_AimBone_Target               Primary;                                           // 0x138(0x48)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FRigUnit_AimBone_Target               Secondary;                                         // 0x180(0x48)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1C8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1CC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x1D0(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedBoneIndex;                                   // 0x240(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x260(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x280(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10B4[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x190 (0x2C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_10B6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x140(0x48)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0x188(0x48)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_10B8[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x1E0(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedItem;                                        // 0x250(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x270(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x290(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x2B0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10BC[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct FRigUnit_AimConstraint_WorldUp
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	enum class EControlRigVectorKind             Kind;                                              // 0x18(0x1)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        Space;                                             // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct FRigUnit_AimConstraint_AdvancedSettings
{
public:
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x0(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x70(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10C7[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ConstraintParent
struct FConstraintParent
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	float                                        Weight;                                            // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
};

// 0x160 (0x290 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	struct FVector                               AimAxis;                                           // 0x140(0x18)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               UpAxis;                                            // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_AimConstraint_WorldUp        WorldUp;                                           // 0x170(0x28)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FConstraintParent>             Parents;                                           // 0x198(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_10CD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                                  // 0x1B0(0x80)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x230(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_10CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     WorldUpSpaceCache;                                 // 0x238(0x20)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     ChildCache;                                        // 0x258(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x278(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x288(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10D3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        Limit;                                             // 0x8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	float                                        Limit;                                             // 0xC(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
public:
	TArray<struct FCCDIKChainLink>               Chain;                                             // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedEffector;                                    // 0x40(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EffectorBone;                                      // 0x138(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10DF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigUnit_CCDIK_RotationLimit>  RotationLimits;                                    // 0x1B8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10ED[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10EE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1B8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10F7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1B8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10FA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Ratio;                                             // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_10FC[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndBone;                                           // 0x138(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1102[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1104[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x160(0x50)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1106[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x158(0x50)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1109[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_110E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x158(0x50)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_110F[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
public:
	TArray<struct FFABRIKChainLink>              Chain;                                             // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedEffector;                                    // 0x20(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EffectorBone;                                      // 0x138(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1125[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1128[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1130[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1131[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1135[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1137[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Ratio;                                             // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_113A[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_113C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FLinearColor                          CurveColor;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SegmentsColor;                                     // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_113E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x30(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1141[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       ItemPositions;                                     // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       CurvePositions;                                    // 0x28(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x88(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndBone;                                           // 0x138(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1145[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x1A4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x1A8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1149[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x20C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_114A[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_114B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_114E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x1A4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x1A8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1153[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x20C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1154[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1155[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1166[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Minimum;                                           // 0x1A4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        Maximum;                                           // 0x1A8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1168[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x20C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_116A[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_116C[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	uint8                                        Pad_116F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        WeightMinimum;                                     // 0x144(0x4)(Edit, ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WeightMaximum;                                     // 0x148(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x14C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_1175[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x150(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	uint8                                        Pad_1177[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x130(0x10)(ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        WeightMinimum;                                     // 0x144(0x4)(Edit, ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WeightMaximum;                                     // 0x148(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x14C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_117C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_ModifyTransforms_WorkData    WorkData;                                          // 0x150(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_117E[0x68];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x138(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        Precision;                                         // 0x148(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x14C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1182[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x150(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1184[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_MultiFABRIK_WorkData         WorkData;                                          // 0x158(0x68)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInitialized;                                    // 0x1C0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1185[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1189[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    BlendedTransforms;                                 // 0x38(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndBone;                                           // 0x138(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SlideAmount;                                       // 0x140(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_118F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        SlideAmount;                                       // 0x140(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1192[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        SlideAmount;                                       // 0x140(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1193[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RegionScaleFactors
struct FRegionScaleFactors
{
public:
	float                                        PositiveWidth;                                     // 0x0(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NegativeWidth;                                     // 0x4(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositiveHeight;                                    // 0x8(0x4)(ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NegativeHeight;                                    // 0xC(0x4)(OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.SphericalRegion
struct FSphericalRegion
{
public:
	uint8                                        Pad_1194[0x14];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct FSphericalPoseReaderDebugSettings
{
public:
	bool                                         bDrawDebug;                                        // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bDraw2D;                                           // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawLocalAxes;                                    // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1197[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DebugScale;                                        // 0x4(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DebugSegments;                                     // 0x8(0x4)(ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DebugThickness;                                    // 0xC(0x4)(Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
public:
	float                                        OutputParam;                                       // 0x130(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        DriverItem;                                        // 0x134(0xC)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DriverAxis;                                        // 0x140(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RotationOffset;                                    // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ActiveRegionSize;                                  // 0x170(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRegionScaleFactors                   ActiveRegionScaleFactors;                          // 0x174(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FalloffSize;                                       // 0x184(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRegionScaleFactors                   FalloffRegionScaleFactors;                         // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         FlipWidthScaling;                                  // 0x198(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         FlipHeightScaling;                                 // 0x199(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_119C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        OptionalParentItem;                                // 0x19C(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSphericalPoseReaderDebugSettings     Debug;                                             // 0x1A8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSphericalRegion                      InnerRegion;                                       // 0x1B8(0x14)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSphericalRegion                      OuterRegion;                                       // 0x1CC(0x14)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DriverNormal;                                      // 0x1E0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Driver2D;                                          // 0x1F8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     DriverCache;                                       // 0x210(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     OptionalParentCache;                               // 0x230(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            LocalDriverTransformInit;                          // 0x250(0x60)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CachedRotationOffset;                              // 0x2B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCachedInitTransforms;                             // 0x2C8(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11A0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_11A2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_11A5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedBones;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedPoleVector;                                  // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Transforms;                                        // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCRSimPointContainer                  Simulation;                                        // 0x40(0x78)(BlueprintVisible, Net, Config, EditConst)
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndBone;                                           // 0x138(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HierarchyStrength;                                 // 0x140(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EffectorStrength;                                  // 0x144(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EffectorRatio;                                     // 0x148(0x4)(Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RootStrength;                                      // 0x14C(0x4)(ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RootRatio;                                         // 0x150(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Damping;                                           // 0x154(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector                               PoleVector;                                        // 0x158(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipPolePlane;                                    // 0x170(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x171(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11AE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  PoleVectorSpace;                                   // 0x174(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PrimaryAxis;                                       // 0x180(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x198(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLiveSimulation;                                   // 0x1B0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11B3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Iterations;                                        // 0x1B4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitLocalPosition;                               // 0x1B8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x1B9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11B5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_SpringIK_DebugSettings       DebugSettings;                                     // 0x1C0(0x80)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_SpringIK_WorkData            WorkData;                                          // 0x240(0xB8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11B6[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bMaintainOffset;                                   // 0x64(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransformFilter                      Filter;                                            // 0x65(0x9)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_11B9[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0x220 - 0x130)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x138(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11BF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BaseBone;                                          // 0x1A0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1A8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseInitialTransforms;                             // 0x1B8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1C0(0x60)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        BaseItem;                                          // 0x1A0(0xC)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseInitialTransforms;                             // 0x1C0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1C8(0x60)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11C6[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct FRigUnit_ParentConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentConstraint
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransformFilter                      Filter;                                            // 0x13D(0x9)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_11CC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FConstraintParent>             Parents;                                           // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                                  // 0x158(0x2)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11CE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x15C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FCachedRigElement                     ChildCache;                                        // 0x160(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_PositionConstraint
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Weight;                                            // 0x150(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_11D5[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Weight;                                            // 0x150(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_11D9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11DB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct FRigUnit_RotationConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_RotationConstraint
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x150(0x2)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_11E0[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x150(0x2)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11E5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11E6[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ScaleConstraint
struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Weight;                                            // 0x150(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_11E8[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Weight;                                            // 0x150(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_11EB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11EC[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    ItemTransforms;                                    // 0x20(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndBone;                                           // 0x138(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TwistAxis;                                         // 0x140(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleAxis;                                          // 0x158(0x18)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x170(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11F1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x174(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x178(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11F2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x180(0x30)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FVector                               TwistAxis;                                         // 0x140(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PoleAxis;                                          // 0x158(0x18)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x170(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11F8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x174(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bPropagateToChildren;                              // 0x178(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11FB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x180(0x30)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_11FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_11FD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1F0 (0x320 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x130(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BoneB;                                             // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EffectorBone;                                      // 0x140(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1203[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Effector;                                          // 0x150(0x60)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SecondaryAxisWeight;                               // 0x1E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1208[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x1E8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x200(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1209[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  PoleVectorSpace;                                   // 0x204(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableStretch;                                    // 0x20C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_120A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StretchStartRatio;                                 // 0x210(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchMaximumRatio;                               // 0x214(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x218(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        BoneALength;                                       // 0x21C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneBLength;                                       // 0x220(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x224(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_120D[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x230(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedBoneAIndex;                                  // 0x2A0(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedBoneBIndex;                                  // 0x2C0(0x20)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedEffectorBoneIndex;                           // 0x2E0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x300(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x200 (0x330 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ItemA;                                             // 0x130(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        ItemB;                                             // 0x13C(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        EffectorItem;                                      // 0x148(0xC)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_120F[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Effector;                                          // 0x160(0x60)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0x1C0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x1D8(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SecondaryAxisWeight;                               // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1211[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PoleVector;                                        // 0x1F8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x210(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1212[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        PoleVectorSpace;                                   // 0x214(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableStretch;                                    // 0x220(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1213[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StretchStartRatio;                                 // 0x224(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchMaximumRatio;                               // 0x228(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x22C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        ItemALength;                                       // 0x230(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemBLength;                                       // 0x234(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x238(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1214[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x240(0x70)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedItemAIndex;                                  // 0x2B0(0x20)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedItemBIndex;                                  // 0x2D0(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedEffectorItemIndex;                           // 0x2F0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x310(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
public:
	struct FVector                               Root;                                              // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	struct FVector                               PoleVector;                                        // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Effector;                                          // 0x38(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableStretch;                                    // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1216[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StretchStartRatio;                                 // 0x54(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchMaximumRatio;                               // 0x58(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneALength;                                       // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneBLength;                                       // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1218[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Elbow;                                             // 0x68(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_1219[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Root;                                              // 0x10(0x60)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	struct FVector                               PoleVector;                                        // 0x70(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_121C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Effector;                                          // 0x90(0x60)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PrimaryAxis;                                       // 0xF0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               SecondaryAxis;                                     // 0x108(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SecondaryAxisWeight;                               // 0x120(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableStretch;                                    // 0x124(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_121F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StretchStartRatio;                                 // 0x128(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchMaximumRatio;                               // 0x12C(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneALength;                                       // 0x130(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneBLength;                                       // 0x134(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1227[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Elbow;                                             // 0x140(0x60)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_122A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        CollisionScale;                                    // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_122D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	int32                                        TranslationPoint;                                  // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PrimaryAimPoint;                                   // 0xC(0x4)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SecondaryAimPoint;                                 // 0x10(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
public:
	struct FCRSimPointContainer                  Simulation;                                        // 0x0(0x78)(BlueprintVisible, Net, Config, EditConst)
	TArray<struct FCachedRigElement>             BoneIndices;                                       // 0x78(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x210 (0x310 - 0x100)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FCRSimLinearSpring>            Links;                                             // 0x110(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x120(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SimulatedStepsPerSecond;                           // 0x140(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMSimPointIntegrateType       IntegratorType;                                    // 0x144(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_123A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VerletBlend;                                       // 0x148(0x4)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_123C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0x150(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitLocalPosition;                               // 0x160(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPropagateToChildren;                              // 0x161(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_123E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PrimaryAimAxis;                                    // 0x168(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               SecondaryAimAxis;                                  // 0x180(0x18)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_123F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0x1A0(0x80)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x220(0x60)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRigUnit_PointSimulation_WorkData     WorkData;                                          // 0x280(0x88)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1243[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterp
struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{
public:
	float                                        Current;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Target;                                            // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Stiffness;                                         // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        CriticalDamping;                                   // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Result;                                            // 0x1C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FFloatSpringState                     SpringState;                                       // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1246[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVector
struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Stiffness;                                         // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        CriticalDamping;                                   // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x40(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_124A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Result;                                            // 0x48(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FVectorSpringState                    SpringState;                                       // 0x60(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpV2
struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{
public:
	float                                        Target;                                            // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Strength;                                          // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CriticalDamping;                                   // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Force;                                             // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseCurrentInput;                                  // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_124F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Current;                                           // 0x1C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TargetVelocityAmount;                              // 0x20(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitializeFromTarget;                             // 0x24(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1252[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Result;                                            // 0x28(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                        Velocity;                                          // 0x2C(0x4)(Config, EditConst, GlobalConfig)
	float                                        SimulatedResult;                                   // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatSpringState                     SpringState;                                       // 0x34(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Strength;                                          // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CriticalDamping;                                   // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Force;                                             // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseCurrentInput;                                  // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1256[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Current;                                           // 0x48(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TargetVelocityAmount;                              // 0x60(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitializeFromTarget;                             // 0x64(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1257[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Result;                                            // 0x68(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FVector                               Velocity;                                          // 0x80(0x18)(Config, EditConst, GlobalConfig)
	struct FVector                               SimulatedResult;                                   // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVectorSpringState                    SpringState;                                       // 0xB0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_125D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Target;                                            // 0x10(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Strength;                                          // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CriticalDamping;                                   // 0x34(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Torque;                                            // 0x38(0x18)(Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseCurrentInput;                                  // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1261[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Current;                                           // 0x60(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TargetVelocityAmount;                              // 0x80(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitializeFromTarget;                             // 0x84(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1263[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Result;                                            // 0x90(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FVector                               AngularVelocity;                                   // 0xB0(0x18)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1265[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 SimulatedResult;                                   // 0xD0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQuaternionSpringState                SpringState;                                       // 0xF0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


