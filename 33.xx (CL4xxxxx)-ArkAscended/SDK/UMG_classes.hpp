#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class UMG.Visual
class UVisual : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVisual* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class UMG.Widget
class UWidget : public UVisual
{
public:
	uint8                                        Pad_D34[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FWidgetTransform                      RenderTransform;                                   // 0x98(0x38)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FVector2D                             RenderTransformPivot;                              // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_8C : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_D49[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        RenderOpacity;                                     // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_D4D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ConstParm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D4E[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x120(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D4F[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseCustomTooltip;                                 // 0x150(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAlignHorizontalUI                CustomToolTipHorizontalAlignment;                  // 0x151(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAlignVerticalUI                  CustomToolTipVerticalAlignment;                    // 0x152(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      CustomToolTipOrientation;                          // 0x153(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        GamepadSelectClosestDistanceMultiplier;            // 0x154(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bDisableAxisOrientedSweepTestOnMe;                 // 0x158(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D51[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CustomToolTipBlueprintOverride;                    // 0x160(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CustomToolTipPadding;                              // 0x168(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  CustomToolTipString;                               // 0x178(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D52[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         HandleVisibilityWithInput;                         // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityGamepadInput;                            // 0x199(0x1)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityKBMInput;                                // 0x19A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Highlightable;                                     // 0x19B(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bDontRenderHighlight;                              // 0x19C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseWindowClippingForHighlight;                    // 0x19D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPrimalSetupSpecialAdjacents;                      // 0x19E(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D53[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomData;                                        // 0x1A0(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  AdjacentUpName;                                    // 0x1B0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentDownName;                                  // 0x1B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentRightName;                                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentLeftName;                                  // 0x1C8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D56[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidget* GetDefaultObj();

	void SetVisibility(enum class ESlateVisibility* InVisibility);
	void SetUserFocus(class APlayerController** PlayerController);
	void SetToolTipText(class FText InToolTipText);
	class UWidget* SetToolTip();
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	enum class EUINavigation SetNavigationRuleExplicit(class UWidget* InWidget);
	enum class EUINavigation SetNavigationRuleCustomBoundary(FDelegateProperty_ InCustomDelegate);
	enum class EUINavigation SetNavigationRuleCustom(FDelegateProperty_ InCustomDelegate);
	enum class EUINavigation SetNavigationRuleBase(enum class EUINavigationRule* Rule);
	enum class EUINavigation SetNavigationRule(enum class EUINavigationRule* Rule, class FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool* bInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor* InCursor);
	void SetClipping(enum class EWidgetClipping* InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule* Rule, class FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	void OnReply__DelegateSignature(struct FEventReply* ReturnValue);
	void OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	FDelegateProperty_ K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
	FDelegateProperty_ K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId);
	void IsVisible(bool* ReturnValue);
	void IsRendered(bool* ReturnValue);
	void IsInViewport(bool* ReturnValue);
	void IsHovered(bool* ReturnValue);
	void InvalidateLayoutAndVolatility();
	void HasUserFocusedDescendants(class APlayerController** PlayerController, bool* ReturnValue);
	void HasUserFocus(class APlayerController** PlayerController, bool* ReturnValue);
	void HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex, bool* ReturnValue);
	void HasMouseCapture(bool* ReturnValue);
	void HasKeyboardFocus(bool* ReturnValue);
	void HasFocusedDescendants(bool* ReturnValue);
	void HasAnyUserFocus(bool* ReturnValue);
	void GetWidget__DelegateSignature(class UWidget** ReturnValue);
	void GetVisibility(enum class ESlateVisibility* ReturnValue);
	void GetTickSpaceGeometry(struct FGeometry* ReturnValue);
	void GetText__DelegateSignature(class FText* ReturnValue);
	void GetSlateVisibility__DelegateSignature(enum class ESlateVisibility* ReturnValue);
	void GetSlateColor__DelegateSignature(struct FSlateColor* ReturnValue);
	void GetSlateBrush__DelegateSignature(struct FSlateBrush* ReturnValue);
	void GetRenderTransformAngle(float* ReturnValue);
	void GetRenderOpacity(float* ReturnValue);
	void GetParent(class UPanelWidget** ReturnValue);
	void GetPaintSpaceGeometry(struct FGeometry* ReturnValue);
	void GetOwningPlayer(class APlayerController** ReturnValue);
	void GetOwningLocalPlayer(class ULocalPlayer** ReturnValue);
	void GetMouseCursor__DelegateSignature(enum class EMouseCursor* ReturnValue);
	void GetLinearColor__DelegateSignature(struct FLinearColor* ReturnValue);
	void GetIsThisAndParentsEnabled(bool* ReturnValue);
	void GetIsEnabled(bool* ReturnValue);
	void GetInt32__DelegateSignature(int32* ReturnValue);
	void GetGameInstance(class UGameInstance** ReturnValue);
	void GetFloat__DelegateSignature(float* ReturnValue);
	void GetDesiredSize(struct FVector2D* ReturnValue);
	void GetClipping(enum class EWidgetClipping* ReturnValue);
	void GetCheckBoxState__DelegateSignature(enum class ECheckBoxState* ReturnValue);
	void GetCachedGeometry(struct FGeometry* ReturnValue);
	void GetBool__DelegateSignature(bool* ReturnValue);
	void GetAccessibleText(class FText* ReturnValue);
	void GetAccessibleSummaryText(class FText* ReturnValue);
	class FString GenerateWidgetForString__DelegateSignature(class UWidget** ReturnValue);
	class UObject* GenerateWidgetForObject__DelegateSignature(class UWidget** ReturnValue);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// 0x130 (0x320 - 0x1F0)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_EB4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x1F8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	int32                                        SceneStackPriority;                                // 0x208(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x20C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x21C(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x230(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EBC[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x268(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x278(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x27C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x27C(0x1)(Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_93 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_EC1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x280(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x290(0x8)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x298(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x2A8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidgetTree*                           WidgetTree;                                        // 0x2C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x1, PropSize: 0x10x2D0(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x2, PropSize: 0x10x2D0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        BitPad_94 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_ED2[0x17];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x2E8(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_ED4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UInputComponent*                       InputComponent;                                    // 0x2F0(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<struct FAnimationEventBinding>        AnimationCallbacks;                                // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED5[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUserWidget* GetDefaultObj();

	void UnregisterInputComponent();
	FDelegateProperty_ UnbindFromAnimationStarted(class UWidgetAnimation* Animation);
	FDelegateProperty_ UnbindFromAnimationFinished(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	float Tick(const struct FGeometry& MyGeometry);
	class FName StopListeningForInputAction(enum class EInputEvent EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation** InAnimation);
	void StopAllAnimations();
	bool SetPositionInViewport(const struct FVector2D& Position);
	float SetPlaybackSpeed(class UWidgetAnimation** InAnimation);
	struct FMargin SetPadding();
	class APlayerController* SetOwningPlayer();
	int32 SetNumLoopsToPlay(class UWidgetAnimation** InAnimation);
	int32 SetInputActionPriority();
	bool SetInputActionBlocking();
	void SetForegroundColor(struct FSlateColor* InForegroundColor);
	struct FVector2D SetDesiredSizeInViewport();
	struct FLinearColor SetColorAndOpacity();
	float SetAnimationCurrentTime(class UWidgetAnimation** InAnimation);
	struct FAnchors SetAnchorsInViewport();
	struct FVector2D SetAlignmentInViewport();
	void ReverseAnimation(class UWidgetAnimation** InAnimation);
	void RemoveFromViewport();
	void RemoveExtensions(class UClass** InExtensionType);
	class UUserWidgetExtension* RemoveExtension();
	void RegisterInputComponent();
	bool PreConstruct();
	class USoundBase* PlaySound();
	bool PlayAnimationTimeRange(class UWidgetAnimation** InAnimation, class UUMGSequencePlayer** ReturnValue);
	bool PlayAnimationReverse(class UWidgetAnimation** InAnimation, class UUMGSequencePlayer** ReturnValue);
	bool PlayAnimationForward(class UWidgetAnimation** InAnimation, class UUMGSequencePlayer** ReturnValue);
	bool PlayAnimation(class UWidgetAnimation** InAnimation, class UUMGSequencePlayer** ReturnValue);
	void PauseAnimation(class UWidgetAnimation** InAnimation, float* ReturnValue);
	struct FPointerEvent OnTouchStarted(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	struct FPointerEvent OnTouchMoved(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	struct FPointerEvent OnTouchGesture(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	struct FPointerEvent OnTouchForceChanged(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	struct FPointerEvent OnTouchEnded(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	void OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent);
	void OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	void OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue);
	void OnPaint(const struct FPaintContext& Context);
	void OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	void OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	void OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	void OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	struct FPointerEvent OnMouseButtonDoubleClick(struct FEventReply* ReturnValue);
	struct FMotionEvent OnMotionDetected(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	void OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue);
	struct FCharacterEvent OnKeyChar(const struct FGeometry& MyGeometry, struct FEventReply* ReturnValue);
	void OnInitialized();
	void OnFocusReceived(const struct FGeometry& MyGeometry, struct FFocusEvent* InFocusEvent, struct FEventReply* ReturnValue);
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	class UDragDropOperation* OnDrop(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, bool* ReturnValue);
	class UDragDropOperation* OnDragOver(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, bool* ReturnValue);
	class UDragDropOperation* OnDragLeave(struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragEnter(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragCancelled(struct FPointerEvent* PointerEvent);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnAnalogValueChanged(const struct FGeometry& MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent, struct FEventReply* ReturnValue);
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	class FName ListenForInputAction(enum class EInputEvent EventType, bool* bConsume, FDelegateProperty_* Callback);
	void IsPlayingAnimation(bool* ReturnValue);
	class FName IsListeningForInputAction(bool* ReturnValue);
	void IsInteractable(bool* ReturnValue);
	void IsAnyAnimationPlaying(bool* ReturnValue);
	void IsAnimationPlayingForward(class UWidgetAnimation** InAnimation, bool* ReturnValue);
	void IsAnimationPlaying(class UWidgetAnimation** InAnimation, bool* ReturnValue);
	void GetOwningPlayerPawn(class APawn** ReturnValue);
	void GetOwningPlayerCameraManager(class APlayerCameraManager** ReturnValue);
	void GetIsVisible(bool* ReturnValue);
	void GetExtensions(class UClass** ExtensionType, TArray<class UUserWidgetExtension*>* ReturnValue);
	void GetExtension(class UClass** ExtensionType, class UUserWidgetExtension** ReturnValue);
	void GetAnimationCurrentTime(class UWidgetAnimation** InAnimation, float* ReturnValue);
	void GetAnchorsInViewport(struct FAnchors* ReturnValue);
	void GetAlignmentInViewport(struct FVector2D* ReturnValue);
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	FDelegateProperty_ BindToAnimationStarted(class UWidgetAnimation* Animation);
	FDelegateProperty_ BindToAnimationFinished(class UWidgetAnimation* Animation);
	FDelegateProperty_ BindToAnimationEvent(class UWidgetAnimation* Animation, enum class EWidgetAnimationEvent* AnimationEvent, class FName* UserTag);
	void AddToViewport(int32* ZOrder);
	void AddToPlayerScreen(int32* ZOrder, bool* ReturnValue);
	void AddExtension(class UClass** InExtensionType, class UUserWidgetExtension** ReturnValue);
};

// 0x158 (0x348 - 0x1F0)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x1F0(0xD0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           BrushDelegate;                                     // 0x2C0(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x2D0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x2E0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableDefaultDisabledEffect;                       // 0x2F1(0x1)(EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_F30[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2F4(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_F31[0x44];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImage* GetDefaultObj();

	void SetOpacity(float InOpacity);
	void SetDesiredSizeOverride(const struct FVector2D& DesiredSize);
	struct FLinearColor SetColorAndOpacity();
	struct FSlateColor SetBrushTintColor();
	void SetBrushResourceObject(class UObject** ResourceObject);
	class UTexture2DDynamic* SetBrushFromTextureDynamic(bool bMatchSize);
	class UTexture2D* SetBrushFromTexture(bool bMatchSize);
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize);
	void SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	class UMaterialInterface* SetBrushFromMaterial();
	void SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset** Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	void GetDynamicMaterial(class UMaterialInstanceDynamic** ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x1F0(0x3)(Edit, ConstParm, ZeroConstructor, ReturnParm, EditConst)
	enum class ETextJustify                      Justification;                                     // 0x1F3(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x1F4(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x1F5(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        BitPad_96 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_F36[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WrapTextAt;                                        // 0x1F8(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               Margin;                                            // 0x1FC(0x10)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance)
	float                                        LineHeightPercentage;                              // 0x20C(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTextLayoutWidget* GetDefaultObj();

	void SetJustification(enum class ETextJustify* InJustification);
};

// 0x700 (0x910 - 0x210)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class UDataTable*                            TextStyleSet;                                      // 0x228(0x8)(Edit, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        DecoratorClasses;                                  // 0x230(0x10)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideDefaultStyle;                             // 0x240(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_F8B[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x250(0x340)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x590(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x594(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x595(0x1)(ConstParm, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_F8E[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyle;                                  // 0x5A0(0x340)(Edit, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x8E0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_F90[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URichTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy* InTransformPolicy);
	void SetTextStyleSet(class UDataTable** NewTextStyleSet);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy* InOverflowPolicy);
	class FText SetText();
	void SetMinDesiredWidth(float* InMinDesiredWidth);
	void SetDefaultTextStyle(struct FTextBlockStyle* InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(struct FVector2D* InShadowOffset);
	void SetDefaultShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity);
	void SetDefaultMaterial(class UMaterialInterface* InMaterial);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	struct FSlateColor SetDefaultColorAndOpacity();
	void SetDecorators(TArray<class UClass*>* InDecoratorClasses);
	void SetAutoWrapText(bool* InAutoTextWrap);
	void RefreshTextLayout();
	void GetTextStyleSet(class UDataTable** ReturnValue);
	void GetText(class FText* ReturnValue);
	void GetDefaultDynamicMaterial(class UMaterialInstanceDynamic** ReturnValue);
	void GetDecoratorByClass(class UClass** DecoratorClass, class URichTextBlockDecorator** ReturnValue);
	void ClearAllDefaultStyleOverrides();
};

// 0x0 (0x28 - 0x28)
// Class UMG.RichTextBlockDecorator
class URichTextBlockDecorator : public UObject
{
public:

	static class UClass* StaticClass();
	static class URichTextBlockDecorator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URichTextBlockImageDecorator* GetDefaultObj();

};

// 0x18 (0x208 - 0x1F0)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x1F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_FDB[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         ClipChildren;                                      // 0x201(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseScaledRenderClipForHUDChildren;                 // 0x202(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bCanNavigateToDifferentPanel;                      // 0x203(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bHighlightInsteadOfChild;                          // 0x204(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FDE[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPanelWidget* GetDefaultObj();

	int32 RemoveChildAt(bool* ReturnValue);
	class UWidget* RemoveChild(bool* ReturnValue);
	class UWidget* HasChild(bool* ReturnValue);
	void HasAnyChildren(bool* ReturnValue);
	void GetChildrenCount(int32* ReturnValue);
	class UWidget* GetChildIndex(int32* ReturnValue);
	int32 GetChildAt(class UWidget** ReturnValue);
	void GetAllChildren(TArray<class UWidget*>* ReturnValue);
	void ClearChildren();
	class UWidget* AddChild(class UPanelSlot** ReturnValue);
};

// 0x0 (0x208 - 0x208)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass();
	static class UContentWidget* GetDefaultObj();

	class UWidget* SetContent(class UPanelSlot** ReturnValue);
	void GetContentSlot(class UPanelSlot** ReturnValue);
	void GetContent(class UWidget** ReturnValue);
};

// 0x4D8 (0x6E0 - 0x208)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_1000[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          WidgetStyle;                                       // 0x210(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseDisabledStyle;                                 // 0x600(0x1)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1001[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x604(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          BackgroundColor;                                   // 0x614(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x624(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x625(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0x626(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        IsFocusable : 1;                                   // Mask: 0x1, PropSize: 0x10x627(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A7 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bForceHandleMouseDown : 1;                         // Mask: 0x1, PropSize: 0x10x628(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A8 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1003[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRedirectGamepadPressToClick : 1;                  // Mask: 0x1, PropSize: 0x10x62C(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bUseHoverSound : 1;                                // Mask: 0x2, PropSize: 0x10x62C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A9 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1005[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x630(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x640(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x650(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x660(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x670(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1007[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClickedObject;                                   // 0x690(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClicked;                                // 0x6A0(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClickedObject;                          // 0x6B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClicked;                                  // 0x6C0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClickedObject;                            // 0x6D0(0x10)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UButton* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	struct FLinearColor SetColorAndOpacity();
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void MimickClicked(bool bFromGamepad);
	void IsPressed(bool* ReturnValue);
};

// 0xB90 (0xD98 - 0x208)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_1044[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x210(0x370)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x580(0x770)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0xCF0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xCF1(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xCF2(0x1)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1046[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScrollbarThickness;                                // 0xCF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               ScrollbarPadding;                                  // 0xD08(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbar;                               // 0xD18(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xD19(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0xD1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         BackPadScrolling;                                  // 0xD1B(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         FrontPadScrolling;                                 // 0xD1C(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnimateWheelScrolling;                            // 0xD1D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xD1E(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_104A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NavigationScrollPadding;                           // 0xD20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xD24(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowRightClickDragScrolling;                     // 0xD25(0x1)(Edit, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_104E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WheelScrollMultiplier;                             // 0xD28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_104F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xD30(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1050[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        NumPreviewWidgets;                                 // 0xD58(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumWidgetsBeforeWrapping;                          // 0xD5C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetSize;                                        // 0xD60(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetPadding;                                     // 0xD70(0x10)(ExportObject, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              WidgetHorizontalAlignment;                         // 0xD80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                WidgetVerticalAlignment;                           // 0xD81(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseWidgetPaddingAsMargin;                          // 0xD82(0x1)(Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1053[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               WidgetMargin;                                      // 0xD84(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGamepadMovementMovesScrollBox;                    // 0xD94(0x1)(Edit, ExportObject, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPrimalAllowRightSpecialStickScroll;               // 0xD95(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceAllowGamepadHighlight;                       // 0xD96(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1055[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBox* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(enum class EOrientation NewOrientation);
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination);
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	void GetViewOffsetFraction(float* ReturnValue);
	void GetViewFraction(float* ReturnValue);
	void GetScrollOffsetOfEnd(float* ReturnValue);
	void GetScrollOffset(float* ReturnValue);
	void GetScrollMax(float* ReturnValue);
	void GetScrollContentSize(struct FVector2D* ReturnValue);
	void GetPhysicalScrollOffset(float* ReturnValue);
	void EndInertialScrolling();
};

// 0x1A8 (0x3B0 - 0x208)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x209(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x20A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_AB : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1089[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x20C(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x21C(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x22C(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_108A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Background;                                        // 0x240(0xD0)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x310(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          BrushColor;                                        // 0x320(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x330(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             DesiredSizeScale;                                  // 0x340(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x350(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_108E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x354(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x364(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x374(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x384(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1094[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBorder* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	void SetShowEffectWhenDisabled(bool* bInShowEffectWhenDisabled);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	struct FVector2D SetDesiredSizeScale();
	void SetContentColorAndOpacity(struct FLinearColor* InContentColorAndOpacity);
	class UTexture2D* SetBrushFromTexture();
	class UMaterialInterface* SetBrushFromMaterial();
	void SetBrushFromAsset(class USlateBrushAsset** Asset);
	void SetBrushColor(struct FLinearColor* InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	void GetDynamicMaterial(class UMaterialInstanceDynamic** ReturnValue);
};

// 0x3B0 (0x5A0 - 0x1F0)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x218(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x230(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x240(0x2F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x530(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x531(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x534(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x538(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x539(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x53A(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x53B(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x53C(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x53D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x53E(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10E3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x540(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x560(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x561(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x562(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x563(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x564(0x3)(Edit, ConstParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_10E8[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x568(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x578(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_10EC[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableText* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy* InOverflowPolicy);
	class FText SetText();
	void SetMinimumDesiredWidth(float* InMinDesiredWidth);
	void SetJustification(enum class ETextJustify* InJustification);
	void SetIsReadOnly(bool* InbIsReadyOnly);
	void SetIsPassword(bool* InbIsPassword);
	void SetHintText(class FText* InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	class FText OnEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	class FText OnEditableTextChangedEvent__DelegateSignature();
	void GetText(class FText* ReturnValue);
	void GetJustification(enum class ETextJustify* ReturnValue);
	void GetHintText(class FText* ReturnValue);
	void GetFont(struct FSlateFontInfo* ReturnValue);
};

// 0x10 (0x40 - 0x30)
// Class UMG.PrimalWordList
class UPrimalWordList : public UDataAsset
{
public:
	class FString                                ActiveWordListRef;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, EditConst, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPrimalWordList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.NotifyFieldValueChanged
class INotifyFieldValueChanged : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INotifyFieldValueChanged* GetDefaultObj();

};

// 0x118 (0x308 - 0x1F0)
// Class UMG.ListViewBase
class UListViewBase : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x1F0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_110F[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                EntryWidgetClass;                                  // 0x210(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WheelScrollMultiplier;                             // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableScrollAnimation;                            // 0x21C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0x21D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableRightClickScrolling;                        // 0x21E(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableFixedLineOffset;                            // 0x21F(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FixedLineScrollOffset;                             // 0x220(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowDragging;                                    // 0x224(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1110[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x228(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst)
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x238(0x88)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1112[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UListViewBase* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	float SetScrollOffset();
	void SetScrollBarVisibility(enum class ESlateVisibility* InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	void GetScrollOffset(float* ReturnValue);
	void GetDisplayedEntryWidgets(TArray<class UUserWidget*>* ReturnValue);
};

// 0x9C8 (0xCD0 - 0x308)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_117B[0xD8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTableViewStyle                       WidgetStyle;                                       // 0x3E0(0xE0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x4C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	enum class EOrientation                      Orientation;                                       // 0xC30(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	enum class ESelectionMode                    SelectionMode;                                     // 0xC31(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC32(0x1)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bClearSelectionOnClick;                            // 0xC33(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0xC34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1183[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EntrySpacing;                                      // 0xC38(0x4)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bReturnFocusToSelection;                           // 0xC3C(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1185[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       ListItems;                                         // 0xC40(0x10)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1186[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xC60(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xC70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xC80(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xC90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xCA0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xCB0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnListViewScrolled;                             // 0xCC0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UListView* GetDefaultObj();

	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	int32 SetSelectedIndex();
	int32 ScrollIndexIntoView();
	class UObject* RemoveItem();
	enum class EEndPlayReason OnListItemOuterEndPlayed();
	enum class EEndPlayReason OnListItemEndPlayed();
	int32 NavigateToIndex();
	void IsRefreshPending(bool* ReturnValue);
	void GetNumItems(int32* ReturnValue);
	void GetListItems(TArray<class UObject*>* ReturnValue);
	int32 GetItemAt(class UObject** ReturnValue);
	class UObject* GetIndexForItem(int32* ReturnValue);
	void ClearListItems();
	class UObject* BP_SetSelectedItem();
	TArray<class UObject*> BP_SetListItems();
	bool BP_SetItemSelection();
	class UObject* BP_ScrollItemIntoView();
	class UObject* BP_NavigateToItem();
	class UObject* BP_IsItemVisible(bool* ReturnValue);
	void BP_GetSelectedItems(TArray<class UObject*>* Items, bool* ReturnValue);
	void BP_GetSelectedItem(class UObject** ReturnValue);
	void BP_GetNumItemsSelected(int32* ReturnValue);
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	class UObject* AddItem();
};

// 0x0 (0x28 - 0x28)
// Class UMG.ListViewDesignerPreviewItem
class UListViewDesignerPreviewItem : public UObject
{
public:

	static class UClass* StaticClass();
	static class UListViewDesignerPreviewItem* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11A2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  AccessibleText;                                    // 0x30(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USlateAccessibleWidgetData* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class UMG.UserWidgetBlueprint
class UUserWidgetBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetBlueprint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.UserWidgetExtension
class UUserWidgetExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetExtension* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintGeneratedClassExtension
class UWidgetBlueprintGeneratedClassExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClassExtension* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetFieldNotificationExtension
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{
public:
	uint8                                        Pad_11AE[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetFieldNotificationExtension* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                 Up;                                                // 0x28(0x24)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWidgetNavigationData                 Down;                                              // 0x4C(0x24)(EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FWidgetNavigationData                 Left;                                              // 0x70(0x24)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	struct FWidgetNavigationData                 Right;                                             // 0x94(0x24)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWidgetNavigationData                 Next;                                              // 0xB8(0x24)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	struct FWidgetNavigationData                 Previous;                                          // 0xDC(0x24)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UWidgetNavigation* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieScene2DTransformPropertySystem
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformPropertySystem* GetDefaultObj();

};

// 0x780 (0x870 - 0xF0)
// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_11B7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieScene2DTransformMask            TransformMask;                                     // 0xF8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_11B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x100(0x220)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x320(0x110)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMovieSceneFloatChannel               Scale[0x2];                                        // 0x430(0x220)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Shear[0x2];                                        // 0x650(0x220)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene2DTransformSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieScene2DTransformTrack
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformTrack* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieSceneMarginPropertySystem
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginPropertySystem* GetDefaultObj();

};

// 0x448 (0x538 - 0xF0)
// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_11C0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xF8(0x110)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x208(0x110)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x318(0x110)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x428(0x110)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMarginSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieSceneMarginTrack
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginTrack* GetDefaultObj();

};

// 0x160 (0x1A0 - 0x40)
// Class UMG.MovieSceneWidgetMaterialSystem
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_11C5[0x160];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialSystem* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_11C7[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  TrackName;                                         // 0xC8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialTrack* GetDefaultObj();

};

// 0x310 (0x338 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_11D0[0x1F8];                                   // Fixing Size After Last Property  > TateDumper <
	class UWidgetAnimation*                      Animation;                                         // 0x220(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	uint8                                        Pad_11D2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x230(0x88)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D3[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequencePlayer* GetDefaultObj();

	void SetUserTag(class FName* InUserTag);
	void GetUserTag(class FName* ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D7[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequenceTickManager* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_120B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DisplayLabel;                                      // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimation* GetDefaultObj();

	FDelegateProperty_ UnbindFromAnimationStarted();
	FDelegateProperty_ UnbindFromAnimationFinished();
	class UUserWidget* UnbindAllFromAnimationStarted();
	class UUserWidget* UnbindAllFromAnimationFinished();
	void GetStartTime(float* ReturnValue);
	void GetEndTime(float* ReturnValue);
	FDelegateProperty_ BindToAnimationStarted();
	FDelegateProperty_ BindToAnimationFinished();
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimationDelegateBinding* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_123C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetAnimationPlayCallbackProxy* GetDefaultObj();

	float CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UWidgetAnimation** InAnimation, class UWidgetAnimationPlayCallbackProxy** ReturnValue);
	float CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UWidgetAnimation** InAnimation, class UWidgetAnimationPlayCallbackProxy** ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x38)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  DestinationProperty;                               // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPropertyBinding* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class UMG.BoolBinding
class UBoolBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UBoolBinding* GetDefaultObj();

	void GetValue(bool* ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_1250[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrushBinding* GetDefaultObj();

	void GetValue(struct FSlateBrush* ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_1258[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckedStateBinding* GetDefaultObj();

	void GetValue(enum class ECheckBoxState* ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_1267[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UColorBinding* GetDefaultObj();

	void GetSlateValue(struct FSlateColor* ReturnValue);
	void GetLinearValue(struct FLinearColor* ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UFloatBinding* GetDefaultObj();

	void GetValue(float* ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UInt32Binding* GetDefaultObj();

	void GetValue(int32* ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UMouseCursorBinding* GetDefaultObj();

	void GetValue(enum class EMouseCursor* ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_12C7[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTextBinding* GetDefaultObj();

	void GetTextValue(class FText* ReturnValue);
	void GetStringValue(class FString* ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UVisibilityBinding* GetDefaultObj();

	void GetValue(enum class ESlateVisibility* ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinding* GetDefaultObj();

	void GetValue(class UWidget** ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTaskDownloadImage* GetDefaultObj();

	void DownloadImage(class FString* URL, class UAsyncTaskDownloadImage** ReturnValue);
};

// 0x80 (0xB0 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1330[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameViewportSubsystem* GetDefaultObj();

	bool SetWidgetSlotPosition(const struct FVector2D& Position, struct FGameViewportWidgetSlot* ReturnValue);
	struct FVector2D SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot* ReturnValue);
	struct FGameViewportWidgetSlot SetWidgetSlot();
	class UWidget* RemoveWidget();
	class UWidget* IsWidgetAdded(bool* ReturnValue);
	class UWidget* GetWidgetSlot(struct FGameViewportWidgetSlot* ReturnValue);
	struct FGameViewportWidgetSlot AddWidgetForPlayer();
	struct FGameViewportWidgetSlot AddWidget();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class IUserListEntry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUserListEntry* GetDefaultObj();

	bool BP_OnItemSelectionChanged();
	bool BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntryLibrary
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserListEntryLibrary* GetDefaultObj();

	TScriptInterface<class IUserListEntry> IsListItemSelected(bool* ReturnValue);
	TScriptInterface<class IUserListEntry> IsListItemExpanded(bool* ReturnValue);
	TScriptInterface<class IUserListEntry> GetOwningListView(class UListViewBase** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class IUserObjectListEntry : public IUserListEntry
{
public:

	static class UClass* StaticClass();
	static class IUserObjectListEntry* GetDefaultObj();

	void OnListItemObjectSet(class UObject** ListItemObject);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntryLibrary
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserObjectListEntryLibrary* GetDefaultObj();

	TScriptInterface<class IUserObjectListEntry> GetListItemObject(class UObject** ReturnValue);
};

// 0x128 (0x330 - 0x208)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x208(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x218(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x219(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyAlphaToBlur;                                 // 0x21A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1397[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BlurStrength;                                      // 0x21C(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x220(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1398[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        BlurRadius;                                        // 0x224(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_139B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CornerRadius;                                      // 0x230(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x250(0xD0)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_139E[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBackgroundBlur* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	void SetCornerRadius(struct FVector4* InCornerRadius);
	void SetBlurStrength(float* InStrength);
	void SetBlurRadius(int32* InBlurRadius);
	void SetApplyAlphaToBlur(bool* bInApplyAlphaToBlur);
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UWidget*                               Content;                                           // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPanelSlot* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14AB[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBackgroundBlurSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B8[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBorderSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14C3[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UButtonSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x30 (0x238 - 0x208)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_14CB[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x218(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x228(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCanvasPanel* GetDefaultObj();

	struct FLinearColor SetColorAndOpacity();
	class UWidget* AddChildToCanvas(class UCanvasPanelSlot** ReturnValue);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x40)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAutoSize;                                         // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1548[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ZOrder;                                            // 0x7C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1549[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCanvasPanelSlot* GetDefaultObj();

	int32 SetZOrder();
	struct FVector2D SetSize();
	struct FVector2D SetPosition();
	struct FMargin SetOffsets();
	struct FVector2D SetMinimum();
	struct FVector2D SetMaximum();
	void SetLayout(struct FAnchorData* InLayoutData);
	void SetAutoSize(bool* InbAutoSize);
	void SetAnchors(struct FAnchors* InAnchors);
	void SetAlignment(struct FVector2D* InAlignment);
	void GetZOrder(int32* ReturnValue);
	void GetSize(struct FVector2D* ReturnValue);
	void GetPosition(struct FVector2D* ReturnValue);
	void GetOffsets(struct FMargin* ReturnValue);
	void GetLayout(struct FAnchorData* ReturnValue);
	void GetAutoSize(bool* ReturnValue);
	void GetAnchors(struct FAnchors* ReturnValue);
	void GetAlignment(struct FVector2D* ReturnValue);
};

// 0xB18 (0xD20 - 0x208)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x208(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x20C(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_158F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x220(0xAD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xCF0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xCF1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xCF2(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0xCF3(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0xCF4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseHoverSound;                                    // 0xCF5(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1597[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xCF8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1599[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckBox* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	bool SetIsChecked();
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	enum class ECheckBoxState SetCheckedState();
	void IsPressed(bool* ReturnValue);
	void IsChecked(bool* ReturnValue);
	void GetCheckedState(enum class ECheckBoxState* ReturnValue);
};

// 0x100 (0x2F0 - 0x1F0)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0x1F4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                        Radius;                                            // 0x1F8(0x4)(ConstParm, BlueprintVisible, Net, OutParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_164D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	bool                                         bEnableRadius;                                     // 0x2D0(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_164E[0x1F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCircularThrobber* GetDefaultObj();

	float SetRadius();
	float SetPeriod();
	int32 SetNumberOfPieces();
};

// 0x7C0 (0x9B0 - 0x1F0)
// Class UMG.ComboBox
class UComboBox : public UWidget
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x1F0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	TArray<class UObject*>                       Items;                                             // 0x960(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x970(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x980(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16D1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x988(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D2[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBox* GetDefaultObj();

};

// 0x1BD0 (0x1DC0 - 0x1F0)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x1F0(0x10)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  SelectedOption;                                    // 0x200(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1855[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1D30(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D44(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D54(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bHasDownArrow;                                     // 0x1D58(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1D59(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x1D5A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1861[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x1D5C(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x1D6C(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1865[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D80(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D90(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1866[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxKey* GetDefaultObj();

	class FName SetSelectedOption();
	class FName RemoveOption(bool* ReturnValue);
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature();
	void OnOpeningEvent__DelegateSignature();
	void IsOpen(bool* ReturnValue);
	void GetSelectedOption(class FName* ReturnValue);
	class FName GenerateWidgetEvent__DelegateSignature(class UWidget** ReturnValue);
	void ClearSelection();
	void ClearOptions();
	class FName AddOption();
};

// 0x1C70 (0x1E60 - 0x1F0)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FText>                          DefaultOptions;                                    // 0x1F0(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x200(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D30(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D40(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         HasDownArrow;                                      // 0x1D44(0x1)(Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         EnableGamepadNavigationMode;                       // 0x1D45(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18B9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x1D48(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1DA0(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsFocusable;                                      // 0x1DB4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18BD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x1DB8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1DC8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1DD8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClosing;                                         // 0x1DE8(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18C1[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           TextColorAndOpacity;                               // 0x1E48(0x14)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18C2[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxString* GetDefaultObj();

	class FString SetSelectedOption();
	int32 SetSelectedIndex(enum class ESelectInfo* SelectInfo);
	class FString RemoveOption(bool* ReturnValue);
	void RefreshOptions();
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature();
	void OnOpeningEvent__DelegateSignature();
	void OnClosingEvent__DelegateSignature();
	void IsOpen(bool* ReturnValue);
	void GetSelectedOption(class FString* ReturnValue);
	void GetSelectedIndex(int32* ReturnValue);
	void GetOptionCount(int32* ReturnValue);
	int32 GetOptionAtIndex(class FString* ReturnValue);
	class FString FindOptionIndex(int32* ReturnValue);
	void ClearSelection();
	void ClearOptions();
	class FString AddOption();
};

// 0xE0 (0x2D0 - 0x1F0)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	struct FVector2D                             EntrySpacing;                                      // 0x1F0(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x200(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18F9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x214(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x21C(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x21D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18FD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxElementSize;                                    // 0x220(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRadialBoxSettings                    RadialBoxSettings;                                 // 0x224(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst)
	uint8                                        Pad_18FF[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x248(0x88)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBoxBase* GetDefaultObj();

	struct FRadialBoxSettings SetRadialSettings();
	struct FVector2D SetEntrySpacing();
	void GetNumEntries(int32* ReturnValue);
	void GetAllEntries(TArray<class UUserWidget*>* ReturnValue);
};

// 0x8 (0x2D8 - 0x2D0)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                EntryWidgetClass;                                  // 0x2D0(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBox* GetDefaultObj();

	bool Reset();
	class UUserWidget* RemoveEntry();
	class UClass* BP_CreateEntryOfClass(class UUserWidget** ReturnValue);
	void BP_CreateEntry(class UUserWidget** ReturnValue);
};

// 0xF40 (0x1130 - 0x1F0)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1952[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x220(0xE80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x10A0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x10B8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x10C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x10C9(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1958[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x10CC(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x10D0(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x10D1(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x10D2(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x10D3(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x10D4(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ShouldHandleEscape;                                // 0x10D6(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x10D7(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x10F8(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F9(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x10FA(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x10FB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x10FC(0x3)(Edit, ConstParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_195B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_195F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableTextBox* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy* InOverflowPolicy);
	class FText SetText();
	void SetJustification(enum class ETextJustify* InJustification);
	bool SetIsReadOnly();
	bool SetIsPassword();
	class FText SetHintText();
	void SetForegroundColor(struct FLinearColor* Color);
	class FText SetError();
	class FText OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	class FText OnEditableTextBoxChangedEvent__DelegateSignature();
	void HasError(bool* ReturnValue);
	void GetText(class FText* ReturnValue);
	void ClearError();
};

// 0x310 (0x500 - 0x1F0)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_1967[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FExpandableAreaStyle                  Style;                                             // 0x200(0x1C0)(ConstParm, ExportObject, Net, OutParm, Transient, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BorderBrush;                                       // 0x3C0(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           BorderColor;                                       // 0x490(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsExpanded;                                       // 0x4A4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1969[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxHeight;                                         // 0x4A8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               HeaderPadding;                                     // 0x4AC(0x10)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMargin                               AreaPadding;                                       // 0x4BC(0x10)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_196A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x4D0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidget*                               HeaderContent;                                     // 0x4E0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidget*                               BodyContent;                                       // 0x4E8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_196C[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExpandableArea* GetDefaultObj();

	bool SetIsExpanded_Animated();
	bool SetIsExpanded();
	void GetIsExpanded(bool* ReturnValue);
};

// 0x30 (0x238 - 0x208)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x208(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                RowFill;                                           // 0x218(0x10)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1993[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridPanel* GetDefaultObj();

	void SetRowFill(int32 RowIndex, float Coefficient);
	int32 SetColumnFill(float Coefficient);
	int32 AddChildToGrid(class UGridSlot** ReturnValue);
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19C5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x4C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        RowSpan;                                           // 0x50(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x54(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Layer;                                             // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector2D                             Nudge;                                             // 0x60(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_19C7[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	int32 SetRowSpan();
	int32 SetRow();
	struct FMargin SetPadding();
	struct FVector2D SetNudge();
	int32 SetLayer();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	int32 SetColumnSpan();
	int32 SetColumn();
};

// 0x10 (0x218 - 0x208)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_19CD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBox* GetDefaultObj();

	class UWidget* AddChildToHorizontalBox(class UHorizontalBoxSlot** ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_19DE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       Size;                                              // 0x40(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19E0[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FSlateChildSize SetSize();
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x7E0 (0x9D0 - 0x1F0)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x1F0(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       TextStyle;                                         // 0x5E0(0x340)(Edit, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FInputChord                           SelectedKey;                                       // 0x920(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FMargin                               Margin;                                            // 0x940(0x10)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance)
	class FText                                  KeySelectionText;                                  // 0x950(0x18)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  NoKeySpecifiedText;                                // 0x968(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowModifierKeys;                                // 0x980(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowGamepadKeys;                                 // 0x981(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19FA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FKey>                          EscapeKeys;                                        // 0x988(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x998(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x9A8(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19FC[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputKeySelector* GetDefaultObj();

	void SetTextBlockVisibility(enum class ESlateVisibility* InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(class FText InNoKeySpecifiedText);
	void SetKeySelectionText(class FText InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey>* InKeys);
	void SetAllowModifierKeys(bool* bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool* bInAllowGamepadKeys);
	struct FInputChord OnKeySelected__DelegateSignature();
	void OnIsSelectingKeyChanged__DelegateSignature();
	void GetIsSelectingKey(bool* ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x208(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A01[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInvalidationBox* GetDefaultObj();

	bool SetCanCache();
	void InvalidateCache();
	void GetCanCache(bool* ReturnValue);
};

// 0x70 (0x278 - 0x208)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                MenuClass;                                         // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x210(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x220(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EMenuPlacement                    Placement;                                         // 0x230(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFitInWindow;                                      // 0x231(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x232(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseApplicationMenuStack;                           // 0x233(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A56[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x238(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A57[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Padding;                                           // 0x260(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IgnoreClicksOutside;                               // 0x270(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A59[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMenuAnchor* GetDefaultObj();

	bool ToggleOpen();
	void ShouldOpenDueToClick(bool* ReturnValue);
	void SetPlacement(enum class EMenuPlacement* InPlacement);
	void SetIgnoreClicksOutside(bool* Ignore);
	void Open(bool* bFocusMenu);
	void IsOpen(bool* ReturnValue);
	void HasOpenSubMenus(bool* ReturnValue);
	void GetUserWidget__DelegateSignature(class UUserWidget** ReturnValue);
	void GetMenuPosition(struct FVector2D* ReturnValue);
	void GetIsMenuAnchorOpen(bool* ReturnValue);
	void GetIgnoreClicksOutside(bool* ReturnValue);
	void FitInWindow(bool* bFit);
	void Close();
};

// 0x3E0 (0x5F0 - 0x210)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x250(0x340)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x590(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x591(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x592(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x593(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x594(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x595(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A98[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x598(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x5B8(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A99[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x5C0(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x5D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_1A9A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableText* GetDefaultObj();

	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	class FText SetText();
	bool SetIsReadOnly();
	void SetHintText(class FText* InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	class FText OnMultiLineEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	class FText OnMultiLineEditableTextChangedEvent__DelegateSignature();
	void GetText(class FText* ReturnValue);
	void GetHintText(class FText* ReturnValue);
	void GetFont(struct FSlateFontInfo* ReturnValue);
};

// 0xF20 (0x1130 - 0x210)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x250(0xE80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x10D0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AB6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F8(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_1ABA[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableTextBox* GetDefaultObj();

	void SetTextStyle(struct FTextBlockStyle* InTextStyle);
	class FText SetText();
	bool SetIsReadOnly();
	void SetHintText(class FText* InHintText);
	void SetForegroundColor(struct FLinearColor* Color);
	class FText SetError();
	class FText OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	class FText OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	void GetText(class FText* ReturnValue);
	void GetHintText(class FText* ReturnValue);
};

// 0x10 (0x218 - 0x208)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_1ABD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNamedSlot* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.NamedSlotInterface
class INamedSlotInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INamedSlotInterface* GetDefaultObj();

};

// 0x10 (0x200 - 0x1F0)
// Class UMG.NativeWidgetHost
class UNativeWidgetHost : public UWidget
{
public:
	uint8                                        Pad_1AC1[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNativeWidgetHost* GetDefaultObj();

};

// 0x10 (0x218 - 0x208)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_1AC7[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOverlay* GetDefaultObj();

	class UWidget* ReplaceOverlayChildAt(bool* ReturnValue);
	class UWidget* AddChildToOverlay(class UOverlaySlot** ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_1ACC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ACD[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOverlaySlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x300 (0x4F0 - 0x1F0)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x1F0(0x290)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Percent;                                           // 0x480(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	enum class EProgressBarFillType              BarFillType;                                       // 0x484(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x485(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsMarquee;                                        // 0x486(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1ADA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BorderPadding;                                     // 0x488(0x10)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           PercentDelegate;                                   // 0x498(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x4A8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x4B8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ADD[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bInterpolatePercent;                               // 0x4DC(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AE1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InterpolatePercentSpeed;                           // 0x4E0(0x4)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AE2[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProgressBar* GetDefaultObj();

	int32 SetPercentInterpolationKey();
	int32 SetPercent(float* InPercent);
	bool SetIsMarquee();
	struct FLinearColor SetFillColorAndOpacity();
	void SetEnginePercent(float* InPercent);
};

// 0x30 (0x238 - 0x208)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x208(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RenderOnInvalidation;                              // 0x209(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RenderOnPhase;                                     // 0x20A(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Phase;                                             // 0x20C(0x4)(ConstParm, BlueprintVisible, Parm, InstancedReference, SubobjectReference)
	int32                                        PhaseCount;                                        // 0x210(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    EffectMaterial;                                    // 0x218(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  TextureParameter;                                  // 0x220(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AFB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URetainerBox* GetDefaultObj();

	class FName SetTextureParameter();
	bool SetRetainRendering();
	int32 SetRenderingPhase();
	class UMaterialInterface* SetEffectMaterial();
	void RequestRender();
	void GetEffectMaterial(class UMaterialInstanceDynamic** ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x208(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadRight;                                          // 0x209(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadTop;                                            // 0x20A(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadBottom;                                         // 0x20B(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B03[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USafeZone* GetDefaultObj();

	bool SetSidesToPad();
};

// 0x38 (0x70 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B07[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B0C[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USafeZoneSlot* GetDefaultObj();

};

// 0x20 (0x228 - 0x208)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x208(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EStretchDirection                 StretchDirection;                                  // 0x209(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1B2B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UserSpecifiedScale;                                // 0x20C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IgnoreInheritedScale;                              // 0x210(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1B2C[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScaleBox* GetDefaultObj();

	float SetUserSpecifiedScale();
	enum class EStretchDirection SetStretchDirection();
	enum class EStretch SetStretch();
	bool SetIgnoreInheritedScale();
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B34[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScaleBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x7B0 (0x9A0 - 0x1F0)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x1F0(0x770)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysShowScrollbar;                              // 0x960(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x961(0x1)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x962(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1B3B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Thickness;                                         // 0x968(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x978(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B3C[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBar* GetDefaultObj();

	float SetState();
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B4E[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x38 (0x240 - 0x208)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        Pad_1B7B[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        WidthOverride;                                     // 0x218(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        HeightOverride;                                    // 0x21C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredWidth;                                   // 0x220(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredHeight;                                  // 0x224(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxDesiredWidth;                                   // 0x228(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxDesiredHeight;                                  // 0x22C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinAspectRatio;                                    // 0x230(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxAspectRatio;                                    // 0x234(0x4)(BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x238(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x238(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x238(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x238(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x238(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x238(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x238(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B7F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USizeBox* GetDefaultObj();

	float SetWidthOverride();
	void SetMinDesiredWidth(float* InMinDesiredWidth);
	float SetMinDesiredHeight();
	float SetMinAspectRatio();
	float SetMaxDesiredWidth();
	float SetMaxDesiredHeight();
	float SetMaxAspectRatio();
	float SetHeightOverride();
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// 0x28 (0x60 - 0x38)
// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B89[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B8A[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USizeBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x5B0 (0x7A0 - 0x1F0)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MinValue;                                          // 0x204(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x208(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1B9F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x210(0x500)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x710(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1BA1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          SliderBarColor;                                    // 0x714(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderHandleColor;                                 // 0x724(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x734(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x735(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x736(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x737(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StepSize;                                          // 0x738(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x73C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BA4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x740(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x750(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x760(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x770(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x780(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA9[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USlider* GetDefaultObj();

	float SetValue();
	float SetStepSize();
	struct FLinearColor SetSliderHandleColor();
	struct FLinearColor SetSliderBarColor();
	float SetMinValue();
	float SetMaxValue();
	bool SetLocked();
	bool SetIndentHandle();
	void GetValue(float* ReturnValue);
	void GetNormalizedValue(float* ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_1BB4[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpacer* GetDefaultObj();

	struct FVector2D SetSize();
};

// 0x720 (0x910 - 0x1F0)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BCB[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x210(0x600)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MinFractionalDigits;                               // 0x810(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxFractionalDigits;                               // 0x814(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x818(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableSlider;                                     // 0x819(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BCC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Delta;                                             // 0x81C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        SliderExponent;                                    // 0x820(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BCE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x828(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextJustify                      Justification;                                     // 0x880(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1BCF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDesiredWidth;                                   // 0x884(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x888(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x889(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x88A(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BD0[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           ForegroundColor;                                   // 0x88C(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x8A0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x8B0(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x8C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x8D0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x8E0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x8E0(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x8E0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x8E0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_EE : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1BD5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinValue;                                          // 0x8E4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x8E8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinSliderValue;                                    // 0x8EC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MaxSliderValue;                                    // 0x8F0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BDA[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpinBox* GetDefaultObj();

	float SetValue();
	float SetMinValue();
	float SetMinSliderValue();
	int32 SetMinFractionalDigits();
	float SetMaxValue();
	float SetMaxSliderValue();
	int32 SetMaxFractionalDigits();
	void SetForegroundColor(struct FSlateColor* InForegroundColor);
	float SetDelta();
	bool SetAlwaysUsesDeltaSnap();
	float OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	float OnSpinBoxValueChangedEvent__DelegateSignature();
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	void GetValue(float* ReturnValue);
	void GetMinValue(float* ReturnValue);
	void GetMinSliderValue(float* ReturnValue);
	void GetMinFractionalDigits(int32* ReturnValue);
	void GetMaxValue(float* ReturnValue);
	void GetMaxSliderValue(float* ReturnValue);
	void GetMaxFractionalDigits(int32* ReturnValue);
	void GetDelta(float* ReturnValue);
	void GetAlwaysUsesDeltaSnap(bool* ReturnValue);
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// 0x18 (0x220 - 0x208)
// Class UMG.StackBox
class UStackBox : public UPanelWidget
{
public:
	enum class EOrientation                      Orientation;                                       // 0x208(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1BE8[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBox* GetDefaultObj();

	class UWidget* ReplaceStackBoxChildAt(bool* ReturnValue);
	class UWidget* AddChildToStackBox(class UStackBoxSlot** ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BEB[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBoxSlot* GetDefaultObj();

};

// 0x510 (0x720 - 0x210)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x228(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x238(0x14)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x24C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C12[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x260(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1C13[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           StrikeBrush;                                       // 0x2C0(0xD0)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             ShadowOffset;                                      // 0x390(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x3A0(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x3B0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x3C0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bWrapWithInvalidationPanel;                        // 0x3C4(0x1)(ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x3C5(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x3C6(0x1)(ConstParm, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CenterVertically;                                  // 0x3C7(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDisableInternalClipping;                          // 0x3C8(0x1)(Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         DontApplyDisabledEffect;                           // 0x3C9(0x1)(BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAutoWrapText;                                     // 0x3CA(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSimpleTextMode;                                   // 0x3CB(0x1)(Edit, ConstParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C1C[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x3E0(0x340)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy* InTransformPolicy);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy* InOverflowPolicy);
	class FText SetText();
	void SetString(const class FString& InString);
	void SetStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetShadowOffset(struct FVector2D* InShadowOffset);
	void SetShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float* InMinDesiredWidth);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	struct FSlateColor SetColorAndOpacity();
	void SetAutoWrapText(bool* InAutoTextWrap);
	void GetText(class FText* ReturnValue);
	void GetDynamicOutlineMaterial(class UMaterialInstanceDynamic** ReturnValue);
	void GetDynamicFontMaterial(class UMaterialInstanceDynamic** ReturnValue);
};

// 0xF0 (0x2E0 - 0x1F0)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateHorizontally;                              // 0x1F4(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateVertically;                                // 0x1F5(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateOpacity;                                   // 0x1F6(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C31[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_1C32[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThrobber* GetDefaultObj();

	int32 SetNumberOfPieces();
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// 0x20 (0xCF0 - 0xCD0)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0xCD0(0x4)(ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EntryWidth;                                        // 0xCD4(0x4)(BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EListItemAlignment                TileAlignment;                                     // 0xCD8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWrapHorizontalNavigation;                         // 0xCD9(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C3F[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTileView* GetDefaultObj();

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
	void GetEntryWidth(float* ReturnValue);
	void GetEntryHeight(float* ReturnValue);
};

// 0x60 (0xD30 - 0xCD0)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_1C49[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xCE0(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xCF0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1C4C[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTreeView* GetDefaultObj();

	class UObject* SetItemExpansion(bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// 0x28 (0x230 - 0x208)
// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                               SlotPadding;                                       // 0x208(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredSlotWidth;                               // 0x218(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredSlotHeight;                              // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1C61[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridPanel* GetDefaultObj();

	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	int32 AddChildToUniformGrid(class UUniformGridSlot** ReturnValue);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C72[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C73[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	int32 SetRow();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	int32 SetColumn();
};

// 0x10 (0x218 - 0x208)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1C78[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBox* GetDefaultObj();

	class UWidget* AddChildToVerticalBox(class UVerticalBoxSlot** ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C7F[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FSlateChildSize SetSize();
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x50 (0x258 - 0x208)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x208(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C91[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UViewport* GetDefaultObj();

	class UClass* Spawn(class AActor** ReturnValue);
	void SetViewRotation(struct FRotator* Rotation);
	void SetViewLocation(struct FVector* Location);
	void GetViewRotation(struct FRotator* ReturnValue);
	void GetViewportWorld(class UWorld** ReturnValue);
	void GetViewLocation(struct FVector* ReturnValue);
};

// 0x148 (0x820 - 0x6D8)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x6D8(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x6D9(0x1)(ConstParm, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WidgetClass;                                       // 0x6E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FIntPoint                             DrawSize;                                          // 0x6E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bManuallyRedraw;                                   // 0x6F0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRedrawRequested;                                  // 0x6F1(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RedrawTime;                                        // 0x6F4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF9[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             CurrentDrawSize;                                   // 0x700(0x8)(Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawAtDesiredSize;                                // 0x708(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CFB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Pivot;                                             // 0x710(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bReceiveHardwareInput;                             // 0x720(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWindowFocusable;                                  // 0x721(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x722(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bApplyGammaCorrection;                             // 0x723(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CFE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x728(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x730(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x740(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OpacityFromTexture;                                // 0x750(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x754(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bIsTwoSided;                                       // 0x755(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         TickWhenOffscreen;                                 // 0x756(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D02[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x758(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x760(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x768(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x770(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x778(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x780(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x788(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x790(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	bool                                         bAddedToScreen;                                    // 0x7A0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEditTimeUsable;                                   // 0x7A1(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D04[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SharedLayerName;                                   // 0x7A4(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LayerZOrder;                                       // 0x7AC(0x4)(ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x7B0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_1D05[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CylinderArcAngle;                                  // 0x7B4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETickMode                         TickMode;                                          // 0x7B8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D07[0x2F];                                    // Fixing Size After Last Property  > TateDumper <
	class UUserWidget*                           Widget;                                            // 0x7E8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1D08[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetComponent* GetDefaultObj();

	void SetWindowVisibility(enum class EWindowVisibility* InVisibility);
	void SetWindowFocusable(bool* bInWindowFocusable);
	void SetWidgetSpace(enum class EWidgetSpace* NewSpace);
	class UUserWidget* SetWidget();
	void SetTwoSided(bool* bWantTwoSided);
	void SetTintColorAndOpacity(struct FLinearColor* NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool* bWantTickWhenOffscreen);
	void SetTickMode(enum class ETickMode* InTickMode);
	void SetRedrawTime(float* InRedrawTime);
	void SetPivot(struct FVector2D* InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool* bUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode* InGeometryMode);
	struct FVector2D SetDrawSize();
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	void IsWidgetVisible(bool* ReturnValue);
	void GetWindowVisiblility(enum class EWindowVisibility* ReturnValue);
	void GetWindowFocusable(bool* ReturnValue);
	void GetWidgetSpace(enum class EWidgetSpace* ReturnValue);
	void GetWidget(class UUserWidget** ReturnValue);
	void GetUserWidgetObject(class UUserWidget** ReturnValue);
	void GetTwoSided(bool* ReturnValue);
	void GetTickWhenOffscreen(bool* ReturnValue);
	void GetRenderTarget(class UTextureRenderTarget2D** ReturnValue);
	void GetRedrawTime(float* ReturnValue);
	void GetPivot(struct FVector2D* ReturnValue);
	void GetOwnerPlayer(class ULocalPlayer** ReturnValue);
	void GetMaterialInstance(class UMaterialInstanceDynamic** ReturnValue);
	void GetManuallyRedraw(bool* ReturnValue);
	void GetGeometryMode(enum class EWidgetGeometryMode* ReturnValue);
	void GetDrawSize(struct FVector2D* ReturnValue);
	void GetDrawAtDesiredSize(bool* ReturnValue);
	void GetCylinderArcAngle(float* ReturnValue);
	void GetCurrentDrawSize(struct FVector2D* ReturnValue);
};

// 0x2D8 (0x5A0 - 0x2C8)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2C8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D3D[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualUserIndex;                                  // 0x2E8(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PointerIndex;                                      // 0x2EC(0x4)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1D40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InteractionDistance;                               // 0x2F4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2F8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableHitTesting;                                 // 0x2F9(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowDebug;                                        // 0x2FA(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D45[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DebugSphereLineThickness;                          // 0x2FC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugLineThickness;                                // 0x300(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          DebugColor;                                        // 0x304(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D47[0x7C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CustomHitResult;                                   // 0x390(0xF0)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             LocalHitLocation;                                  // 0x480(0x10)(Edit, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             LastLocalHitLocation;                              // 0x490(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x4A0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FHitResult                            LastHitResult;                                     // 0x4A8(0xF0)(ConstParm, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x598(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x599(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x59A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D4A[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetInteractionComponent* GetDefaultObj();

	class UWidget* SetFocus();
	void SetCustomHitResult(const struct FHitResult& HitResult);
	void SendKeyChar(const class FString& Characters, bool bRepeat, bool* ReturnValue);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	void ReleaseKey(const struct FKey& Key, bool* ReturnValue);
	void PressPointerKey(const struct FKey& Key);
	void PressKey(const struct FKey& Key, bool bRepeat, bool* ReturnValue);
	void PressAndReleaseKey(const struct FKey& Key, bool* ReturnValue);
	void IsOverInteractableWidget(bool* ReturnValue);
	void IsOverHitTestVisibleWidget(bool* ReturnValue);
	void IsOverFocusableWidget(bool* ReturnValue);
	void GetLastHitResult(struct FHitResult* ReturnValue);
	void GetHoveredWidgetComponent(class UWidgetComponent** ReturnValue);
	void Get2DHitLocation(struct FVector2D* ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x208(0x4)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1D62[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetSwitcher* GetDefaultObj();

	int32 SetActiveWidgetIndex();
	class UWidget* SetActiveWidget();
	int32 GetWidgetAtIndex(class UWidget** ReturnValue);
	void GetNumWidgets(int32* ReturnValue);
	void GetActiveWidgetIndex(int32* ReturnValue);
	void GetActiveWidget(class UWidget** ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1D72[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D75[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetSwitcherSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x20 (0x228 - 0x208)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x208(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x209(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D83[0x1E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWindowTitleBarArea* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D89[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWindowTitleBarAreaSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
};

// 0x28 (0x230 - 0x208)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                             InnerSlotPadding;                                  // 0x208(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WrapSize;                                          // 0x218(0x4)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bExplicitWrapSize;                                 // 0x21C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x21D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x21E(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1D8F[0x11];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWrapBox* GetDefaultObj();

	struct FVector2D SetInnerSlotPadding();
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	class UWidget* AddChildToWrapBox(class UWrapBoxSlot** ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D92[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWrapBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment* InVerticalAlignment);
	struct FMargin SetPadding();
	void SetNewLine(bool* InForceNewLine);
	void SetHorizontalAlignment(enum class EHorizontalAlignment* InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float* InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool* InbFillEmptySpace);
};

// 0x68 (0x90 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Payload;                                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Offset;                                            // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDragDropOperation* GetDefaultObj();

	void Drop(struct FPointerEvent* PointerEvent);
	void Dragged(struct FPointerEvent* PointerEvent);
	void DragCancelled(struct FPointerEvent* PointerEvent);
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USlateBlueprintLibrary* GetDefaultObj();

	void TransformVectorLocalToAbsolute(struct FGeometry* Geometry, struct FVector2D* LocalVector, struct FVector2D* ReturnValue);
	void TransformVectorAbsoluteToLocal(struct FGeometry* Geometry, struct FVector2D* AbsoluteVector, struct FVector2D* ReturnValue);
	void TransformScalarLocalToAbsolute(struct FGeometry* Geometry, float* LocalScalar, float* ReturnValue);
	void TransformScalarAbsoluteToLocal(struct FGeometry* Geometry, float* AbsoluteScalar, float* ReturnValue);
	struct FVector2D ScreenToWidgetLocal(struct FGeometry* Geometry, struct FVector2D* LocalCoordinate, bool* bIncludeWindowPosition);
	struct FVector2D ScreenToWidgetAbsolute(struct FVector2D* AbsoluteCoordinate, bool* bIncludeWindowPosition);
	struct FVector2D ScreenToViewport();
	struct FVector2D LocalToViewport(struct FGeometry* Geometry, struct FVector2D* LocalCoordinate, struct FVector2D* PixelPosition);
	void LocalToAbsolute(struct FGeometry* Geometry, struct FVector2D* LocalCoordinate, struct FVector2D* ReturnValue);
	void IsUnderLocation(struct FGeometry* Geometry, struct FVector2D* AbsoluteCoordinate, bool* ReturnValue);
	void GetLocalTopLeft(struct FGeometry* Geometry, struct FVector2D* ReturnValue);
	void GetLocalSize(struct FGeometry* Geometry, struct FVector2D* ReturnValue);
	void GetAbsoluteSize(struct FGeometry* Geometry, struct FVector2D* ReturnValue);
	struct FSlateBrush EqualEqual_SlateBrush(bool* ReturnValue);
	struct FVector2D AbsoluteToViewport(struct FVector2D* AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition);
	void AbsoluteToLocal(struct FGeometry* Geometry, struct FVector2D* AbsoluteCoordinate, struct FVector2D* ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMax;                                         // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlateVectorArtData* GetDefaultObj();

};

// 0x80 (0x3F0 - 0x370)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x378(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x388(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DE0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x39C(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_11E : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1DE1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x3A0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x3B0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          NamedSlots;                                        // 0x3C0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3D0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3E0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintLibrary
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintLibrary* GetDefaultObj();

	struct FEventReply UnlockMouse(struct FEventReply* ReturnValue);
	void Unhandled(struct FEventReply* ReturnValue);
	bool SetWindowTitleBarState();
	FDelegateProperty_ SetWindowTitleBarOnCloseClickedDelegate();
	bool SetWindowTitleBarCloseButtonActive();
	bool SetUserFocus(struct FEventReply* ReturnValue);
	struct FVector2D SetMousePosition(struct FEventReply* ReturnValue);
	bool SetInputMode_UIOnlyEx(class APlayerController** PlayerController);
	bool SetInputMode_GameOnly(class APlayerController** PlayerController);
	bool SetInputMode_GameAndUIEx(class APlayerController** PlayerController);
	struct FVector2D SetHardwareCursor(bool* ReturnValue);
	void SetFocusToGameViewport();
	bool SetColorVisionDeficiencyType();
	class UTexture2D* SetBrushResourceToTexture();
	class UMaterialInterface* SetBrushResourceToMaterial();
	void RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture(struct FEventReply* ReturnValue);
	bool ReleaseJoystickCapture(struct FEventReply* ReturnValue);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	void NoResourceBrush(struct FSlateBrush* ReturnValue);
	class UTexture2D* MakeBrushFromTexture(int32 Width, int32 Height, struct FSlateBrush* ReturnValue);
	class UMaterialInterface* MakeBrushFromMaterial(int32 Width, int32 Height, struct FSlateBrush* ReturnValue);
	class USlateBrushAsset* MakeBrushFromAsset(struct FSlateBrush* ReturnValue);
	class UWidget* LockMouse(struct FEventReply* ReturnValue);
	void IsDragDropping(bool* ReturnValue);
	void Handled(struct FEventReply* ReturnValue);
	struct FVector4 GetSafeZonePadding();
	void GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent* Event, struct FKeyEvent* ReturnValue);
	void GetInputEventFromPointerEvent(struct FPointerEvent* Event, struct FInputEvent* ReturnValue);
	void GetInputEventFromNavigationEvent(struct FNavigationEvent* Event, struct FInputEvent* ReturnValue);
	void GetInputEventFromKeyEvent(struct FKeyEvent* Event, struct FInputEvent* ReturnValue);
	void GetInputEventFromCharacterEvent(struct FCharacterEvent* Event, struct FInputEvent* ReturnValue);
	struct FSlateBrush GetDynamicMaterial(class UMaterialInstanceDynamic** ReturnValue);
	void GetDragDroppingContent(class UDragDropOperation** ReturnValue);
	struct FSlateBrush GetBrushResourceAsTexture2D(class UTexture2D** ReturnValue);
	struct FSlateBrush GetBrushResourceAsMaterial(class UMaterialInterface** ReturnValue);
	struct FSlateBrush GetBrushResource(class UObject** ReturnValue);
	bool GetAllWidgetsWithInterface(class UClass* Interface);
	bool GetAllWidgetsOfClass();
	struct FEventReply EndDragDrop(struct FEventReply* ReturnValue);
	struct FLinearColor DrawTextFormatted(const struct FPaintContext& Context, const struct FVector2D& Position);
	struct FLinearColor DrawText(const struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position);
	struct FLinearColor DrawSpline(const struct FPaintContext& Context, struct FVector2D* Start, const struct FVector2D& End, float Thickness);
	bool DrawLines(const struct FPaintContext& Context, TArray<struct FVector2D>* Points, float Thickness);
	bool DrawLine(const struct FPaintContext& Context, float Thickness);
	struct FLinearColor DrawBox(const struct FPaintContext& Context, const struct FVector2D& Position);
	void DismissAllMenus();
	struct FKey DetectDragIfPressed(struct FPointerEvent* PointerEvent, struct FEventReply* ReturnValue);
	struct FKey DetectDrag(struct FEventReply* ReturnValue);
	class UClass* CreateDragDropOperation(class UDragDropOperation** ReturnValue);
	class APlayerController* Create(class UUserWidget** ReturnValue);
	bool ClearUserFocus(struct FEventReply* ReturnValue);
	class UWidget* CaptureMouse(struct FEventReply* ReturnValue);
	bool CaptureJoystick(struct FEventReply* ReturnValue);
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetLayoutLibrary* GetDefaultObj();

	class UWidget* SlotAsWrapBoxSlot(class UWrapBoxSlot** ReturnValue);
	class UWidget* SlotAsWidgetSwitcherSlot(class UWidgetSwitcherSlot** ReturnValue);
	class UWidget* SlotAsVerticalBoxSlot(class UVerticalBoxSlot** ReturnValue);
	class UWidget* SlotAsUniformGridSlot(class UUniformGridSlot** ReturnValue);
	class UWidget* SlotAsSizeBoxSlot(class USizeBoxSlot** ReturnValue);
	class UWidget* SlotAsScrollBoxSlot(class UScrollBoxSlot** ReturnValue);
	class UWidget* SlotAsScaleBoxSlot(class UScaleBoxSlot** ReturnValue);
	class UWidget* SlotAsSafeBoxSlot(class USafeZoneSlot** ReturnValue);
	class UWidget* SlotAsOverlaySlot(class UOverlaySlot** ReturnValue);
	class UWidget* SlotAsHorizontalBoxSlot(class UHorizontalBoxSlot** ReturnValue);
	class UWidget* SlotAsGridSlot(class UGridSlot** ReturnValue);
	class UWidget* SlotAsCanvasSlot(class UCanvasPanelSlot** ReturnValue);
	class UWidget* SlotAsBorderSlot(class UBorderSlot** ReturnValue);
	class UObject* RemoveAllWidgets();
	struct FVector2D ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, bool bPlayerViewportRelative, bool* ReturnValue);
	class UObject* GetViewportWidgetGeometry(struct FGeometry* ReturnValue);
	class UObject* GetViewportSize(struct FVector2D* ReturnValue);
	class UObject* GetViewportScale(float* ReturnValue);
	void GetPlayerScreenWidgetGeometry(class APlayerController** PlayerController, struct FGeometry* ReturnValue);
	class APlayerController* GetMousePositionScaledByDPI(float* LocationX, float* LocationY, bool* ReturnValue);
	class UObject* GetMousePositionOnViewport(struct FVector2D* ReturnValue);
	void GetMousePositionOnPlatform(struct FVector2D* ReturnValue);
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_1EC6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetTree* GetDefaultObj();

};

}


