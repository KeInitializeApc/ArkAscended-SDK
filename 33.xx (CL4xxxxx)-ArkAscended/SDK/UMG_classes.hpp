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
	uint8                                        Pad_132E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FWidgetTransform                      RenderTransform;                                   // 0x98(0x38)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FVector2D                             RenderTransformPivot;                              // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E6 : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_1332[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RenderOpacity;                                     // 0xE8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1333[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1334[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x120(0x10)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1335[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseCustomTooltip;                                 // 0x150(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAlignHorizontalUI                CustomToolTipHorizontalAlignment;                  // 0x151(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAlignVerticalUI                  CustomToolTipVerticalAlignment;                    // 0x152(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      CustomToolTipOrientation;                          // 0x153(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        GamepadSelectClosestDistanceMultiplier;            // 0x154(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bDisableAxisOrientedSweepTestOnMe;                 // 0x158(0x1)(BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1337[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CustomToolTipBlueprintOverride;                    // 0x160(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CustomToolTipPadding;                              // 0x168(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  CustomToolTipString;                               // 0x178(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1339[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         HandleVisibilityWithInput;                         // 0x198(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityGamepadInput;                            // 0x199(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityKBMInput;                                // 0x19A(0x1)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Highlightable;                                     // 0x19B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bDontRenderHighlight;                              // 0x19C(0x1)(BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseWindowClippingForHighlight;                    // 0x19D(0x1)(Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPrimalSetupSpecialAdjacents;                      // 0x19E(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_133B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomData;                                        // 0x1A0(0x10)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  AdjacentUpName;                                    // 0x1B0(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentDownName;                                  // 0x1B8(0x8)(ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentRightName;                                 // 0x1C0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentLeftName;                                  // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_133C[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidget* GetDefaultObj();

	enum class ESlateVisibility SetVisibility();
	void SetUserFocus(class APlayerController** PlayerController);
	class FText SetToolTipText();
	class UWidget* SetToolTip();
	void SetRenderTranslation(const struct FVector2D& Translation);
	struct FVector2D SetRenderTransformPivot();
	float SetRenderTransformAngle();
	struct FWidgetTransform SetRenderTransform();
	void SetRenderShear(struct FVector2D* Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float* InOpacity);
	void SetNavigationRuleExplicit(enum class EUINavigation* Direction, class UWidget** InWidget);
	void SetNavigationRuleCustomBoundary(enum class EUINavigation* Direction, FDelegateProperty_* InCustomDelegate);
	void SetNavigationRuleCustom(enum class EUINavigation* Direction, FDelegateProperty_* InCustomDelegate);
	void SetNavigationRuleBase(enum class EUINavigation* Direction, enum class EUINavigationRule Rule);
	void SetNavigationRule(enum class EUINavigation* Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool* bInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor* InCursor);
	void SetClipping(enum class EWidgetClipping InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId* FieldId, FDelegateProperty_ Delegate);
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId* FieldId);
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId* FieldId, FDelegateProperty_ Delegate);
	bool IsVisible();
	bool IsRendered();
	bool IsInViewport();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController** PlayerController);
	bool HasUserFocus(class APlayerController** PlayerController);
	bool HasMouseCaptureByUser(int32* UserIndex, int32* PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	enum class ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	class FText GetText__DelegateSignature();
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	enum class EMouseCursor GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsThisAndParentsEnabled();
	bool GetIsEnabled();
	int32 GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	enum class EWidgetClipping GetClipping();
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class FText GetAccessibleText();
	class FText GetAccessibleSummaryText();
	class UWidget* GenerateWidgetForString__DelegateSignature();
	class UWidget* GenerateWidgetForObject__DelegateSignature();
	void ForceVolatile(bool* bForce);
	void ForceLayoutPrepass();
};

// 0x130 (0x320 - 0x1F0)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_1455[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x1F8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	int32                                        SceneStackPriority;                                // 0x208(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x20C(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x21C(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x230(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_145B[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x268(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x278(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x27C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x27C(0x1)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E7 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_145E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x280(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x290(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x298(0x10)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x2A8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidgetTree*                           WidgetTree;                                        // 0x2C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x1, PropSize: 0x10x2D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x2, PropSize: 0x10x2D0(0x1)(BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        BitPad_E8 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1463[0x17];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x2E8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1466[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputComponent*                       InputComponent;                                    // 0x2F0(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<struct FAnimationEventBinding>        AnimationCallbacks;                                // 0x2F8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1467[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUserWidget* GetDefaultObj();

	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	float Tick(struct FGeometry* MyGeometry);
	void StopListeningForInputAction(class FName* ActionName, enum class EInputEvent* EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	class UWidgetAnimation* StopAnimation();
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool* bRemoveDPIScale);
	class UWidgetAnimation* SetPlaybackSpeed(float PlaybackSpeed);
	void SetPadding(struct FMargin* InPadding);
	void SetOwningPlayer(class APlayerController** LocalPlayerController);
	class UWidgetAnimation* SetNumLoopsToPlay(int32 NumLoopsToPlay);
	void SetInputActionPriority(int32 NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	struct FSlateColor SetForegroundColor();
	struct FVector2D SetDesiredSizeInViewport();
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	class UWidgetAnimation* SetAnimationCurrentTime(float InTime);
	struct FAnchors SetAnchorsInViewport();
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	class UWidgetAnimation* ReverseAnimation();
	void RemoveFromViewport();
	class UClass* RemoveExtensions();
	void RemoveExtension(class UUserWidgetExtension* InExtension);
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimation(float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation();
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(struct FGeometry* MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FFocusEvent OnRemovedFromFocusPath();
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry);
	struct FPaintContext OnPaint();
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(struct FGeometry* MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry);
	struct FEventReply OnKeyChar(struct FGeometry* MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry);
	struct FFocusEvent OnFocusLost();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent);
	bool OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragLeave(struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent);
	class UDragDropOperation* OnDragCancelled(struct FPointerEvent* PointerEvent);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(struct FGeometry* MyGeometry);
	struct FFocusEvent OnAddedToFocusPath();
	FDelegateProperty_ ListenForInputAction(class FName* ActionName, enum class EInputEvent* EventType);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(class FName* ActionName);
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward();
	bool IsAnimationPlaying();
	class APawn* GetOwningPlayerPawn();
	class APlayerCameraManager* GetOwningPlayerCameraManager();
	bool GetIsVisible();
	TArray<class UUserWidgetExtension*> GetExtensions();
	class UUserWidgetExtension* GetExtension();
	float GetAnimationCurrentTime();
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	class FName BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	int32 AddToViewport();
	bool AddToPlayerScreen();
	class UUserWidgetExtension* AddExtension();
};

// 0x158 (0x348 - 0x1F0)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x1F0(0xD0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           BrushDelegate;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x2D0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x2E0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2F0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableDefaultDisabledEffect;                       // 0x2F1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2F4(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_14C5[0x44];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImage* GetDefaultObj();

	void SetOpacity(float* InOpacity);
	struct FVector2D SetDesiredSizeOverride();
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	struct FSlateColor SetBrushTintColor();
	class UObject* SetBrushResourceObject();
	bool SetBrushFromTextureDynamic();
	bool SetBrushFromTexture();
	bool SetBrushFromSoftTexture();
	TSoftObjectPtr<class UMaterialInterface> SetBrushFromSoftMaterial();
	class UMaterialInterface* SetBrushFromMaterial();
	bool SetBrushFromAtlasInterface();
	void SetBrushFromAsset(class USlateBrushAsset** Asset);
	struct FSlateBrush SetBrush();
	class UMaterialInstanceDynamic* GetDynamicMaterial();
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
	uint8                                        BitPad_EA : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14D1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WrapTextAt;                                        // 0x1F8(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               Margin;                                            // 0x1FC(0x10)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance)
	float                                        LineHeightPercentage;                              // 0x20C(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTextLayoutWidget* GetDefaultObj();

	enum class ETextJustify SetJustification();
};

// 0x700 (0x910 - 0x210)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class UDataTable*                            TextStyleSet;                                      // 0x228(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        DecoratorClasses;                                  // 0x230(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideDefaultStyle;                             // 0x240(0x1)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1502[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x250(0x340)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x590(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x594(0x1)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x595(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1503[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyle;                                  // 0x5A0(0x340)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x8E0(0x10)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1505[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URichTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	class FText SetText();
	float SetMinDesiredWidth();
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	class UMaterialInterface* SetDefaultMaterial();
	struct FSlateFontInfo SetDefaultFont();
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetDecorators(const TArray<class UClass*>& InDecoratorClasses);
	void SetAutoWrapText(bool InAutoTextWrap);
	void RefreshTextLayout();
	class UDataTable* GetTextStyleSet();
	class FText GetText();
	class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
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
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URichTextBlockImageDecorator* GetDefaultObj();

};

// 0x18 (0x208 - 0x1F0)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x1F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1521[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         ClipChildren;                                      // 0x201(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseScaledRenderClipForHUDChildren;                 // 0x202(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bCanNavigateToDifferentPanel;                      // 0x203(0x1)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bHighlightInsteadOfChild;                          // 0x204(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1523[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPanelWidget* GetDefaultObj();

	bool RemoveChildAt();
	bool RemoveChild(class UWidget** Content);
	bool HasChild(class UWidget** Content);
	bool HasAnyChildren();
	int32 GetChildrenCount();
	int32 GetChildIndex(class UWidget** Content);
	class UWidget* GetChildAt();
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget** Content);
};

// 0x0 (0x208 - 0x208)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass();
	static class UContentWidget* GetDefaultObj();

	class UPanelSlot* SetContent(class UWidget** Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// 0x4D8 (0x6E0 - 0x208)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_1547[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          WidgetStyle;                                       // 0x210(0x3F0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseDisabledStyle;                                 // 0x600(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_154A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x604(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          BackgroundColor;                                   // 0x614(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x624(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x625(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0x626(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        IsFocusable : 1;                                   // Mask: 0x1, PropSize: 0x10x627(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_EE : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bForceHandleMouseDown : 1;                         // Mask: 0x1, PropSize: 0x10x628(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_EF : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_154D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRedirectGamepadPressToClick : 1;                  // Mask: 0x1, PropSize: 0x10x62C(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bUseHoverSound : 1;                                // Mask: 0x2, PropSize: 0x10x62C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_F0 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1550[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x630(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x640(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x650(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x660(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x670(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1551[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClickedObject;                                   // 0x690(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClicked;                                // 0x6A0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClickedObject;                          // 0x6B0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClicked;                                  // 0x6C0(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClickedObject;                            // 0x6D0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UButton* GetDefaultObj();

	enum class EButtonTouchMethod SetTouchMethod();
	struct FButtonStyle SetStyle();
	enum class EButtonPressMethod SetPressMethod();
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	enum class EButtonClickMethod SetClickMethod();
	struct FLinearColor SetBackgroundColor();
	bool MimickClicked();
	bool IsPressed();
};

// 0xB90 (0xD98 - 0x208)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_1590[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x210(0x370)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x580(0x770)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0xCF0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xCF1(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xCF2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1595[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScrollbarThickness;                                // 0xCF8(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               ScrollbarPadding;                                  // 0xD08(0x10)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbar;                               // 0xD18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xD19(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0xD1A(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         BackPadScrolling;                                  // 0xD1B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         FrontPadScrolling;                                 // 0xD1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnimateWheelScrolling;                            // 0xD1D(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xD1E(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_159C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NavigationScrollPadding;                           // 0xD20(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xD24(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowRightClickDragScrolling;                     // 0xD25(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_159E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WheelScrollMultiplier;                             // 0xD28(0x4)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xD30(0x10)(OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A1[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        NumPreviewWidgets;                                 // 0xD58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumWidgetsBeforeWrapping;                          // 0xD5C(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetSize;                                        // 0xD60(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetPadding;                                     // 0xD70(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              WidgetHorizontalAlignment;                         // 0xD80(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                WidgetVerticalAlignment;                           // 0xD81(0x1)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseWidgetPaddingAsMargin;                          // 0xD82(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               WidgetMargin;                                      // 0xD84(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGamepadMovementMovesScrollBox;                    // 0xD94(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPrimalAllowRightSpecialStickScroll;               // 0xD95(0x1)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceAllowGamepadHighlight;                       // 0xD96(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A8[0x1];                                     // Fixing Size Of Struct > TateDumper <

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
	void SetAlwaysShowScrollbar(bool* NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool* NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll, enum class EDescendantScrollDestination* ScrollDestination, float* Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetViewFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	float GetScrollMax();
	struct FVector2D GetScrollContentSize();
	float GetPhysicalScrollOffset();
	void EndInertialScrolling();
};

// 0x1A8 (0x3B0 - 0x208)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x209(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x20A(0x1)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_F2 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_15CE[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x20C(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x21C(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x22C(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15D0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Background;                                        // 0x240(0xD0)(Edit, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x310(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          BrushColor;                                        // 0x320(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x330(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             DesiredSizeScale;                                  // 0x340(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x350(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x354(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x364(0x10)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x374(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x384(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D6[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBorder* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	bool SetShowEffectWhenDisabled();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	void SetDesiredSizeScale(struct FVector2D* InScale);
	struct FLinearColor SetContentColorAndOpacity();
	class UTexture2D* SetBrushFromTexture();
	class UMaterialInterface* SetBrushFromMaterial();
	void SetBrushFromAsset(class USlateBrushAsset** Asset);
	struct FLinearColor SetBrushColor();
	struct FSlateBrush SetBrush();
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x3B0 (0x5A0 - 0x1F0)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x218(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x230(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x240(0x2F0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x530(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x531(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15FA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x534(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x538(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x539(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x53A(0x1)(Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x53B(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x53C(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x53D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x53E(0x1)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15FC[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x540(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x560(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x561(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x562(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x563(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x564(0x3)(Edit, ConstParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_15FE[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x568(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x578(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_15FF[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableText* GetDefaultObj();

	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	class FText SetText();
	float SetMinimumDesiredWidth();
	enum class ETextJustify SetJustification();
	bool SetIsReadOnly();
	bool SetIsPassword();
	class FText SetHintText();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	enum class ETextCommit OnEditableTextCommittedEvent__DelegateSignature();
	class FText OnEditableTextChangedEvent__DelegateSignature();
	class FText GetText();
	enum class ETextJustify GetJustification();
	class FText GetHintText();
	struct FSlateFontInfo GetFont();
};

// 0x10 (0x40 - 0x30)
// Class UMG.PrimalWordList
class UPrimalWordList : public UDataAsset
{
public:
	class FString                                ActiveWordListRef;                                 // 0x30(0x10)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, DuplicateTransient)

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
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x1F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_163A[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                EntryWidgetClass;                                  // 0x210(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WheelScrollMultiplier;                             // 0x218(0x4)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableScrollAnimation;                            // 0x21C(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0x21D(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableRightClickScrolling;                        // 0x21E(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableFixedLineOffset;                            // 0x21F(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FixedLineScrollOffset;                             // 0x220(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowDragging;                                    // 0x224(0x1)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_163D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x228(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst)
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x238(0x88)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_163E[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UListViewBase* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	enum class ESlateVisibility SetScrollBarVisibility();
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	float GetScrollOffset();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// 0x9C8 (0xCD0 - 0x308)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_16E1[0xD8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTableViewStyle                       WidgetStyle;                                       // 0x3E0(0xE0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x4C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	enum class EOrientation                      Orientation;                                       // 0xC30(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	enum class ESelectionMode                    SelectionMode;                                     // 0xC31(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC32(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bClearSelectionOnClick;                            // 0xC33(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0xC34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16E7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EntrySpacing;                                      // 0xC38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bReturnFocusToSelection;                           // 0xC3C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       ListItems;                                         // 0xC40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_16EB[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xC60(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xC70(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xC80(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xC90(0x10)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xCA0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xCB0(0x10)(ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnListViewScrolled;                             // 0xCC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UListView* GetDefaultObj();

	enum class ESelectionMode SetSelectionMode();
	int32 SetSelectedIndex();
	int32 ScrollIndexIntoView();
	class UObject* RemoveItem();
	void OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason* EndPlayReason);
	class AActor* OnListItemEndPlayed(enum class EEndPlayReason* EndPlayReason);
	int32 NavigateToIndex();
	bool IsRefreshPending();
	int32 GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt();
	int32 GetIndexForItem();
	void ClearListItems();
	class UObject* BP_SetSelectedItem();
	void BP_SetListItems(const TArray<class UObject*>& InListItems);
	bool BP_SetItemSelection();
	class UObject* BP_ScrollItemIntoView();
	class UObject* BP_NavigateToItem();
	bool BP_IsItemVisible();
	bool BP_GetSelectedItems();
	class UObject* BP_GetSelectedItem();
	int32 BP_GetNumItemsSelected();
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
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16FD[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  AccessibleText;                                    // 0x30(0x18)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
	uint8                                        Pad_1710[0x18];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_171E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieScene2DTransformMask            TransformMask;                                     // 0xF8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_171F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x100(0x220)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x320(0x110)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMovieSceneFloatChannel               Scale[0x2];                                        // 0x430(0x220)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Shear[0x2];                                        // 0x650(0x220)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
	uint8                                        Pad_172A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xF8(0x110)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x208(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x318(0x110)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x428(0x110)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_1730[0x160];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialSystem* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_1732[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xB8(0x10)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  TrackName;                                         // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialTrack* GetDefaultObj();

};

// 0x310 (0x338 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1743[0x1F8];                                   // Fixing Size After Last Property  > TateDumper <
	class UWidgetAnimation*                      Animation;                                         // 0x220(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	uint8                                        Pad_1744[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x230(0x88)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1747[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequencePlayer* GetDefaultObj();

	class FName SetUserTag();
	class FName GetUserTag();
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_174C[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequenceTickManager* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x70(0x10)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1781[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DisplayLabel;                                      // 0x88(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimation* GetDefaultObj();

	class UUserWidget* UnbindFromAnimationStarted(FDelegateProperty_ Delegate);
	class UUserWidget* UnbindFromAnimationFinished(FDelegateProperty_ Delegate);
	class UUserWidget* UnbindAllFromAnimationStarted();
	class UUserWidget* UnbindAllFromAnimationFinished();
	float GetStartTime();
	float GetEndTime();
	class UUserWidget* BindToAnimationStarted(FDelegateProperty_ Delegate);
	class UUserWidget* BindToAnimationFinished(FDelegateProperty_ Delegate);
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimationDelegateBinding* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_17AD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetAnimationPlayCallbackProxy* GetDefaultObj();

	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
};

// 0x48 (0x70 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  DestinationProperty;                               // 0x68(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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

	bool GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17D1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrushBinding* GetDefaultObj();

	struct FSlateBrush GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17D8[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckedStateBinding* GetDefaultObj();

	enum class ECheckBoxState GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17E3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UColorBinding* GetDefaultObj();

	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UFloatBinding* GetDefaultObj();

	float GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UInt32Binding* GetDefaultObj();

	int32 GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UMouseCursorBinding* GetDefaultObj();

	enum class EMouseCursor GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17F3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTextBinding* GetDefaultObj();

	class FText GetTextValue();
	class FString GetStringValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UVisibilityBinding* GetDefaultObj();

	enum class ESlateVisibility GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinding* GetDefaultObj();

	class UWidget* GetValue();
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTaskDownloadImage* GetDefaultObj();

	class UAsyncTaskDownloadImage* DownloadImage(class FString* URL);
};

// 0x80 (0xB0 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1829[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameViewportSubsystem* GetDefaultObj();

	struct FGameViewportWidgetSlot SetWidgetSlotPosition(const struct FVector2D& Position, bool* bRemoveDPIScale);
	struct FGameViewportWidgetSlot SetWidgetSlotDesiredSize();
	struct FGameViewportWidgetSlot SetWidgetSlot();
	class UWidget* RemoveWidget();
	bool IsWidgetAdded();
	struct FGameViewportWidgetSlot GetWidgetSlot();
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

	void BP_OnItemSelectionChanged(bool bIsSelected);
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

	bool IsListItemSelected();
	bool IsListItemExpanded();
	class UListViewBase* GetOwningListView();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class IUserObjectListEntry : public IUserListEntry
{
public:

	static class UClass* StaticClass();
	static class IUserObjectListEntry* GetDefaultObj();

	class UObject* OnListItemObjectSet();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntryLibrary
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserObjectListEntryLibrary* GetDefaultObj();

	class UObject* GetListItemObject();
};

// 0x128 (0x330 - 0x208)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x208(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x219(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyAlphaToBlur;                                 // 0x21A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_186B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BlurStrength;                                      // 0x21C(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x220(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_186D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        BlurRadius;                                        // 0x224(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_186E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CornerRadius;                                      // 0x230(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x250(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_186F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBackgroundBlur* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	struct FSlateBrush SetLowQualityFallbackBrush();
	enum class EHorizontalAlignment SetHorizontalAlignment();
	struct FVector4 SetCornerRadius();
	float SetBlurStrength();
	int32 SetBlurRadius();
	bool SetApplyAlphaToBlur();
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UWidget*                               Content;                                           // 0x30(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPanelSlot* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_188B[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBackgroundBlurSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_189A[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBorderSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18AE[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UButtonSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x30 (0x238 - 0x208)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_18BD[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x218(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x228(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCanvasPanel* GetDefaultObj();

	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	class UCanvasPanelSlot* AddChildToCanvas(class UWidget** Content);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x40)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAutoSize;                                         // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18F0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ZOrder;                                            // 0x7C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18F1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCanvasPanelSlot* GetDefaultObj();

	int32 SetZOrder();
	void SetSize(const struct FVector2D& InSize);
	struct FVector2D SetPosition();
	struct FMargin SetOffsets();
	struct FVector2D SetMinimum();
	struct FVector2D SetMaximum();
	struct FAnchorData SetLayout();
	bool SetAutoSize();
	struct FAnchors SetAnchors();
	struct FVector2D SetAlignment();
	int32 GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// 0xB18 (0xD20 - 0x208)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x208(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_191E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x20C(0x10)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1921[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x220(0xAD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xCF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xCF1(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xCF2(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0xCF3(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0xCF4(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseHoverSound;                                    // 0xCF5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_192B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xCF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_192C[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckBox* GetDefaultObj();

	enum class EButtonTouchMethod SetTouchMethod();
	enum class EButtonPressMethod SetPressMethod();
	bool SetIsChecked();
	enum class EButtonClickMethod SetClickMethod();
	enum class ECheckBoxState SetCheckedState();
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
};

// 0x100 (0x2F0 - 0x1F0)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0x1F4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                        Radius;                                            // 0x1F8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1943[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	bool                                         bEnableRadius;                                     // 0x2D0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1944[0x1F];                                    // Fixing Size Of Struct > TateDumper <

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
	TArray<class UObject*>                       Items;                                             // 0x960(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x970(0x10)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x980(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_194C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x988(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_194D[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBox* GetDefaultObj();

};

// 0x1BD0 (0x1DC0 - 0x1F0)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x1F0(0x10)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  SelectedOption;                                    // 0x200(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1984[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1D30(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D44(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D54(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bHasDownArrow;                                     // 0x1D58(0x1)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1D59(0x1)(Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x1D5A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_198E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x1D5C(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x1D6C(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1991[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D80(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D90(0x10)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1995[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxKey* GetDefaultObj();

	class FName SetSelectedOption();
	bool RemoveOption();
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	class FName GetSelectedOption();
	class UWidget* GenerateWidgetEvent__DelegateSignature();
	void ClearSelection();
	void ClearOptions();
	class FName AddOption();
};

// 0x1C70 (0x1E60 - 0x1F0)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FText>                          DefaultOptions;                                    // 0x1F0(0x10)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x200(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D30(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D40(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         HasDownArrow;                                      // 0x1D44(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         EnableGamepadNavigationMode;                       // 0x1D45(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19F5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x1D48(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1DA0(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsFocusable;                                      // 0x1DB4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19F7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x1DB8(0x10)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1DC8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1DD8(0x10)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClosing;                                         // 0x1DE8(0x10)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19FB[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           TextColorAndOpacity;                               // 0x1E48(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19FC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxString* GetDefaultObj();

	class FString SetSelectedOption();
	enum class ESelectInfo SetSelectedIndex();
	bool RemoveOption();
	void RefreshOptions();
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem);
	void OnOpeningEvent__DelegateSignature();
	void OnClosingEvent__DelegateSignature();
	bool IsOpen();
	class FString GetSelectedOption();
	int32 GetSelectedIndex();
	int32 GetOptionCount();
	class FString GetOptionAtIndex();
	int32 FindOptionIndex();
	void ClearSelection();
	void ClearOptions();
	class FString AddOption();
};

// 0xE0 (0x2D0 - 0x1F0)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	struct FVector2D                             EntrySpacing;                                      // 0x1F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x200(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x210(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A15[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x214(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x21C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x21D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A18[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxElementSize;                                    // 0x220(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRadialBoxSettings                    RadialBoxSettings;                                 // 0x224(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst)
	uint8                                        Pad_1A1A[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x248(0x88)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBoxBase* GetDefaultObj();

	struct FRadialBoxSettings SetRadialSettings();
	struct FVector2D SetEntrySpacing();
	int32 GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// 0x8 (0x2D8 - 0x2D0)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                EntryWidgetClass;                                  // 0x2D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBox* GetDefaultObj();

	bool Reset();
	class UUserWidget* RemoveEntry();
	class UUserWidget* BP_CreateEntryOfClass();
	class UUserWidget* BP_CreateEntry();
};

// 0xF40 (0x1130 - 0x1F0)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A4D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x220(0xE80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x10A0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x10B8(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x10C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x10C9(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A51[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x10CC(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x10D0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x10D1(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x10D2(0x1)(Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x10D3(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x10D4(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ShouldHandleEscape;                                // 0x10D6(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x10D7(0x1)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x10F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F9(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x10FA(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x10FB(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x10FC(0x3)(Edit, ConstParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1A56[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_1A58[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableTextBox* GetDefaultObj();

	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	class FText SetText();
	enum class ETextJustify SetJustification();
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	class FText SetHintText();
	void SetForegroundColor(struct FLinearColor* Color);
	void SetError(class FText InError);
	enum class ETextCommit OnEditableTextBoxCommittedEvent__DelegateSignature();
	class FText OnEditableTextBoxChangedEvent__DelegateSignature();
	bool HasError();
	class FText GetText();
	void ClearError();
};

// 0x310 (0x500 - 0x1F0)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_1A69[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FExpandableAreaStyle                  Style;                                             // 0x200(0x1C0)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BorderBrush;                                       // 0x3C0(0xD0)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           BorderColor;                                       // 0x490(0x14)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsExpanded;                                       // 0x4A4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1A6D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxHeight;                                         // 0x4A8(0x4)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               HeaderPadding;                                     // 0x4AC(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMargin                               AreaPadding;                                       // 0x4BC(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A71[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x4D0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidget*                               HeaderContent;                                     // 0x4E0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidget*                               BodyContent;                                       // 0x4E8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A74[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExpandableArea* GetDefaultObj();

	bool SetIsExpanded_Animated();
	bool SetIsExpanded();
	bool GetIsExpanded();
};

// 0x30 (0x238 - 0x208)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x208(0x10)(Edit, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                RowFill;                                           // 0x218(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A87[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridPanel* GetDefaultObj();

	float SetRowFill();
	float SetColumnFill();
	class UGridSlot* AddChildToGrid(class UWidget** Content);
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AA8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x4C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        RowSpan;                                           // 0x50(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x54(0x4)(ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(ConstParm, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Layer;                                             // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector2D                             Nudge;                                             // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetRowSpan(int32 InRowSpan);
	int32 SetRow();
	void SetPadding(struct FMargin* InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int32 InLayer);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	void SetColumnSpan(int32 InColumnSpan);
	int32 SetColumn();
};

// 0x10 (0x218 - 0x208)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1AB0[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBox* GetDefaultObj();

	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget** Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1ABA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       Size;                                              // 0x40(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ABB[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x7E0 (0x9D0 - 0x1F0)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x1F0(0x3F0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       TextStyle;                                         // 0x5E0(0x340)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FInputChord                           SelectedKey;                                       // 0x920(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FMargin                               Margin;                                            // 0x940(0x10)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance)
	class FText                                  KeySelectionText;                                  // 0x950(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  NoKeySpecifiedText;                                // 0x968(0x18)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowModifierKeys;                                // 0x980(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowGamepadKeys;                                 // 0x981(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AC5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FKey>                          EscapeKeys;                                        // 0x988(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x998(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x9A8(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AC6[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputKeySelector* GetDefaultObj();

	enum class ESlateVisibility SetTextBlockVisibility();
	struct FInputChord SetSelectedKey();
	class FText SetNoKeySpecifiedText();
	class FText SetKeySelectionText();
	TArray<struct FKey> SetEscapeKeys();
	bool SetAllowModifierKeys();
	bool SetAllowGamepadKeys();
	struct FInputChord OnKeySelected__DelegateSignature();
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// 0x18 (0x220 - 0x208)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x208(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ACA[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInvalidationBox* GetDefaultObj();

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// 0x70 (0x278 - 0x208)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                MenuClass;                                         // 0x208(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x210(0x10)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x220(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EMenuPlacement                    Placement;                                         // 0x230(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFitInWindow;                                      // 0x231(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x232(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseApplicationMenuStack;                           // 0x233(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AD9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x238(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ADA[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Padding;                                           // 0x260(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IgnoreClicksOutside;                               // 0x270(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ADB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMenuAnchor* GetDefaultObj();

	bool ToggleOpen();
	bool ShouldOpenDueToClick();
	enum class EMenuPlacement SetPlacement();
	bool SetIgnoreClicksOutside();
	bool Open();
	bool IsOpen();
	bool HasOpenSubMenus();
	class UUserWidget* GetUserWidget__DelegateSignature();
	struct FVector2D GetMenuPosition();
	bool GetIsMenuAnchorOpen();
	bool GetIgnoreClicksOutside();
	bool FitInWindow();
	void Close();
};

// 0x3E0 (0x5F0 - 0x210)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x250(0x340)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x590(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x591(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x592(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x593(0x1)(Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x594(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x595(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AE5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x598(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x5B8(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x5C0(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x5D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_1AE7[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableText* GetDefaultObj();

	void SetWidgetStyle(struct FTextBlockStyle* InWidgetStyle);
	class FText SetText();
	void SetIsReadOnly(bool bReadOnly);
	class FText SetHintText();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	enum class ETextCommit OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	class FText OnMultiLineEditableTextChangedEvent__DelegateSignature();
	class FText GetText();
	class FText GetHintText();
	struct FSlateFontInfo GetFont();
};

// 0xF20 (0x1130 - 0x210)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x250(0xE80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x10D0(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AF5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F8(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AF7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	uint8                                        Pad_1AF8[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableTextBox* GetDefaultObj();

	struct FTextBlockStyle SetTextStyle();
	class FText SetText();
	void SetIsReadOnly(bool bReadOnly);
	class FText SetHintText();
	void SetForegroundColor(struct FLinearColor* Color);
	void SetError(class FText InError);
	enum class ETextCommit OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	class FText OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	class FText GetText();
	class FText GetHintText();
};

// 0x10 (0x218 - 0x208)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_1AF9[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1AFB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNativeWidgetHost* GetDefaultObj();

};

// 0x10 (0x218 - 0x208)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_1B00[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOverlay* GetDefaultObj();

	bool ReplaceOverlayChildAt(class UWidget** Content);
	class UOverlaySlot* AddChildToOverlay(class UWidget** Content);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_1B02[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B03[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOverlaySlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x300 (0x4F0 - 0x1F0)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x1F0(0x290)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Percent;                                           // 0x480(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	enum class EProgressBarFillType              BarFillType;                                       // 0x484(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x485(0x1)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsMarquee;                                        // 0x486(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1B07[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BorderPadding;                                     // 0x488(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           PercentDelegate;                                   // 0x498(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x4A8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x4B8(0x10)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B08[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bInterpolatePercent;                               // 0x4DC(0x1)(OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B09[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InterpolatePercentSpeed;                           // 0x4E0(0x4)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0A[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProgressBar* GetDefaultObj();

	void SetPercentInterpolationKey(int32* InterpKey);
	float SetPercent(int32* InterpKey);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(struct FLinearColor* InColor);
	float SetEnginePercent();
};

// 0x30 (0x238 - 0x208)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x208(0x1)(Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RenderOnInvalidation;                              // 0x209(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RenderOnPhase;                                     // 0x20A(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Phase;                                             // 0x20C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PhaseCount;                                        // 0x210(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B11[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    EffectMaterial;                                    // 0x218(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  TextureParameter;                                  // 0x220(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B13[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URetainerBox* GetDefaultObj();

	void SetTextureParameter(class FName* TextureParameter);
	void SetRetainRendering(bool* bInRetainRendering);
	void SetRenderingPhase(int32* RenderPhase, int32* TotalPhases);
	void SetEffectMaterial(class UMaterialInterface** EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// 0x18 (0x220 - 0x208)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadRight;                                          // 0x209(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadTop;                                            // 0x20A(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         PadBottom;                                         // 0x20B(0x1)(Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B1B[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USafeZone* GetDefaultObj();

	void SetSidesToPad(bool* InPadLeft, bool* InPadRight, bool* InPadTop, bool* InPadBottom);
};

// 0x38 (0x70 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B1C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B1D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B1E[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1B25[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UserSpecifiedScale;                                // 0x20C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IgnoreInheritedScale;                              // 0x210(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1B27[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScaleBox* GetDefaultObj();

	void SetUserSpecifiedScale(float* InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection* InStretchDirection);
	void SetStretch(enum class EStretch* InStretch);
	void SetIgnoreInheritedScale(bool* bInIgnoreInheritedScale);
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B2E[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScaleBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x7B0 (0x9A0 - 0x1F0)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x1F0(0x770)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysShowScrollbar;                              // 0x960(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x961(0x1)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x962(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_1B30[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Thickness;                                         // 0x968(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x978(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B31[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBar* GetDefaultObj();

	void SetState(float* InOffsetFraction, float* InThumbSizeFraction);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B39[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x38 (0x240 - 0x208)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        Pad_1B67[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        WidthOverride;                                     // 0x218(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        HeightOverride;                                    // 0x21C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredWidth;                                   // 0x220(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredHeight;                                  // 0x224(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxDesiredWidth;                                   // 0x228(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxDesiredHeight;                                  // 0x22C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinAspectRatio;                                    // 0x230(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        MaxAspectRatio;                                    // 0x234(0x4)(BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x238(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x238(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x238(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x238(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x238(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x238(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x238(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x238(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B69[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USizeBox* GetDefaultObj();

	void SetWidthOverride(float InWidthOverride);
	float SetMinDesiredWidth();
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
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
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B6D[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B6E[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USizeBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x5B0 (0x7A0 - 0x1F0)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MinValue;                                          // 0x204(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x208(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1B74[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x210(0x500)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x710(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_1B75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          SliderBarColor;                                    // 0x714(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderHandleColor;                                 // 0x724(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x734(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x735(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x736(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x737(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StepSize;                                          // 0x738(0x4)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x73C(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B77[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x740(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x750(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x760(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x770(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x780(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B78[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	float GetValue();
	float GetNormalizedValue();
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_1B7A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpacer* GetDefaultObj();

	void SetSize(const struct FVector2D& InSize);
};

// 0x720 (0x910 - 0x1F0)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B84[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x210(0x600)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MinFractionalDigits;                               // 0x810(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxFractionalDigits;                               // 0x814(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x818(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableSlider;                                     // 0x819(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B86[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Delta;                                             // 0x81C(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        SliderExponent;                                    // 0x820(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B87[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x828(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ETextJustify                      Justification;                                     // 0x880(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1B88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDesiredWidth;                                   // 0x884(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x888(0x1)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x889(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x88A(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B8A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           ForegroundColor;                                   // 0x88C(0x14)(BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x8A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x8B0(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x8C0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x8D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x8E0(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x8E0(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x8E0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x8E0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_11B : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B8B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinValue;                                          // 0x8E4(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x8E8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinSliderValue;                                    // 0x8EC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MaxSliderValue;                                    // 0x8F0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B8C[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpinBox* GetDefaultObj();

	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int32 NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int32 NewValue);
	struct FSlateColor SetForegroundColor();
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	enum class ETextCommit OnSpinBoxValueCommittedEvent__DelegateSignature();
	float OnSpinBoxValueChangedEvent__DelegateSignature();
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int32 GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int32 GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
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
	enum class EOrientation                      Orientation;                                       // 0x208(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_1B8F[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBox* GetDefaultObj();

	bool ReplaceStackBoxChildAt(class UWidget** Content);
	class UStackBoxSlot* AddChildToStackBox(class UWidget** Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B90[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBoxSlot* GetDefaultObj();

};

// 0x510 (0x720 - 0x210)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x228(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x238(0x14)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x24C(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B97[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x260(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1B98[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           StrikeBrush;                                       // 0x2C0(0xD0)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             ShadowOffset;                                      // 0x390(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x3A0(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x3B0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x3C0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bWrapWithInvalidationPanel;                        // 0x3C4(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x3C5(0x1)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x3C6(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CenterVertically;                                  // 0x3C7(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDisableInternalClipping;                          // 0x3C8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         DontApplyDisabledEffect;                           // 0x3C9(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAutoWrapText;                                     // 0x3CA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bSimpleTextMode;                                   // 0x3CB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B9B[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x3E0(0x340)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	class FText SetText();
	class FString SetString();
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float* InOpacity);
	float SetMinDesiredWidth();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	class FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// 0xF0 (0x2E0 - 0x1F0)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateHorizontally;                              // 0x1F4(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateVertically;                                // 0x1F5(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAnimateOpacity;                                   // 0x1F6(0x1)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B9E[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_1B9F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThrobber* GetDefaultObj();

	int32 SetNumberOfPieces();
	void SetAnimateVertically(bool* bInAnimateVertically);
	void SetAnimateOpacity(bool* bInAnimateOpacity);
	void SetAnimateHorizontally(bool* bInAnimateHorizontally);
};

// 0x20 (0xCF0 - 0xCD0)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0xCD0(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EntryWidth;                                        // 0xCD4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EListItemAlignment                TileAlignment;                                     // 0xCD8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWrapHorizontalNavigation;                         // 0xCD9(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BA2[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTileView* GetDefaultObj();

	void SetEntryWidth(float* NewWidth);
	void SetEntryHeight(float* NewHeight);
	float GetEntryWidth();
	float GetEntryHeight();
};

// 0x60 (0xD30 - 0xCD0)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_1BA5[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xCE0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xCF0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1BA6[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTreeView* GetDefaultObj();

	class UObject* SetItemExpansion(bool* bExpandItem);
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
	uint8                                        Pad_1BA8[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridPanel* GetDefaultObj();

	void SetSlotPadding(struct FMargin* InSlotPadding);
	void SetMinDesiredSlotWidth(float* InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float* InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget** Content);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x40(0x4)(ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BAA[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	int32 SetRow();
	enum class EHorizontalAlignment SetHorizontalAlignment();
	int32 SetColumn();
};

// 0x10 (0x218 - 0x208)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1BAC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBox* GetDefaultObj();

	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget** Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB2[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x50 (0x258 - 0x208)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x208(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB3[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UViewport* GetDefaultObj();

	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(struct FRotator* Rotation);
	void SetViewLocation(struct FVector* Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// 0x148 (0x820 - 0x6D8)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x6D8(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x6D9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BD9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WidgetClass;                                       // 0x6E0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FIntPoint                             DrawSize;                                          // 0x6E8(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bManuallyRedraw;                                   // 0x6F0(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRedrawRequested;                                  // 0x6F1(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BDB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RedrawTime;                                        // 0x6F4(0x4)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BDC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             CurrentDrawSize;                                   // 0x700(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawAtDesiredSize;                                // 0x708(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BDD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Pivot;                                             // 0x710(0x10)(BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bReceiveHardwareInput;                             // 0x720(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWindowFocusable;                                  // 0x721(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x722(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bApplyGammaCorrection;                             // 0x723(0x1)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x728(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x730(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x740(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OpacityFromTexture;                                // 0x750(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x754(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bIsTwoSided;                                       // 0x755(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         TickWhenOffscreen;                                 // 0x756(0x1)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x758(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x768(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x770(0x8)(Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x778(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x780(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x788(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x790(0x8)(Edit, BlueprintVisible, Parm, Config, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	bool                                         bAddedToScreen;                                    // 0x7A0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEditTimeUsable;                                   // 0x7A1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SharedLayerName;                                   // 0x7A4(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LayerZOrder;                                       // 0x7AC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x7B0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_1BE4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CylinderArcAngle;                                  // 0x7B4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETickMode                         TickMode;                                          // 0x7B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE5[0x2F];                                    // Fixing Size After Last Property  > TateDumper <
	class UUserWidget*                           Widget;                                            // 0x7E8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1BE6[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetComponent* GetDefaultObj();

	enum class EWindowVisibility SetWindowVisibility();
	bool SetWindowFocusable();
	enum class EWidgetSpace SetWidgetSpace();
	class UUserWidget* SetWidget();
	bool SetTwoSided();
	struct FLinearColor SetTintColorAndOpacity();
	bool SetTickWhenOffscreen();
	void SetTickMode(enum class ETickMode* InTickMode);
	void SetRedrawTime(float* InRedrawTime);
	void SetPivot(struct FVector2D* InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool* bUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode* InGeometryMode);
	struct FVector2D SetDrawSize();
	void SetDrawAtDesiredSize(bool* bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float* InCylinderArcAngle);
	void SetBackgroundColor(struct FLinearColor* NewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	bool IsWidgetVisible();
	enum class EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	enum class EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetWidget();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	enum class EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};

// 0x2D8 (0x5A0 - 0x2C8)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2C8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BFE[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualUserIndex;                                  // 0x2E8(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PointerIndex;                                      // 0x2EC(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2F0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1C00[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InteractionDistance;                               // 0x2F4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableHitTesting;                                 // 0x2F9(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowDebug;                                        // 0x2FA(0x1)(EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C01[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DebugSphereLineThickness;                          // 0x2FC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugLineThickness;                                // 0x300(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          DebugColor;                                        // 0x304(0x10)(BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C02[0x7C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CustomHitResult;                                   // 0x390(0xF0)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             LocalHitLocation;                                  // 0x480(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             LastLocalHitLocation;                              // 0x490(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x4A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FHitResult                            LastHitResult;                                     // 0x4A8(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x598(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x599(0x1)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x59A(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C06[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetInteractionComponent* GetDefaultObj();

	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(class FString* Characters);
	float ScrollWheel();
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// 0x18 (0x220 - 0x208)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x208(0x4)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1C17[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetSwitcher* GetDefaultObj();

	int32 SetActiveWidgetIndex();
	class UWidget* SetActiveWidget();
	class UWidget* GetWidgetAtIndex();
	int32 GetNumWidgets();
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1C1B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1C[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetSwitcherSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x20 (0x228 - 0x208)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x208(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x209(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C1D[0x1E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWindowTitleBarArea* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1F[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWindowTitleBarAreaSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x28 (0x230 - 0x208)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                             InnerSlotPadding;                                  // 0x208(0x10)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WrapSize;                                          // 0x218(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bExplicitWrapSize;                                 // 0x21C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x21D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x21E(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_1C24[0x11];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWrapBox* GetDefaultObj();

	void SetInnerSlotPadding(struct FVector2D* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget** Content);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C27[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWrapBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetPadding(struct FMargin* InPadding);
	bool SetNewLine();
	enum class EHorizontalAlignment SetHorizontalAlignment();
	float SetFillSpanWhenLessThan();
	bool SetFillEmptySpace();
};

// 0x68 (0x90 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Payload;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C2A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Offset;                                            // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry* Geometry);
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry* Geometry);
	float TransformScalarLocalToAbsolute(struct FGeometry* Geometry);
	float TransformScalarAbsoluteToLocal(struct FGeometry* Geometry);
	bool ScreenToWidgetLocal(struct FGeometry* Geometry, struct FVector2D* ScreenPosition);
	bool ScreenToWidgetAbsolute(struct FVector2D* ScreenPosition);
	struct FVector2D ScreenToViewport(struct FVector2D* ScreenPosition);
	struct FVector2D LocalToViewport(struct FGeometry* Geometry);
	struct FVector2D LocalToAbsolute(struct FGeometry* Geometry);
	bool IsUnderLocation(struct FGeometry* Geometry);
	struct FVector2D GetLocalTopLeft(struct FGeometry* Geometry);
	struct FVector2D GetLocalSize(struct FGeometry* Geometry);
	struct FVector2D GetAbsoluteSize(struct FGeometry* Geometry);
	bool EqualEqual_SlateBrush();
	struct FVector2D AbsoluteToViewport();
	struct FVector2D AbsoluteToLocal(struct FGeometry* Geometry);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMax;                                         // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlateVectorArtData* GetDefaultObj();

};

// 0x80 (0x3F0 - 0x370)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x388(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C42[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x39C(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_125 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1C44[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x3A0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x3B0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          NamedSlots;                                        // 0x3C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3D0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3E0(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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

	struct FEventReply UnlockMouse();
	struct FEventReply Unhandled();
	void SetWindowTitleBarState(class UWidget** TitleBarContent, enum class EWindowTitleBarMode* Mode, bool* bTitleBarDragEnabled, bool* bWindowButtonsVisible, bool* bTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate);
	void SetWindowTitleBarCloseButtonActive(bool* bActive);
	struct FEventReply SetUserFocus(class UWidget* FocusWidget);
	struct FEventReply SetMousePosition(const struct FVector2D& NewMousePosition);
	void SetInputMode_UIOnlyEx(class APlayerController** PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode* InMouseLockMode, bool* bFlushInput);
	void SetInputMode_GameOnly(class APlayerController** PlayerController, bool* bFlushInput);
	void SetInputMode_GameAndUIEx(class APlayerController** PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode* InMouseLockMode, bool* bHideCursorDuringCapture, bool* bFlushInput);
	bool SetHardwareCursor(enum class EMouseCursor* CursorShape, class FName* CursorName, struct FVector2D* HotSpot);
	void SetFocusToGameViewport();
	float SetColorVisionDeficiencyType(bool* CorrectDeficiency, bool* ShowCorrectionWithDeficiency);
	class UTexture2D* SetBrushResourceToTexture();
	class UMaterialInterface* SetBrushResourceToMaterial();
	void RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture();
	struct FEventReply ReleaseJoystickCapture();
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(int32 Width, int32 Height);
	struct FSlateBrush MakeBrushFromMaterial(int32 Width, int32 Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply LockMouse();
	bool IsDragDropping();
	struct FEventReply Handled();
	class UObject* GetSafeZonePadding(const struct FVector4& SafePadding, const struct FVector2D& SafePaddingScale, const struct FVector4& SpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent();
	struct FInputEvent GetInputEventFromPointerEvent();
	struct FInputEvent GetInputEventFromNavigationEvent();
	struct FInputEvent GetInputEventFromKeyEvent();
	struct FInputEvent GetInputEventFromCharacterEvent();
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D();
	class UMaterialInterface* GetBrushResourceAsMaterial();
	class UObject* GetBrushResource();
	class UObject* GetAllWidgetsWithInterface(const TArray<class UUserWidget*>& FoundWidgets, class UClass* Interface, class UClass* OutWidgetClass, bool TopLevelOnly);
	class UObject* GetAllWidgetsOfClass(const TArray<class UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply EndDragDrop();
	struct FLinearColor DrawTextFormatted(const struct FVector2D& Position, int32 FontSize, class FName FontTypeFace);
	struct FLinearColor DrawText(const struct FVector2D& Position);
	float DrawSpline(struct FVector2D* Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir);
	float DrawLines();
	float DrawLine();
	struct FLinearColor DrawBox(const struct FVector2D& Position);
	void DismissAllMenus();
	struct FEventReply DetectDragIfPressed(struct FPointerEvent* PointerEvent);
	struct FEventReply DetectDrag();
	class UDragDropOperation* CreateDragDropOperation();
	class UUserWidget* Create();
	struct FEventReply ClearUserFocus();
	struct FEventReply CaptureMouse();
	struct FEventReply CaptureJoystick();
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetLayoutLibrary* GetDefaultObj();

	class UWrapBoxSlot* SlotAsWrapBoxSlot();
	class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot();
	class UVerticalBoxSlot* SlotAsVerticalBoxSlot();
	class UUniformGridSlot* SlotAsUniformGridSlot();
	class USizeBoxSlot* SlotAsSizeBoxSlot();
	class UScrollBoxSlot* SlotAsScrollBoxSlot();
	class UScaleBoxSlot* SlotAsScaleBoxSlot();
	class USafeZoneSlot* SlotAsSafeBoxSlot();
	class UOverlaySlot* SlotAsOverlaySlot();
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot();
	class UGridSlot* SlotAsGridSlot();
	class UCanvasPanelSlot* SlotAsCanvasSlot();
	class UBorderSlot* SlotAsBorderSlot();
	class UObject* RemoveAllWidgets();
	bool ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector* WorldLocation, struct FVector2D* ScreenPosition);
	struct FGeometry GetViewportWidgetGeometry();
	struct FVector2D GetViewportSize();
	float GetViewportScale();
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController** PlayerController);
	bool GetMousePositionScaledByDPI(float LocationX, float LocationY);
	struct FVector2D GetMousePositionOnViewport();
	struct FVector2D GetMousePositionOnPlatform();
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_1CFD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetTree* GetDefaultObj();

};

}


