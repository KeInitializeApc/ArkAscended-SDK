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
	uint8                                        Pad_159D[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeySlot
struct FPlayerMappableKeySlot
{
public:
	uint8                                        Pad_15A7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SlotNumber;                                        // 0x8(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15A8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	struct FPlayerMappableKeyOptions             PlayerMappableOptions;                             // 0x0(0x40)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UInputAction*                          Action;                                            // 0x60(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  Key;                                               // 0x68(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x1, PropSize: 0x10x80(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_BD : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior;                                   // 0x81(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15AF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        bIsPlayerMappable : 1;                             // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15B0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15B3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15B4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EnhancedInput.DefaultContextSetting
struct FDefaultContextSetting
{
public:
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x0(0x30)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_15B7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
public:
	uint8                                        bIgnoreAllPressedKeysUntilRelease : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ExportObject, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceImmediately : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
public:
	uint8                                        Pad_15B9[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15BC[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15BE[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ElapsedProcessedTime;                              // 0x58(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ElapsedTriggeredTime;                              // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
	struct FInputChord                           InputChord;                                        // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15C4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  FunctionNameToBind;                                // 0x24(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExecuteWhenPaused;                                // 0x2C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15C6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        ComboStepCompletionStates;                         // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TimeToPressKey;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputCancelAction
struct FInputCancelAction
{
public:
	class UInputAction*                          CancelAction;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CancellationStates;                                // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15CE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


