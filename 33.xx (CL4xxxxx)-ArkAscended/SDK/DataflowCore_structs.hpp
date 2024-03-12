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
	uint8                                        Pad_1833[0xC8];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bActive;                                           // 0xC8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1834[0x1F];                                    // Fixing Size Of Struct > TateDumper <
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
	uint8                                        Pad_1835[0x20];                                    // Fixing Size Of Struct > TateDumper <
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
	uint8                                        Pad_183C[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct DataflowCore.DataflowInput
struct FDataflowInput : public FDataflowConnection
{
public:
	uint8                                        Pad_183D[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x68 - 0x40)
// ScriptStruct DataflowCore.DataflowOutput
struct FDataflowOutput : public FDataflowConnection
{
public:
	uint8                                        Pad_183E[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.NodeColors
struct FNodeColors
{
public:
	struct FLinearColor                          NodeTitleColor;                                    // 0x0(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          NodeBodyTintColor;                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


