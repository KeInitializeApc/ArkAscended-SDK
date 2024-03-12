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
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x178 - 0x140)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_1759[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	struct FInputActionValue GetBoundActionValue(class UInputAction** Action);
};

// 0x68 (0xA0 - 0x38)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x48(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0x58(0x30)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x88(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x1, PropSize: 0x10x98(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1763[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FInputActionValue MakeInputActionValueOfType(enum class EInputActionValueType* ValueType);
	struct FInputActionValue MakeInputActionValue(const struct FInputActionValue& MatchValueType);
	bool IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();
	class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	class FName GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();
	struct FInputActionValue GetBoundActionValue(class AActor** Actor, class UInputAction** Action);
	class FString Conv_InputActionValueToString(const struct FInputActionValue& ActionValue);
	bool Conv_InputActionValueToBool();
	struct FVector Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
	struct FVector2D Conv_InputActionValueToAxis2D();
	double Conv_InputActionValueToAxis1D();
	double BreakInputActionValue(const struct FInputActionValue& InActionValue, enum class EInputActionValueType Type);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	class UInputMappingContext* GetContextRedirect(class UInputMappingContext** InContext);
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        InputDataClasses;                                  // 0x50(0x10)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17BF[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	void RequestRebuildControlMappings(const struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType);
	void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options);
	int32 RemoveAllPlayerMappedKeysForMapping(class FName MappingName, const struct FModifyContextOptions& Options);
	void RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options);
	enum class EMappingQueryResult QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction** Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues);
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction** Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues);
	TArray<struct FKey> QueryKeysMappedToAction(class UInputAction** Action);
	int32 K2_RemovePlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
	struct FKey K2_GetPlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot);
	int32 K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
	void InjectInputVectorForAction(class UInputAction** Action, struct FVector* Value, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers);
	void InjectInputForAction(class UInputAction** Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers);
	bool HasMappingContext(class UInputMappingContext* MappingContext, int32 OutFoundPriority);
	TArray<struct FKey> GetAllPlayerMappedKeys(class FName MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
	void ClearAllMappings();
	void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void AddMappingContext(class UInputMappingContext* MappingContext, int32* Priority, const struct FModifyContextOptions& Options);
};

// 0x1B0 (0x1E0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_1876[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_187F[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1880[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputWorldSubsystem* GetDefaultObj();

	bool RemoveActorInputComponent(class AActor** Actor);
	void AddActorInputComponent(class AActor** Actor);
};

// 0x2A8 (0x790 - 0x4E8)
// Class EnhancedInput.EnhancedPlayerInput
class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1883[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1884[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1886[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bConsumeInput;                                     // 0x48(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTriggerWhenPaused;                                // 0x49(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bReserveAllMappings;                               // 0x4A(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EInputActionValueType             ValueType;                                         // 0x4B(0x1)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_188C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x50(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x60(0x10)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	void UnmapKey(class UInputAction** Action, const struct FKey& Key);
	void UnmapAllKeysFromAction(class UInputAction** Action);
	void UnmapAll();
	void UnmapAction(class UInputAction** Action);
	struct FEnhancedActionKeyMapping MapKey(class UInputAction** Action, struct FKey* ToKey);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	struct FInputActionValue ModifyRaw();
	struct FLinearColor GetVisualizationColor();
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_18C3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
	bool                                         bX;                                                // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x29(0x1)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18F2[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_18F3[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18FD[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1901[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_191B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	enum class ETriggerState UpdateState(struct FInputActionValue* ModifiedValue);
	bool IsActuated(struct FInputActionValue* ForValue);
	enum class ETriggerType GetTriggerType();
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1923[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_192E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_192F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1935[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1938[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_193C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_193E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Interval;                                          // 0x60(0x4)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1971[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               MetaData;                                          // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	bool IsDeprecated();
	TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys();
	class UObject* GetMetadata();
	TMap<class UInputMappingContext*, int32> GetMappingContexts();
	struct FEnhancedActionKeyMapping GetMappingByName(class FName MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);
	class FText GetDisplayName();
	class FName GetConfigName();
};

// 0x40 (0x68 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	class FName                                  Name;                                              // 0x30(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


