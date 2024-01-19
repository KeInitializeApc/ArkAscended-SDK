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
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x178 - 0x140)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_1E4F[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	void GetBoundActionValue(class UInputAction* Action, const struct FInputActionValue& ReturnValue);
};

// 0x68 (0xA0 - 0x38)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x38(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x48(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0x58(0x30)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, SubobjectReference)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x1, PropSize: 0x10x98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, ExportObject, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E52[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	class UInputMappingContext* RequestRebuildControlMappingsUsingContext(bool* bForceImmediately);
	enum class EInputActionValueType MakeInputActionValueOfType(double X, double Y, double Z, const struct FInputActionValue& ReturnValue);
	struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& ReturnValue);
	struct FEnhancedActionKeyMapping IsActionKeyMappingPlayerMappable(bool ReturnValue);
	void GetThirdPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetSecondPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	struct FEnhancedActionKeyMapping GetPlayerMappableKeySettings(class UPlayerMappableKeySettings* ReturnValue);
	struct FEnhancedActionKeyMapping GetMappingName(class FName ReturnValue);
	void GetFourthPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetFirstPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetBoundActionValue(class AActor** Actor, class UInputAction* Action, const struct FInputActionValue& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToString(const class FString& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToBool(bool ReturnValue);
	struct FInputActionValue Conv_InputActionValueToAxis3D(const struct FVector& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToAxis2D(const struct FVector2D& ReturnValue);
	struct FInputActionValue Conv_InputActionValueToAxis1D(double ReturnValue);
	enum class EInputActionValueType BreakInputActionValue(double X, double Y, double Z);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	void GetContextRedirect(class UInputMappingContext** InContext, class UInputMappingContext* ReturnValue);
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        InputDataClasses;                                  // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA8[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	enum class EInputMappingRebuildType RequestRebuildControlMappings();
	struct FModifyContextOptions RemovePlayerMappableConfig();
	struct FModifyContextOptions RemoveMappingContext();
	struct FModifyContextOptions RemoveAllPlayerMappedKeysForMapping(int32 ReturnValue);
	struct FModifyContextOptions RemoveAllPlayerMappedKeys();
	enum class EMappingQueryIssue QueryMapKeyInContextSet(class UInputAction* Action, const struct FKey& Key, enum class EMappingQueryResult ReturnValue);
	enum class EMappingQueryIssue QueryMapKeyInActiveContextSet(class UInputAction* Action, const struct FKey& Key, enum class EMappingQueryResult ReturnValue);
	void QueryKeysMappedToAction(class UInputAction* Action, const TArray<struct FKey>& ReturnValue);
	struct FModifyContextOptions K2_RemovePlayerMappedKeyInSlot(int32 ReturnValue);
	struct FPlayerMappableKeySlot K2_GetPlayerMappedKeyInSlot(const struct FKey& ReturnValue);
	struct FModifyContextOptions K2_AddPlayerMappedKeyInSlot(int32 ReturnValue);
	void InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	struct FInputActionValue InjectInputForAction(class UInputAction* Action, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	int32 HasMappingContext(bool ReturnValue);
	class FName GetAllPlayerMappedKeys(const TArray<struct FKey>& ReturnValue);
	void GetAllPlayerMappableActionKeyMappings(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void ClearAllMappings();
	struct FModifyContextOptions AddPlayerMappableConfig();
	struct FModifyContextOptions AddMappingContext();
};

// 0x1B0 (0x1E0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_1F54[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_1F5B[0x1A0];                                   // Fixing Size After Last Property  > TateDumper <
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, SubobjectReference)
	uint8                                        Pad_1F5C[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(Edit, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5D[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5E[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F61[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bConsumeInput;                                     // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriggerWhenPaused;                                // 0x49(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReserveAllMappings;                               // 0x4A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EInputActionValueType             ValueType;                                         // 0x4B(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F66[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x60(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	void UnmapKey(class UInputAction* Action, const struct FKey& Key);
	void UnmapAllKeysFromAction(class UInputAction* Action);
	void UnmapAll();
	void UnmapAction(class UInputAction* Action);
	struct FKey MapKey(class UInputAction* Action, const struct FEnhancedActionKeyMapping& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	float ModifyRaw(const struct FInputActionValue& ReturnValue);
	struct FInputActionValue GetVisualizationColor(const struct FInputActionValue& FinalValue, const struct FLinearColor& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1F85[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
	bool                                         bX;                                                // 0x28(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bY;                                                // 0x29(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bZ;                                                // 0x2A(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F8E[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_1F93[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F9A[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F9E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	float UpdateState(enum class ETriggerState ReturnValue);
	struct FInputActionValue IsActuated(bool ReturnValue);
	void GetTriggerType(enum class ETriggerType ReturnValue);
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA6[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1FA9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FAA[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FAB[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FAE[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_1FB0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Interval;                                          // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               MetaData;                                          // 0x58(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	void IsDeprecated(bool ReturnValue);
	void GetPlayerMappableKeys(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetMetadata(class UObject* ReturnValue);
	void GetMappingContexts(TMap<class UInputMappingContext*, int32> ReturnValue);
	class FName GetMappingByName(const struct FEnhancedActionKeyMapping& ReturnValue);
	class UInputAction* GetKeysBoundToAction(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetDisplayName(class FText ReturnValue);
	void GetConfigName(class FName ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FName                                  Name;                                              // 0x30(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x38(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


