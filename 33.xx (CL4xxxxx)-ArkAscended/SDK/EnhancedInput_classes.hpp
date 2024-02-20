#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionDelegateBinding
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x178 - 0x140)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_12BC[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	void GetBoundActionValue(class UInputAction** Action, const struct FInputActionValue& ReturnValue);
};

// 0x68 (0xA0 - 0x38)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0x58(0x30)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, DuplicateTransient)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x1, PropSize: 0x10x98(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputDeveloperSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputLibrary
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEnhancedInputLibrary* GetDefaultObj();

	void RequestRebuildControlMappingsUsingContext(class UInputMappingContext** Context, bool* bForceImmediately);
	void MakeInputActionValueOfType(double* X, double* Y, double* Z, enum class EInputActionValueType* ValueType, const struct FInputActionValue& ReturnValue);
	void MakeInputActionValue(double* X, double* Y, double* Z, const struct FInputActionValue& MatchValueType, const struct FInputActionValue& ReturnValue);
	void IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping, bool ReturnValue);
	void GetThirdPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetSecondPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class UPlayerMappableKeySettings* ReturnValue);
	void GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class FName ReturnValue);
	void GetFourthPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetFirstPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetBoundActionValue(class AActor** Actor, class UInputAction** Action, const struct FInputActionValue& ReturnValue);
	void Conv_InputActionValueToString(const struct FInputActionValue& ActionValue, const class FString& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToBool(bool ReturnValue);
	void Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue, const struct FVector& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToAxis2D(const struct FVector2D& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToAxis1D(double ReturnValue);
	void BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, enum class EInputActionValueType Type);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	class UInputMappingContext* GetContextRedirect(class UInputMappingContext* ReturnValue);
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        InputDataClasses;                                  // 0x50(0x10)(EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13CE[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputSubsystemInterface
class IEnhancedInputSubsystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnhancedInputSubsystemInterface* GetDefaultObj();

	struct FModifyContextOptions RequestRebuildControlMappings(enum class EInputMappingRebuildType* RebuildType);
	struct FModifyContextOptions RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config);
	struct FModifyContextOptions RemoveMappingContext(class UInputMappingContext* MappingContext);
	struct FModifyContextOptions RemoveAllPlayerMappedKeysForMapping(class FName MappingName, int32 ReturnValue);
	struct FModifyContextOptions RemoveAllPlayerMappedKeys();
	struct FKey QueryMapKeyInContextSet(TArray<class UInputMappingContext*>* PrioritizedActiveContexts, class UInputMappingContext** InputContext, class UInputAction** Action, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue);
	struct FKey QueryMapKeyInActiveContextSet(class UInputMappingContext** InputContext, class UInputAction** Action, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue);
	void QueryKeysMappedToAction(class UInputAction** Action, const TArray<struct FKey>& ReturnValue);
	struct FModifyContextOptions K2_RemovePlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, int32 ReturnValue);
	void K2_GetPlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FKey& ReturnValue);
	struct FModifyContextOptions K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, int32 ReturnValue);
	void InjectInputVectorForAction(class UInputAction** Action, struct FVector* Value, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers);
	void InjectInputForAction(class UInputAction** Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers);
	void HasMappingContext(class UInputMappingContext* MappingContext, int32 OutFoundPriority, bool ReturnValue);
	void GetAllPlayerMappedKeys(class FName MappingName, const TArray<struct FKey>& ReturnValue);
	void GetAllPlayerMappableActionKeyMappings(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void ClearAllMappings();
	struct FModifyContextOptions AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config);
	struct FModifyContextOptions AddMappingContext(class UInputMappingContext* MappingContext);
};

// 0x1B0 (0x1E0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_14E4[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_14E8[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_14EA[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputWorldSubsystem* GetDefaultObj();

	void RemoveActorInputComponent(class AActor** Actor, bool ReturnValue);
	void AddActorInputComponent(class AActor** Actor);
};

// 0x2A8 (0x790 - 0x4E8)
// Class EnhancedInput.EnhancedPlayerInput
class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EE[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14F1[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14F4[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bConsumeInput;                                     // 0x48(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTriggerWhenPaused;                                // 0x49(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bReserveAllMappings;                               // 0x4A(0x1)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EInputActionValueType             ValueType;                                         // 0x4B(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	struct FKey UnmapKey(class UInputAction** Action);
	void UnmapAllKeysFromAction(class UInputAction** Action);
	void UnmapAll();
	void UnmapAction(class UInputAction** Action);
	void MapKey(class UInputAction** Action, struct FKey* ToKey, const struct FEnhancedActionKeyMapping& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	float ModifyRaw(struct FInputActionValue* CurrentValue, const struct FInputActionValue& ReturnValue);
	struct FInputActionValue GetVisualizationColor(struct FInputActionValue* FinalValue, const struct FLinearColor& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_151B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierScalar* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierScaleByDeltaTime
class UInputModifierScaleByDeltaTime : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierScaleByDeltaTime* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierNegate
class UInputModifierNegate : public UInputModifier
{
public:
	bool                                         bX;                                                // 0x28(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x29(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2A(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_151E[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_151F[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1523[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierFOVScaling* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierToWorldSpace
class UInputModifierToWorldSpace : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierToWorldSpace* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierSwizzleAxis
class UInputModifierSwizzleAxis : public UInputModifier
{
public:
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_152B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1542[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	float UpdateState(const struct FInputActionValue& ModifiedValue, enum class ETriggerState ReturnValue);
	void IsActuated(const struct FInputActionValue& ForValue, bool ReturnValue);
	void GetTriggerType(enum class ETriggerType ReturnValue);
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1546[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerTimedBase* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerDown
class UInputTriggerDown : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerDown* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerPressed
class UInputTriggerPressed : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerPressed* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerReleased
class UInputTriggerReleased : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerReleased* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerHold
class UInputTriggerHold : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_1552[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1553[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_155A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_155F[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_1562[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1564[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Interval;                                          // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerChordAction* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class EnhancedInput.InputTriggerChordBlocker
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerChordBlocker* GetDefaultObj();

};

// 0x28 (0x78 - 0x50)
// Class EnhancedInput.InputTriggerCombo
class UInputTriggerCombo : public UInputTrigger
{
public:
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1593[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               MetaData;                                          // 0x58(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	void IsDeprecated(bool ReturnValue);
	void GetPlayerMappableKeys(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetMetadata(class UObject* ReturnValue);
	void GetMappingContexts(TMap<class UInputMappingContext*, int32> ReturnValue);
	void GetMappingByName(class FName MappingName, const struct FEnhancedActionKeyMapping& ReturnValue);
	void GetKeysBoundToAction(class UInputAction* InAction, const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetDisplayName(class FText ReturnValue);
	void GetConfigName(class FName ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  Name;                                              // 0x30(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x38(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


