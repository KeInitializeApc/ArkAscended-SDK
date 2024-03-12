#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptimusDiagnosticLevel : uint8
{
	None                           = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	EOptimusDiagnosticLevel_MAX    = 4,
};

enum class EOptimusBufferWriteType : uint8
{
	Write                          = 0,
	WriteAtomicAdd                 = 1,
	WriteAtomicMin                 = 2,
	WriteAtomicMax                 = 3,
	Count                          = 4,
	EOptimusBufferWriteType_MAX    = 5,
};

enum class EOptimusSkinnedMeshExecDomain : uint8
{
	None                           = 0,
	Vertex                         = 1,
	Triangle                       = 2,
	EOptimusSkinnedMeshExecDomain_MAX = 3,
};

enum class EOptimusTerminalType : int32
{
	Unknown                        = 0,
	Entry                          = 1,
	Return                         = 2,
	EOptimusTerminalType_MAX       = 3,
};

enum class EOptimusDataDomainType : int32
{
	Dimensional                    = 0,
	Expression                     = 1,
	EOptimusDataDomainType_MAX     = 2,
};

enum class EOptimusDataTypeUsageFlags : uint8
{
	None                           = 0,
	Resource                       = 1,
	Variable                       = 2,
	AnimAttributes                 = 4,
	EOptimusDataTypeUsageFlags_MAX = 5,
};

enum class EOptimusDataTypeFlags : uint8
{
	None                           = 0,
	IsStructType                   = 1,
	ShowElements                   = 2,
	EOptimusDataTypeFlags_MAX      = 3,
};

enum class EOptimusNodeGraphType : int32
{
	Setup                          = 0,
	Update                         = 1,
	ExternalTrigger                = 2,
	Function                       = 3,
	SubGraph                       = 4,
	Transient                      = 5,
	EOptimusNodeGraphType_MAX      = 6,
};

enum class EOptimusNodePinStorageType : uint8
{
	Value                          = 0,
	Resource                       = 1,
	EOptimusNodePinStorageType_MAX = 2,
};

enum class EOptimusNodePinDirection : uint8
{
	Unknown                        = 0,
	Input                          = 1,
	Output                         = 2,
	EOptimusNodePinDirection_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct OptimusCore.OptimusExecutionDomain
struct FOptimusExecutionDomain
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusDataTypeRef
struct FOptimusDataTypeRef
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.Optimus_ShaderBinding
struct FOptimus_ShaderBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct OptimusCore.OptimusValidatedName
struct FOptimusValidatedName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OptimusCore.OptimusDataDomain
struct FOptimusDataDomain
{
public:
	enum class EOptimusDataDomainType            Type;                                              // 0x0(0x4)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_625[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          DimensionNames;                                    // 0x8(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Multiplier;                                        // 0x18(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_626[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Expression;                                        // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	TArray<class FName>                          LevelNames;                                        // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBinding
struct FOptimusParameterBinding
{
public:
	struct FOptimusValidatedName                 Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBindingArray
struct FOptimusParameterBindingArray
{
public:
	TArray<struct FOptimusParameterBinding>      InnerArray;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OptimusCore.OptimusShaderText
struct FOptimusShaderText
{
public:
	class FString                                Declarations;                                      // 0x0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShaderText;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusAction
struct FOptimusAction
{
public:
	uint8                                        Pad_62C[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusCompoundAction
struct FOptimusCompoundAction : public FOptimusAction
{
public:
	uint8                                        Pad_62D[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_AddBinding
struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{
public:
	uint8                                        Pad_630[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RemoveBinding
struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{
public:
	uint8                                        Pad_631[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RenameBinding
struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{
public:
	uint8                                        Pad_632[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_SetComponentSource
struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{
public:
	uint8                                        Pad_633[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_RenameNode
struct FOptimusNodeAction_RenameNode : public FOptimusAction
{
public:
	uint8                                        Pad_634[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_MoveNode
struct FOptimusNodeAction_MoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_635[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinValue
struct FOptimusNodeAction_SetPinValue : public FOptimusAction
{
public:
	uint8                                        Pad_636[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinName
struct FOptimusNodeAction_SetPinName : public FOptimusAction
{
public:
	uint8                                        Pad_637[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinType
struct FOptimusNodeAction_SetPinType : public FOptimusAction
{
public:
	uint8                                        Pad_638[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinDataDomain
struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_639[0x90];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x50 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_ConnectAdderPin
struct FOptimusNodeAction_ConnectAdderPin : public FOptimusAction
{
public:
	uint8                                        Pad_63A[0x38];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
{
public:
	uint8                                        Pad_63C[0xA0];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_AddPin
struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_AddGroupingPin
struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_RemovePin
struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_MovePin
struct FOptimusNodeAction_MovePin : public FOptimusAction
{
public:
	uint8                                        Pad_640[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x90 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddGraph
struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{
public:
	uint8                                        Pad_641[0x78];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveGraph
struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{
public:
	uint8                                        Pad_642[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RenameGraph
struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{
public:
	uint8                                        Pad_644[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddNode
struct FOptimusNodeGraphAction_AddNode : public FOptimusAction
{
public:
	uint8                                        Pad_645[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_DuplicateNode
struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{
public:
	uint8                                        Pad_647[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveNode
struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_648[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{
public:
	uint8                                        Pad_64D[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x40 - 0x40)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddLink
struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveLink
struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
{
public:
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
{
public:
	uint8                                        Pad_651[0x98];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{
public:
	uint8                                        Pad_652[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x70 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_AddResource
struct FOptimusResourceAction_AddResource : public FOptimusAction
{
public:
	uint8                                        Pad_653[0x58];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RemoveResource
struct FOptimusResourceAction_RemoveResource : public FOptimusAction
{
public:
	uint8                                        Pad_654[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RenameResource
struct FOptimusResourceAction_RenameResource : public FOptimusAction
{
public:
	uint8                                        Pad_655[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataType
struct FOptimusResourceAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_657[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataDomain
struct FOptimusResourceAction_SetDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_65B[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_AddVariable
struct FOptimusVariableAction_AddVariable : public FOptimusAction
{
public:
	uint8                                        Pad_65D[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RemoveVariable
struct FOptimusVariableAction_RemoveVariable : public FOptimusAction
{
public:
	uint8                                        Pad_65F[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RenameVariable
struct FOptimusVariableAction_RenameVariable : public FOptimusAction
{
public:
	uint8                                        Pad_660[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_SetDataType
struct FOptimusVariableAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_661[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeDescription
struct FOptimusAnimAttributeDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FName                                  BoneName;                                          // 0x10(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOptimusValueContainer*                DefaultValue;                                      // 0x28(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HlslId;                                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PinName;                                           // 0x40(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeArray
struct FOptimusAnimAttributeArray
{
public:
	TArray<struct FOptimusAnimAttributeDescription> InnerArray;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct OptimusCore.OptimusDebugDrawParameters
struct FOptimusDebugDrawParameters
{
public:
	bool                                         bForceEnable;                                      // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_669[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLineCount;                                      // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxTriangleCount;                                  // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxCharacterCount;                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FontSize;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusGraphVariableDescription
struct FOptimusGraphVariableDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                Value;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	int32                                        Offset;                                            // 0x28(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_66B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusSecondaryInputBindingsGroup
struct FOptimusSecondaryInputBindingsGroup
{
public:
	struct FOptimusValidatedName                 GroupName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOptimusParameterBindingArray         BindingArray;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_GetVariable_DuplicationInfo
struct FOptimusNode_GetVariable_DuplicationInfo
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DefaultValue;                                      // 0x18(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{
public:
	class FName                                  ResourceName;                                      // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusDataType
struct FOptimusDataType
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	struct FShaderValueTypeHandle                ShaderValueType;                                   // 0x20(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
	int32                                        ShaderValueSize;                                   // 0x28(0x4)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TypeCategory;                                      // 0x2C(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x34(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasCustomPinColor;                                // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_671[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CustomPinColor;                                    // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOptimusDataTypeUsageFlags        UsageFlags;                                        // 0x50(0x1)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOptimusDataTypeFlags             TypeFlags;                                         // 0x51(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_673[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusComputeGraphInfo
struct FOptimusComputeGraphInfo
{
public:
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  GraphName;                                         // 0x4(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_677[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOptimusComputeGraph*                  ComputeGraph;                                      // 0x10(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceExecInfo
struct FOptimusDeformerInstanceExecInfo
{
public:
	class FName                                  GraphName;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x8(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_67A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UComputeGraph*                         ComputeGraph;                                      // 0x10(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceComponentBinding
struct FOptimusDeformerInstanceComponentBinding
{
public:
	class FName                                  ProviderName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ComponentName;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusVariableMetaDataEntry
struct FOptimusVariableMetaDataEntry
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

}


