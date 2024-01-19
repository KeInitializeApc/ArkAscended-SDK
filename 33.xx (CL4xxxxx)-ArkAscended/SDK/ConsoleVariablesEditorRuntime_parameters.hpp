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
	class FString                                InVariableCollectionDescription;                   // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
struct UConsoleVariablesAsset_ReplaceSavedCommands_Params
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
struct UConsoleVariablesAsset_RemoveConsoleVariable_Params
{
public:
	class FString                                InCommandString;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1331[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
struct UConsoleVariablesAsset_GetVariableCollectionDescription_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
struct UConsoleVariablesAsset_GetSavedCommandsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
struct UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params
{
public:
	bool                                         bOnlyIncludeChecked;                               // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_133B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        ReturnValue;                                       // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
struct UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params
{
public:
	bool                                         bOnlyIncludeChecked;                               // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1342[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
struct UConsoleVariablesAsset_GetSavedCommands_Params
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
struct UConsoleVariablesAsset_FindSavedDataByCommandString_Params
{
public:
	class FString                                InCommandString;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FConsoleVariablesEditorAssetSaveData  OutValue;                                          // 0x10(0x28)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESearchCase                       SearchCase;                                        // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1348[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
struct UConsoleVariablesAsset_ExecuteSavedCommands_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bOnlyIncludeChecked;                               // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_134D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
struct UConsoleVariablesAsset_CopyFrom_Params
{
public:
	class UConsoleVariablesAsset*                InAssetToCopy;                                     // 0x0(0x8)(Edit, BlueprintVisible, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
struct UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params
{
public:
	struct FConsoleVariablesEditorAssetSaveData  InData;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

}
}


