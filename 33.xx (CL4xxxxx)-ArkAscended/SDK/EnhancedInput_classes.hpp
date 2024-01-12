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
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x178 - 0x140)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_21CE[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	struct FInputActionValue GetBoundActionValue();
};

// 0x68 (0xA0 - 0x38)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0x58(0x30)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x1, PropSize: 0x10x98(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_21D3[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	bool RequestRebuildControlMappingsUsingContext();
	struct FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType* ValueType);
	struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType);
	bool IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();
	class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	class FName GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();
	struct FInputActionValue GetBoundActionValue(class AActor** Actor);
	class FString Conv_InputActionValueToString(struct FInputActionValue* ActionValue);
	bool Conv_InputActionValueToBool();
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue* ActionValue);
	struct FVector2D Conv_InputActionValueToAxis2D();
	double Conv_InputActionValueToAxis1D();
	enum class EInputActionValueType BreakInputActionValue(const struct FInputActionValue& InActionValue, double X, double Y, double Z);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	class UInputMappingContext* GetContextRedirect();
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(Edit, ExportObject, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        InputDataClasses;                                  // 0x50(0x10)(OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2206[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FModifyContextOptions RemovePlayerMappableConfig(class UPlayerMappableInputConfig** Config);
	struct FModifyContextOptions RemoveMappingContext(class UInputMappingContext** MappingContext);
	int32 RemoveAllPlayerMappedKeysForMapping(class FName* MappingName);
	struct FModifyContextOptions RemoveAllPlayerMappedKeys();
	enum class EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*>* PrioritizedActiveContexts, class UInputMappingContext** InputContext, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue* BlockingIssues);
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext** InputContext, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue* BlockingIssues);
	TArray<struct FKey> QueryKeysMappedToAction();
	int32 K2_RemovePlayerMappedKeyInSlot(class FName* MappingName, struct FPlayerMappableKeySlot* KeySlot);
	struct FKey K2_GetPlayerMappedKeyInSlot(class FName* MappingName, struct FPlayerMappableKeySlot* KeySlot);
	int32 K2_AddPlayerMappedKeyInSlot(class FName* MappingName, struct FKey* NewKey, struct FPlayerMappableKeySlot* KeySlot);
	TArray<class UInputTrigger*> InjectInputVectorForAction(const struct FVector& Value);
	TArray<class UInputTrigger*> InjectInputForAction(struct FInputActionValue* RawValue);
	bool HasMappingContext(class UInputMappingContext** MappingContext, int32* OutFoundPriority);
	TArray<struct FKey> GetAllPlayerMappedKeys(class FName* MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
	void ClearAllMappings();
	struct FModifyContextOptions AddPlayerMappableConfig(class UPlayerMappableInputConfig** Config);
	struct FModifyContextOptions AddMappingContext(class UInputMappingContext** MappingContext, int32 Priority);
};

// 0x1B0 (0x1E0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_226A[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_226D[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_226E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

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
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_226F[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2270[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(BlueprintVisible, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2271[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bConsumeInput;                                     // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriggerWhenPaused;                                // 0x49(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReserveAllMappings;                               // 0x4A(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EInputActionValueType             ValueType;                                         // 0x4B(0x1)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2276[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x50(0x10)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, ConstParm, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	class UInputAction* UnmapKey(const struct FKey& Key);
	class UInputAction* UnmapAllKeysFromAction();
	void UnmapAll();
	class UInputAction* UnmapAction();
	struct FEnhancedActionKeyMapping MapKey(const struct FKey& ToKey);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, struct FInputActionValue* CurrentValue, float* DeltaTime);
	struct FLinearColor GetVisualizationColor(struct FInputActionValue* SampleValue);
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_2286[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
	bool                                         bX;                                                // 0x28(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x29(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2A(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2289[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_228B[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(ConstParm, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2290[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2292[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_229C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	enum class ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float* DeltaTime);
	bool IsActuated(const struct FInputActionValue& ForValue);
	enum class ETriggerType GetTriggerType();
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A0[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_22A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A8[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22AC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_22AF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Interval;                                          // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

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
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(ExportObject, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               MetaData;                                          // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	bool IsDeprecated();
	TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys();
	class UObject* GetMetadata();
	TMap<class UInputMappingContext*, int32> GetMappingContexts();
	struct FEnhancedActionKeyMapping GetMappingByName(class FName* MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);
	class FText GetDisplayName();
	class FName GetConfigName();
};

// 0x40 (0x68 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  Name;                                              // 0x30(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x38(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


