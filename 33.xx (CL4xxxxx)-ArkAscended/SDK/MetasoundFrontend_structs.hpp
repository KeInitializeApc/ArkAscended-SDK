#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESetParamResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	ESetParamResult_MAX            = 2,
};

enum class EMetasoundFrontendVertexAccessType : int32
{
	Reference                      = 0,
	Value                          = 1,
	Unset                          = 2,
	EMetasoundFrontendVertexAccessType_MAX = 3,
};

enum class EMetasoundFrontendClassType : uint8
{
	External                       = 0,
	Graph                          = 1,
	Input                          = 2,
	Output                         = 3,
	Literal                        = 4,
	Variable                       = 5,
	VariableDeferredAccessor       = 6,
	VariableAccessor               = 7,
	VariableMutator                = 8,
	Template                       = 9,
	Invalid                        = 10,
	EMetasoundFrontendClassType_MAX = 11,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendLiteralType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	UObject                        = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	UObjectArray                   = 11,
	Invalid                        = 12,
	EMetasoundFrontendLiteralType_MAX = 13,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
struct FMetasoundFrontendVersionNumber
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
struct FMetasoundFrontendVersion
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FMetasoundFrontendVersionNumber       Number;                                            // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
struct FMetasoundFrontendVertex
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  TypeName;                                          // 0x8(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 VertexID;                                          // 0x10(0x10)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
struct FMetasoundFrontendLiteral
{
public:
	enum class EMetasoundFrontendLiteralType     Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_2506[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        AsNumDefault;                                      // 0x4(0x4)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 AsBoolean;                                         // 0x8(0x10)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                AsInteger;                                         // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                AsFloat;                                           // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        AsString;                                          // 0x38(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       AsUObject;                                         // 0x48(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
struct FMetasoundFrontendVertexLiteral
{
public:
	struct FGuid                                 VertexID;                                          // 0x0(0x10)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FMetasoundFrontendLiteral             Value;                                             // 0x10(0x58)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
struct FMetasoundFrontendVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  TypeName;                                          // 0x8(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FMetasoundFrontendLiteral             Literal;                                           // 0x10(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ID;                                                // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FGuid                                 VariableNodeID;                                    // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 MutatorNodeID;                                     // 0x88(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FGuid>                         AccessorNodeIDs;                                   // 0x98(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FGuid>                         DeferredAccessorNodeIDs;                           // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
struct FMetasoundFrontendNodeInterface
{
public:
	TArray<struct FMetasoundFrontendVertex>      Inputs;                                            // 0x0(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMetasoundFrontendVertex>      Outputs;                                           // 0x10(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMetasoundFrontendVertex>      Environment;                                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
struct FMetasoundFrontendNodeStyleDisplay
{
public:
	uint8                                        Pad_250A[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
struct FMetasoundFrontendNodeStyle
{
public:
	uint8                                        Pad_250B[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
struct FMetasoundFrontendNode
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FGuid                                 ClassId;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FName                                  Name;                                              // 0x20(0x8)(ConstParm, Net, OutParm)
	struct FMetasoundFrontendNodeInterface       Interface;                                         // 0x28(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals;                                     // 0x58(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
struct FMetasoundFrontendEdge
{
public:
	struct FGuid                                 FromNodeID;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 FromVertexID;                                      // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ToNodeID;                                          // 0x20(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ToVertexID;                                        // 0x30(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
public:
	struct FMetasoundFrontendLiteral             Value;                                             // 0x0(0x58)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	struct FLinearColor                          Color;                                             // 0x58(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
struct FMetasoundFrontendEdgeStyle
{
public:
	struct FGuid                                 NodeID;                                            // 0x0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  OutputName;                                        // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                 // 0x18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
struct FMetasoundFrontendGraphStyle
{
public:
	bool                                         bIsGraphEditable;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_250F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMetasoundFrontendEdgeStyle>   EdgeStyles;                                        // 0x8(0x10)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
struct FMetasoundFrontendGraph
{
public:
	TArray<struct FMetasoundFrontendNode>        Nodes;                                             // 0x0(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMetasoundFrontendEdge>        Edges;                                             // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FMetasoundFrontendVariable>    Variables;                                         // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
struct FMetasoundFrontendVertexMetadata
{
public:
	uint8                                        Pad_2512[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x34 - 0x20)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
public:
	struct FGuid                                 NodeID;                                            // 0x20(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMetasoundFrontendVertexAccessType AccessType;                                        // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
struct FMetasoundFrontendClassStyleDisplay
{
public:
	uint8                                        Pad_2513[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_2514[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x38(0x58)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_2515[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x38(0x58)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x0 (0x34 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
struct FMetasoundFrontendClassEnvironmentVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  TypeName;                                          // 0x8(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsRequired;                                       // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2516[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
struct FMetasoundFrontendInterfaceStyle
{
public:
	uint8                                        Pad_2517[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
struct FMetasoundFrontendClassInterface
{
public:
	TArray<struct FMetasoundFrontendClassInput>  Inputs;                                            // 0x0(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMetasoundFrontendClassOutput> Outputs;                                           // 0x10(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;                                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ChangeID;                                          // 0x30(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
struct FMetasoundFrontendClassName
{
public:
	class FName                                  Namespace;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	class FName                                  Variant;                                           // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
struct FMetasoundFrontendClassMetadata
{
public:
	struct FMetasoundFrontendClassName           ClassName;                                         // 0x0(0x18)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FMetasoundFrontendVersionNumber       Version;                                           // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
	enum class EMetasoundFrontendClassType       Type;                                              // 0x20(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	bool                                         bIsDeprecated;                                     // 0x21(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoUpdateManagesInterface;                       // 0x22(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2519[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 ChangeID;                                          // 0x24(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
struct FMetasoundFrontendClassStyle
{
public:
	uint8                                        Pad_251A[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
struct FMetasoundFrontendClass
{
public:
	uint8                                        Pad_2521[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 ID;                                                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMetasoundFrontendClassMetadata       MetaData;                                          // 0x18(0x34)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2522[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendClassInterface      Interface;                                         // 0x50(0x40)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
struct FMetasoundFrontendGraphClassPresetOptions
{
public:
	bool                                         bIsPreset;                                         // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_2523[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            InputsInheritingDefault;                           // 0x8(0x50)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x88 (0x118 - 0x90)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
public:
	struct FMetasoundFrontendGraph               Graph;                                             // 0x90(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions;                                     // 0xC0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
struct FMetasoundFrontendDocumentMetadata
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
struct FMetasoundFrontendDocument
{
public:
	uint8                                        Pad_2525[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendDocumentMetadata    MetaData;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TSet<struct FMetasoundFrontendVersion>       Interfaces;                                        // 0x20(0x50)(Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FMetasoundFrontendGraphClass          RootGraph;                                         // 0x70(0x118)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMetasoundFrontendGraphClass>  Subgraphs;                                         // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMetasoundFrontendClass>       Dependencies;                                      // 0x198(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FMetasoundFrontendVersion             ArchetypeVersion;                                  // 0x1A8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMetasoundFrontendVersion>     InterfaceVersions;                                 // 0x1B8(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

}


