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

// 0xE8 (0xE8 - 0x0)
// ScriptStruct DataflowCore.DataflowNode
struct FDataflowNode
{
public:
	uint8                                        Pad_2D20[0xC8];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bActive;                                           // 0xC8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D21[0x1F];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0xE8 - 0xE8)
// ScriptStruct DataflowCore.DataflowTerminalNode
struct FDataflowTerminalNode : public FDataflowNode
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.DataflowSelection
struct FDataflowSelection
{
public:
	uint8                                        Pad_2D23[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowVertexSelection
struct FDataflowVertexSelection : public FDataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowFaceSelection
struct FDataflowFaceSelection : public FDataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowTransformSelection
struct FDataflowTransformSelection : public FDataflowSelection
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DataflowCore.DataflowConnection
struct FDataflowConnection
{
public:
	uint8                                        Pad_2D24[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct DataflowCore.DataflowInput
struct FDataflowInput : public FDataflowConnection
{
public:
	uint8                                        Pad_2D25[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x68 - 0x40)
// ScriptStruct DataflowCore.DataflowOutput
struct FDataflowOutput : public FDataflowConnection
{
public:
	uint8                                        Pad_2D26[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.NodeColors
struct FNodeColors
{
public:
	struct FLinearColor                          NodeTitleColor;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          NodeBodyTintColor;                                 // 0x10(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

}


