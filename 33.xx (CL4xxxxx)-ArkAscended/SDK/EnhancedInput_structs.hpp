#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputActionValueType : uint8
{
	Boolean                        = 0,
	Axis1D                         = 1,
	Axis2D                         = 2,
	Axis3D                         = 3,
	EInputActionValueType_MAX      = 4,
};

enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled  = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction            = 2,
	NotMappable                    = 3,
	MappingAvailable               = 4,
	EMappingQueryResult_MAX        = 5,
};

enum class EMappingQueryIssue : uint8
{
	NoIssue                        = 0,
	ReservedByAction               = 1,
	HidesExistingMapping           = 2,
	HiddenByExistingMapping        = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion            = 16,
	ForcesTypeDemotion             = 32,
	EMappingQueryIssue_MAX         = 33,
};

enum class EPlayerMappableKeySettingBehaviors : uint8
{
	InheritSettingsFromAction      = 0,
	OverrideSettings               = 1,
	IgnoreSettings                 = 2,
	EPlayerMappableKeySettingBehaviors_MAX = 3,
};

enum class EInputMappingRebuildType : uint8
{
	None                           = 0,
	Rebuild                        = 1,
	RebuildWithFlush               = 2,
	EInputMappingRebuildType_MAX   = 3,
};

enum class EDeadZoneType : uint8
{
	Axial                          = 0,
	Radial                         = 1,
	EDeadZoneType_MAX              = 2,
};

enum class EFOVScalingType : uint8
{
	Standard                       = 0,
	UE4_BackCompat                 = 1,
	EFOVScalingType_MAX            = 2,
};

enum class EInputAxisSwizzle : uint8
{
	YXZ                            = 0,
	ZYX                            = 1,
	XZY                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	EInputAxisSwizzle_MAX          = 5,
};

enum class ETriggerState : uint8
{
	None                           = 0,
	Ongoing                        = 1,
	Triggered                      = 2,
	ETriggerState_MAX              = 3,
};

enum class ETriggerEvent : uint8
{
	None                           = 0,
	Triggered                      = 1,
	Started                        = 2,
	Ongoing                        = 4,
	Canceled                       = 8,
	Completed                      = 16,
	ETriggerEvent_MAX              = 17,
};

enum class ETriggerType : uint8
{
	Explicit                       = 0,
	Implicit                       = 1,
	Blocker                        = 2,
	ETriggerType_MAX               = 3,
};

enum class ETriggerEventsSupported : uint8
{
	None                           = 0,
	Instant                        = 1,
	Uninterruptible                = 2,
	Ongoing                        = 4,
	All                            = 7,
	ETriggerEventsSupported_MAX    = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct EnhancedInput.InputActionValue
struct FInputActionValue
{
public:
	uint8                                        Pad_1AA1[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeySlot
struct FPlayerMappableKeySlot
{
public:
	uint8                                        Pad_1AAA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SlotNumber;                                        // 0x8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AAB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x10(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	struct FPlayerMappableKeyOptions             PlayerMappableOptions;                             // 0x0(0x40)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x40(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UInputAction*                          Action;                                            // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FKey                                  Key;                                               // 0x68(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x1, PropSize: 0x10x80(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_E6 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior;                                   // 0x81(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        bIsPlayerMappable : 1;                             // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EnhancedInput.DefaultContextSetting
struct FDefaultContextSetting
{
public:
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x0(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1AB4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
public:
	uint8                                        bIgnoreAllPressedKeysUntilRelease : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bForceImmediately : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
public:
	uint8                                        Pad_1AB7[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ABB[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ABC[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ElapsedProcessedTime;                              // 0x58(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ElapsedTriggeredTime;                              // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
	struct FInputChord                           InputChord;                                        // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x20(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ABE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  FunctionNameToBind;                                // 0x24(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExecuteWhenPaused;                                // 0x2C(0x1)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ABF[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        ComboStepCompletionStates;                         // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AC0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TimeToPressKey;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputCancelAction
struct FInputCancelAction
{
public:
	class UInputAction*                          CancelAction;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        CancellationStates;                                // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AC2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}

