#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
public:
	class FText                                  InToolTipText;                                     // 0x0(0x18)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
public:
	struct FVector2D                             Pivot;                                             // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Widget.SetRenderTransformAngle
struct UWidget_SetRenderTransformAngle_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
public:
	struct FWidgetTransform                      InTransform;                                       // 0x0(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
public:
	struct FVector2D                             Shear;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
public:
	struct FVector2D                             Scale;                                             // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Widget.SetRenderOpacity
struct UWidget_SetRenderOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetNavigationRuleExplicit
struct UWidget_SetNavigationRuleExplicit_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1042[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               InWidget;                                          // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.Widget.SetNavigationRuleCustomBoundary
struct UWidget_SetNavigationRuleCustomBoundary_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1049[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           InCustomDelegate;                                  // 0x4(0x10)(Edit, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.Widget.SetNavigationRuleCustom
struct UWidget_SetNavigationRuleCustom_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_104E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           InCustomDelegate;                                  // 0x4(0x10)(Edit, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UMG.Widget.SetNavigationRuleBase
struct UWidget_SetNavigationRuleBase_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EUINavigationRule                 Rule;                                              // 0x1(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UMG.Widget.SetNavigationRule
struct UWidget_SetNavigationRule_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EUINavigationRule                 Rule;                                              // 0x1(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1061[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  WidgetToFocus;                                     // 0x4(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
public:
	enum class EMouseCursor                      InCursor;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetClipping
struct UWidget_SetClipping_Params
{
public:
	enum class EWidgetClipping                   InClipping;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UMG.Widget.SetAllNavigationRules
struct UWidget_SetAllNavigationRules_Params
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1075[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  WidgetToFocus;                                     // 0x4(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
struct UWidget_K2_RemoveFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.K2_BroadcastFieldValueChanged
struct UWidget_K2_BroadcastFieldValueChanged_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.K2_AddFieldValueChangedDelegate
struct UWidget_K2_AddFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsRendered
struct UWidget_IsRendered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsInViewport
struct UWidget_IsInViewport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_111A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1121[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function UMG.Widget.HasMouseCaptureByUser
struct UWidget_HasMouseCaptureByUser_Params
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        PointerIndex;                                      // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_112D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.Widget.GetTickSpaceGeometry
struct UWidget_GetTickSpaceGeometry_Params
{
public:
	struct FGeometry                             ReturnValue;                                       // 0x0(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Widget.GetRenderTransformAngle
struct UWidget_GetRenderTransformAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Widget.GetRenderOpacity
struct UWidget_GetRenderOpacity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
public:
	class UPanelWidget*                          ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.Widget.GetPaintSpaceGeometry
struct UWidget_GetPaintSpaceGeometry_Params
{
public:
	struct FGeometry                             ReturnValue;                                       // 0x0(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetOwningPlayer
struct UWidget_GetOwningPlayer_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetOwningLocalPlayer
struct UWidget_GetOwningLocalPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
public:
	enum class EMouseCursor                      ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetIsThisAndParentsEnabled
struct UWidget_GetIsThisAndParentsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetGameInstance
struct UWidget_GetGameInstance_Params
{
public:
	class UGameInstance*                         ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetClipping
struct UWidget_GetClipping_Params
{
public:
	enum class EWidgetClipping                   ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.Widget.GetCachedGeometry
struct UWidget_GetCachedGeometry_Params
{
public:
	struct FGeometry                             ReturnValue;                                       // 0x0(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.GetAccessibleText
struct UWidget_GetAccessibleText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.GetAccessibleSummaryText
struct UWidget_GetAccessibleSummaryText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
public:
	class FString                                Item;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Edit, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.UnbindFromAnimationStarted
struct UUserWidget_UnbindFromAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.UnbindFromAnimationFinished
struct UUserWidget_UnbindFromAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.UnbindAllFromAnimationStarted
struct UUserWidget_UnbindAllFromAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.UnbindAllFromAnimationFinished
struct UUserWidget_UnbindAllFromAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x3C (0x3C - 0x0)
// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UMG.UserWidget.StopListeningForInputAction
struct UUserWidget_StopListeningForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class EInputEvent                       EventType;                                         // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_126D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	bool                                         bRemoveDPIScale;                                   // 0x10(0x1)(Edit, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1274[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetPlaybackSpeed
struct UUserWidget_SetPlaybackSpeed_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1278[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetPadding
struct UUserWidget_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.SetOwningPlayer
struct UUserWidget_SetOwningPlayer_Params
{
public:
	class APlayerController*                     LocalPlayerController;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUserWidget_SetNumLoopsToPlay_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        NumLoopsToPlay;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1282[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function UMG.UserWidget.SetInputActionPriority
struct UUserWidget_SetInputActionPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.SetInputActionBlocking
struct UUserWidget_SetInputActionBlocking_Params
{
public:
	bool                                         bShouldBlock;                                      // 0x0(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
public:
	struct FSlateColor                           InForegroundColor;                                 // 0x0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetAnimationCurrentTime
struct UUserWidget_SetAnimationCurrentTime_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        InTime;                                            // 0x8(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_12A5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x20)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
public:
	struct FVector2D                             Alignment;                                         // 0x0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.ReverseAnimation
struct UUserWidget_ReverseAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.RemoveExtensions
struct UUserWidget_RemoveExtensions_Params
{
public:
	class UClass*                                InExtensionType;                                   // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.RemoveExtension
struct UUserWidget_RemoveExtension_Params
{
public:
	class UUserWidgetExtension*                  InExtension;                                       // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.PreConstruct
struct UUserWidget_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UMG.UserWidget.PlayAnimationTimeRange
struct UUserWidget_PlayAnimationTimeRange_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        StartAtTime;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        EndAtTime;                                         // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        NumLoopsToPlay;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x14(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12CA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlaybackSpeed;                                     // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bRestoreState;                                     // 0x1C(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.PlayAnimationReverse
struct UUserWidget_PlayAnimationReverse_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bRestoreState;                                     // 0xC(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12D4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.PlayAnimationForward
struct UUserWidget_PlayAnimationForward_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bRestoreState;                                     // 0xC(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12DC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        StartAtTime;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        NumLoopsToPlay;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x10(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12E7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlaybackSpeed;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bRestoreState;                                     // 0x18(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12E9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12ED[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         GestureEvent;                                      // 0x38(0x78)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchForceChanged
struct UUserWidget_OnTouchForceChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnRemovedFromFocusPath
struct UUserWidget_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
public:
	struct FGeometry                             InMyGeometry;                                      // 0x0(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FMotionEvent                          InMotionEvent;                                     // 0x38(0x80)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FCharacterEvent                       InCharacterEvent;                                  // 0x38(0x28)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x60(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_132F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1337[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0x78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UDragDropOperation*                    Operation;                                         // 0x78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x138 (0x138 - 0x0)
// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x48)(BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnAddedToFocusPath
struct UUserWidget_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function UMG.UserWidget.ListenForInputAction
struct UUserWidget_ListenForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class EInputEvent                       EventType;                                         // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bConsume;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_134F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           Callback;                                          // 0xC(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsPlayingAnimation
struct UUserWidget_IsPlayingAnimation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UMG.UserWidget.IsListeningForInputAction
struct UUserWidget_IsListeningForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1352[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUserWidget_IsAnyAnimationPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUserWidget_IsAnimationPlayingForward_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1357[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.IsAnimationPlaying
struct UUserWidget_IsAnimationPlaying_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_135B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
public:
	class APawn*                                 ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.GetOwningPlayerCameraManager
struct UUserWidget_GetOwningPlayerCameraManager_Params
{
public:
	class APlayerCameraManager*                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.GetExtensions
struct UUserWidget_GetExtensions_Params
{
public:
	class UClass*                                ExtensionType;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	TArray<class UUserWidgetExtension*>          ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.GetExtension
struct UUserWidget_GetExtension_Params
{
public:
	class UClass*                                ExtensionType;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUserWidgetExtension*                  ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUserWidget_GetAnimationCurrentTime_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_136D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function UMG.UserWidget.GetAnchorsInViewport
struct UUserWidget_GetAnchorsInViewport_Params
{
public:
	struct FAnchors                              ReturnValue;                                       // 0x0(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.GetAlignmentInViewport
struct UUserWidget_GetAlignmentInViewport_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.BindToAnimationStarted
struct UUserWidget_BindToAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.BindToAnimationFinished
struct UUserWidget_BindToAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UMG.UserWidget.BindToAnimationEvent
struct UUserWidget_BindToAnimationEvent_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
	enum class EWidgetAnimationEvent             AnimationEvent;                                    // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1378[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  UserTag;                                           // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1379[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1380[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.AddExtension
struct UUserWidget_AddExtension_Params
{
public:
	class UClass*                                InExtensionType;                                   // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUserWidgetExtension*                  ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetDesiredSizeOverride
struct UImage_SetDesiredSizeOverride_Params
{
public:
	struct FVector2D                             DesiredSize;                                       // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.Image.SetBrushTintColor
struct UImage_SetBrushTintColor_Params
{
public:
	struct FSlateColor                           TintColor;                                         // 0x0(0x14)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.SetBrushResourceObject
struct UImage_SetBrushResourceObject_Params
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetBrushFromTextureDynamic
struct UImage_SetBrushFromTextureDynamic_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13CB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function UMG.Image.SetBrushFromSoftTexture
struct UImage_SetBrushFromSoftTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x30)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMatchSize;                                        // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function UMG.Image.SetBrushFromSoftMaterial
struct UImage_SetBrushFromSoftMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     SoftMaterial;                                      // 0x0(0x30)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Image.SetBrushFromAtlasInterface
struct UImage_SetBrushFromAtlasInterface_Params
{
public:
	TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion;                                       // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMatchSize;                                        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      Asset;                                             // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0xD0)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.TextLayoutWidget.SetJustification
struct UTextLayoutWidget_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.RichTextBlock.SetTextTransformPolicy
struct URichTextBlock_SetTextTransformPolicy_Params
{
public:
	enum class ETextTransformPolicy              InTransformPolicy;                                 // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RichTextBlock.SetTextStyleSet
struct URichTextBlock_SetTextStyleSet_Params
{
public:
	class UDataTable*                            NewTextStyleSet;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.RichTextBlock.SetTextOverflowPolicy
struct URichTextBlock_SetTextOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               InOverflowPolicy;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.RichTextBlock.SetText
struct URichTextBlock_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.RichTextBlock.SetMinDesiredWidth
struct URichTextBlock_SetMinDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Edit, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x340 (0x340 - 0x0)
// Function UMG.RichTextBlock.SetDefaultTextStyle
struct URichTextBlock_SetDefaultTextStyle_Params
{
public:
	struct FTextBlockStyle                       InDefaultTextStyle;                                // 0x0(0x340)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.RichTextBlock.SetDefaultStrikeBrush
struct URichTextBlock_SetDefaultStrikeBrush_Params
{
public:
	struct FSlateBrush                           InStrikeBrush;                                     // 0x0(0xD0)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.RichTextBlock.SetDefaultShadowOffset
struct URichTextBlock_SetDefaultShadowOffset_Params
{
public:
	struct FVector2D                             InShadowOffset;                                    // 0x0(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
struct URichTextBlock_SetDefaultShadowColorAndOpacity_Params
{
public:
	struct FLinearColor                          InShadowColorAndOpacity;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RichTextBlock.SetDefaultMaterial
struct URichTextBlock_SetDefaultMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.RichTextBlock.SetDefaultFont
struct URichTextBlock_SetDefaultFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
struct URichTextBlock_SetDefaultColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColorAndOpacity;                                 // 0x0(0x14)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.RichTextBlock.SetDecorators
struct URichTextBlock_SetDecorators_Params
{
public:
	TArray<class UClass*>                        InDecoratorClasses;                                // 0x0(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.RichTextBlock.SetAutoWrapText
struct URichTextBlock_SetAutoWrapText_Params
{
public:
	bool                                         InAutoTextWrap;                                    // 0x0(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RichTextBlock.GetTextStyleSet
struct URichTextBlock_GetTextStyleSet_Params
{
public:
	class UDataTable*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.RichTextBlock.GetText
struct URichTextBlock_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
struct URichTextBlock_GetDefaultDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.RichTextBlock.GetDecoratorByClass
struct URichTextBlock_GetDecoratorByClass_Params
{
public:
	class UClass*                                DecoratorClass;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class URichTextBlockDecorator*               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_144B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1452[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1456[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_145F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1464[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.GetAllChildren
struct UPanelWidget_GetAllChildren_Params
{
public:
	TArray<class UWidget*>                       ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPanelSlot*                            ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ContentWidget.SetContent
struct UContentWidget_SetContent_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPanelSlot*                            ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
public:
	class UPanelSlot*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ContentWidget.GetContent
struct UContentWidget_GetContent_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.SetTouchMethod
struct UButton_SetTouchMethod_Params
{
public:
	enum class EButtonTouchMethod                InTouchMethod;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x3F0 (0x3F0 - 0x0)
// Function UMG.Button.SetStyle
struct UButton_SetStyle_Params
{
public:
	struct FButtonStyle                          InStyle;                                           // 0x0(0x3F0)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.SetPressMethod
struct UButton_SetPressMethod_Params
{
public:
	enum class EButtonPressMethod                InPressMethod;                                     // 0x0(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.SetClickMethod
struct UButton_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          InBackgroundColor;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.MimickClicked
struct UButton_MimickClicked_Params
{
public:
	bool                                         bFromGamepad;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.SetWheelScrollMultiplier
struct UScrollBox_SetWheelScrollMultiplier_Params
{
public:
	float                                        NewWheelScrollMultiplier;                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetScrollWhenFocusChanges
struct UScrollBox_SetScrollWhenFocusChanges_Params
{
public:
	enum class EScrollWhenFocusChanges           NewScrollWhenFocusChanges;                         // 0x0(0x1)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
public:
	float                                        NewScrollOffset;                                   // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetScrollBarVisibility
struct UScrollBox_SetScrollBarVisibility_Params
{
public:
	enum class ESlateVisibility                  NewScrollBarVisibility;                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBox.SetScrollbarThickness
struct UScrollBox_SetScrollbarThickness_Params
{
public:
	struct FVector2D                             NewScrollbarThickness;                             // 0x0(0x10)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBox.SetScrollbarPadding
struct UScrollBox_SetScrollbarPadding_Params
{
public:
	struct FMargin                               NewScrollbarPadding;                               // 0x0(0x10)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetOrientation
struct UScrollBox_SetOrientation_Params
{
public:
	enum class EOrientation                      NewOrientation;                                    // 0x0(0x1)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetNavigationDestination
struct UScrollBox_SetNavigationDestination_Params
{
public:
	enum class EDescendantScrollDestination      NewNavigationDestination;                          // 0x0(0x1)(Edit, ConstParm, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetConsumeMouseWheel
struct UScrollBox_SetConsumeMouseWheel_Params
{
public:
	enum class EConsumeMouseWheel                NewConsumeMouseWheel;                              // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetAnimateWheelScrolling
struct UScrollBox_SetAnimateWheelScrolling_Params
{
public:
	bool                                         bShouldAnimateWheelScrolling;                      // 0x0(0x1)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetAlwaysShowScrollbar
struct UScrollBox_SetAlwaysShowScrollbar_Params
{
public:
	bool                                         NewAlwaysShowScrollbar;                            // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBox.SetAllowOverscroll
struct UScrollBox_SetAllowOverscroll_Params
{
public:
	bool                                         NewAllowOverscroll;                                // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         AnimateScroll;                                     // 0x8(0x1)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDescendantScrollDestination      ScrollDestination;                                 // 0x9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Padding;                                           // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetViewOffsetFraction
struct UScrollBox_GetViewOffsetFraction_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetViewFraction
struct UScrollBox_GetViewFraction_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetScrollOffsetOfEnd
struct UScrollBox_GetScrollOffsetOfEnd_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetScrollMax
struct UScrollBox_GetScrollMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBox.GetScrollContentSize
struct UScrollBox_GetScrollContentSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetPhysicalScrollOffset
struct UScrollBox_GetPhysicalScrollOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Border.SetShowEffectWhenDisabled
struct UBorder_SetShowEffectWhenDisabled_Params
{
public:
	bool                                         bInShowEffectWhenDisabled;                         // 0x0(0x1)(Edit, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetDesiredSizeScale
struct UBorder_SetDesiredSizeScale_Params
{
public:
	struct FVector2D                             InScale;                                           // 0x0(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
public:
	struct FLinearColor                          InContentColorAndOpacity;                          // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      Asset;                                             // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
public:
	struct FLinearColor                          InBrushColor;                                      // 0x0(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0xD0)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetTextOverflowPolicy
struct UEditableText_SetTextOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               InOverflowPolicy;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.EditableText.SetMinimumDesiredWidth
struct UEditableText_SetMinimumDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Edit, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetJustification
struct UEditableText_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
public:
	bool                                         InbIsReadyOnly;                                    // 0x0(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
public:
	bool                                         InbIsPassword;                                     // 0x0(0x1)(BlueprintReadOnly, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
public:
	class FText                                  InHintText;                                        // 0x0(0x18)(ConstParm, ExportObject, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.EditableText.SetFontOutlineMaterial
struct UEditableText_SetFontOutlineMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.EditableText.SetFontMaterial
struct UEditableText_SetFontMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.EditableText.SetFont
struct UEditableText_SetFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1522[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.GetJustification
struct UEditableText_GetJustification_Params
{
public:
	enum class ETextJustify                      ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.GetHintText
struct UEditableText_GetHintText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.EditableText.GetFont
struct UEditableText_GetFont_Params
{
public:
	struct FSlateFontInfo                        ReturnValue;                                       // 0x0(0x58)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListViewBase.SetWheelScrollMultiplier
struct UListViewBase_SetWheelScrollMultiplier_Params
{
public:
	float                                        NewWheelScrollMultiplier;                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListViewBase.SetScrollOffset
struct UListViewBase_SetScrollOffset_Params
{
public:
	float                                        InScrollOffset;                                    // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ListViewBase.SetScrollBarVisibility
struct UListViewBase_SetScrollBarVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListViewBase.GetScrollOffset
struct UListViewBase_GetScrollOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListViewBase.GetDisplayedEntryWidgets
struct UListViewBase_GetDisplayedEntryWidgets_Params
{
public:
	TArray<class UUserWidget*>                   ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ListView.SetSelectionMode
struct UListView_SetSelectionMode_Params
{
public:
	enum class ESelectionMode                    SelectionMode;                                     // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListView.SetSelectedIndex
struct UListView_SetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListView.ScrollIndexIntoView
struct UListView_ScrollIndexIntoView_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.RemoveItem
struct UListView_RemoveItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.OnListItemOuterEndPlayed
struct UListView_OnListItemOuterEndPlayed_Params
{
public:
	class AActor*                                ItemOuter;                                         // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_157B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.OnListItemEndPlayed
struct UListView_OnListItemEndPlayed_Params
{
public:
	class AActor*                                Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_158A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListView.NavigateToIndex
struct UListView_NavigateToIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ListView.IsRefreshPending
struct UListView_IsRefreshPending_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListView.GetNumItems
struct UListView_GetNumItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.GetListItems
struct UListView_GetListItems_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.GetItemAt
struct UListView_GetItemAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_159D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.GetIndexForItem
struct UListView_GetIndexForItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_15A0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.BP_SetSelectedItem
struct UListView_BP_SetSelectedItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.BP_SetListItems
struct UListView_BP_SetListItems_Params
{
public:
	TArray<class UObject*>                       InListItems;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.BP_SetItemSelection
struct UListView_BP_SetItemSelection_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bSelected;                                         // 0x8(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15B0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.BP_ScrollItemIntoView
struct UListView_BP_ScrollItemIntoView_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.BP_NavigateToItem
struct UListView_BP_NavigateToItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ListView.BP_IsItemVisible
struct UListView_BP_IsItemVisible_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_15BA[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.ListView.BP_GetSelectedItems
struct UListView_BP_GetSelectedItems_Params
{
public:
	TArray<class UObject*>                       Items;                                             // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_15BD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.BP_GetSelectedItem
struct UListView_BP_GetSelectedItem_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ListView.BP_GetNumItemsSelected
struct UListView_BP_GetNumItemsSelected_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ListView.AddItem
struct UListView_AddItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UMGSequencePlayer.SetUserTag
struct UUMGSequencePlayer_SetUserTag_Params
{
public:
	class FName                                  InUserTag;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UMGSequencePlayer.GetUserTag
struct UUMGSequencePlayer_GetUserTag_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
struct UWidgetAnimation_UnbindFromAnimationStarted_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
struct UWidgetAnimation_UnbindFromAnimationFinished_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
struct UWidgetAnimation_UnbindAllFromAnimationStarted_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
struct UWidgetAnimation_UnbindAllFromAnimationFinished_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetAnimation.BindToAnimationStarted
struct UWidgetAnimation_BindToAnimationStarted_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetAnimation.BindToAnimationFinished
struct UWidgetAnimation_BindToAnimationFinished_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params
{
public:
	class UUMGSequencePlayer*                    Result;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UUserWidget*                           Widget;                                            // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      InAnimation;                                       // 0x10(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        StartAtTime;                                       // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        EndAtTime;                                         // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        NumLoopsToPlay;                                    // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x24(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1680[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlaybackSpeed;                                     // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1681[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidgetAnimationPlayCallbackProxy*     ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params
{
public:
	class UUMGSequencePlayer*                    Result;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UUserWidget*                           Widget;                                            // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      InAnimation;                                       // 0x10(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        StartAtTime;                                       // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        NumLoopsToPlay;                                    // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x20(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1696[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlaybackSpeed;                                     // 0x24(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UWidgetAnimationPlayCallbackProxy*     ReturnValue;                                       // 0x28(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
public:
	enum class EMouseCursor                      ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
	class UAsyncTaskDownloadImage*               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
struct UGameViewportSubsystem_SetWidgetSlotPosition_Params
{
public:
	struct FGameViewportWidgetSlot               Slot;                                              // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UWidget*                               Widget;                                            // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	struct FVector2D                             Position;                                          // 0x50(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	bool                                         bRemoveDPIScale;                                   // 0x60(0x1)(Edit, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16FB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameViewportWidgetSlot               ReturnValue;                                       // 0x68(0x48)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
struct UGameViewportSubsystem_SetWidgetSlotDesiredSize_Params
{
public:
	struct FGameViewportWidgetSlot               Slot;                                              // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FGameViewportWidgetSlot               ReturnValue;                                       // 0x58(0x48)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function UMG.GameViewportSubsystem.SetWidgetSlot
struct UGameViewportSubsystem_SetWidgetSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	struct FGameViewportWidgetSlot               Slot;                                              // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.GameViewportSubsystem.RemoveWidget
struct UGameViewportSubsystem_RemoveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function UMG.GameViewportSubsystem.IsWidgetAdded
struct UGameViewportSubsystem_IsWidgetAdded_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_171A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function UMG.GameViewportSubsystem.GetWidgetSlot
struct UGameViewportSubsystem_GetWidgetSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	struct FGameViewportWidgetSlot               ReturnValue;                                       // 0x8(0x48)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.GameViewportSubsystem.AddWidgetForPlayer
struct UGameViewportSubsystem_AddWidgetForPlayer_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class ULocalPlayer*                          Player;                                            // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst)
	struct FGameViewportWidgetSlot               Slot;                                              // 0x10(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function UMG.GameViewportSubsystem.AddWidget
struct UGameViewportSubsystem_AddWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	struct FGameViewportWidgetSlot               Slot;                                              // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserListEntry.BP_OnItemSelectionChanged
struct IUserListEntry_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserListEntry.BP_OnItemExpansionChanged
struct IUserListEntry_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserListEntryLibrary.IsListItemSelected
struct UUserListEntryLibrary_IsListItemSelected_Params
{
public:
	TScriptInterface<class IUserListEntry>       UserListEntry;                                     // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1734[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserListEntryLibrary.IsListItemExpanded
struct UUserListEntryLibrary_IsListItemExpanded_Params
{
public:
	TScriptInterface<class IUserListEntry>       UserListEntry;                                     // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1738[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserListEntryLibrary.GetOwningListView
struct UUserListEntryLibrary_GetOwningListView_Params
{
public:
	TScriptInterface<class IUserListEntry>       UserListEntry;                                     // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class UListViewBase*                         ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserObjectListEntry.OnListItemObjectSet
struct IUserObjectListEntry_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserObjectListEntryLibrary.GetListItemObject
struct UUserObjectListEntryLibrary_GetListItemObject_Params
{
public:
	TScriptInterface<class IUserObjectListEntry> UserObjectListEntry;                               // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetVerticalAlignment
struct UBackgroundBlur_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BackgroundBlur.SetPadding
struct UBackgroundBlur_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct UBackgroundBlur_SetLowQualityFallbackBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0xD0)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetHorizontalAlignment
struct UBackgroundBlur_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UMG.BackgroundBlur.SetCornerRadius
struct UBackgroundBlur_SetCornerRadius_Params
{
public:
	struct FVector4                              InCornerRadius;                                    // 0x0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.BackgroundBlur.SetBlurStrength
struct UBackgroundBlur_SetBlurStrength_Params
{
public:
	float                                        InStrength;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.BackgroundBlur.SetBlurRadius
struct UBackgroundBlur_SetBlurRadius_Params
{
public:
	int32                                        InBlurRadius;                                      // 0x0(0x4)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct UBackgroundBlur_SetApplyAlphaToBlur_Params
{
public:
	bool                                         bInApplyAlphaToBlur;                               // 0x0(0x1)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
struct UBackgroundBlurSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BackgroundBlurSlot.SetPadding
struct UBackgroundBlurSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
struct UBackgroundBlurSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanel.SetColorAndOpacity
struct UCanvasPanel_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
public:
	int32                                        InZOrder;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
public:
	struct FVector2D                             InSize;                                            // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
public:
	struct FMargin                               InOffset;                                          // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
public:
	struct FVector2D                             InMinimumAnchors;                                  // 0x0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
public:
	struct FVector2D                             InMaximumAnchors;                                  // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
public:
	struct FAnchorData                           InLayoutData;                                      // 0x0(0x40)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
public:
	bool                                         InbAutoSize;                                       // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
public:
	struct FAnchors                              InAnchors;                                         // 0x0(0x20)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
public:
	struct FVector2D                             InAlignment;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
public:
	struct FAnchorData                           ReturnValue;                                       // 0x0(0x40)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
public:
	struct FAnchors                              ReturnValue;                                       // 0x0(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetTouchMethod
struct UCheckBox_SetTouchMethod_Params
{
public:
	enum class EButtonTouchMethod                InTouchMethod;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetPressMethod
struct UCheckBox_SetPressMethod_Params
{
public:
	enum class EButtonPressMethod                InPressMethod;                                     // 0x0(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
public:
	bool                                         InIsChecked;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetClickMethod
struct UCheckBox_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
public:
	enum class ECheckBoxState                    InCheckedState;                                    // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
public:
	float                                        InPeriod;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
public:
	int32                                        InNumberOfPieces;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ComboBoxKey.SetSelectedOption
struct UComboBoxKey_SetSelectedOption_Params
{
public:
	class FName                                  Option;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UMG.ComboBoxKey.RemoveOption
struct UComboBoxKey_RemoveOption_Params
{
public:
	class FName                                  Option;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_17F6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FName                                  SelectedItem;                                      // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17FD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.ComboBoxKey.IsOpen
struct UComboBoxKey_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ComboBoxKey.GetSelectedOption
struct UComboBoxKey_GetSelectedOption_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
struct UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ComboBoxKey.AddOption
struct UComboBoxKey_AddOption_Params
{
public:
	class FName                                  Option;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ComboBoxString.SetSelectedIndex
struct UComboBoxString_SetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ESelectInfo                       SelectInfo;                                        // 0x4(0x1)(Net, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1822[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1826[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_182A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.ComboBoxString.IsOpen
struct UComboBoxString_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ComboBoxString.GetSelectedIndex
struct UComboBoxString_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1842[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_184B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.DynamicEntryBoxBase.SetRadialSettings
struct UDynamicEntryBoxBase_SetRadialSettings_Params
{
public:
	struct FRadialBoxSettings                    InSettings;                                        // 0x0(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
struct UDynamicEntryBoxBase_SetEntrySpacing_Params
{
public:
	struct FVector2D                             InEntrySpacing;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.DynamicEntryBoxBase.GetNumEntries
struct UDynamicEntryBoxBase_GetNumEntries_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.DynamicEntryBoxBase.GetAllEntries
struct UDynamicEntryBoxBase_GetAllEntries_Params
{
public:
	TArray<class UUserWidget*>                   ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.DynamicEntryBox.Reset
struct UDynamicEntryBox_Reset_Params
{
public:
	bool                                         bDeleteWidgets;                                    // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.DynamicEntryBox.RemoveEntry
struct UDynamicEntryBox_RemoveEntry_Params
{
public:
	class UUserWidget*                           EntryWidget;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
struct UDynamicEntryBox_BP_CreateEntryOfClass_Params
{
public:
	class UClass*                                EntryClass;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.DynamicEntryBox.BP_CreateEntry
struct UDynamicEntryBox_BP_CreateEntry_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.SetTextOverflowPolicy
struct UEditableTextBox_SetTextOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               InOverflowPolicy;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.SetJustification
struct UEditableTextBox_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.SetIsReadOnly
struct UEditableTextBox_SetIsReadOnly_Params
{
public:
	bool                                         bReadOnly;                                         // 0x0(0x1)(ExportObject, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.SetIsPassword
struct UEditableTextBox_SetIsPassword_Params
{
public:
	bool                                         bIsPassword;                                       // 0x0(0x1)(Edit, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.SetHintText
struct UEditableTextBox_SetHintText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.EditableTextBox.SetForegroundColor
struct UEditableTextBox_SetForegroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
public:
	class FText                                  InError;                                           // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_188A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.HasError
struct UEditableTextBox_HasError_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.SetIsExpanded_Animated
struct UExpandableArea_SetIsExpanded_Animated_Params
{
public:
	bool                                         IsExpanded;                                        // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
public:
	bool                                         IsExpanded;                                        // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.GridPanel.SetRowFill
struct UGridPanel_SetRowFill_Params
{
public:
	int32                                        RowIndex;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        Coefficient;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.GridPanel.SetColumnFill
struct UGridPanel_SetColumnFill_Params
{
public:
	int32                                        ColumnIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Coefficient;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InRow;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InColumn;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UGridSlot*                             ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
public:
	int32                                        InRowSpan;                                         // 0x0(0x4)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
public:
	int32                                        InRow;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.GridSlot.SetPadding
struct UGridSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.GridSlot.SetNudge
struct UGridSlot_SetNudge_Params
{
public:
	struct FVector2D                             InNudge;                                           // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetLayer
struct UGridSlot_SetLayer_Params
{
public:
	int32                                        InLayer;                                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
public:
	int32                                        InColumnSpan;                                      // 0x0(0x4)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
public:
	int32                                        InColumn;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UHorizontalBoxSlot*                    ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
public:
	struct FSlateChildSize                       InSize;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.SetTextBlockVisibility
struct UInputKeySelector_SetTextBlockVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UMG.InputKeySelector.SetSelectedKey
struct UInputKeySelector_SetSelectedKey_Params
{
public:
	struct FInputChord                           InSelectedKey;                                     // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.InputKeySelector.SetNoKeySpecifiedText
struct UInputKeySelector_SetNoKeySpecifiedText_Params
{
public:
	class FText                                  InNoKeySpecifiedText;                              // 0x0(0x18)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.InputKeySelector.SetKeySelectionText
struct UInputKeySelector_SetKeySelectionText_Params
{
public:
	class FText                                  InKeySelectionText;                                // 0x0(0x18)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.InputKeySelector.SetEscapeKeys
struct UInputKeySelector_SetEscapeKeys_Params
{
public:
	TArray<struct FKey>                          InKeys;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.SetAllowModifierKeys
struct UInputKeySelector_SetAllowModifierKeys_Params
{
public:
	bool                                         bInAllowModifierKeys;                              // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.SetAllowGamepadKeys
struct UInputKeySelector_SetAllowGamepadKeys_Params
{
public:
	bool                                         bInAllowGamepadKeys;                               // 0x0(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.GetIsSelectingKey
struct UInputKeySelector_GetIsSelectingKey_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InvalidationBox.SetCanCache
struct UInvalidationBox_SetCanCache_Params
{
public:
	bool                                         CanCache;                                          // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InvalidationBox.GetCanCache
struct UInvalidationBox_GetCanCache_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
public:
	bool                                         bFocusOnOpen;                                      // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.SetPlacement
struct UMenuAnchor_SetPlacement_Params
{
public:
	enum class EMenuPlacement                    InPlacement;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.SetIgnoreClicksOutside
struct UMenuAnchor_SetIgnoreClicksOutside_Params
{
public:
	bool                                         Ignore;                                            // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
public:
	bool                                         bFocusMenu;                                        // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
struct UMenuAnchor_GetUserWidget__DelegateSignature_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.GetIsMenuAnchorOpen
struct UMenuAnchor_GetIsMenuAnchorOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.GetIgnoreClicksOutside
struct UMenuAnchor_GetIgnoreClicksOutside_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.FitInWindow
struct UMenuAnchor_FitInWindow_Params
{
public:
	bool                                         bFit;                                              // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x340 (0x340 - 0x0)
// Function UMG.MultiLineEditableText.SetWidgetStyle
struct UMultiLineEditableText_SetWidgetStyle_Params
{
public:
	struct FTextBlockStyle                       InWidgetStyle;                                     // 0x0(0x340)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MultiLineEditableText.SetIsReadOnly
struct UMultiLineEditableText_SetIsReadOnly_Params
{
public:
	bool                                         bReadOnly;                                         // 0x0(0x1)(ExportObject, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.SetHintText
struct UMultiLineEditableText_SetHintText_Params
{
public:
	class FText                                  InHintText;                                        // 0x0(0x18)(ConstParm, ExportObject, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.MultiLineEditableText.SetFontOutlineMaterial
struct UMultiLineEditableText_SetFontOutlineMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.MultiLineEditableText.SetFontMaterial
struct UMultiLineEditableText_SetFontMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.MultiLineEditableText.SetFont
struct UMultiLineEditableText_SetFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19AE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.GetHintText
struct UMultiLineEditableText_GetHintText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.MultiLineEditableText.GetFont
struct UMultiLineEditableText_GetFont_Params
{
public:
	struct FSlateFontInfo                        ReturnValue;                                       // 0x0(0x58)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x340 (0x340 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetTextStyle
struct UMultiLineEditableTextBox_SetTextStyle_Params
{
public:
	struct FTextBlockStyle                       InTextStyle;                                       // 0x0(0x340)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
struct UMultiLineEditableTextBox_SetIsReadOnly_Params
{
public:
	bool                                         bReadOnly;                                         // 0x0(0x1)(ExportObject, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetHintText
struct UMultiLineEditableTextBox_SetHintText_Params
{
public:
	class FText                                  InHintText;                                        // 0x0(0x18)(ConstParm, ExportObject, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetForegroundColor
struct UMultiLineEditableTextBox_SetForegroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
public:
	class FText                                  InError;                                           // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19C0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.GetHintText
struct UMultiLineEditableTextBox_GetHintText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Overlay.ReplaceOverlayChildAt
struct UOverlay_ReplaceOverlayChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_19CE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Content;                                           // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_19CF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UOverlaySlot*                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ProgressBar.SetPercentInterpolationKey
struct UProgressBar_SetPercentInterpolationKey_Params
{
public:
	int32                                        InterpKey;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InterpKey;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
public:
	bool                                         InbIsMarquee;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ProgressBar.SetEnginePercent
struct UProgressBar_SetEnginePercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.SetTextureParameter
struct URetainerBox_SetTextureParameter_Params
{
public:
	class FName                                  TextureParameter;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.RetainerBox.SetRetainRendering
struct URetainerBox_SetRetainRendering_Params
{
public:
	bool                                         bInRetainRendering;                                // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.SetRenderingPhase
struct URetainerBox_SetRenderingPhase_Params
{
public:
	int32                                        RenderPhase;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        TotalPhases;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.SetEffectMaterial
struct URetainerBox_SetEffectMaterial_Params
{
public:
	class UMaterialInterface*                    EffectMaterial;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.GetEffectMaterial
struct URetainerBox_GetEffectMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SafeZone.SetSidesToPad
struct USafeZone_SetSidesToPad_Params
{
public:
	bool                                         InPadLeft;                                         // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         InPadRight;                                        // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         InPadTop;                                          // 0x2(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         InPadBottom;                                       // 0x3(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScaleBox.SetUserSpecifiedScale
struct UScaleBox_SetUserSpecifiedScale_Params
{
public:
	float                                        InUserSpecifiedScale;                              // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetStretchDirection
struct UScaleBox_SetStretchDirection_Params
{
public:
	enum class EStretchDirection                 InStretchDirection;                                // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetStretch
struct UScaleBox_SetStretch_Params
{
public:
	enum class EStretch                          InStretch;                                         // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetIgnoreInheritedScale
struct UScaleBox_SetIgnoreInheritedScale_Params
{
public:
	bool                                         bInIgnoreInheritedScale;                           // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
public:
	float                                        InOffsetFraction;                                  // 0x0(0x4)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InThumbSizeFraction;                               // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBoxSlot.SetVerticalAlignment
struct UScrollBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
public:
	float                                        InWidthOverride;                                   // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Edit, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
public:
	float                                        InMinDesiredHeight;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMinAspectRatio
struct USizeBox_SetMinAspectRatio_Params
{
public:
	float                                        InMinAspectRatio;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
public:
	float                                        InMaxDesiredWidth;                                 // 0x0(0x4)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
public:
	float                                        InMaxDesiredHeight;                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxAspectRatio
struct USizeBox_SetMaxAspectRatio_Params
{
public:
	float                                        InMaxAspectRatio;                                  // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
public:
	float                                        InHeightOverride;                                  // 0x0(0x4)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetStepSize
struct USlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Slider.SetSliderHandleColor
struct USlider_SetSliderHandleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Slider.SetSliderBarColor
struct USlider_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetMinValue
struct USlider_SetMinValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetMaxValue
struct USlider_SetMaxValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.GetNormalizedValue
struct USlider_GetNormalizedValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
public:
	struct FVector2D                             InSize;                                            // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMinFractionalDigits
struct USpinBox_SetMinFractionalDigits_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMaxFractionalDigits
struct USpinBox_SetMaxFractionalDigits_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
public:
	struct FSlateColor                           InForegroundColor;                                 // 0x0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetDelta
struct USpinBox_SetDelta_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
struct USpinBox_SetAlwaysUsesDeltaSnap_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B0F[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMinFractionalDigits
struct USpinBox_GetMinFractionalDigits_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMaxFractionalDigits
struct USpinBox_GetMaxFractionalDigits_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetDelta
struct USpinBox_GetDelta_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
struct USpinBox_GetAlwaysUsesDeltaSnap_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.StackBox.ReplaceStackBoxChildAt
struct UStackBox_ReplaceStackBoxChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1B27[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Content;                                           // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1B29[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.StackBox.AddChildToStackBox
struct UStackBox_AddChildToStackBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStackBoxSlot*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.TextBlock.SetTextTransformPolicy
struct UTextBlock_SetTextTransformPolicy_Params
{
public:
	enum class ETextTransformPolicy              InTransformPolicy;                                 // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.TextBlock.SetTextOverflowPolicy
struct UTextBlock_SetTextOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               InOverflowPolicy;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBlock.SetString
struct UTextBlock_SetString_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(ExportObject, OutParm, Config, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.TextBlock.SetStrikeBrush
struct UTextBlock_SetStrikeBrush_Params
{
public:
	struct FSlateBrush                           InStrikeBrush;                                     // 0x0(0xD0)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
public:
	struct FVector2D                             InShadowOffset;                                    // 0x0(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
public:
	struct FLinearColor                          InShadowColorAndOpacity;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TextBlock.SetMinDesiredWidth
struct UTextBlock_SetMinDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Edit, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.SetFontOutlineMaterial
struct UTextBlock_SetFontOutlineMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.SetFontMaterial
struct UTextBlock_SetFontMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColorAndOpacity;                                 // 0x0(0x14)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.TextBlock.SetAutoWrapText
struct UTextBlock_SetAutoWrapText_Params
{
public:
	bool                                         InAutoTextWrap;                                    // 0x0(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.GetDynamicOutlineMaterial
struct UTextBlock_GetDynamicOutlineMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.GetDynamicFontMaterial
struct UTextBlock_GetDynamicFontMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
public:
	int32                                        InNumberOfPieces;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
public:
	bool                                         bInAnimateVertically;                              // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
public:
	bool                                         bInAnimateOpacity;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
public:
	bool                                         bInAnimateHorizontally;                            // 0x0(0x1)(ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.SetEntryWidth
struct UTileView_SetEntryWidth_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.SetEntryHeight
struct UTileView_SetEntryHeight_Params
{
public:
	float                                        NewHeight;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.GetEntryWidth
struct UTileView_GetEntryWidth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.GetEntryHeight
struct UTileView_GetEntryHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TreeView.SetItemExpansion
struct UTreeView_SetItemExpansion_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bExpandItem;                                       // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B6E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
public:
	struct FMargin                               InSlotPadding;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
public:
	float                                        InMinDesiredSlotWidth;                             // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
public:
	float                                        InMinDesiredSlotHeight;                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InRow;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InColumn;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UUniformGridSlot*                      ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
public:
	int32                                        InRow;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
public:
	int32                                        InColumn;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UVerticalBoxSlot*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
public:
	struct FSlateChildSize                       InSize;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
public:
	class UClass*                                ActorClass;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
public:
	class UWorld*                                ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetWindowVisibility
struct UWidgetComponent_SetWindowVisibility_Params
{
public:
	enum class EWindowVisibility                 InVisibility;                                      // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetWindowFocusable
struct UWidgetComponent_SetWindowFocusable_Params
{
public:
	bool                                         bInWindowFocusable;                                // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetWidgetSpace
struct UWidgetComponent_SetWidgetSpace_Params
{
public:
	enum class EWidgetSpace                      NewSpace;                                          // 0x0(0x1)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetTwoSided
struct UWidgetComponent_SetTwoSided_Params
{
public:
	bool                                         bWantTwoSided;                                     // 0x0(0x1)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.SetTintColorAndOpacity
struct UWidgetComponent_SetTintColorAndOpacity_Params
{
public:
	struct FLinearColor                          NewTintColorAndOpacity;                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetTickWhenOffscreen
struct UWidgetComponent_SetTickWhenOffscreen_Params
{
public:
	bool                                         bWantTickWhenOffscreen;                            // 0x0(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetTickMode
struct UWidgetComponent_SetTickMode_Params
{
public:
	enum class ETickMode                         InTickMode;                                        // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetComponent.SetRedrawTime
struct UWidgetComponent_SetRedrawTime_Params
{
public:
	float                                        InRedrawTime;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.SetPivot
struct UWidgetComponent_SetPivot_Params
{
public:
	struct FVector2D                             InPivot;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetManuallyRedraw
struct UWidgetComponent_SetManuallyRedraw_Params
{
public:
	bool                                         bUseManualRedraw;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetGeometryMode
struct UWidgetComponent_SetGeometryMode_Params
{
public:
	enum class EWidgetGeometryMode               InGeometryMode;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.SetDrawAtDesiredSize
struct UWidgetComponent_SetDrawAtDesiredSize_Params
{
public:
	bool                                         bInDrawAtDesiredSize;                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetComponent.SetCylinderArcAngle
struct UWidgetComponent_SetCylinderArcAngle_Params
{
public:
	float                                        InCylinderArcAngle;                                // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.SetBackgroundColor
struct UWidgetComponent_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          NewBackgroundColor;                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.IsWidgetVisible
struct UWidgetComponent_IsWidgetVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetWindowVisiblility
struct UWidgetComponent_GetWindowVisiblility_Params
{
public:
	enum class EWindowVisibility                 ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetWindowFocusable
struct UWidgetComponent_GetWindowFocusable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetWidgetSpace
struct UWidgetComponent_GetWidgetSpace_Params
{
public:
	enum class EWidgetSpace                      ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetWidget
struct UWidgetComponent_GetWidget_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetTwoSided
struct UWidgetComponent_GetTwoSided_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetTickWhenOffscreen
struct UWidgetComponent_GetTickWhenOffscreen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetRenderTarget
struct UWidgetComponent_GetRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetComponent.GetRedrawTime
struct UWidgetComponent_GetRedrawTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.GetPivot
struct UWidgetComponent_GetPivot_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetMaterialInstance
struct UWidgetComponent_GetMaterialInstance_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetManuallyRedraw
struct UWidgetComponent_GetManuallyRedraw_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetGeometryMode
struct UWidgetComponent_GetGeometryMode_Params
{
public:
	enum class EWidgetGeometryMode               ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetComponent.GetDrawAtDesiredSize
struct UWidgetComponent_GetDrawAtDesiredSize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetComponent.GetCylinderArcAngle
struct UWidgetComponent_GetCylinderArcAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.GetCurrentDrawSize
struct UWidgetComponent_GetCurrentDrawSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetInteractionComponent.SetFocus
struct UWidgetInteractionComponent_SetFocus_Params
{
public:
	class UWidget*                               FocusWidget;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct UWidgetInteractionComponent_SetCustomHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xF0)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.SendKeyChar
struct UWidgetInteractionComponent_SendKeyChar_Params
{
public:
	class FString                                Characters;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, DuplicateTransient)
	bool                                         bRepeat;                                           // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C61[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetInteractionComponent.ScrollWheel
struct UWidgetInteractionComponent_ScrollWheel_Params
{
public:
	float                                        ScrollDelta;                                       // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct UWidgetInteractionComponent_ReleasePointerKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.ReleaseKey
struct UWidgetInteractionComponent_ReleaseKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C6B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.PressPointerKey
struct UWidgetInteractionComponent_PressPointerKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.PressKey
struct UWidgetInteractionComponent_PressKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                         bRepeat;                                           // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C70[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct UWidgetInteractionComponent_PressAndReleaseKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C74[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function UMG.WidgetInteractionComponent.GetLastHitResult
struct UWidgetInteractionComponent_GetLastHitResult_Params
{
public:
	struct FHitResult                            ReturnValue;                                       // 0x0(0xF0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
public:
	class UWidgetComponent*                      ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct UWidgetInteractionComponent_Get2DHitLocation_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1C8D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetSwitcher.GetActiveWidget
struct UWidgetSwitcher_GetActiveWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarArea.SetVerticalAlignment
struct UWindowTitleBarArea_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WindowTitleBarArea.SetPadding
struct UWindowTitleBarArea_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
struct UWindowTitleBarArea_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetPadding
struct UWindowTitleBarAreaSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
public:
	struct FVector2D                             InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBox.SetHorizontalAlignment
struct UWrapBox_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WrapBox.AddChildToWrapBox
struct UWrapBox_AddChildToWrapBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UWrapBoxSlot*                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetNewLine
struct UWrapBoxSlot_SetNewLine_Params
{
public:
	bool                                         InForceNewLine;                                    // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
public:
	float                                        InFillSpanWhenLessThan;                            // 0x0(0x4)(Net, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
public:
	bool                                         InbFillEmptySpace;                                 // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x58 (0x58 - 0x0)
// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
struct USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             LocalVector;                                       // 0x38(0x10)(BlueprintVisible, ExportObject, Net, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x48(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
struct USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             AbsoluteVector;                                    // 0x38(0x10)(BlueprintVisible, Net, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x48(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
struct USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        LocalScalar;                                       // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x3C(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
struct USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        AbsoluteScalar;                                    // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x3C(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FGeometry                             Geometry;                                          // 0x8(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ScreenPosition;                                    // 0x40(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             LocalCoordinate;                                   // 0x50(0x10)(Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeWindowPosition;                            // 0x60(0x1)(Edit, ExportObject, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D00[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x18(0x10)(Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeWindowPosition;                            // 0x28(0x1)(Edit, ExportObject, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D07[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct USlateBlueprintLibrary_ScreenToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ViewportPosition;                                  // 0x18(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FGeometry                             Geometry;                                          // 0x8(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             LocalCoordinate;                                   // 0x40(0x10)(Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             PixelPosition;                                     // 0x50(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ViewportPosition;                                  // 0x60(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             LocalCoordinate;                                   // 0x38(0x10)(Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x48(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x38(0x10)(Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D1A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
struct USlateBlueprintLibrary_GetLocalTopLeft_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ReturnValue;                                       // 0x38(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ReturnValue;                                       // 0x38(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
struct USlateBlueprintLibrary_GetAbsoluteSize_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ReturnValue;                                       // 0x38(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1B0 (0x1B0 - 0x0)
// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
public:
	struct FSlateBrush                           A;                                                 // 0x0(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FSlateBrush                           B;                                                 // 0xD0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x1A0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D32[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             AbsoluteDesktopCoordinate;                         // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             PixelPosition;                                     // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ViewportPosition;                                  // 0x28(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x38(0x10)(Net, EditFixedSize, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x48(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
struct UWidgetBlueprintLibrary_SetWindowTitleBarState_Params
{
public:
	class UWidget*                               TitleBarContent;                                   // 0x0(0x8)(EditFixedSize, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	enum class EWindowTitleBarMode               Mode;                                              // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTitleBarDragEnabled;                              // 0x9(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bWindowButtonsVisible;                             // 0xA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bTitleBarVisible;                                  // 0xB(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D52[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
struct UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
struct UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x180 (0x180 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusWidget;                                       // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInAllUsers;                                       // 0xC0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D5A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           ReturnValue;                                       // 0xC8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x180 (0x180 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FVector2D                             NewMousePosition;                                  // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xC8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	enum class EMouseLockMode                    InMouseLockMode;                                   // 0x10(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bFlushInput;                                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D64[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	bool                                         bFlushInput;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D67[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	enum class EMouseLockMode                    InMouseLockMode;                                   // 0x10(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bHideCursorDuringCapture;                          // 0x11(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bFlushInput;                                       // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D6D[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
struct UWidgetBlueprintLibrary_SetHardwareCursor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class EMouseCursor                      CursorShape;                                       // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CursorName;                                        // 0xC(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D76[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             HotSpot;                                           // 0x18(0x10)(ConstParm, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D79[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
struct UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params
{
public:
	enum class EColorVisionDeficiency            Type;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_1D80[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Severity;                                          // 0x4(0x4)(Edit, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CorrectDeficiency;                                 // 0x8(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         ShowCorrectionWithDeficiency;                      // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D83[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UTexture2D*                            Texture;                                           // 0xD0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1D86[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UMaterialInterface*                    Material;                                          // 0xD0(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	uint8                                        Pad_1D8B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInAllJoysticks;                                   // 0xB8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D95[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	int32                                        Width;                                             // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        Height;                                            // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	int32                                        Width;                                             // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        Height;                                            // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      BrushAsset;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DA4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1DB2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              SafePadding;                                       // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FVector2D                             SafePaddingScale;                                  // 0x30(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FVector4                              SpillOverPadding;                                  // 0x40(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
public:
	struct FAnalogInputEvent                     Event;                                             // 0x0(0x48)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FKeyEvent                             ReturnValue;                                       // 0x48(0x40)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
public:
	struct FPointerEvent                         Event;                                             // 0x0(0x78)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FInputEvent                           ReturnValue;                                       // 0x78(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
public:
	struct FNavigationEvent                      Event;                                             // 0x0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FInputEvent                           ReturnValue;                                       // 0x28(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
public:
	struct FKeyEvent                             Event;                                             // 0x0(0x40)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FInputEvent                           ReturnValue;                                       // 0x40(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
public:
	struct FCharacterEvent                       Event;                                             // 0x0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FInputEvent                           ReturnValue;                                       // 0x28(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0xD0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1DCA[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
public:
	class UDragDropOperation*                    ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UTexture2D*                            ReturnValue;                                       // 0xD0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1DCF[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UMaterialInterface*                    ReturnValue;                                       // 0xD0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1DD3[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UObject*                               ReturnValue;                                       // 0xD0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1DD5[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UUserWidget*>                   FoundWidgets;                                      // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	class UClass*                                Interface;                                         // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	class UClass*                                OutWidgetClass;                                    // 0x20(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         TopLevelOnly;                                      // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DDE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UUserWidget*>                   FoundWidgets;                                      // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	class UClass*                                WidgetClass;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         TopLevelOnly;                                      // 0x20(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DE6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FText                                  Text;                                              // 0x30(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FVector2D                             Position;                                          // 0x48(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	class UFont*                                 Font;                                              // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        FontSize;                                          // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	class FName                                  FontTypeFace;                                      // 0x64(0x8)(BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Tint;                                              // 0x6C(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DF1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                InString;                                          // 0x30(0x10)(ExportObject, OutParm, Config, EditConst, SubobjectReference)
	struct FVector2D                             Position;                                          // 0x40(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FLinearColor                          Tint;                                              // 0x50(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawSpline
struct UWidgetBlueprintLibrary_DrawSpline_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector2D                             Start;                                             // 0x30(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	struct FVector2D                             StartDir;                                          // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FVector2D                             End;                                               // 0x50(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FVector2D                             EndDir;                                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Tint;                                              // 0x70(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	float                                        Thickness;                                         // 0x80(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1DF9[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FVector2D>                     Points;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          Tint;                                              // 0x40(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bAntiAlias;                                        // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DFE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Thickness;                                         // 0x54(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector2D                             PositionA;                                         // 0x30(0x10)(Edit, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FVector2D                             PositionB;                                         // 0x40(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Tint;                                              // 0x50(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	bool                                         bAntiAlias;                                        // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E03[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Thickness;                                         // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector2D                             Position;                                          // 0x30(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FVector2D                             Size;                                              // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	class USlateBrushAsset*                      Brush;                                             // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FLinearColor                          Tint;                                              // 0x58(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UWidget*                               WidgetDetectingDrag;                               // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FKey                                  DragKey;                                           // 0x80(0x18)(ConstParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x98(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x190 (0x190 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UWidget*                               WidgetDetectingDrag;                               // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FKey                                  DragKey;                                           // 0xC0(0x18)(ConstParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
public:
	class UClass*                                OperationClass;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UDragDropOperation*                    ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UClass*                                WidgetType;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UUserWidget*                           ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInAllUsers;                                       // 0xB8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x180 (0x180 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bInAllJoysticks;                                   // 0xC0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E26[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           ReturnValue;                                       // 0xC8(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
struct UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UWrapBoxSlot*                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
struct UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UWidgetSwitcherSlot*                   ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UVerticalBoxSlot*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UUniformGridSlot*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
struct UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class USizeBoxSlot*                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
struct UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UScrollBoxSlot*                        ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
struct UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UScaleBoxSlot*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
struct UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class USafeZoneSlot*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UOverlaySlot*                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UHorizontalBoxSlot*                    ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UGridSlot*                             ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UBorderSlot*                           ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	struct FVector                               WorldLocation;                                     // 0x8(0x18)(ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             ScreenPosition;                                    // 0x20(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPlayerViewportRelative;                           // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E5B[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
struct UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FGeometry                             ReturnValue;                                       // 0x8(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E67[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
struct UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	struct FGeometry                             ReturnValue;                                       // 0x8(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst)
	float                                        LocationX;                                         // 0x8(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LocationY;                                         // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E6C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
struct UWidgetLayoutLibrary_GetMousePositionOnViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
struct UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


