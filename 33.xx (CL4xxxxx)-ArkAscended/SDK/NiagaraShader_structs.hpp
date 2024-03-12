#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                     = 0,
	Linear                         = 1,
	Blur1                          = 2,
	Blur2                          = 3,
	Blur3                          = 4,
	Blur4                          = 5,
	ENiagaraMipMapGenerationType_MAX = 6,
};

enum class ENiagaraGpuDispatchType : uint8
{
	OneD                           = 0,
	TwoD                           = 1,
	ThreeD                         = 2,
	Custom                         = 3,
	ENiagaraGpuDispatchType_MAX    = 4,
};

enum class ENiagaraDirectDispatchElementType : uint8
{
	NumThreads                     = 0,
	NumThreadsNoClipping           = 1,
	NumGroups                      = 2,
	ENiagaraDirectDispatchElementType_MAX = 3,
};

enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                         = 0,
	OnSimulationReset              = 1,
	NotOnSimulationReset           = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3,
};

enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                            = 0,
	Display                        = 1,
	Warning                        = 2,
	Error                          = 3,
	FNiagaraCompileEventSeverity_MAX = 4,
};

enum class EFNiagaraCompileEventSource : uint8
{
	Unset                          = 0,
	ScriptDependency               = 1,
	FNiagaraCompileEventSource_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  SimulationStageName;                               // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EnabledBinding;                                    // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ElementCountXBinding;                              // 0x10(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ElementCountYBinding;                              // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ElementCountZBinding;                              // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraIterationSource           IterationSourceType;                               // 0x28(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  IterationDataInterface;                            // 0x2C(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  IterationDirectBinding;                            // 0x34(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0x3C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bWritesParticles : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPartialParticleUpdate : 1;                        // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGpuIndirectDispatch : 1;                          // Mask: 0x8, PropSize: 0x10x40(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_11 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_201[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ParticleIterationStateBinding;                     // 0x44(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_202[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x50(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          OutputDestinations;                                // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          InputDataInterfaces;                               // 0x68(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumIterations;                                     // 0x78(0x4)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  NumIterationsBinding;                              // 0x7C(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraGpuDispatchType           GpuDispatchType;                                   // 0x84(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDirectDispatchElementType GpuDirectDispatchElementType;                      // 0x85(0x1)(Edit, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_205[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            GpuDispatchNumThreads;                             // 0x88(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_206[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
	uint8                                        Pad_209[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraVariableCommonReference> VariadicInputs;                                    // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariableCommonReference> VariadicOutputs;                                   // 0x38(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
	class FString                                DataInterfaceHLSLSymbol;                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DIClassName;                                       // 0x10(0x10)(EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       ShaderParametersOffset;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x28(0x10)(ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
struct FNiagaraShaderScriptExternalConstant
{
public:
	class FName                                  Type;                                              // 0x0(0x8)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
struct FNiagaraShaderScriptParametersMetadata
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        LooseMetadataNames;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExternalConstantsInterpolated;                    // 0x20(0x1)(BlueprintVisible, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_211[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_212[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
public:
	enum class EFNiagaraCompileEventSeverity     Severity;                                          // 0x0(0x1)(Edit, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_213[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Message;                                           // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                ShortDescription;                                  // 0x18(0x10)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDismissable;                                      // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_215[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 NodeGuid;                                          // 0x2C(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 PinGuid;                                           // 0x3C(0x10)(ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_217[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGuid>                         StackGuids;                                        // 0x50(0x10)(ConstParm, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFNiagaraCompileEventSource       Source;                                            // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_218[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


