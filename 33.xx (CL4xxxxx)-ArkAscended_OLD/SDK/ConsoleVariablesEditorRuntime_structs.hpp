#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
struct FConsoleVariablesEditorAssetSaveData
{
public:
	class FString                                CommandName;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                CommandValueAsString;                              // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECheckBoxState                    CheckedState;                                      // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1030[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}

