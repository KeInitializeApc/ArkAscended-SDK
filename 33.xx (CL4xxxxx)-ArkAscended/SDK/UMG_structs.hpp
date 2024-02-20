#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateVisibility : uint8
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5,
};

enum class EAlignVerticalUI : uint8
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	EAlignVerticalUI_MAX           = 3,
};

enum class EAlignHorizontalUI : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	EAlignHorizontalUI_MAX         = 3,
};

enum class EVirtualKeyboardType : uint8
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6,
};

enum class ESlateAccessibleBehavior : uint8
{
	NotAccessible                  = 0,
	Auto                           = 1,
	Summary                        = 2,
	Custom                         = 3,
	ToolTip                        = 4,
	ESlateAccessibleBehavior_MAX   = 5,
};

enum class EWidgetAnimationEvent : uint8
{
	Started                        = 0,
	Finished                       = 1,
	EWidgetAnimationEvent_MAX      = 2,
};

enum class EUMGSequencePlayMode : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3,
};

enum class EWidgetTickFrequency : uint8
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2,
};

enum class ESlateSizeRule : uint8
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2,
};

enum class EDynamicBoxType : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Wrap                           = 2,
	VerticalWrap                   = 3,
	Radial                         = 4,
	Overlay                        = 5,
	EDynamicBoxType_MAX            = 6,
};

enum class EWidgetDesignFlags : uint8
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 4,
	Previewing                     = 8,
	EWidgetDesignFlags_MAX         = 9,
};

enum class EWidgetSpace : uint8
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2,
};

enum class EWidgetTimingPolicy : uint8
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2,
};

enum class EWidgetBlendMode : uint8
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3,
};

enum class EWidgetGeometryMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2,
};

enum class EWindowVisibility : uint8
{
	Visible                        = 0,
	SelfHitTestInvisible           = 1,
	EWindowVisibility_MAX          = 2,
};

enum class ETickMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Automatic                      = 2,
	ETickMode_MAX                  = 3,
};

enum class EWidgetInteractionSource : uint8
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};

enum class EDragPivot : uint8
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10,
};

enum class EBindingKind : uint8
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.FieldNotificationId
struct FFieldNotificationId
{
public:
	class FName                                  FieldName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct UMG.EventReply
struct FEventReply
{
public:
	uint8                                        Pad_1B61[0xB8];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector2D                             Scale;                                             // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector2D                             Shear;                                             // 0x20(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	float                                        Angle;                                             // 0x30(0x4)(Edit, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B68[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x3 (0x3 - 0x0)
// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions
{
public:
	uint8                                        bOverride_TextShapingMethod : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_TextFlowDirection : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E3 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class ETextShapingMethod                TextShapingMethod;                                 // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct UMG.PaintContext
struct FPaintContext
{
public:
	uint8                                        Pad_1B77[0x30];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EWidgetAnimationEvent             AnimationEvent;                                    // 0x18(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B7C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  UserTag;                                           // 0x1C(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B7D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class UWidget*                               Content;                                           // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.RadialBoxSettings
struct FRadialBoxSettings
{
public:
	float                                        StartingAngle;                                     // 0x0(0x4)(Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDistributeItemsEvenly;                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AngleBetweenItems;                                 // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SectorCentralAngle;                                // 0xC(0x4)(EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class ESlateSizeRule                    SizeRule;                                          // 0x4(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B8B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1BA3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  WidgetToFocus;                                     // 0x4(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TWeakObjectPtr<class UWidget>                Widget;                                            // 0xC(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	FDelegateProperty_                           CustomDelegate;                                    // 0x14(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct UMG.SequenceTickManagerWidgetData
struct FSequenceTickManagerWidgetData
{
public:
	uint8                                        Pad_1BD9[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SlotWidgetName;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 AnimationGuid;                                     // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsRootWidget;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BED[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding
{
public:
	enum class EWidgetAnimationEvent             Action;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BF2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  AnimationToBind;                                   // 0x4(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  UserTag;                                           // 0x14(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct UMG.DynamicPropertyPath
struct FDynamicPropertyPath : public FCachedPropertyPath
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct UMG.GameViewportWidgetSlot
struct FGameViewportWidgetSlot
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x20)(Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               Offsets;                                           // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        ZOrder;                                            // 0x40(0x4)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C01[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool
{
public:
	TArray<class UUserWidget*>                   ActiveWidgets;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUserWidget*>                   InactiveWidgets;                                   // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C05[0x68];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct UMG.AnchorData
struct FAnchorData
{
public:
	struct FMargin                               Offsets;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FAnchors                              Anchors;                                           // 0x10(0x20)(Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x348 (0x350 - 0x8)
// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : public FTableRowBase
{
public:
	uint8                                        Pad_1C07[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x340)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct UMG.RichImageRow
struct FRichImageRow : public FTableRowBase
{
public:
	uint8                                        Pad_1C0A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Brush;                                             // 0x10(0xD0)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x10 (0xC8 - 0xB8)
// ScriptStruct UMG.WidgetComponentInstanceData
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
public:
	uint8                                        Pad_1C0C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x3C (0x3C - 0x0)
// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FColor                                Color;                                             // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FVector2f                             UV0;                                               // 0xC(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2f                             UV1;                                               // 0x14(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2f                             UV2;                                               // 0x1C(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2f                             UV3;                                               // 0x24(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2f                             UV4;                                               // 0x2C(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2f                             UV5;                                               // 0x34(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding
{
public:
	class FString                                ObjectName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x20(0x38)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBindingKind                      Kind;                                              // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


