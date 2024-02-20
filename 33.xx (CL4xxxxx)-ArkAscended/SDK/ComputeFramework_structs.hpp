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
	int32                                        KernelIndex;                                       // 0x0(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        KernelBindingIndex;                                // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataInterfaceIndex;                                // 0x8(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataInterfaceBindingIndex;                         // 0xC(0x4)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bKernelInput;                                      // 0x10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                BindingFunctionNameOverride;                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BindingFunctionNamespace;                          // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeGraphInstance
struct FComputeGraphInstance
{
public:
	TArray<class UComputeDataProvider*>          DataProviders;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AD[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationBool
struct FComputeKernelPermutationBool
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         Value;                                             // 0x10(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1AE[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationSet
struct FComputeKernelPermutationSet
{
public:
	TArray<struct FComputeKernelPermutationBool> BooleanOptions;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinition
struct FComputeKernelDefinition
{
public:
	class FString                                Symbol;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Define;                                            // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinitionSet
struct FComputeKernelDefinitionSet
{
public:
	TArray<struct FComputeKernelDefinition>      Defines;                                           // 0x0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationVector
struct FComputeKernelPermutationVector
{
public:
	TMap<class FString, uint32>                  Permutations;                                      // 0x0(0x50)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       BitCount;                                          // 0x50(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueTypeHandle
struct FShaderValueTypeHandle
{
public:
	uint8                                        Pad_1B2[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueType
struct FShaderValueType
{
public:
	enum class EShaderFundamentalType            Type;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	enum class EShaderFundamentalDimensionType   DimensionType;                                     // 0x1(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B3[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x4(0x8)(ConstParm, Net, OutParm)
	bool                                         bIsDynamicArray;                                   // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B4[0x13];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ComputeFramework.ShaderParamTypeDefinition
struct FShaderParamTypeDefinition
{
public:
	class FString                                TypeDeclaration;                                   // 0x0(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Name;                                              // 0x10(0x10)(ConstParm, Net, OutParm)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x20(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ArrayElementCount;                                 // 0x28(0x2)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EShaderParamBindingType           BindingType;                                       // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EShaderResourceType               ResourceType;                                      // 0x2B(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ComputeFramework.ShaderFunctionDefinition
struct FShaderFunctionDefinition
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	TArray<struct FShaderParamTypeDefinition>    ParamTypes;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasReturnType;                                    // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B6[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


