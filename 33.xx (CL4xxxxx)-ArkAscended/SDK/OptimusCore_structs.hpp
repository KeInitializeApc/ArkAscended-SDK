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
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.Optimus_ShaderBinding
struct FOptimus_ShaderBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
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
	enum class EOptimusDataDomainType            Type;                                              // 0x0(0x4)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_9D6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          DimensionNames;                                    // 0x8(0x10)(Edit, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        Multiplier;                                        // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Expression;                                        // 0x20(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FName>                          LevelNames;                                        // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBinding
struct FOptimusParameterBinding
{
public:
	struct FOptimusValidatedName                 Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBindingArray
struct FOptimusParameterBindingArray
{
public:
	TArray<struct FOptimusParameterBinding>      InnerArray;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OptimusCore.OptimusShaderText
struct FOptimusShaderText
{
public:
	class FString                                Declarations;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FString                                ShaderText;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusAction
struct FOptimusAction
{
public:
	uint8                                        Pad_9DD[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusCompoundAction
struct FOptimusCompoundAction : public FOptimusAction
{
public:
	uint8                                        Pad_9DE[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_AddBinding
struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{
public:
	uint8                                        Pad_9E0[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RemoveBinding
struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{
public:
	uint8                                        Pad_9E1[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RenameBinding
struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{
public:
	uint8                                        Pad_9E2[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_SetComponentSource
struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{
public:
	uint8                                        Pad_9E3[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_RenameNode
struct FOptimusNodeAction_RenameNode : public FOptimusAction
{
public:
	uint8                                        Pad_9E4[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_MoveNode
struct FOptimusNodeAction_MoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_9E5[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinValue
struct FOptimusNodeAction_SetPinValue : public FOptimusAction
{
public:
	uint8                                        Pad_9E6[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinName
struct FOptimusNodeAction_SetPinName : public FOptimusAction
{
public:
	uint8                                        Pad_9E7[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinType
struct FOptimusNodeAction_SetPinType : public FOptimusAction
{
public:
	uint8                                        Pad_9EA[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinDataDomain
struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_9EB[0x90];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x50 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_ConnectAdderPin
struct FOptimusNodeAction_ConnectAdderPin : public FOptimusAction
{
public:
	uint8                                        Pad_9EC[0x38];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
{
public:
	uint8                                        Pad_9EE[0xA0];                                     // Fixing Size Of Struct > TateDumper <
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
	uint8                                        Pad_9EF[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x90 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddGraph
struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{
public:
	uint8                                        Pad_9F0[0x78];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveGraph
struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{
public:
	uint8                                        Pad_9F2[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RenameGraph
struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{
public:
	uint8                                        Pad_9F3[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddNode
struct FOptimusNodeGraphAction_AddNode : public FOptimusAction
{
public:
	uint8                                        Pad_9F5[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_DuplicateNode
struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{
public:
	uint8                                        Pad_9F7[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveNode
struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_9F9[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{
public:
	uint8                                        Pad_9FA[0x28];                                     // Fixing Size Of Struct > TateDumper <
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
	uint8                                        Pad_9FB[0x98];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{
public:
	uint8                                        Pad_9FC[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x70 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_AddResource
struct FOptimusResourceAction_AddResource : public FOptimusAction
{
public:
	uint8                                        Pad_9FD[0x58];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RemoveResource
struct FOptimusResourceAction_RemoveResource : public FOptimusAction
{
public:
	uint8                                        Pad_9FE[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RenameResource
struct FOptimusResourceAction_RenameResource : public FOptimusAction
{
public:
	uint8                                        Pad_9FF[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataType
struct FOptimusResourceAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_A00[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataDomain
struct FOptimusResourceAction_SetDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_A01[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_AddVariable
struct FOptimusVariableAction_AddVariable : public FOptimusAction
{
public:
	uint8                                        Pad_A02[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RemoveVariable
struct FOptimusVariableAction_RemoveVariable : public FOptimusAction
{
public:
	uint8                                        Pad_A03[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RenameVariable
struct FOptimusVariableAction_RenameVariable : public FOptimusAction
{
public:
	uint8                                        Pad_A0D[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_SetDataType
struct FOptimusVariableAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_A0F[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeDescription
struct FOptimusAnimAttributeDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FName                                  BoneName;                                          // 0x10(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x18(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UOptimusValueContainer*                DefaultValue;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HlslId;                                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  PinName;                                           // 0x40(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeArray
struct FOptimusAnimAttributeArray
{
public:
	TArray<struct FOptimusAnimAttributeDescription> InnerArray;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct OptimusCore.OptimusDebugDrawParameters
struct FOptimusDebugDrawParameters
{
public:
	bool                                         bForceEnable;                                      // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A16[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLineCount;                                      // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        MaxTriangleCount;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        MaxCharacterCount;                                 // 0xC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusGraphVariableDescription
struct FOptimusGraphVariableDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x10(0x8)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                Value;                                             // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int32                                        Offset;                                            // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_A18[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusSecondaryInputBindingsGroup
struct FOptimusSecondaryInputBindingsGroup
{
public:
	struct FOptimusValidatedName                 GroupName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FOptimusParameterBindingArray         BindingArray;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_GetVariable_DuplicationInfo
struct FOptimusNode_GetVariable_DuplicationInfo
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FString                                DefaultValue;                                      // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{
public:
	class FName                                  ResourceName;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusDataType
struct FOptimusDataType
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	struct FShaderValueTypeHandle                ShaderValueType;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
	int32                                        ShaderValueSize;                                   // 0x28(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  TypeCategory;                                      // 0x2C(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x34(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bHasCustomPinColor;                                // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A27[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CustomPinColor;                                    // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EOptimusDataTypeUsageFlags        UsageFlags;                                        // 0x50(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EOptimusDataTypeFlags             TypeFlags;                                         // 0x51(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A28[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusComputeGraphInfo
struct FOptimusComputeGraphInfo
{
public:
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x0(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  GraphName;                                         // 0x4(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A29[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOptimusComputeGraph*                  ComputeGraph;                                      // 0x10(0x8)(ConstParm, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceExecInfo
struct FOptimusDeformerInstanceExecInfo
{
public:
	class FName                                  GraphName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x8(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UComputeGraph*                         ComputeGraph;                                      // 0x10(0x8)(ConstParm, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0x18(0x18)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceComponentBinding
struct FOptimusDeformerInstanceComponentBinding
{
public:
	class FName                                  ProviderName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  ComponentName;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusVariableMetaDataEntry
struct FOptimusVariableMetaDataEntry
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

}


