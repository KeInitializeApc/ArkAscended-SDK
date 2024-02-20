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

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
struct UEnhancedInputComponent_GetBoundActionValue_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputActionValue                     ReturnValue;                                       // 0x8(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
struct UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params
{
public:
	class UInputMappingContext*                  Context;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bForceImmediately;                                 // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12D4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
struct UEnhancedInputLibrary_MakeInputActionValueOfType_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class EInputActionValueType             ValueType;                                         // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12DA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     ReturnValue;                                       // 0x20(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
struct UEnhancedInputLibrary_MakeInputActionValue_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FInputActionValue                     MatchValueType;                                    // 0x18(0x20)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FInputActionValue                     ReturnValue;                                       // 0x38(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
struct UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(Edit, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x98(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12E6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
struct UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(Edit, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UPlayerMappableKeySettings*            ReturnValue;                                       // 0x98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
struct UEnhancedInputLibrary_GetMappingName_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(Edit, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
struct UEnhancedInputLibrary_GetBoundActionValue_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UInputAction*                          Action;                                            // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputActionValue                     ReturnValue;                                       // 0x10(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
struct UEnhancedInputLibrary_Conv_InputActionValueToString_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
struct UEnhancedInputLibrary_Conv_InputActionValueToBool_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1363[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
struct UEnhancedInputLibrary_BreakInputActionValue_Params
{
public:
	struct FInputActionValue                     InActionValue;                                     // 0x0(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	double                                       X;                                                 // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class EInputActionValueType             Type;                                              // 0x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_13A1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
struct UEnhancedInputPlatformData_GetContextRedirect_Params
{
public:
	class UInputMappingContext*                  InContext;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UInputMappingContext*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
struct IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	enum class EInputMappingRebuildType          RebuildType;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
struct IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
struct IEnhancedInputSubsystemInterface_RemoveMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1443[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
struct IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_144E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
struct IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
struct IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params
{
public:
	TArray<class UInputMappingContext*>          PrioritizedActiveContexts;                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UInputMappingContext*                  InputContext;                                      // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UInputAction*                          Action;                                            // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  Key;                                               // 0x20(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x38(0x10)(Edit, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x48(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x49(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1478[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
struct IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params
{
public:
	class UInputMappingContext*                  InputContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UInputAction*                          Action;                                            // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  Key;                                               // 0x10(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x28(0x10)(Edit, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x39(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1485[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
struct IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x1C(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FKey                                  ReturnValue;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x20(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x30(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x34(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
struct IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Value;                                             // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
struct IEnhancedInputSubsystemInterface_InjectInputForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
struct IEnhancedInputSubsystemInterface_HasMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        OutFoundPriority;                                  // 0x8(0x4)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_14CB[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
struct IEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
struct IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
struct IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14D5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
struct IEnhancedInputSubsystemInterface_AddMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Priority;                                          // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FModifyContextOptions                 Options;                                           // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
struct UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_14E5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
struct UEnhancedInputWorldSubsystem_AddActorInputComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapKey
struct UInputMappingContext_UnmapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  Key;                                               // 0x8(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
struct UInputMappingContext_UnmapAllKeysFromAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAction
struct UInputMappingContext_UnmapAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function EnhancedInput.InputMappingContext.MapKey
struct UInputMappingContext_MapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  ToKey;                                             // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x20(0x98)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.ModifyRaw
struct UInputModifier_ModifyRaw_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	struct FInputActionValue                     CurrentValue;                                      // 0x8(0x20)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DeltaTime;                                         // 0x28(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_150C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputActionValue                     ReturnValue;                                       // 0x30(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.GetVisualizationColor
struct UInputModifier_GetVisualizationColor_Params
{
public:
	struct FInputActionValue                     SampleValue;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputActionValue                     FinalValue;                                        // 0x20(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ReturnValue;                                       // 0x40(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.InputTrigger.UpdateState
struct UInputTrigger_UpdateState_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	struct FInputActionValue                     ModifiedValue;                                     // 0x8(0x20)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        DeltaTime;                                         // 0x28(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class ETriggerState                     ReturnValue;                                       // 0x2C(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1535[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.InputTrigger.IsActuated
struct UInputTrigger_IsActuated_Params
{
public:
	struct FInputActionValue                     ForValue;                                          // 0x0(0x20)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_153E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.InputTrigger.GetTriggerType
struct UInputTrigger_GetTriggerType_Params
{
public:
	enum class ETriggerType                      ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
struct UPlayerMappableInputConfig_IsDeprecated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
struct UPlayerMappableInputConfig_GetPlayerMappableKeys_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
struct UPlayerMappableInputConfig_GetMetadata_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
struct UPlayerMappableInputConfig_GetMappingContexts_Params
{
public:
	TMap<class UInputMappingContext*, int32>     ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
struct UPlayerMappableInputConfig_GetMappingByName_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x8(0x98)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
struct UPlayerMappableInputConfig_GetKeysBoundToAction_Params
{
public:
	class UInputAction*                          InAction;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
struct UPlayerMappableInputConfig_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
struct UPlayerMappableInputConfig_GetConfigName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


