#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	ClipNever                      = 5,
	EWidgetClipping_MAX            = 6,
};

enum class ESlateBrushRoundingType : uint8
{
	FixedRadius                    = 0,
	HalfHeightRadius               = 1,
	ESlateBrushRoundingType_MAX    = 2,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_ColorTable            = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_UseStyle              = 4,
	UseColor_MAX                   = 5,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	Vector                         = 3,
	ESlateBrushImageType_MAX       = 4,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	RoundedBox                     = 4,
	ESlateBrushDrawType_MAX        = 5,
};

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EFlowDirectionPreference : uint8
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ETextOverflowPolicy : uint8
{
	Clip                           = 0,
	Ellipsis                       = 1,
	ETextOverflowPolicy_MAX        = 2,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class ETextTransformPolicy : uint8
{
	None                           = 0,
	ToLower                        = 1,
	ToUpper                        = 2,
	ETextTransformPolicy_MAX       = 3,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EUINavigationAction : uint8
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class ESlateDebuggingInputEvent : uint8
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	PreviewMouseButtonDown         = 3,
	MouseButtonDown                = 4,
	MouseButtonUp                  = 5,
	MouseButtonDoubleClick         = 6,
	MouseWheel                     = 7,
	TouchStart                     = 8,
	TouchEnd                       = 9,
	TouchForceChanged              = 10,
	TouchFirstMove                 = 11,
	TouchMoved                     = 12,
	DragDetected                   = 13,
	DragEnter                      = 14,
	DragLeave                      = 15,
	DragOver                       = 16,
	DragDrop                       = 17,
	DropMessage                    = 18,
	PreviewKeyDown                 = 19,
	KeyDown                        = 20,
	KeyUp                          = 21,
	KeyChar                        = 22,
	AnalogInput                    = 23,
	TouchGesture                   = 24,
	MotionDetected                 = 25,
	MAX                            = 26,
};

enum class ESlateDebuggingStateChangeEvent : uint8
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ESlateDebuggingNavigationMethod : uint8
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

enum class ESlateDebuggingFocusEvent : uint8
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	MAX                            = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class EStyleColor : uint8
{
	Black                          = 0,
	Background                     = 1,
	Title                          = 2,
	WindowBorder                   = 3,
	Foldout                        = 4,
	Input                          = 5,
	InputOutline                   = 6,
	Recessed                       = 7,
	Panel                          = 8,
	Header                         = 9,
	Dropdown                       = 10,
	DropdownOutline                = 11,
	Hover                          = 12,
	Hover2                         = 13,
	White                          = 14,
	White25                        = 15,
	Highlight                      = 16,
	Primary                        = 17,
	PrimaryHover                   = 18,
	PrimaryPress                   = 19,
	Secondary                      = 20,
	Foreground                     = 21,
	ForegroundHover                = 22,
	ForegroundInverted             = 23,
	ForegroundHeader               = 24,
	Select                         = 25,
	SelectInactive                 = 26,
	SelectParent                   = 27,
	SelectHover                    = 28,
	Notifications                  = 29,
	AccentBlue                     = 30,
	AccentPurple                   = 31,
	AccentPink                     = 32,
	AccentRed                      = 33,
	AccentOrange                   = 34,
	AccentYellow                   = 35,
	AccentGreen                    = 36,
	AccentBrown                    = 37,
	AccentBlack                    = 38,
	AccentGray                     = 39,
	AccentWhite                    = 40,
	AccentFolder                   = 41,
	Warning                        = 42,
	Error                          = 43,
	Success                        = 44,
	User1                          = 45,
	User2                          = 46,
	User3                          = 47,
	User4                          = 48,
	User5                          = 49,
	User6                          = 50,
	User7                          = 51,
	User8                          = 52,
	User9                          = 53,
	User10                         = 54,
	User11                         = 55,
	User12                         = 56,
	User13                         = 57,
	User14                         = 58,
	User15                         = 59,
	User16                         = 60,
	MAX                            = 61,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_289[0x38];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_28A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SlateCore.SlateBrushOutlineSettings
struct FSlateBrushOutlineSettings
{
public:
	struct FVector4                              CornerRadii;                                       // 0x0(0x20)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           Color;                                             // 0x20(0x14)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Width;                                             // 0x34(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	enum class ESlateBrushRoundingType           RoundingType;                                      // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseBrushTransparency;                             // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_28B[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SlateCore.DeprecateSlateVector2D
struct FDeprecateSlateVector2D : public FVector2f
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        Top;                                               // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        Right;                                             // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_28D[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x10(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_26 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x11(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateBrushTileType               Tiling;                                            // 0x12(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x13(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateBrushImageType              ImageType;                                         // 0x14(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_290[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDeprecateSlateVector2D               ImageSize;                                         // 0x18(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               Margin;                                            // 0x20(0x10)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance)
	struct FSlateColor                           TintColor;                                         // 0x30(0x14)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_293[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrushOutlineSettings            OutlineSettings;                                   // 0x50(0x40)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               ResourceObject;                                    // 0x90(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FName                                  ResourceName;                                      // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FBox2f                                UVRegion;                                          // 0xA0(0x14)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_295[0x1C];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_297[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x78 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_299[0x58];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_29C[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x768 (0x770 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_29E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x10(0xD0)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x280(0xD0)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x350(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x420(0xD0)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x4F0(0xD0)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x5C0(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x690(0xD0)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Thickness;                                         // 0x760(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A5[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD48 (0xD50 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2A6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0xE0(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ActiveBrush;                                       // 0x1B0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x280(0xD0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           InactiveBrush;                                     // 0x350(0xD0)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseParentRowBrush;                                // 0x420(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A7[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           ParentRowBackgroundBrush;                          // 0x430(0xD0)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ParentRowBackgroundHoveredBrush;                   // 0x500(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x5D0(0xD0)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x6A0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x770(0xD0)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x840(0xD0)(BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           TextColor;                                         // 0x910(0x14)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FSlateColor                           SelectedTextColor;                                 // 0x924(0x14)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           DropIndicator_Above;                               // 0x940(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0xA10(0xD0)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DropIndicator_Below;                               // 0xAE0(0xD0)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ActiveHighlightedBrush;                            // 0xBB0(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           InactiveHighlightedBrush;                          // 0xC80(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2AB[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x3E8 (0x3F0 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2AC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Normal;                                            // 0x10(0xD0)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FSlateBrush                           Hovered;                                           // 0xE0(0xD0)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FSlateBrush                           Pressed;                                           // 0x1B0(0xD0)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           Disabled;                                          // 0x280(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           NormalForeground;                                  // 0x350(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           HoveredForeground;                                 // 0x364(0x14)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           PressedForeground;                                 // 0x378(0x14)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           DisabledForeground;                                // 0x38C(0x14)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               NormalPadding;                                     // 0x3A0(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               PressedPadding;                                    // 0x3B0(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateSound                           PressedSlateSound;                                 // 0x3C0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x3D8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2AF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x10(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           DownArrowImage;                                    // 0x400(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x4D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x4D8(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2B0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x4F0(0xD0)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               MenuBorderPadding;                                 // 0x5C0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               ContentPadding;                                    // 0x5D0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               DownArrowPadding;                                  // 0x5E0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                DownArrowAlign;                                    // 0x5F0(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B1[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x658 (0x660 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2B2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x10(0x600)(BlueprintVisible, Net, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateSound                           PressedSlateSound;                                 // 0x610(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x628(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               ContentPadding;                                    // 0x640(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               MenuRowPadding;                                    // 0x650(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bSeparateFillAlpha;                                // 0x4(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bApplyOutlineToDropShadows;                        // 0x5(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B4[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B8[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TypefaceFontName;                                  // 0x40(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Size;                                              // 0x48(0x4)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        LetterSpacing;                                     // 0x4C(0x4)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        SkewAmount;                                        // 0x50(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2E8 (0x2F0 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_2BA[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x80(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x150(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CaretImage;                                        // 0x220(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x338 (0x340 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x74(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x7C(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0x8C(0x14)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           HighlightColor;                                    // 0xA0(0x14)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2C0[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           HighlightShape;                                    // 0xC0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           StrikeBrush;                                       // 0x190(0xD0)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x260(0xD0)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x330(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x331(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C2[0xE];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xE78 (0xE80 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2C3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x280(0xD0)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x350(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       TextStyle;                                         // 0x360(0x340)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x6A0(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           BackgroundColor;                                   // 0x6B4(0x14)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x6C8(0x14)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           FocusedForegroundColor;                            // 0x6DC(0x14)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               HScrollBarPadding;                                 // 0x6F0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               VScrollBarPadding;                                 // 0x700(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x710(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2C7[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ActiveBackgroundBrush;                             // 0xE0(0xD0)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0x280(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HoveredFillBrush;                                  // 0x350(0xD0)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x420(0xD0)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ArrowsImage;                                       // 0x4F0(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x5C0(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               TextPadding;                                       // 0x5D4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               InsetPadding;                                      // 0x5E4(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C8[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_2C9[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_2CA[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_2CB[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_2CC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_2CD[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x80 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_2CE[0x60];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4F8 (0x500 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2D4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           NormalBarImage;                                    // 0x10(0xD0)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           HoveredBarImage;                                   // 0xE0(0xD0)(Edit, ExportObject, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x1B0(0xD0)(Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x280(0xD0)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x350(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x420(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        BarThickness;                                      // 0x4F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D7[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2D8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	int16                                        Baseline;                                          // 0xE0(0x2)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D9[0xE];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EFontHinting                      Hinting;                                           // 0x14(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x15(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DB[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SubFaceIndex;                                      // 0x18(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               FontFaceAsset;                                     // 0x20(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FFontData                             Font;                                              // 0x8(0x28)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance)
	float                                        ScalingFactor;                                     // 0x10(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : public FCompositeFallbackFont
{
public:
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                Cultures;                                          // 0x28(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FCompositeFallbackFont                FallbackTypeface;                                  // 0x10(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent
{
public:
	uint8                                        Pad_2E4[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xAC8 (0xAD0 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0xE0(0xD0)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x1B0(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           CheckedImage;                                      // 0x280(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x350(0xD0)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x420(0xD0)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x4F0(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x5C0(0xD0)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x690(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x760(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0x770(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundHoveredImage;                            // 0x840(0xD0)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BackgroundPressedImage;                            // 0x910(0xD0)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x9E0(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           HoveredForeground;                                 // 0x9F4(0x14)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           PressedForeground;                                 // 0xA08(0x14)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           CheckedForeground;                                 // 0xA1C(0x14)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           CheckedHoveredForeground;                          // 0xA30(0x14)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           CheckedPressedForeground;                          // 0xA44(0x14)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           UndeterminedForeground;                            // 0xA58(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           BorderBackgroundColor;                             // 0xA6C(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateSound                           CheckedSlateSound;                                 // 0xA80(0x18)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateSound                           UncheckedSlateSound;                               // 0xA98(0x18)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateSound                           HoveredSlateSound;                                 // 0xAB0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2E9[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2158 (0x2160 - 0x8)
// ScriptStruct SlateCore.SegmentedControlStyle
struct FSegmentedControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2EA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCheckBoxStyle                        ControlStyle;                                      // 0x10(0xAD0)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FCheckBoxStyle                        FirstControlStyle;                                 // 0xAE0(0xAD0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FCheckBoxStyle                        LastControlStyle;                                  // 0x15B0(0xAD0)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x2080(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               UniformPadding;                                    // 0x2150(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x748 (0x750 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2EB[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          UnderlineStyle;                                    // 0x10(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FTextBlockStyle                       TextStyle;                                         // 0x400(0x340)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x740(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x11C8 (0x11D0 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2EC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x10(0xE80)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	struct FTextBlockStyle                       TextStyle;                                         // 0xE90(0x340)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x288 (0x290 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2EE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           FillImage;                                         // 0xE0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MarqueeImage;                                      // 0x1B0(0xD0)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         EnableFillAnimation;                               // 0x280(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EF[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1B8 (0x1C0 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2F0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           CollapsedImage;                                    // 0x10(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ExpandedImage;                                     // 0xE0(0xD0)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RolloutAnimationSeconds;                           // 0x1B0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1248 (0x1250 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2F3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x10(0xE80)(ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0xE90(0x58)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           UpArrowImage;                                      // 0xEF0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           DownArrowImage;                                    // 0xFC0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           GlassImage;                                        // 0x1090(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ClearImage;                                        // 0x1160(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FMargin                               ImagePadding;                                      // 0x1230(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bLeftAlignButtons;                                 // 0x1240(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bLeftAlignSearchResultButtons;                     // 0x1241(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bLeftAlignGlassImageAndClearButton;                // 0x1242(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F7[0xD];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x918 (0x920 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2F8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x510(0xD0)(ExportObject, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x5E0(0xD0)(Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x6B0(0xD0)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x780(0xD0)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MutedImage;                                        // 0x850(0xD0)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2FC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x10(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0xE0(0xD0)(Edit, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct SlateCore.TableViewStyle
struct FTableViewStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2FE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x758 (0x760 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2FF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x10(0xD0)(ConstParm, ExportObject, Parm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0xE0(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0x1B0(0xD0)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x280(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NormalBrush;                                       // 0x350(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           HoveredBrush;                                      // 0x420(0xD0)(BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x4F0(0xD0)(ConstParm, BlueprintVisible, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x5C0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x690(0xD0)(ConstParm, BlueprintVisible, Net, Config, InstancedReference, SubobjectReference)
};

// 0x1258 (0x1260 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_302[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x10(0x760)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x770(0x760)(Edit, ExportObject, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0xED0(0x1B0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	float                                        SplitterHandleSize;                                // 0x1080(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_304[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1090(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x1160(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_305[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           HorizontalSeparatorBrush;                          // 0x1180(0xD0)(Edit, ConstParm, BlueprintVisible, Net, Parm, Config, InstancedReference, SubobjectReference)
	float                                        HorizontalSeparatorThickness;                      // 0x1250(0x4)(ExportObject, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_307[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD78 (0xD80 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_309[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x10(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NormalBrush;                                       // 0x400(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ColorOverlayTabBrush;                              // 0x4D0(0xD0)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ColorOverlayIconBrush;                             // 0x5A0(0xD0)(ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x670(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           HoveredBrush;                                      // 0x740(0xD0)(BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x810(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           TabWellBrush;                                      // 0x8E0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FTextBlockStyle                       TabTextStyle;                                      // 0x9B0(0x340)(ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FMargin                               TabPadding;                                        // 0xCF0(0x10)(ConstParm, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0xD00(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        OverlapWidth;                                      // 0xD08(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           FlashColor;                                        // 0xD0C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           NormalForegroundColor;                             // 0xD20(0x14)(Edit, ExportObject, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           HoveredForegroundColor;                            // 0xD34(0x14)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           ActiveForegroundColor;                             // 0xD48(0x14)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           ForegroundForegroundColor;                         // 0xD5C(0x14)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	float                                        IconBorderPadding;                                 // 0xD70(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_311[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x368 (0x370 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	float                                        BarThickness;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_313[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xD0)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0x1B0(0xD0)(ConstParm, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x280(0xD0)(Edit, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FMargin                               HorizontalScrolledContentPadding;                  // 0x350(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FMargin                               VerticalScrolledContentPadding;                    // 0x360(0x10)(ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_317[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xD0)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
};

// 0x1938 (0x1940 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_319[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x10(0x3F0)(ExportObject, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x400(0x3F0)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x7F0(0x3F0)(Edit, ConstParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0xBE0(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0xFD0(0x340)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0x1310(0xD0)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0x13E0(0xD0)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0x14B0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           BackgroundColor;                                   // 0x1580(0x14)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_31A[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           OutlineBrush;                                      // 0x15A0(0xD0)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           OutlineColor;                                      // 0x1670(0x14)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_31C[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BorderBrush;                                       // 0x1690(0xD0)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           BorderColor;                                       // 0x1760(0x14)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_31D[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1780(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0x1850(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        WindowCornerRadius;                                // 0x1920(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FMargin                               BorderPadding;                                     // 0x1924(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_31F[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x988 (0x988 - 0x0)
// ScriptStruct SlateCore.StyleColorList
struct FStyleColorList
{
public:
	struct FLinearColor                          StyleColors[0x3D];                                 // 0x0(0x3D0)(Edit, ConstParm, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_320[0x5B8];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SlateCore.StyleTheme
struct FStyleTheme
{
public:
	uint8                                        Pad_321[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x3E48 (0x3E50 - 0x8)
// ScriptStruct SlateCore.ToolBarStyle
struct FToolBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_323[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           ExpandBrush;                                       // 0xE0(0xD0)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           SeparatorBrush;                                    // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTextBlockStyle                       LabelStyle;                                        // 0x280(0x340)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FEditableTextBoxStyle                 EditableTextStyle;                                 // 0x5C0(0xE80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance)
	struct FCheckBoxStyle                        ToggleButton;                                      // 0x1440(0xAD0)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x1F10(0x600)(BlueprintVisible, Net, Parm, OutParm, Config, DisableEditOnInstance)
	struct FButtonStyle                          SettingsButtonStyle;                               // 0x2510(0x3F0)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FComboButtonStyle                     SettingsComboButton;                               // 0x2900(0x600)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FCheckBoxStyle                        SettingsToggleButton;                              // 0x2F00(0xAD0)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonStyle;                                       // 0x39D0(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
	struct FMargin                               LabelPadding;                                      // 0x3DC0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FMargin                               SeparatorPadding;                                  // 0x3DD0(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               ComboButtonPadding;                                // 0x3DE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               ButtonPadding;                                     // 0x3DF0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               CheckBoxPadding;                                   // 0x3E00(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               BlockPadding;                                      // 0x3E10(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               IndentedBlockPadding;                              // 0x3E20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMargin                               BackgroundPadding;                                 // 0x3E30(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0x3E40(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bShowLabels;                                       // 0x3E48(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_324[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


