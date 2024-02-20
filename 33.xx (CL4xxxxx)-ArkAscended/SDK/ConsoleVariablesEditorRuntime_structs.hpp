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
	class FString                                CommandName;                                       // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                CommandValueAsString;                              // 0x10(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECheckBoxState                    CheckedState;                                      // 0x20(0x1)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_BC5[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


