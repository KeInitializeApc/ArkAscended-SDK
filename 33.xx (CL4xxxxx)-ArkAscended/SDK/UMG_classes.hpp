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
	uint8                                        Pad_E05[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	struct FWidgetTransform                      RenderTransform;                                   // 0x98(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             RenderTransformPivot;                              // 0xD0(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_93 : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_E13[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        RenderOpacity;                                     // 0xE8(0x4)(BlueprintVisible, Net, Parm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_E15[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1A[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x120(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1D[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseCustomTooltip;                                 // 0x150(0x1)(EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class EAlignHorizontalUI                CustomToolTipHorizontalAlignment;                  // 0x151(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, SubobjectReference)
	enum class EAlignVerticalUI                  CustomToolTipVerticalAlignment;                    // 0x152(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)
	enum class EOrientation                      CustomToolTipOrientation;                          // 0x153(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)
	float                                        GamepadSelectClosestDistanceMultiplier;            // 0x154(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, GlobalConfig, SubobjectReference)
	bool                                         bDisableAxisOrientedSweepTestOnMe;                 // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E21[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CustomToolTipBlueprintOverride;                    // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             CustomToolTipPadding;                              // 0x168(0x10)(BlueprintVisible, ExportObject, OutParm, GlobalConfig, SubobjectReference)
	class FText                                  CustomToolTipString;                               // 0x178(0x18)(Edit, OutParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E24[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         HandleVisibilityWithInput;                         // 0x198(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityGamepadInput;                            // 0x199(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  VisibilityKBMInput;                                // 0x19A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, GlobalConfig, SubobjectReference)
	bool                                         Highlightable;                                     // 0x19B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, GlobalConfig, SubobjectReference)
	bool                                         bDontRenderHighlight;                              // 0x19C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, GlobalConfig, SubobjectReference)
	bool                                         bUseWindowClippingForHighlight;                    // 0x19D(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, GlobalConfig, SubobjectReference)
	bool                                         bPrimalSetupSpecialAdjacents;                      // 0x19E(0x1)(Edit, ConstParm, ExportObject, Net, Parm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E27[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomData;                                        // 0x1A0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  AdjacentUpName;                                    // 0x1B0(0x8)(Edit, ConstParm, Net, Parm, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentDownName;                                  // 0x1B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentRightName;                                 // 0x1C0(0x8)(BlueprintReadOnly, Parm, GlobalConfig, SubobjectReference)
	class FName                                  AdjacentLeftName;                                  // 0x1C8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E2A[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidget* GetDefaultObj();

	void SetVisibility(enum class ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController** PlayerController);
	void SetToolTipText(class FText InToolTipText);
	class UWidget* SetToolTip();
	void SetRenderTranslation(struct FVector2D* Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(struct FVector2D* Scale);
	void SetRenderOpacity(float InOpacity);
	enum class EUINavigation SetNavigationRuleExplicit(class UWidget* InWidget);
	enum class EUINavigation SetNavigationRuleCustomBoundary(FDelegateProperty_ InCustomDelegate);
	enum class EUINavigation SetNavigationRuleCustom(FDelegateProperty_ InCustomDelegate);
	enum class EUINavigationRule SetNavigationRuleBase();
	class FName SetNavigationRule();
	void SetKeyboardFocus();
	bool SetIsEnabled();
	void SetFocus();
	enum class EMouseCursor SetCursor();
	enum class EWidgetClipping SetClipping();
	class FName SetAllNavigationRules();
	void ResetCursor();
	void RemoveFromParent();
	void OnReply__DelegateSignature(const struct FEventReply& ReturnValue);
	struct FPointerEvent OnPointerEvent__DelegateSignature(const struct FEventReply& ReturnValue);
	struct FFieldNotificationId K2_RemoveFieldValueChangedDelegate(FDelegateProperty_ Delegate);
	struct FFieldNotificationId K2_BroadcastFieldValueChanged();
	struct FFieldNotificationId K2_AddFieldValueChangedDelegate(FDelegateProperty_ Delegate);
	void IsVisible(bool ReturnValue);
	void IsRendered(bool ReturnValue);
	void IsInViewport(bool ReturnValue);
	void IsHovered(bool ReturnValue);
	void InvalidateLayoutAndVolatility();
	void HasUserFocusedDescendants(class APlayerController** PlayerController, bool ReturnValue);
	void HasUserFocus(class APlayerController** PlayerController, bool ReturnValue);
	int32 HasMouseCaptureByUser(bool ReturnValue);
	void HasMouseCapture(bool ReturnValue);
	void HasKeyboardFocus(bool ReturnValue);
	void HasFocusedDescendants(bool ReturnValue);
	void HasAnyUserFocus(bool ReturnValue);
	void GetWidget__DelegateSignature(class UWidget* ReturnValue);
	void GetVisibility(enum class ESlateVisibility ReturnValue);
	void GetTickSpaceGeometry(const struct FGeometry& ReturnValue);
	void GetText__DelegateSignature(class FText ReturnValue);
	void GetSlateVisibility__DelegateSignature(enum class ESlateVisibility ReturnValue);
	void GetSlateColor__DelegateSignature(const struct FSlateColor& ReturnValue);
	void GetSlateBrush__DelegateSignature(const struct FSlateBrush& ReturnValue);
	void GetRenderTransformAngle(float ReturnValue);
	void GetRenderOpacity(float ReturnValue);
	void GetParent(class UPanelWidget* ReturnValue);
	void GetPaintSpaceGeometry(const struct FGeometry& ReturnValue);
	void GetOwningPlayer(class APlayerController* ReturnValue);
	void GetOwningLocalPlayer(class ULocalPlayer* ReturnValue);
	void GetMouseCursor__DelegateSignature(enum class EMouseCursor ReturnValue);
	void GetLinearColor__DelegateSignature(const struct FLinearColor& ReturnValue);
	void GetIsThisAndParentsEnabled(bool ReturnValue);
	void GetIsEnabled(bool ReturnValue);
	void GetInt32__DelegateSignature(int32 ReturnValue);
	void GetGameInstance(class UGameInstance* ReturnValue);
	void GetFloat__DelegateSignature(float ReturnValue);
	void GetDesiredSize(const struct FVector2D& ReturnValue);
	void GetClipping(enum class EWidgetClipping ReturnValue);
	void GetCheckBoxState__DelegateSignature(enum class ECheckBoxState ReturnValue);
	void GetCachedGeometry(const struct FGeometry& ReturnValue);
	void GetBool__DelegateSignature(bool ReturnValue);
	void GetAccessibleText(class FText ReturnValue);
	void GetAccessibleSummaryText(class FText ReturnValue);
	class FString GenerateWidgetForString__DelegateSignature(class UWidget* ReturnValue);
	class UObject* GenerateWidgetForObject__DelegateSignature(class UWidget* ReturnValue);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// 0x130 (0x320 - 0x1F0)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_1080[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x1F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        SceneStackPriority;                                // 0x208(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x20C(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ForegroundColor;                                   // 0x21C(0x14)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x230(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x240(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1083[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x268(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x278(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x27C(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x27C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_95 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1085[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x280(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x290(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x298(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x2A8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x2B8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class UWidgetTree*                           WidgetTree;                                        // 0x2C8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x1, PropSize: 0x10x2D0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x2, PropSize: 0x10x2D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	uint8                                        BitPad_96 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_108D[0x17];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x2E8(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig)
	uint8                                        Pad_108E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputComponent*                       InputComponent;                                    // 0x2F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
	TArray<struct FAnimationEventBinding>        AnimationCallbacks;                                // 0x2F8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_108F[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUserWidget* GetDefaultObj();

	void UnregisterInputComponent();
	class UWidgetAnimation* UnbindFromAnimationStarted(FDelegateProperty_ Delegate);
	class UWidgetAnimation* UnbindFromAnimationFinished(FDelegateProperty_ Delegate);
	class UWidgetAnimation* UnbindAllFromAnimationStarted();
	class UWidgetAnimation* UnbindAllFromAnimationFinished();
	float Tick();
	void StopListeningForInputAction(class FName ActionName, enum class EInputEvent* EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(struct FVector2D* Position, bool* bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(struct FMargin* InPadding);
	void SetOwningPlayer(class APlayerController** LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
	void SetInputActionPriority(int32* NewPriority);
	void SetInputActionBlocking(bool* bShouldBlock);
	struct FSlateColor SetForegroundColor();
	struct FVector2D SetDesiredSizeInViewport();
	void SetColorAndOpacity(struct FLinearColor* InColorAndOpacity);
	float SetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors SetAnchorsInViewport();
	void SetAlignmentInViewport(struct FVector2D* Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RemoveExtensions(class UClass** InExtensionType);
	void RemoveExtension(class UUserWidgetExtension** InExtension);
	void RegisterInputComponent();
	void PreConstruct(bool* IsDesignTime);
	void PlaySound(class USoundBase** SoundToPlay);
	void PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float* EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PauseAnimation(class UWidgetAnimation* InAnimation, float ReturnValue);
	struct FGeometry OnTouchStarted(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnTouchMoved(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnTouchGesture(const struct FPointerEvent& GestureEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnTouchForceChanged(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnTouchEnded(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FPointerEvent OnPreviewMouseButtonDown(const struct FEventReply& ReturnValue);
	struct FGeometry OnPreviewKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	void OnPaint(struct FPaintContext* Context);
	struct FPointerEvent OnMouseWheel(const struct FEventReply& ReturnValue);
	struct FPointerEvent OnMouseMove(const struct FEventReply& ReturnValue);
	struct FPointerEvent OnMouseLeave();
	struct FPointerEvent OnMouseEnter();
	void OnMouseCaptureLost();
	struct FPointerEvent OnMouseButtonUp(const struct FEventReply& ReturnValue);
	struct FPointerEvent OnMouseButtonDown(const struct FEventReply& ReturnValue);
	void OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnMotionDetected(const struct FMotionEvent& InMotionEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnKeyUp(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	struct FGeometry OnKeyChar(const struct FCharacterEvent& InCharacterEvent, const struct FEventReply& ReturnValue);
	void OnInitialized();
	struct FGeometry OnFocusReceived(const struct FFocusEvent& InFocusEvent, const struct FEventReply& ReturnValue);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FPointerEvent OnDrop(class UDragDropOperation* Operation, bool ReturnValue);
	struct FPointerEvent OnDragOver(class UDragDropOperation* Operation, bool ReturnValue);
	struct FPointerEvent OnDragLeave(class UDragDropOperation* Operation);
	struct FPointerEvent OnDragEnter(class UDragDropOperation* Operation);
	struct FPointerEvent OnDragDetected(class UDragDropOperation* Operation);
	struct FPointerEvent OnDragCancelled(class UDragDropOperation* Operation);
	class UWidgetAnimation* OnAnimationStarted();
	class UWidgetAnimation* OnAnimationFinished();
	struct FGeometry OnAnalogValueChanged(const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& ReturnValue);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(class FName ActionName, enum class EInputEvent* EventType, bool bConsume, FDelegateProperty_ Callback);
	void IsPlayingAnimation(bool ReturnValue);
	void IsListeningForInputAction(class FName ActionName, bool ReturnValue);
	void IsInteractable(bool ReturnValue);
	void IsAnyAnimationPlaying(bool ReturnValue);
	void IsAnimationPlayingForward(class UWidgetAnimation* InAnimation, bool ReturnValue);
	void IsAnimationPlaying(class UWidgetAnimation* InAnimation, bool ReturnValue);
	void GetOwningPlayerPawn(class APawn* ReturnValue);
	void GetOwningPlayerCameraManager(class APlayerCameraManager* ReturnValue);
	void GetIsVisible(bool ReturnValue);
	void GetExtensions(class UClass* ExtensionType, const TArray<class UUserWidgetExtension*>& ReturnValue);
	void GetExtension(class UClass* ExtensionType, class UUserWidgetExtension* ReturnValue);
	void GetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float ReturnValue);
	void GetAnchorsInViewport(const struct FAnchors& ReturnValue);
	void GetAlignmentInViewport(const struct FVector2D& ReturnValue);
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	class UWidgetAnimation* BindToAnimationStarted(FDelegateProperty_ Delegate);
	class UWidgetAnimation* BindToAnimationFinished(FDelegateProperty_ Delegate);
	class UWidgetAnimation* BindToAnimationEvent(FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent* AnimationEvent, class FName* UserTag);
	void AddToViewport(int32* ZOrder);
	void AddToPlayerScreen(int32* ZOrder, bool ReturnValue);
	void AddExtension(class UClass** InExtensionType, class UUserWidgetExtension* ReturnValue);
};

// 0x158 (0x348 - 0x1F0)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x1F0(0xD0)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           BrushDelegate;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x2D0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x2E0(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2F0(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         EnableDefaultDisabledEffect;                       // 0x2F1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_10D3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2F4(0x10)(ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_10D5[0x44];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImage* GetDefaultObj();

	void SetOpacity(float InOpacity);
	struct FVector2D SetDesiredSizeOverride();
	void SetColorAndOpacity(struct FLinearColor* InColorAndOpacity);
	void SetBrushTintColor(struct FSlateColor* TintColor);
	void SetBrushResourceObject(class UObject** ResourceObject);
	bool SetBrushFromTextureDynamic(class UTexture2DDynamic** Texture);
	bool SetBrushFromTexture(class UTexture2D** Texture);
	bool SetBrushFromSoftTexture();
	TSoftObjectPtr<class UMaterialInterface> SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	bool SetBrushFromAtlasInterface();
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	struct FSlateBrush SetBrush();
	void GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x1F0(0x3)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	enum class ETextJustify                      Justification;                                     // 0x1F3(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x1F4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x1F5(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        BitPad_98 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_10DD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WrapTextAt;                                        // 0x1F8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FMargin                               Margin;                                            // 0x1FC(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	float                                        LineHeightPercentage;                              // 0x20C(0x4)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTextLayoutWidget* GetDefaultObj();

	enum class ETextJustify SetJustification();
};

// 0x700 (0x910 - 0x210)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class UDataTable*                            TextStyleSet;                                      // 0x228(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        DecoratorClasses;                                  // 0x230(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Config, InstancedReference, SubobjectReference)
	bool                                         bOverrideDefaultStyle;                             // 0x240(0x1)(Edit, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1135[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x250(0x340)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x590(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x594(0x1)(Edit, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x595(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1139[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       DefaultTextStyle;                                  // 0x5A0(0x340)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x8E0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_113A[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URichTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	void SetText(class FText* InText);
	float SetMinDesiredWidth();
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	class UMaterialInterface* SetDefaultMaterial();
	struct FSlateFontInfo SetDefaultFont();
	void SetDefaultColorAndOpacity(struct FSlateColor* InColorAndOpacity);
	void SetDecorators(const TArray<class UClass*>& InDecoratorClasses);
	void SetAutoWrapText(bool InAutoTextWrap);
	void RefreshTextLayout();
	void GetTextStyleSet(class UDataTable* ReturnValue);
	void GetText(class FText ReturnValue);
	void GetDefaultDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
	class UClass* GetDecoratorByClass(class URichTextBlockDecorator* ReturnValue);
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
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ExportObject, Net, Parm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URichTextBlockImageDecorator* GetDefaultObj();

};

// 0x18 (0x208 - 0x1F0)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x1F0(0x10)(Edit, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_116C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         ClipChildren;                                      // 0x201(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         UseScaledRenderClipForHUDChildren;                 // 0x202(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bCanNavigateToDifferentPanel;                      // 0x203(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bHighlightInsteadOfChild;                          // 0x204(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_116F[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPanelWidget* GetDefaultObj();

	void RemoveChildAt(int32* Index, bool ReturnValue);
	void RemoveChild(class UWidget** Content, bool ReturnValue);
	void HasChild(class UWidget** Content, bool ReturnValue);
	void HasAnyChildren(bool ReturnValue);
	void GetChildrenCount(int32 ReturnValue);
	void GetChildIndex(class UWidget** Content, int32 ReturnValue);
	void GetChildAt(int32* Index, class UWidget* ReturnValue);
	void GetAllChildren(const TArray<class UWidget*>& ReturnValue);
	void ClearChildren();
	void AddChild(class UWidget** Content, class UPanelSlot* ReturnValue);
};

// 0x0 (0x208 - 0x208)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass();
	static class UContentWidget* GetDefaultObj();

	void SetContent(class UWidget** Content, class UPanelSlot* ReturnValue);
	void GetContentSlot(class UPanelSlot* ReturnValue);
	void GetContent(class UWidget* ReturnValue);
};

// 0x4D8 (0x6E0 - 0x208)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_1182[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          WidgetStyle;                                       // 0x210(0x3F0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bUseDisabledStyle;                                 // 0x600(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1183[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x604(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          BackgroundColor;                                   // 0x614(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x624(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x625(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0x626(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        IsFocusable : 1;                                   // Mask: 0x1, PropSize: 0x10x627(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A6 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bForceHandleMouseDown : 1;                         // Mask: 0x1, PropSize: 0x10x628(0x1)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A7 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1187[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRedirectGamepadPressToClick : 1;                  // Mask: 0x1, PropSize: 0x10x62C(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bUseHoverSound : 1;                                // Mask: 0x2, PropSize: 0x10x62C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A8 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1189[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x630(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x640(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x650(0x10)(Edit, ExportObject, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x660(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x670(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_118E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnClickedObject;                                   // 0x690(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClicked;                                // 0x6A0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSecondaryClickedObject;                          // 0x6B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClicked;                                  // 0x6C0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGamepadClickedObject;                            // 0x6D0(0x10)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UButton* GetDefaultObj();

	enum class EButtonTouchMethod SetTouchMethod();
	struct FButtonStyle SetStyle();
	enum class EButtonPressMethod SetPressMethod();
	void SetColorAndOpacity(struct FLinearColor* InColorAndOpacity);
	enum class EButtonClickMethod SetClickMethod();
	struct FLinearColor SetBackgroundColor();
	bool MimickClicked();
	void IsPressed(bool ReturnValue);
};

// 0xB90 (0xD98 - 0x208)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_11C8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x210(0x370)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x580(0x770)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0xCF0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xCF1(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xCF2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11CF[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScrollbarThickness;                                // 0xCF8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMargin                               ScrollbarPadding;                                  // 0xD08(0x10)(ConstParm, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbar;                               // 0xD18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xD19(0x1)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0xD1A(0x1)(Edit, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         BackPadScrolling;                                  // 0xD1B(0x1)(ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         FrontPadScrolling;                                 // 0xD1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAnimateWheelScrolling;                            // 0xD1D(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xD1E(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D4[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NavigationScrollPadding;                           // 0xD20(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xD24(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowRightClickDragScrolling;                     // 0xD25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WheelScrollMultiplier;                             // 0xD28(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xD30(0x10)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D9[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        NumPreviewWidgets;                                 // 0xD58(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumWidgetsBeforeWrapping;                          // 0xD5C(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetSize;                                        // 0xD60(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             WidgetPadding;                                     // 0xD70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              WidgetHorizontalAlignment;                         // 0xD80(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                WidgetVerticalAlignment;                           // 0xD81(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         UseWidgetPaddingAsMargin;                          // 0xD82(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11DE[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               WidgetMargin;                                      // 0xD84(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGamepadMovementMovesScrollBox;                    // 0xD94(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPrimalAllowRightSpecialStickScroll;               // 0xD95(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bForceAllowGamepadHighlight;                       // 0xD96(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11E2[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBox* GetDefaultObj();

	void SetWheelScrollMultiplier(float* NewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges* NewScrollWhenFocusChanges);
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
	float ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	void GetViewOffsetFraction(float ReturnValue);
	void GetViewFraction(float ReturnValue);
	void GetScrollOffsetOfEnd(float ReturnValue);
	void GetScrollOffset(float ReturnValue);
	void GetScrollMax(float ReturnValue);
	void GetScrollContentSize(const struct FVector2D& ReturnValue);
	void GetPhysicalScrollOffset(float ReturnValue);
	void EndInertialScrolling();
};

// 0x1A8 (0x3B0 - 0x208)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x208(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x209(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x20A(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_AB : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_120A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x20C(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x21C(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x22C(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_120B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Background;                                        // 0x240(0xD0)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x310(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          BrushColor;                                        // 0x320(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x330(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             DesiredSizeScale;                                  // 0x340(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x350(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_120E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x354(0x10)(ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x364(0x10)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x374(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x384(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1210[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBorder* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	bool SetShowEffectWhenDisabled();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	struct FVector2D SetDesiredSizeScale();
	struct FLinearColor SetContentColorAndOpacity();
	void SetBrushFromTexture(class UTexture2D** Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	struct FLinearColor SetBrushColor();
	struct FSlateBrush SetBrush();
	void GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x3B0 (0x5A0 - 0x1F0)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x218(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x230(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x240(0x2F0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x530(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x531(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1243[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x534(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x538(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x539(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x53A(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x53B(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x53C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x53D(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x53E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1244[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x540(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x560(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x561(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x562(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x563(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x564(0x3)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1248[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x568(0x10)(ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x578(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1249[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableText* GetDefaultObj();

	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	void SetText(class FText* InText);
	float SetMinimumDesiredWidth();
	enum class ETextJustify SetJustification();
	bool SetIsReadOnly();
	bool SetIsPassword();
	class FText SetHintText();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	enum class ETextCommit OnEditableTextCommittedEvent__DelegateSignature(class FText* Text);
	void OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void GetText(class FText ReturnValue);
	void GetJustification(enum class ETextJustify ReturnValue);
	void GetHintText(class FText ReturnValue);
	void GetFont(const struct FSlateFontInfo& ReturnValue);
};

// 0x10 (0x40 - 0x30)
// Class UMG.PrimalWordList
class UPrimalWordList : public UDataAsset
{
public:
	class FString                                ActiveWordListRef;                                 // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x1F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_125F[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                EntryWidgetClass;                                  // 0x210(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        WheelScrollMultiplier;                             // 0x218(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableScrollAnimation;                            // 0x21C(0x1)(Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         AllowOverscroll;                                   // 0x21D(0x1)(Edit, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableRightClickScrolling;                        // 0x21E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableFixedLineOffset;                            // 0x21F(0x1)(Edit, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FixedLineScrollOffset;                             // 0x220(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowDragging;                                    // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1264[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x228(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst)
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x238(0x88)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1265[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UListViewBase* GetDefaultObj();

	void SetWheelScrollMultiplier(float* NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	void GetScrollOffset(float ReturnValue);
	void GetDisplayedEntryWidgets(const TArray<class UUserWidget*>& ReturnValue);
};

// 0x9C8 (0xCD0 - 0x308)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_12A7[0xD8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTableViewStyle                       WidgetStyle;                                       // 0x3E0(0xE0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x4C0(0x770)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance)
	enum class EOrientation                      Orientation;                                       // 0xC30(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	enum class ESelectionMode                    SelectionMode;                                     // 0xC31(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC32(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bClearSelectionOnClick;                            // 0xC33(0x1)(Edit, ConstParm, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0xC34(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12AA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EntrySpacing;                                      // 0xC38(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReturnFocusToSelection;                           // 0xC3C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       ListItems;                                         // 0xC40(0x10)(BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12AC[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xC60(0x10)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xC70(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xC80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xC90(0x10)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xCA0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xCB0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnListViewScrolled;                             // 0xCC0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UListView* GetDefaultObj();

	enum class ESelectionMode SetSelectionMode();
	void SetSelectedIndex(int32* Index);
	void ScrollIndexIntoView(int32* Index);
	class UObject* RemoveItem();
	enum class EEndPlayReason OnListItemOuterEndPlayed(class AActor* ItemOuter);
	enum class EEndPlayReason OnListItemEndPlayed();
	void NavigateToIndex(int32* Index);
	void IsRefreshPending(bool ReturnValue);
	void GetNumItems(int32 ReturnValue);
	void GetListItems(const TArray<class UObject*>& ReturnValue);
	void GetItemAt(int32* Index, class UObject* ReturnValue);
	class UObject* GetIndexForItem(int32 ReturnValue);
	void ClearListItems();
	class UObject* BP_SetSelectedItem();
	void BP_SetListItems(const TArray<class UObject*>& InListItems);
	bool BP_SetItemSelection();
	class UObject* BP_ScrollItemIntoView();
	class UObject* BP_NavigateToItem();
	class UObject* BP_IsItemVisible(bool ReturnValue);
	void BP_GetSelectedItems(TArray<class UObject*>* Items, bool ReturnValue);
	void BP_GetSelectedItem(class UObject* ReturnValue);
	void BP_GetNumItemsSelected(int32 ReturnValue);
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
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(BlueprintVisible, Net, ReturnParm, GlobalConfig, SubobjectReference)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C8[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  AccessibleText;                                    // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

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
	uint8                                        Pad_12D3[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetFieldNotificationExtension* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                 Up;                                                // 0x28(0x24)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWidgetNavigationData                 Down;                                              // 0x4C(0x24)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FWidgetNavigationData                 Left;                                              // 0x70(0x24)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance)
	struct FWidgetNavigationData                 Right;                                             // 0x94(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWidgetNavigationData                 Next;                                              // 0xB8(0x24)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
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
	uint8                                        Pad_12DD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieScene2DTransformMask            TransformMask;                                     // 0xF8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_12DE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x100(0x220)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x320(0x110)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMovieSceneFloatChannel               Scale[0x2];                                        // 0x430(0x220)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FMovieSceneFloatChannel               Shear[0x2];                                        // 0x650(0x220)(Edit, BlueprintVisible, Net, EditFixedSize, GlobalConfig, SubobjectReference)

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
	uint8                                        Pad_12E1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xF8(0x110)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x208(0x110)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x318(0x110)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x428(0x110)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_12E7[0x160];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialSystem* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_12EA[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xB8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TrackName;                                         // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialTrack* GetDefaultObj();

};

// 0x310 (0x338 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_12F1[0x1F8];                                   // Fixing Size After Last Property  > TateDumper <
	class UWidgetAnimation*                      Animation;                                         // 0x220(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	uint8                                        Pad_12F2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x230(0x88)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F3[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequencePlayer* GetDefaultObj();

	class FName SetUserTag();
	void GetUserTag(class FName ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F5[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUMGSequenceTickManager* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_131A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DisplayLabel;                                      // 0x88(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimation* GetDefaultObj();

	class UUserWidget* UnbindFromAnimationStarted(FDelegateProperty_ Delegate);
	class UUserWidget* UnbindFromAnimationFinished(FDelegateProperty_ Delegate);
	class UUserWidget* UnbindAllFromAnimationStarted();
	class UUserWidget* UnbindAllFromAnimationFinished();
	void GetStartTime(float ReturnValue);
	void GetEndTime(float ReturnValue);
	class UUserWidget* BindToAnimationStarted(FDelegateProperty_ Delegate);
	class UUserWidget* BindToAnimationFinished(FDelegateProperty_ Delegate);
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetAnimationDelegateBinding* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_137F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetAnimationPlayCallbackProxy* GetDefaultObj();

	class UUserWidget* CreatePlayAnimationTimeRangeProxyObject(class UWidgetAnimation* InAnimation, float StartAtTime, float* EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue);
	class UUserWidget* CreatePlayAnimationProxyObject(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x38)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DestinationProperty;                               // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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

	void GetValue(bool ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_13C9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrushBinding* GetDefaultObj();

	void GetValue(const struct FSlateBrush& ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_13D5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckedStateBinding* GetDefaultObj();

	void GetValue(enum class ECheckBoxState ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_13DD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UColorBinding* GetDefaultObj();

	void GetSlateValue(const struct FSlateColor& ReturnValue);
	void GetLinearValue(const struct FLinearColor& ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UFloatBinding* GetDefaultObj();

	void GetValue(float ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UInt32Binding* GetDefaultObj();

	void GetValue(int32 ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UMouseCursorBinding* GetDefaultObj();

	void GetValue(enum class EMouseCursor ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_13FD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTextBinding* GetDefaultObj();

	void GetTextValue(class FText ReturnValue);
	void GetStringValue(const class FString& ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UVisibilityBinding* GetDefaultObj();

	void GetValue(enum class ESlateVisibility ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinding* GetDefaultObj();

	void GetValue(class UWidget* ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTaskDownloadImage* GetDefaultObj();

	class FString DownloadImage(class UAsyncTaskDownloadImage* ReturnValue);
};

// 0x80 (0xB0 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1440[0x80];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameViewportSubsystem* GetDefaultObj();

	class UWidget* SetWidgetSlotPosition(struct FGameViewportWidgetSlot* Slot, struct FVector2D* Position, bool* bRemoveDPIScale, const struct FGameViewportWidgetSlot& ReturnValue);
	struct FVector2D SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot* Slot, const struct FGameViewportWidgetSlot& ReturnValue);
	class UWidget* SetWidgetSlot(struct FGameViewportWidgetSlot* Slot);
	class UWidget* RemoveWidget();
	class UWidget* IsWidgetAdded(bool ReturnValue);
	class UWidget* GetWidgetSlot(const struct FGameViewportWidgetSlot& ReturnValue);
	class UWidget* AddWidgetForPlayer(class ULocalPlayer** Player, struct FGameViewportWidgetSlot* Slot);
	class UWidget* AddWidget(struct FGameViewportWidgetSlot* Slot);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class IUserListEntry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUserListEntry* GetDefaultObj();

	void BP_OnItemSelectionChanged(bool* bIsSelected);
	void BP_OnItemExpansionChanged(bool* bIsExpanded);
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntryLibrary
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserListEntryLibrary* GetDefaultObj();

	void IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue);
	void IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue);
	void GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry, class UListViewBase* ReturnValue);
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

	void GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry, class UObject* ReturnValue);
};

// 0x128 (0x330 - 0x208)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x208(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x218(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x219(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyAlphaToBlur;                                 // 0x21A(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_148A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BlurStrength;                                      // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x220(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_148D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        BlurRadius;                                        // 0x224(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_148E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CornerRadius;                                      // 0x230(0x20)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x250(0xD0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_148F[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UWidget*                               Content;                                           // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPanelSlot* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14FC[0x16];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1512[0x16];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_152F[0x16];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1540[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorAndOpacity;                                   // 0x218(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x228(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCanvasPanel* GetDefaultObj();

	void SetColorAndOpacity(struct FLinearColor* InColorAndOpacity);
	void AddChildToCanvas(class UWidget** Content, class UCanvasPanelSlot* ReturnValue);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x40)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoSize;                                         // 0x78(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_158C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ZOrder;                                            // 0x7C(0x4)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_158D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCanvasPanelSlot* GetDefaultObj();

	int32 SetZOrder();
	struct FVector2D SetSize();
	void SetPosition(struct FVector2D* InPosition);
	struct FMargin SetOffsets();
	struct FVector2D SetMinimum();
	struct FVector2D SetMaximum();
	struct FAnchorData SetLayout();
	bool SetAutoSize();
	struct FAnchors SetAnchors();
	struct FVector2D SetAlignment();
	void GetZOrder(int32 ReturnValue);
	void GetSize(const struct FVector2D& ReturnValue);
	void GetPosition(const struct FVector2D& ReturnValue);
	void GetOffsets(const struct FMargin& ReturnValue);
	void GetLayout(const struct FAnchorData& ReturnValue);
	void GetAutoSize(bool ReturnValue);
	void GetAnchors(const struct FAnchors& ReturnValue);
	void GetAlignment(const struct FVector2D& ReturnValue);
};

// 0xB18 (0xD20 - 0x208)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x208(0x1)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_15B1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x20C(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x220(0xAD0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xCF0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xCF1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xCF2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EButtonPressMethod                PressMethod;                                       // 0xCF3(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0xCF4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseHoverSound;                                    // 0xCF5(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15BD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xCF8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15C1[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckBox* GetDefaultObj();

	enum class EButtonTouchMethod SetTouchMethod();
	enum class EButtonPressMethod SetPressMethod();
	bool SetIsChecked();
	enum class EButtonClickMethod SetClickMethod();
	enum class ECheckBoxState SetCheckedState();
	void IsPressed(bool ReturnValue);
	void IsChecked(bool ReturnValue);
	void GetCheckedState(enum class ECheckBoxState ReturnValue);
};

// 0x100 (0x2F0 - 0x1F0)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0x1F4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	float                                        Radius;                                            // 0x1F8(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_15DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bEnableRadius;                                     // 0x2D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15DF[0x1F];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x1F0(0x770)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance)
	TArray<class UObject*>                       Items;                                             // 0x960(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x970(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x980(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x988(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E9[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBox* GetDefaultObj();

};

// 0x1BD0 (0x1DC0 - 0x1F0)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x1F0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FName                                  SelectedOption;                                    // 0x200(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_164B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1D30(0x14)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D44(0x10)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D54(0x4)(Edit, BlueprintVisible, Net, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bHasDownArrow;                                     // 0x1D58(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1D59(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bIsFocusable;                                      // 0x1D5A(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1653[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x1D5C(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x1D6C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1654[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D80(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D90(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1656[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxKey* GetDefaultObj();

	void SetSelectedOption(class FName* Option);
	void RemoveOption(class FName* Option, bool ReturnValue);
	void OnSelectionChangedEvent__DelegateSignature(class FName* SelectedItem, enum class ESelectInfo* SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void IsOpen(bool ReturnValue);
	void GetSelectedOption(class FName ReturnValue);
	class FName GenerateWidgetEvent__DelegateSignature(class UWidget* ReturnValue);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FName* Option);
};

// 0x1C70 (0x1E60 - 0x1F0)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FText>                          DefaultOptions;                                    // 0x1F0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x200(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance)
	struct FMargin                               ContentPadding;                                    // 0x1D30(0x10)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MaxListHeight;                                     // 0x1D40(0x4)(Edit, BlueprintVisible, Net, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         HasDownArrow;                                      // 0x1D44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         EnableGamepadNavigationMode;                       // 0x1D45(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_169D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x1D48(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x1DA0(0x14)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsFocusable;                                      // 0x1DB4(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_169F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x1DB8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1DC8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1DD8(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClosing;                                         // 0x1DE8(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16A3[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           TextColorAndOpacity;                               // 0x1E48(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16A4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComboBoxString* GetDefaultObj();

	void SetSelectedOption(class FString* Option);
	enum class ESelectInfo SetSelectedIndex(int32* Index);
	void RemoveOption(class FString* Option, bool ReturnValue);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void OnClosingEvent__DelegateSignature();
	void IsOpen(bool ReturnValue);
	void GetSelectedOption(const class FString& ReturnValue);
	void GetSelectedIndex(int32 ReturnValue);
	void GetOptionCount(int32 ReturnValue);
	void GetOptionAtIndex(int32* Index, const class FString& ReturnValue);
	void FindOptionIndex(class FString* Option, int32 ReturnValue);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FString* Option);
};

// 0xE0 (0x2D0 - 0x1F0)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	struct FVector2D                             EntrySpacing;                                      // 0x1F0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x200(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x210(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x214(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x21C(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x21D(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxElementSize;                                    // 0x220(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRadialBoxSettings                    RadialBoxSettings;                                 // 0x224(0x10)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_16C9[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x248(0x88)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBoxBase* GetDefaultObj();

	struct FRadialBoxSettings SetRadialSettings();
	struct FVector2D SetEntrySpacing();
	void GetNumEntries(int32 ReturnValue);
	void GetAllEntries(const TArray<class UUserWidget*>& ReturnValue);
};

// 0x8 (0x2D8 - 0x2D0)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                EntryWidgetClass;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicEntryBox* GetDefaultObj();

	bool Reset();
	class UUserWidget* RemoveEntry();
	class UClass* BP_CreateEntryOfClass(class UUserWidget* ReturnValue);
	void BP_CreateEntry(class UUserWidget* ReturnValue);
};

// 0xF40 (0x1130 - 0x1F0)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1703[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x220(0xE80)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FText                                  HintText;                                          // 0x10A0(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x10B8(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IsReadOnly;                                        // 0x10C8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst)
	bool                                         IsPassword;                                        // 0x10C9(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1707[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinimumDesiredWidth;                               // 0x10CC(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x10D0(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x10D1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x10D2(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x10D3(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x10D4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D5(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ShouldHandleEscape;                                // 0x10D6(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x10D7(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x10F8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      Justification;                                     // 0x10FA(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x10FB(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x10FC(0x3)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1713[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1714[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditableTextBox* GetDefaultObj();

	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	void SetText(class FText* InText);
	enum class ETextJustify SetJustification();
	void SetIsReadOnly(bool* bReadOnly);
	void SetIsPassword(bool* bIsPassword);
	void SetHintText(class FText* InText);
	void SetForegroundColor(struct FLinearColor* Color);
	void SetError(class FText* InError);
	enum class ETextCommit OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text);
	void OnEditableTextBoxChangedEvent__DelegateSignature(class FText* Text);
	void HasError(bool ReturnValue);
	void GetText(class FText ReturnValue);
	void ClearError();
};

// 0x310 (0x500 - 0x1F0)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_1722[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FExpandableAreaStyle                  Style;                                             // 0x200(0x1C0)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BorderBrush;                                       // 0x3C0(0xD0)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BorderColor;                                       // 0x490(0x14)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsExpanded;                                       // 0x4A4(0x1)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1724[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxHeight;                                         // 0x4A8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FMargin                               HeaderPadding;                                     // 0x4AC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               AreaPadding;                                       // 0x4BC(0x10)(ConstParm, BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1725[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x4D0(0x10)(BlueprintVisible, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidget*                               HeaderContent;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidget*                               BodyContent;                                       // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1726[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExpandableArea* GetDefaultObj();

	bool SetIsExpanded_Animated();
	bool SetIsExpanded();
	void GetIsExpanded(bool ReturnValue);
};

// 0x30 (0x238 - 0x208)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x208(0x10)(ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                RowFill;                                           // 0x218(0x10)(Edit, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1730[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridPanel* GetDefaultObj();

	void SetRowFill(int32* RowIndex, float* Coefficient);
	void SetColumnFill(int32 ColumnIndex, float* Coefficient);
	void AddChildToGrid(class UWidget** Content, int32 InRow, int32 InColumn, class UGridSlot* ReturnValue);
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1749[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x4C(0x4)(ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        RowSpan;                                           // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x54(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Layer;                                             // 0x5C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	struct FVector2D                             Nudge;                                             // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_174C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetRowSpan(int32 InRowSpan);
	void SetRow(int32 InRow);
	void SetPadding(struct FMargin* InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int32 InLayer);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	void SetColumnSpan(int32 InColumnSpan);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x218 - 0x208)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1756[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBox* GetDefaultObj();

	void AddChildToHorizontalBox(class UWidget** Content, class UHorizontalBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1760[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateChildSize                       Size;                                              // 0x40(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1763[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHorizontalBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	struct FSlateChildSize SetSize();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x7E0 (0x9D0 - 0x1F0)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x1F0(0x3F0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       TextStyle;                                         // 0x5E0(0x340)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FInputChord                           SelectedKey;                                       // 0x920(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
	struct FMargin                               Margin;                                            // 0x940(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class FText                                  KeySelectionText;                                  // 0x950(0x18)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FText                                  NoKeySpecifiedText;                                // 0x968(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bAllowModifierKeys;                                // 0x980(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bAllowGamepadKeys;                                 // 0x981(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_178C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FKey>                          EscapeKeys;                                        // 0x988(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x998(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x9A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_178D[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputKeySelector* GetDefaultObj();

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);
	struct FInputChord SetSelectedKey();
	class FText SetNoKeySpecifiedText();
	class FText SetKeySelectionText();
	TArray<struct FKey> SetEscapeKeys();
	bool SetAllowModifierKeys();
	bool SetAllowGamepadKeys();
	void OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	void GetIsSelectingKey(bool ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x208(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1793[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInvalidationBox* GetDefaultObj();

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	void GetCanCache(bool ReturnValue);
};

// 0x70 (0x278 - 0x208)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                MenuClass;                                         // 0x208(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x210(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x220(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EMenuPlacement                    Placement;                                         // 0x230(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bFitInWindow;                                      // 0x231(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x232(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         UseApplicationMenuStack;                           // 0x233(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17AF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x238(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17B0[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Padding;                                           // 0x260(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IgnoreClicksOutside;                               // 0x270(0x1)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17B2[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMenuAnchor* GetDefaultObj();

	bool ToggleOpen();
	void ShouldOpenDueToClick(bool ReturnValue);
	enum class EMenuPlacement SetPlacement();
	bool SetIgnoreClicksOutside();
	bool Open();
	void IsOpen(bool ReturnValue);
	void HasOpenSubMenus(bool ReturnValue);
	void GetUserWidget__DelegateSignature(class UUserWidget* ReturnValue);
	void GetMenuPosition(const struct FVector2D& ReturnValue);
	void GetIsMenuAnchorOpen(bool ReturnValue);
	void GetIgnoreClicksOutside(bool ReturnValue);
	bool FitInWindow();
	void Close();
};

// 0x3E0 (0x5F0 - 0x210)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x250(0x340)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x590(0x1)(ExportObject, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextWhenFocused;                          // 0x591(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x592(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         RevertTextOnEscape;                                // 0x593(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x594(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x595(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17CC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x598(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x5B8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x5C0(0x10)(ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x5D0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_17CF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableText* GetDefaultObj();

	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(class FText* InText);
	void SetIsReadOnly(bool* bReadOnly);
	class FText SetHintText();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	enum class ETextCommit OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText* Text);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void GetText(class FText ReturnValue);
	void GetHintText(class FText ReturnValue);
	void GetFont(const struct FSlateFontInfo& ReturnValue);
};

// 0xF20 (0x1130 - 0x210)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FText                                  HintText;                                          // 0x228(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x250(0xE80)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x10D0(0x1)(ExportObject, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         AllowContextMenu;                                  // 0x10D1(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17DB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10F8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1100(0x10)(ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1110(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_17DD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiLineEditableTextBox* GetDefaultObj();

	void SetTextStyle(struct FTextBlockStyle* InTextStyle);
	void SetText(class FText* InText);
	void SetIsReadOnly(bool* bReadOnly);
	class FText SetHintText();
	void SetForegroundColor(struct FLinearColor* Color);
	void SetError(class FText* InError);
	enum class ETextCommit OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText* Text);
	void GetText(class FText ReturnValue);
	void GetHintText(class FText ReturnValue);
};

// 0x10 (0x218 - 0x208)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_17E0[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_17E2[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNativeWidgetHost* GetDefaultObj();

};

// 0x10 (0x218 - 0x208)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_17E9[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOverlay* GetDefaultObj();

	void ReplaceOverlayChildAt(int32* Index, class UWidget** Content, bool ReturnValue);
	void AddChildToOverlay(class UWidget** Content, class UOverlaySlot* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_17ED[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17EE[0x6];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x1F0(0x290)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        Percent;                                           // 0x480(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
	enum class EProgressBarFillType              BarFillType;                                       // 0x484(0x1)(ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x485(0x1)(Edit, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsMarquee;                                        // 0x486(0x1)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_17F2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BorderPadding;                                     // 0x488(0x10)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           PercentDelegate;                                   // 0x498(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x4A8(0x10)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x4B8(0x10)(Edit, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F3[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bInterpolatePercent;                               // 0x4DC(0x1)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InterpolatePercentSpeed;                           // 0x4E0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F6[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProgressBar* GetDefaultObj();

	void SetPercentInterpolationKey(int32* InterpKey);
	float SetPercent(int32* InterpKey);
	void SetIsMarquee(bool* InbIsMarquee);
	void SetFillColorAndOpacity(struct FLinearColor* InColor);
	float SetEnginePercent();
};

// 0x30 (0x238 - 0x208)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x208(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RenderOnInvalidation;                              // 0x209(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RenderOnPhase;                                     // 0x20A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FD[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Phase;                                             // 0x20C(0x4)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PhaseCount;                                        // 0x210(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    EffectMaterial;                                    // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TextureParameter;                                  // 0x220(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URetainerBox* GetDefaultObj();

	void SetTextureParameter(class FName* TextureParameter);
	void SetRetainRendering(bool* bInRetainRendering);
	void SetRenderingPhase(int32* RenderPhase, int32* TotalPhases);
	void SetEffectMaterial(class UMaterialInterface** EffectMaterial);
	void RequestRender();
	void GetEffectMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x208(0x1)(Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         PadRight;                                          // 0x209(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         PadTop;                                            // 0x20A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         PadBottom;                                         // 0x20B(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1800[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USafeZone* GetDefaultObj();

	void SetSidesToPad(bool* InPadLeft, bool* InPadRight, bool* InPadTop, bool* InPadBottom);
};

// 0x38 (0x70 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1802[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1803[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1804[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USafeZoneSlot* GetDefaultObj();

};

// 0x20 (0x228 - 0x208)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x208(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class EStretchDirection                 StretchDirection;                                  // 0x209(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_180D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UserSpecifiedScale;                                // 0x20C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         IgnoreInheritedScale;                              // 0x210(0x1)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_180E[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScaleBox* GetDefaultObj();

	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InStretchDirection);
	void SetStretch(enum class EStretch InStretch);
	void SetIgnoreInheritedScale(bool* bInIgnoreInheritedScale);
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1813[0x16];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x1F0(0x770)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysShowScrollbar;                              // 0x960(0x1)(ConstParm, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x961(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x962(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_1817[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Thickness;                                         // 0x968(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FMargin                               Padding;                                           // 0x978(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1818[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScrollBar* GetDefaultObj();

	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_181A[0xE];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1821[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        WidthOverride;                                     // 0x218(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        HeightOverride;                                    // 0x21C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MinDesiredWidth;                                   // 0x220(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MinDesiredHeight;                                  // 0x224(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MaxDesiredWidth;                                   // 0x228(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MaxDesiredHeight;                                  // 0x22C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MinAspectRatio;                                    // 0x230(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MaxAspectRatio;                                    // 0x234(0x4)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x238(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x238(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x238(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x238(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x238(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x238(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x238(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x238(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1822[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1825[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1826[0x6];                                     // Fixing Size Of Struct > TateDumper <

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
	float                                        Value;                                             // 0x1F0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        MinValue;                                          // 0x204(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x208(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_182F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x210(0x500)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x710(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_1830[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          SliderBarColor;                                    // 0x714(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderHandleColor;                                 // 0x724(0x10)(ConstParm, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x734(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x735(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x736(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x737(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StepSize;                                          // 0x738(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x73C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1832[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x740(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x750(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x760(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x770(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x780(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1834[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	void GetValue(float ReturnValue);
	void GetNormalizedValue(float ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_1839[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpacer* GetDefaultObj();

	struct FVector2D SetSize();
};

// 0x720 (0x910 - 0x1F0)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1863[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x210(0x600)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        MinFractionalDigits;                               // 0x810(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        MaxFractionalDigits;                               // 0x814(0x4)(BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x818(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bEnableSlider;                                     // 0x819(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1867[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Delta;                                             // 0x81C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        SliderExponent;                                    // 0x820(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_186A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x828(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ETextJustify                      Justification;                                     // 0x880(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_186C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDesiredWidth;                                   // 0x884(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x888(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x889(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         SelectAllTextOnCommit;                             // 0x88A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_186E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           ForegroundColor;                                   // 0x88C(0x14)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x8A0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x8B0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x8C0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x8D0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x8E0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x8E0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x8E0(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x8E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_D6 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1875[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinValue;                                          // 0x8E4(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0x8E8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MinSliderValue;                                    // 0x8EC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        MaxSliderValue;                                    // 0x8F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1877[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpinBox* GetDefaultObj();

	void SetValue(float* NewValue);
	void SetMinValue(float* NewValue);
	void SetMinSliderValue(float* NewValue);
	void SetMinFractionalDigits(int32* NewValue);
	void SetMaxValue(float* NewValue);
	void SetMaxSliderValue(float* NewValue);
	void SetMaxFractionalDigits(int32* NewValue);
	struct FSlateColor SetForegroundColor();
	void SetDelta(float* NewValue);
	void SetAlwaysUsesDeltaSnap(bool* bNewValue);
	enum class ETextCommit OnSpinBoxValueCommittedEvent__DelegateSignature();
	float OnSpinBoxValueChangedEvent__DelegateSignature();
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	void GetValue(float ReturnValue);
	void GetMinValue(float ReturnValue);
	void GetMinSliderValue(float ReturnValue);
	void GetMinFractionalDigits(int32 ReturnValue);
	void GetMaxValue(float ReturnValue);
	void GetMaxSliderValue(float ReturnValue);
	void GetMaxFractionalDigits(int32 ReturnValue);
	void GetDelta(float ReturnValue);
	void GetAlwaysUsesDeltaSnap(bool ReturnValue);
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
	enum class EOrientation                      Orientation;                                       // 0x208(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_1882[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBox* GetDefaultObj();

	void ReplaceStackBoxChildAt(int32* Index, class UWidget** Content, bool ReturnValue);
	void AddChildToStackBox(class UWidget** Content, class UStackBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1884[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStackBoxSlot* GetDefaultObj();

};

// 0x510 (0x720 - 0x210)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           TextDelegate;                                      // 0x228(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x238(0x14)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x24C(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_189A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x260(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_189C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           StrikeBrush;                                       // 0x2C0(0xD0)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ShadowOffset;                                      // 0x390(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x3A0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x3B0(0x10)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MinDesiredWidth;                                   // 0x3C0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bWrapWithInvalidationPanel;                        // 0x3C4(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x3C5(0x1)(Edit, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x3C6(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	bool                                         CenterVertically;                                  // 0x3C7(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableInternalClipping;                          // 0x3C8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         DontApplyDisabledEffect;                           // 0x3C9(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoWrapText;                                     // 0x3CA(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bSimpleTextMode;                                   // 0x3CB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18A0[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x3E0(0x340)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	enum class ETextOverflowPolicy SetTextOverflowPolicy();
	void SetText(class FText* InText);
	void SetString(const class FString& InString);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	float SetMinDesiredWidth();
	class UMaterialInterface* SetFontOutlineMaterial();
	class UMaterialInterface* SetFontMaterial();
	struct FSlateFontInfo SetFont();
	void SetColorAndOpacity(struct FSlateColor* InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	void GetText(class FText ReturnValue);
	void GetDynamicOutlineMaterial(class UMaterialInstanceDynamic* ReturnValue);
	void GetDynamicFontMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0xF0 (0x2E0 - 0x1F0)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnimateHorizontally;                              // 0x1F4(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnimateVertically;                                // 0x1F5(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnimateOpacity;                                   // 0x1F6(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18AF[0x9];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_18B0[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	float                                        EntryHeight;                                       // 0xCD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        EntryWidth;                                        // 0xCD4(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EListItemAlignment                TileAlignment;                                     // 0xCD8(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWrapHorizontalNavigation;                         // 0xCD9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B2[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTileView* GetDefaultObj();

	void SetEntryWidth(float* NewWidth);
	void SetEntryHeight(float* NewHeight);
	void GetEntryWidth(float ReturnValue);
	void GetEntryHeight(float ReturnValue);
};

// 0x60 (0xD30 - 0xCD0)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_18B9[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xCE0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xCF0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_18BA[0x30];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FMargin                               SlotPadding;                                       // 0x208(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        MinDesiredSlotWidth;                               // 0x218(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        MinDesiredSlotHeight;                              // 0x21C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_18BD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridPanel* GetDefaultObj();

	void SetSlotPadding(struct FMargin* InSlotPadding);
	void SetMinDesiredSlotWidth(float* InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float* InMinDesiredSlotHeight);
	void AddChildToUniformGrid(class UWidget** Content, int32 InRow, int32 InColumn, class UUniformGridSlot* ReturnValue);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18C4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Row;                                               // 0x3C(0x4)(ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18C6[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformGridSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	void SetRow(int32 InRow);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	void SetColumn(int32 InColumn);
};

// 0x10 (0x218 - 0x208)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_18CC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBox* GetDefaultObj();

	void AddChildToVerticalBox(class UWidget** Content, class UVerticalBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18D2[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVerticalBoxSlot* GetDefaultObj();

	enum class EVerticalAlignment SetVerticalAlignment();
	struct FSlateChildSize SetSize();
	void SetPadding(struct FMargin* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
};

// 0x50 (0x258 - 0x208)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x208(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18D7[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UViewport* GetDefaultObj();

	class UClass* Spawn(class AActor* ReturnValue);
	void SetViewRotation(struct FRotator* Rotation);
	void SetViewLocation(struct FVector* Location);
	void GetViewRotation(const struct FRotator& ReturnValue);
	void GetViewportWorld(class UWorld* ReturnValue);
	void GetViewLocation(const struct FVector& ReturnValue);
};

// 0x148 (0x820 - 0x6D8)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x6D8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x6D9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18FA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WidgetClass;                                       // 0x6E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FIntPoint                             DrawSize;                                          // 0x6E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bManuallyRedraw;                                   // 0x6F0(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRedrawRequested;                                  // 0x6F1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18FE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RedrawTime;                                        // 0x6F4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1901[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             CurrentDrawSize;                                   // 0x700(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawAtDesiredSize;                                // 0x708(0x1)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1902[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Pivot;                                             // 0x710(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bReceiveHardwareInput;                             // 0x720(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWindowFocusable;                                  // 0x721(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x722(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyGammaCorrection;                             // 0x723(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1906[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x728(0x8)(BlueprintVisible, ExportObject, Net, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x730(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x740(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        OpacityFromTexture;                                // 0x750(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x754(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, DuplicateTransient)
	bool                                         bIsTwoSided;                                       // 0x755(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         TickWhenOffscreen;                                 // 0x756(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1909[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x758(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x760(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x768(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x770(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x778(0x8)(BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x790(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, InstancedReference)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x798(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bAddedToScreen;                                    // 0x7A0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEditTimeUsable;                                   // 0x7A1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1910[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SharedLayerName;                                   // 0x7A4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        LayerZOrder;                                       // 0x7AC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x7B0(0x1)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1913[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CylinderArcAngle;                                  // 0x7B4(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ETickMode                         TickMode;                                          // 0x7B8(0x1)(Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1916[0x2F];                                    // Fixing Size After Last Property  > TateDumper <
	class UUserWidget*                           Widget;                                            // 0x7E8(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1917[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetComponent* GetDefaultObj();

	void SetWindowVisibility(enum class EWindowVisibility InVisibility);
	bool SetWindowFocusable();
	enum class EWidgetSpace SetWidgetSpace();
	class UUserWidget* SetWidget();
	bool SetTwoSided();
	struct FLinearColor SetTintColorAndOpacity();
	bool SetTickWhenOffscreen();
	enum class ETickMode SetTickMode();
	float SetRedrawTime();
	struct FVector2D SetPivot();
	class ULocalPlayer* SetOwnerPlayer();
	bool SetManuallyRedraw();
	enum class EWidgetGeometryMode SetGeometryMode();
	struct FVector2D SetDrawSize();
	bool SetDrawAtDesiredSize();
	void SetCylinderArcAngle(float* InCylinderArcAngle);
	void SetBackgroundColor(struct FLinearColor* NewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	void IsWidgetVisible(bool ReturnValue);
	void GetWindowVisiblility(enum class EWindowVisibility ReturnValue);
	void GetWindowFocusable(bool ReturnValue);
	void GetWidgetSpace(enum class EWidgetSpace ReturnValue);
	void GetWidget(class UUserWidget* ReturnValue);
	void GetUserWidgetObject(class UUserWidget* ReturnValue);
	void GetTwoSided(bool ReturnValue);
	void GetTickWhenOffscreen(bool ReturnValue);
	void GetRenderTarget(class UTextureRenderTarget2D* ReturnValue);
	void GetRedrawTime(float ReturnValue);
	void GetPivot(const struct FVector2D& ReturnValue);
	void GetOwnerPlayer(class ULocalPlayer* ReturnValue);
	void GetMaterialInstance(class UMaterialInstanceDynamic* ReturnValue);
	void GetManuallyRedraw(bool ReturnValue);
	void GetGeometryMode(enum class EWidgetGeometryMode ReturnValue);
	void GetDrawSize(const struct FVector2D& ReturnValue);
	void GetDrawAtDesiredSize(bool ReturnValue);
	void GetCylinderArcAngle(float ReturnValue);
	void GetCurrentDrawSize(const struct FVector2D& ReturnValue);
};

// 0x2D8 (0x5A0 - 0x2C8)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2C8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_193C[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualUserIndex;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PointerIndex;                                      // 0x2EC(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2F0(0x1)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_193D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InteractionDistance;                               // 0x2F4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2F8(0x1)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHitTesting;                                 // 0x2F9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowDebug;                                        // 0x2FA(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_193F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DebugSphereLineThickness;                          // 0x2FC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DebugLineThickness;                                // 0x300(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          DebugColor;                                        // 0x304(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1941[0x7C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CustomHitResult;                                   // 0x390(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             LocalHitLocation;                                  // 0x480(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             LastLocalHitLocation;                              // 0x490(0x10)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x4A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FHitResult                            LastHitResult;                                     // 0x4A8(0xF0)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x598(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x599(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x59A(0x1)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1943[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetInteractionComponent* GetDefaultObj();

	class UWidget* SetFocus();
	struct FHitResult SetCustomHitResult();
	bool SendKeyChar(bool ReturnValue);
	float ScrollWheel();
	struct FKey ReleasePointerKey();
	struct FKey ReleaseKey(bool ReturnValue);
	struct FKey PressPointerKey();
	bool PressKey(bool ReturnValue);
	struct FKey PressAndReleaseKey(bool ReturnValue);
	void IsOverInteractableWidget(bool ReturnValue);
	void IsOverHitTestVisibleWidget(bool ReturnValue);
	void IsOverFocusableWidget(bool ReturnValue);
	void GetLastHitResult(const struct FHitResult& ReturnValue);
	void GetHoveredWidgetComponent(class UWidgetComponent* ReturnValue);
	void Get2DHitLocation(const struct FVector2D& ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x208(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1952[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWidgetSwitcher* GetDefaultObj();

	void SetActiveWidgetIndex(int32* Index);
	class UWidget* SetActiveWidget();
	void GetWidgetAtIndex(int32* Index, class UWidget* ReturnValue);
	void GetNumWidgets(int32 ReturnValue);
	void GetActiveWidgetIndex(int32 ReturnValue);
	void GetActiveWidget(class UWidget* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1957[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1958[0x6];                                     // Fixing Size Of Struct > TateDumper <

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
	bool                                         bWindowButtonsEnabled;                             // 0x208(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x209(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1960[0x1E];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1965[0x16];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FVector2D                             InnerSlotPadding;                                  // 0x208(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        WrapSize;                                          // 0x218(0x4)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExplicitWrapSize;                                 // 0x21C(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x21D(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x21E(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_196B[0x11];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWrapBox* GetDefaultObj();

	void SetInnerSlotPadding(struct FVector2D* InPadding);
	enum class EHorizontalAlignment SetHorizontalAlignment();
	void AddChildToWrapBox(class UWidget** Content, class UWrapBoxSlot* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1979[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                Tag;                                               // 0x28(0x10)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               Payload;                                           // 0x38(0x8)(ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1984[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Offset;                                            // 0x50(0x10)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDragDropOperation* GetDefaultObj();

	struct FPointerEvent Drop();
	struct FPointerEvent Dragged();
	struct FPointerEvent DragCancelled();
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USlateBlueprintLibrary* GetDefaultObj();

	struct FVector2D TransformVectorLocalToAbsolute(const struct FVector2D& ReturnValue);
	struct FVector2D TransformVectorAbsoluteToLocal(const struct FVector2D& ReturnValue);
	float TransformScalarLocalToAbsolute(float ReturnValue);
	float TransformScalarAbsoluteToLocal(float ReturnValue);
	bool ScreenToWidgetLocal(struct FVector2D* ScreenPosition);
	bool ScreenToWidgetAbsolute(struct FVector2D* ScreenPosition);
	struct FVector2D ScreenToViewport(struct FVector2D* ScreenPosition);
	struct FVector2D LocalToViewport();
	struct FVector2D LocalToAbsolute(const struct FVector2D& ReturnValue);
	struct FVector2D IsUnderLocation(bool ReturnValue);
	struct FGeometry GetLocalTopLeft(const struct FVector2D& ReturnValue);
	struct FGeometry GetLocalSize(const struct FVector2D& ReturnValue);
	struct FGeometry GetAbsoluteSize(const struct FVector2D& ReturnValue);
	struct FSlateBrush EqualEqual_SlateBrush(bool ReturnValue);
	struct FVector2D AbsoluteToViewport();
	struct FVector2D AbsoluteToLocal(const struct FVector2D& ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ExtentMax;                                         // 0x60(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USlateVectorArtData* GetDefaultObj();

};

// 0x80 (0x3F0 - 0x370)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x370(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x378(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x388(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x39C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_DA : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_19C7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x3A0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x3B0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          NamedSlots;                                        // 0x3C0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3D0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3E0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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

	struct FEventReply UnlockMouse(const struct FEventReply& ReturnValue);
	void Unhandled(const struct FEventReply& ReturnValue);
	bool SetWindowTitleBarState(enum class EWindowTitleBarMode Mode);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate);
	bool SetWindowTitleBarCloseButtonActive();
	bool SetUserFocus(const struct FEventReply& ReturnValue);
	struct FVector2D SetMousePosition(const struct FEventReply& ReturnValue);
	bool SetInputMode_UIOnlyEx(class APlayerController** PlayerController);
	bool SetInputMode_GameOnly(class APlayerController** PlayerController);
	bool SetInputMode_GameAndUIEx(class APlayerController** PlayerController);
	struct FVector2D SetHardwareCursor(bool ReturnValue);
	void SetFocusToGameViewport();
	bool SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float* Severity);
	void SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D** Texture);
	void SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	void RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture(const struct FEventReply& ReturnValue);
	bool ReleaseJoystickCapture(const struct FEventReply& ReturnValue);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	void NoResourceBrush(const struct FSlateBrush& ReturnValue);
	int32 MakeBrushFromTexture(class UTexture2D** Texture, const struct FSlateBrush& ReturnValue);
	int32 MakeBrushFromMaterial(class UMaterialInterface* Material, const struct FSlateBrush& ReturnValue);
	class USlateBrushAsset* MakeBrushFromAsset(const struct FSlateBrush& ReturnValue);
	class UWidget* LockMouse(const struct FEventReply& ReturnValue);
	void IsDragDropping(bool ReturnValue);
	void Handled(const struct FEventReply& ReturnValue);
	struct FVector4 GetSafeZonePadding();
	void GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event, const struct FKeyEvent& ReturnValue);
	void GetInputEventFromPointerEvent(const struct FPointerEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromKeyEvent(const struct FKeyEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event, const struct FInputEvent& ReturnValue);
	void GetDynamicMaterial(struct FSlateBrush* Brush, class UMaterialInstanceDynamic* ReturnValue);
	void GetDragDroppingContent(class UDragDropOperation* ReturnValue);
	void GetBrushResourceAsTexture2D(struct FSlateBrush* Brush, class UTexture2D* ReturnValue);
	void GetBrushResourceAsMaterial(struct FSlateBrush* Brush, class UMaterialInterface* ReturnValue);
	void GetBrushResource(struct FSlateBrush* Brush, class UObject* ReturnValue);
	bool GetAllWidgetsWithInterface(class UClass* Interface);
	bool GetAllWidgetsOfClass();
	struct FEventReply EndDragDrop(const struct FEventReply& ReturnValue);
	struct FLinearColor DrawTextFormatted(struct FPaintContext* Context, class FText* Text, struct FVector2D* Position, class UFont** Font);
	struct FLinearColor DrawText(struct FPaintContext* Context, const class FString& InString, struct FVector2D* Position);
	float DrawSpline(struct FPaintContext* Context);
	float DrawLines(struct FPaintContext* Context, TArray<struct FVector2D>* Points);
	float DrawLine(struct FPaintContext* Context);
	struct FLinearColor DrawBox(struct FPaintContext* Context, struct FVector2D* Position, class USlateBrushAsset** Brush);
	void DismissAllMenus();
	struct FKey DetectDragIfPressed(const struct FEventReply& ReturnValue);
	struct FKey DetectDrag(const struct FEventReply& ReturnValue);
	class UClass* CreateDragDropOperation(class UDragDropOperation* ReturnValue);
	class APlayerController* Create(class UUserWidget* ReturnValue);
	bool ClearUserFocus(const struct FEventReply& ReturnValue);
	class UWidget* CaptureMouse(const struct FEventReply& ReturnValue);
	bool CaptureJoystick(const struct FEventReply& ReturnValue);
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetLayoutLibrary* GetDefaultObj();

	class UWidget* SlotAsWrapBoxSlot(class UWrapBoxSlot* ReturnValue);
	class UWidget* SlotAsWidgetSwitcherSlot(class UWidgetSwitcherSlot* ReturnValue);
	class UWidget* SlotAsVerticalBoxSlot(class UVerticalBoxSlot* ReturnValue);
	class UWidget* SlotAsUniformGridSlot(class UUniformGridSlot* ReturnValue);
	class UWidget* SlotAsSizeBoxSlot(class USizeBoxSlot* ReturnValue);
	class UWidget* SlotAsScrollBoxSlot(class UScrollBoxSlot* ReturnValue);
	class UWidget* SlotAsScaleBoxSlot(class UScaleBoxSlot* ReturnValue);
	class UWidget* SlotAsSafeBoxSlot(class USafeZoneSlot* ReturnValue);
	class UWidget* SlotAsOverlaySlot(class UOverlaySlot* ReturnValue);
	class UWidget* SlotAsHorizontalBoxSlot(class UHorizontalBoxSlot* ReturnValue);
	class UWidget* SlotAsGridSlot(class UGridSlot* ReturnValue);
	class UWidget* SlotAsCanvasSlot(class UCanvasPanelSlot* ReturnValue);
	class UWidget* SlotAsBorderSlot(class UBorderSlot* ReturnValue);
	class UObject* RemoveAllWidgets();
	bool ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector2D* ScreenPosition, bool ReturnValue);
	class UObject* GetViewportWidgetGeometry(const struct FGeometry& ReturnValue);
	class UObject* GetViewportSize(const struct FVector2D& ReturnValue);
	class UObject* GetViewportScale(float ReturnValue);
	void GetPlayerScreenWidgetGeometry(class APlayerController** PlayerController, const struct FGeometry& ReturnValue);
	float GetMousePositionScaledByDPI(class APlayerController** Player, float LocationX, bool ReturnValue);
	class UObject* GetMousePositionOnViewport(const struct FVector2D& ReturnValue);
	void GetMousePositionOnPlatform(const struct FVector2D& ReturnValue);
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_1B52[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWidgetTree* GetDefaultObj();

};

}


