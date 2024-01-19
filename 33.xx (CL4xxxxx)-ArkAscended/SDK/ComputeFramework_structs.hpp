#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComputeKernelFlags : uint8
{
	IsDefaultKernel                = 1,
	IsolatedMemoryWrites           = 2,
	EComputeKernelFlags_MAX        = 3,
};

enum class EShaderFundamentalType : uint8
{
	Bool                           = 0,
	Int                            = 1,
	Uint                           = 2,
	Float                          = 3,
	Struct                         = 4,
	None                           = 255,
	EShaderFundamentalType_MAX     = 256,
};

enum class EShaderFundamentalDimensionType : uint8
{
	Scalar                         = 0,
	Vector                         = 1,
	Matrix                         = 2,
	EShaderFundamentalDimensionType_MAX = 3,
};

enum class EShaderParamBindingType : uint8
{
	None                           = 0,
	ConstantParameter              = 1,
	ReadOnlyResource               = 2,
	ReadWriteResource              = 3,
	EShaderParamBindingType_MAX    = 4,
};

enum class EShaderResourceType : uint8
{
	None                           = 0,
	Texture1D                      = 1,
	Texture2D                      = 2,
	Texture3D                      = 3,
	TextureCube                    = 4,
	Buffer                         = 5,
	StructuredBuffer               = 6,
	ByteAddressBuffer              = 7,
	EShaderResourceType_MAX        = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct ComputeFramework.ComputeGraphEdge
struct FComputeGraphEdge
{
public:
	int32                                        KernelIndex;                                       // 0x0(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        KernelBindingIndex;                                // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataInterfaceIndex;                                // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataInterfaceBindingIndex;                         // 0xC(0x4)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bKernelInput;                                      // 0x10(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FD[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                BindingFunctionNameOverride;                       // 0x18(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BindingFunctionNamespace;                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeGraphInstance
struct FComputeGraphInstance
{
public:
	TArray<class UComputeDataProvider*>          DataProviders;                                     // 0x0(0x10)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FE[0x8];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationBool
struct FComputeKernelPermutationBool
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         Value;                                             // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_100[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationSet
struct FComputeKernelPermutationSet
{
public:
	TArray<struct FComputeKernelPermutationBool> BooleanOptions;                                    // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinition
struct FComputeKernelDefinition
{
public:
	class FString                                Symbol;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Define;                                            // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinitionSet
struct FComputeKernelDefinitionSet
{
public:
	TArray<struct FComputeKernelDefinition>      Defines;                                           // 0x0(0x10)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationVector
struct FComputeKernelPermutationVector
{
public:
	TMap<class FString, uint32>                  Permutations;                                      // 0x0(0x50)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       BitCount;                                          // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_104[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueTypeHandle
struct FShaderValueTypeHandle
{
public:
	uint8                                        Pad_105[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueType
struct FShaderValueType
{
public:
	enum class EShaderFundamentalType            Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	enum class EShaderFundamentalDimensionType   DimensionType;                                     // 0x1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_107[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x4(0x8)(ConstParm, Net, OutParm)
	bool                                         bIsDynamicArray;                                   // 0xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_109[0x13];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ComputeFramework.ShaderParamTypeDefinition
struct FShaderParamTypeDefinition
{
public:
	class FString                                TypeDeclaration;                                   // 0x0(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Name;                                              // 0x10(0x10)(ConstParm, Net, OutParm)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x20(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ArrayElementCount;                                 // 0x28(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EShaderParamBindingType           BindingType;                                       // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EShaderResourceType               ResourceType;                                      // 0x2B(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ComputeFramework.ShaderFunctionDefinition
struct FShaderFunctionDefinition
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	TArray<struct FShaderParamTypeDefinition>    ParamTypes;                                        // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasReturnType;                                    // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_110[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


