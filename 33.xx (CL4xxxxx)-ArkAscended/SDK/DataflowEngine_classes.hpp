#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DataflowEngine.DataflowBlueprintLibrary
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDataflowBlueprintLibrary* GetDefaultObj();

	class UObject* EvaluateTerminalNodeByName();
};

// 0x28 (0xC0 - 0x98)
// Class DataflowEngine.DataflowEdNode
class UDataflowEdNode : public UEdGraphNode
{
public:
	uint8                                        Pad_2C74[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bRenderInAssetEditor;                              // 0xB8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C75[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDataflowEdNode* GetDefaultObj();

};

// 0x48 (0xA8 - 0x60)
// Class DataflowEngine.Dataflow
class UDataflow : public UEdGraph
{
public:
	uint8                                        Pad_2C76[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bActive;                                           // 0x88(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C77[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       Targets;                                           // 0x90(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UMaterial*                             Material;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDataflow* GetDefaultObj();

};

}


