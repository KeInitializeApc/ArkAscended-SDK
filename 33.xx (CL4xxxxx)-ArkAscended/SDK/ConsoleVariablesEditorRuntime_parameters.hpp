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

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
struct UConsoleVariablesAsset_SetVariableCollectionDescription_Params
{
public:
	class FString                                InVariableCollectionDescription;                   // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
struct UConsoleVariablesAsset_ReplaceSavedCommands_Params
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement;                                       // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
struct UConsoleVariablesAsset_RemoveConsoleVariable_Params
{
public:
	class FString                                InCommandString;                                   // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B90[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
struct UConsoleVariablesAsset_GetVariableCollectionDescription_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
struct UConsoleVariablesAsset_GetSavedCommandsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
struct UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params
{
public:
	bool                                         bOnlyIncludeChecked;                               // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B9F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
struct UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params
{
public:
	bool                                         bOnlyIncludeChecked;                               // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BAD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
struct UConsoleVariablesAsset_GetSavedCommands_Params
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
struct UConsoleVariablesAsset_FindSavedDataByCommandString_Params
{
public:
	class FString                                InCommandString;                                   // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FConsoleVariablesEditorAssetSaveData  OutValue;                                          // 0x10(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class ESearchCase                       SearchCase;                                        // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x39(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_BBA[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
struct UConsoleVariablesAsset_ExecuteSavedCommands_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bOnlyIncludeChecked;                               // 0x8(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BBD[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
struct UConsoleVariablesAsset_CopyFrom_Params
{
public:
	class UConsoleVariablesAsset*                InAssetToCopy;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
struct UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params
{
public:
	struct FConsoleVariablesEditorAssetSaveData  InData;                                            // 0x0(0x28)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


