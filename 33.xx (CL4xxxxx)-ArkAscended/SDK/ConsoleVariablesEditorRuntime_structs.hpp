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
	class FString                                CommandName;                                       // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                CommandValueAsString;                              // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ECheckBoxState                    CheckedState;                                      // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_17AE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


