#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class Niagara.NDIRenderTargetVolumeSimCacheData
class UNDIRenderTargetVolumeSimCacheData : public UObject
{
public:
	class FName                                  CompressionType;                                   // 0x28(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNDIRenderTargetVolumeSimCacheFrame> Frames;                                            // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UNDIRenderTargetVolumeSimCacheData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraConvertInPlaceUtilityBase
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraConvertInPlaceUtilityBase* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelReader
class UNiagaraDataChannelReader : public UObject
{
public:
	uint8                                        Pad_387[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelReader* GetDefaultObj();

	struct FVector4 ReadVector4(class FName* VarName);
	struct FVector2D ReadVector2D(class FName* VarName);
	struct FVector ReadVector(class FName* VarName);
	struct FQuat ReadQuat(class FName* VarName);
	struct FLinearColor ReadLinearColor(class FName* VarName);
	int32 ReadInt(class FName* VarName);
	double ReadFloat(class FName* VarName);
	bool ReadBool(class FName* VarName);
	int32 Num();
	bool InitAccess(class UActorComponent** OwningComponent);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelWriter
class UNiagaraDataChannelWriter : public UObject
{
public:
	uint8                                        Pad_39D[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelWriter* GetDefaultObj();

	int32 WriteVector4(class FName* VarName, struct FVector4* InData);
	int32 WriteVector2D(class FName* VarName, struct FVector2D* InData);
	int32 WriteVector(class FName* VarName, struct FVector* InData);
	int32 WriteSpawnInfo(class FName* VarName, struct FNiagaraSpawnInfo* InData);
	int32 WriteQuat(class FName* VarName, struct FQuat* InData);
	int32 WriteLinearColor(class FName* VarName, struct FLinearColor* InData);
	int32 WriteInt(class FName* VarName, int32* InData);
	int32 WriteFloat(class FName* VarName, double* InData);
	int32 WriteBool(class FName* VarName, bool* InData);
	int32 Num();
	bool InitWrite(class UActorComponent** OwningComponent, int32* Count, bool* bVisibleToGame, bool* bVisibleToCPU, bool* bVisibleToGPU);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataChannelDefinitions
class UNiagaraDataChannelDefinitions : public UObject
{
public:
	TArray<class UNiagaraDataChannel*>           DataChannels;                                      // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelDefinitions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraDataChannelHandler
class UNiagaraDataChannelHandler : public UObject
{
public:
	class UNiagaraDataChannel*                   DataChannel;                                       // 0x28(0x8)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraDataChannelWriter*             Writer;                                            // 0x58(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraDataChannelReader*             Reader;                                            // 0x60(0x8)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler* GetDefaultObj();

	class UNiagaraDataChannelWriter* GetDataChannelWriter();
	class UNiagaraDataChannelReader* GetDataChannelReader();
};

// 0x110 (0x138 - 0x28)
// Class Niagara.NiagaraDataChannel
class UNiagaraDataChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bKeepPreviousFrameData;                            // 0x40(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraDataSetCompiledData           CompiledData;                                      // 0x48(0x48)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraDataSetCompiledData           CompiledDataGPU;                                   // 0x90(0x48)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraDataChannelGameDataLayout     GameDataLayout;                                    // 0xD8(0x60)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataChannel* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class Niagara.NiagaraDataChannel_Global
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannel_Global* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class Niagara.NiagaraDataChannelHandler_Global
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{
public:
	uint8                                        Pad_3A9[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler_Global* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_3AB[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterface* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelRead
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataChannelReference          Channel;                                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bReadCurrentFrame;                                 // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNDIDataChannelCompiledData           CompiledData;                                      // 0x48(0x68)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelRead* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Niagara.NiagaraDataInterfaceDataChannelSpawn
class UNiagaraDataInterfaceDataChannelSpawn : public UNiagaraDataInterfaceDataChannelRead
{
public:
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0xB0(0xC)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideSpawnGroupToDataChannelIndex;             // 0xBC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CB[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelSpawn* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelWrite
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{
public:
	enum class ENiagaraDataChannelAllocationMode AllocationMode;                                    // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3CC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       AllocationCount;                                   // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPublishToGame;                                    // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPublishToCPU;                                     // 0x41(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPublishToGPU;                                     // 0x42(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraDataChannelReference          Channel;                                           // 0x44(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_3CE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNDIDataChannelWriteCompiledData      CompiledData;                                      // 0x50(0xB0)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelWrite* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraMessageDataBase
class UNiagaraMessageDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraMessageDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParameterDefinitionsBase
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraParameterDefinitionsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraRenderableMeshInterface
class INiagaraRenderableMeshInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraRenderableMeshInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_3D1[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraScriptSourceBase* GetDefaultObj();

};

// 0xE8 (0x120 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	bool                                         bSystemsSupportLargeWorldCoordinates;              // 0x38(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnforceStrictStackTypes;                          // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExperimentalVMEnabled;                            // 0x3A(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D5[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       DefaultEffectType;                                 // 0x40(0x20)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          PositionPinTypeColor;                              // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FText>                          QualityLevels;                                     // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	TMap<class FString, class FText>             ComponentRendererWarningsPerClass;                 // 0x80(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class ETextureRenderTargetFormat        DefaultRenderTargetFormat;                         // 0xD0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraGpuBufferFormat           DefaultGridFormat;                                 // 0xD1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3DA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                // 0xD4(0x4)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                          // 0xD8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraDefaultSortPrecision      DefaultSortPrecision;                              // 0xD9(0x1)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;                      // 0xDA(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E1[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DefaultLightInverseExposureBlend;                  // 0xDC(0x4)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDISkelMesh_GpuMaxInfluences     NDISkelMesh_GpuMaxInfluences;                      // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;              // 0xE1(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;          // 0xE2(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NDIStaticMesh_AllowDistanceFields;                 // 0xE3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;      // 0xE8(0x10)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                SimCacheAuxiliaryFileBasePath;                     // 0xF8(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int64                                        SimCacheMaxCPUMemoryVolumetrics;                   // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraPlatformSetRedirect>   PlatformSetRedirects;                              // 0x110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheCustomStorageInterface
class INiagaraSimCacheCustomStorageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraSimCacheCustomStorageInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraValidationRuleSet
class UNiagaraValidationRuleSet : public UObject
{
public:
	TArray<class UNiagaraValidationRule*>        ValidationRules;                                   // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraValidationRuleSet* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraDataInterfaceActorComponent
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
public:
	bool                                         bRequireCurrentFrameData;                          // 0x38(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDIActorComponentSourceMode      SourceMode;                                        // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3F9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LocalPlayerIndex;                                  // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TLazyObjectPtr<class AActor>                 SourceActor;                                       // 0x40(0x1C)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3FC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          ActorOrComponentParameter;                         // 0x60(0x20)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceActorComponent* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
public:
	int32                                        MaxTracesPerParticle;                              // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxRetraces;                                       // 0x3C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider;                                     // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_403[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAsyncGpuTrace* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceDebugDraw
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:
	uint32                                       OverrideMaxLineInstances;                          // 0x38(0x4)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_406[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDebugDraw* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDynamicMesh
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_40D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDynamicMeshSection>    Sections;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraDynamicMeshMaterial>   Materials;                                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        NumVertices;                                       // 0x60(0x4)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumTexCoords;                                      // 0x64(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasColors;                                        // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasTangentBasis;                                  // 0x69(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bClearTrianglesPerFrame;                           // 0x6A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_411[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  DefaultBounds;                                     // 0x70(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDynamicMesh* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceEmitterProperties
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0x38(0xC)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_414[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceEmitterProperties* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceGBuffer
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGBuffer* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfacePhysicsAsset
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                         DefaultSource;                                     // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x30)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x70(0x20)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_425[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
class INiagaraPhysicsAssetDICollectorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraPhysicsAssetDICollectorInterface* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimCacheReader
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          SimCacheBinding;                                   // 0x38(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraSimCache*                      SimCache;                                          // 0x58(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  EmitterBinding;                                    // 0x60(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimCacheReader* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x38(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InitialValue;                                      // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj();

};

// 0x98 (0xD0 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode         SourceMode;                                        // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_42D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           DefaultMesh;                                       // 0x40(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x48(0x30)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x78(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUsePhysicsBodyVelocity;                           // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowSamplingFromStreamingLODs;                   // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_431[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LODIndex;                                          // 0x94(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraUserParameterBinding          LODIndexUserParameter;                             // 0x98(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          FilteredSockets;                                   // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_432[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj();

	class AActor* OnSourceEndPlay(enum class EEndPlayReason* Reason);
};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          UObjectParameterBinding;                           // 0x38(0x20)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap;                                     // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class AActor>                 SourceActor;                                       // 0x68(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                SourceActorComponentClass;                         // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_443[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceUObjectPropertyReader* GetDefaultObj();

	class FName SetUObjectReaderPropertyRemap();
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVirtualTexture
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
public:
	class URuntimeVirtualTexture*                Texture;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVirtualTexture* GetDefaultObj();

};

// 0x10 (0x100 - 0xF0)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                              // 0xF0(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                           // 0xF4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                                // 0xF8(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0xFC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowScalability;                                 // 0xFD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_44C[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraTrack* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	uint8                                        Pad_44F[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0xA8(0x20)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_450[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_46E[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_46F[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_470[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_471[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ChannelsUsed;                                      // 0xD0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_472[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x4C8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	uint8                                        bDestroyOnSystemFinish : 1;                        // Mask: 0x1, PropSize: 0x10x4D0(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_473[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANiagaraActor* GetDefaultObj();

	bool SetDestroyOnSystemFinish();
	class UNiagaraComponent* OnNiagaraSystemFinished();
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraBakerOutput
class UNiagaraBakerOutput : public UObject
{
public:
	class FString                                OutputName;                                        // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutput* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputSimCache
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
public:
	class FString                                SimCacheAssetPathFormat;                           // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x48(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputSimCache* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputTexture2D
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSetTextureAddressX : 1;                           // Mask: 0x8, PropSize: 0x10x50(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSetTextureAddressY : 1;                           // Mask: 0x10, PropSize: 0x10x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_37 : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_474[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             FrameSize;                                         // 0x54(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             AtlasTextureSize;                                  // 0x5C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_475[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ETextureAddress                   TextureAddressX;                                   // 0x6C(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   TextureAddressY;                                   // 0x6D(0x1)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_476[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AtlasAssetPathFormat;                              // 0x70(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FramesAssetPathFormat;                             // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FramesExportPathFormat;                            // 0x90(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputTexture2D* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class Niagara.NiagaraBakerOutputVolumeTexture
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_38 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_479[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AtlasAssetPathFormat;                              // 0x58(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FramesAssetPathFormat;                             // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FramesExportPathFormat;                            // 0x78(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputVolumeTexture* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class Niagara.NiagaraBakerSettings
class UNiagaraBakerSettings : public UObject
{
public:
	float                                        StartSeconds;                                      // 0x28(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DurationSeconds;                                   // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        FramesPerSecond;                                   // 0x30(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bPreviewLooping : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_39 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_47A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             FramesPerDimension;                                // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNiagaraBakerOutput*>           Outputs;                                           // 0x40(0x10)(Edit, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraBakerCameraSettings>   CameraSettings;                                    // 0x50(0x10)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        CurrentCameraIndex;                                // 0x60(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  BakeQualityLevel;                                  // 0x64(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        bRenderComponentOnly : 1;                          // Mask: 0x1, PropSize: 0x10x6C(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_3A : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_47B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraBakerTextureSettings>  OutputTextures;                                    // 0x70(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraBakerViewMode             CameraViewportMode;                                // 0x80(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_47C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CameraViewportLocation[0x7];                       // 0x88(0xA8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              CameraViewportRotation[0x7];                       // 0x130(0xA8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CameraOrbitDistance;                               // 0x1D8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CameraFOV;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CameraOrthoWidth;                                  // 0x1E0(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseCameraAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x1E4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_3B : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_47D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CameraAspectRatio;                                 // 0x1E8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_47E[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraBakerSettings* GetDefaultObj();

};

// 0x2A0 (0x938 - 0x698)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x698(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x6A0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4DF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RandomSeedOffset;                                  // 0x6A4(0x4)(BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x6A8(0xD8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x780(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableGpuComputeDebug : 1;                        // Mask: 0x2, PropSize: 0x10x780(0x1)(ExportObject, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideWarmupSettings : 1;                       // Mask: 0x4, PropSize: 0x10x780(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAutoManageNiagaraHiddenState : 1;                 // Mask: 0x8, PropSize: 0x10x780(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_42 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4E2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        WarmupTickCount;                                   // 0x784(0x4)(ConstParm, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        WarmupTickDelta;                                   // 0x788(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E3[0x34];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x7C0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x7C0(0x1)(ExportObject, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x7C0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAutoAttachWeldSimulatedBodies : 1;                // Mask: 0x8, PropSize: 0x10x7C0(0x1)(BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_43 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4E4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x7C4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x7D0(0x10)(Edit, BlueprintReadOnly, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x7E0(0x8)(ExportObject, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AutoAttachSocketName;                              // 0x7E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x7F0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x7F1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x7F2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E8[0x9];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        BitPad_44 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bAllowScalability : 1;                             // Mask: 0x10, PropSize: 0x10x7FC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_45 : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4E9[0x12B];                                    // Fixing Size After Last Property  > TateDumper <
	class UNiagaraSimCache*                      SimCache;                                          // 0x928(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraCullProxyComponent*            CullProxy;                                         // 0x930(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraComponent* GetDefaultObj();

	struct FVector4 SetVariableVec4();
	struct FVector SetVariableVec3();
	struct FVector2D SetVariableVec2();
	class UTextureRenderTarget* SetVariableTextureRenderTarget();
	class UTexture* SetVariableTexture();
	class UStaticMesh* SetVariableStaticMesh();
	struct FQuat SetVariableQuat();
	struct FVector SetVariablePosition();
	class FName SetVariableObject(class UObject** Object);
	struct FMatrix SetVariableMatrix();
	class FName SetVariableMaterial(class UMaterialInterface** Object);
	struct FLinearColor SetVariableLinearColor();
	int32 SetVariableInt();
	float SetVariableFloat();
	bool SetVariableBool();
	class FName SetVariableActor(class AActor** Actor);
	enum class ENiagaraTickBehavior SetTickBehavior();
	void SetSystemFixedBounds(struct FBox* LocalBounds);
	bool SetSimCache(class UNiagaraSimCache* SimCache);
	float SetSeekDelta();
	bool SetRenderingEnabled();
	int32 SetRandomSeedOffset();
	float SetPreviewLODDistance();
	bool SetPaused();
	struct FVector4 SetNiagaraVariableVec4();
	struct FVector SetNiagaraVariableVec3();
	struct FVector2D SetNiagaraVariableVec2();
	struct FQuat SetNiagaraVariableQuat();
	struct FVector SetNiagaraVariablePosition();
	class FString SetNiagaraVariableObject(class UObject** Object);
	struct FMatrix SetNiagaraVariableMatrix();
	struct FLinearColor SetNiagaraVariableLinearColor();
	int32 SetNiagaraVariableInt();
	float SetNiagaraVariableFloat();
	bool SetNiagaraVariableBool();
	class FString SetNiagaraVariableActor(class AActor** Actor);
	float SetMaxSimTime();
	bool SetLockDesiredAgeDeltaTimeToSeekDelta();
	bool SetGpuComputeDebug();
	bool SetForceSolo();
	bool SetForceLocalPlayerEffect();
	void SetEmitterFixedBounds(class FName EmitterName, struct FBox* LocalBounds);
	float SetDesiredAge();
	float SetCustomTimeDilation();
	bool SetCanRenderWhileSeeking();
	bool SetAutoDestroy();
	bool SetAsset();
	bool SetAllowScalability();
	enum class ENiagaraAgeUpdateMode SetAgeUpdateMode();
	float SeekToDesiredAge();
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	void InitForPerformanceBaseline();
	enum class ENiagaraTickBehavior GetTickBehavior();
	struct FBox GetSystemFixedBounds();
	class UNiagaraSimCache* GetSimCache();
	float GetSeekDelta();
	int32 GetRandomSeedOffset();
	bool GetPreviewLODDistanceEnabled();
	float GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly();
	TArray<float> GetNiagaraParticleValues_DebugOnly();
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly();
	float GetMaxSimTime();
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();
	bool GetForceSolo();
	bool GetForceLocalPlayerEffect();
	struct FBox GetEmitterFixedBounds(class FName EmitterName);
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(class FString* Name);
	float GetCustomTimeDilation();
	class UNiagaraSystem* GetAsset();
	bool GetAllowScalability();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void ClearSystemFixedBounds();
	bool ClearSimCache();
	void ClearEmitterFixedBounds(class FName EmitterName);
	float AdvanceSimulationByTime();
	float AdvanceSimulation();
};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>  WorldParticleSystemPools;                          // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FA[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraComponentPool* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x28(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SortOrderHint;                                     // 0x58(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;                               // 0x5C(0x4)(Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererEnabledBinding;                            // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bAllowInCullProxies;                               // 0xB9(0x1)(Edit, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FB[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 OuterEmitterVersion;                               // 0xBC(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMotionBlurEnabled;                                // 0xCC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FC[0x13];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraRendererProperties* GetDefaultObj();

};

// 0x150 (0x230 - 0xE0)
// Class Niagara.NiagaraComponentRendererProperties
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	class UClass*                                ComponentType;                                     // 0xE0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       ComponentCountLimit;                               // 0xE8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0xF0(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x148(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssignComponentsOnParticleID;                     // 0x1A0(0x1)(BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCreateComponentFirstParticleFrame;                // 0x1A1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyActivateNewlyAquiredComponents;               // 0x1A2(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FF[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RendererVisibility;                                // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       TemplateComponent;                                 // 0x1A8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;                                  // 0x1B0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_500[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraComponentRendererProperties* GetDefaultObj();

};

// 0x18 (0x950 - 0x938)
// Class Niagara.NiagaraCullProxyComponent
class UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	TArray<struct FNiagaraCulledComponentInfo>   Instances;                                         // 0x938(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_502[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraCullProxyComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataChannelLibrary
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannelLibrary* GetDefaultObj();

	class UNiagaraDataChannelHandler* GetNiagaraDataChannel();
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterface2DArrayTexture
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterface2DArrayTexture* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRWBase* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_506[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x40(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxElements;                                       // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArray* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                FloatData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat2
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2f>                     InternalFloatData;                                 // 0x48(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat2* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat3
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector3f>                     InternalFloatData;                                 // 0x48(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat3* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayPosition
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraPosition>              PositionData;                                      // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayPosition* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat4
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4f>                     InternalFloatData;                                 // 0x48(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat4* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayColor
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                  ColorData;                                         // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayColor* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayQuat
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat4f>                       InternalQuatData;                                  // 0x48(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayQuat* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFunctionLibrary* GetDefaultObj();

	int32 SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FVector& Value, bool* bSizeToFit);
	int32 SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FVector4& Value, bool* bSizeToFit);
	class FName SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector4>* ArrayData);
	int32 SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FVector2D& Value, bool* bSizeToFit);
	class FName SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector2D>* ArrayData);
	class FName SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector>* ArrayData);
	int32 SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, int32 Value, bool* bSizeToFit);
	class FName SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, TArray<int32>* ArrayData);
	int32 SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FQuat& Value, bool* bSizeToFit);
	class FName SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, TArray<struct FQuat>* ArrayData);
	int32 SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FVector& Value, bool* bSizeToFit);
	class FName SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector>* ArrayData);
	int32 SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, int32 Value, bool* bSizeToFit);
	class FName SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, TArray<int32>* ArrayData);
	int32 SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, float Value, bool* bSizeToFit);
	class FName SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, TArray<float>* ArrayData);
	int32 SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FLinearColor& Value, bool* bSizeToFit);
	class FName SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, TArray<struct FLinearColor>* ArrayData);
	int32 SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, bool Value, bool* bSizeToFit);
	class FName SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, TArray<bool>* ArrayData);
	struct FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem);
	struct FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem);
	struct FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem);
	int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem);
	TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem);
	struct FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem);
	struct FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem);
	int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem);
	TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem);
	float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem);
	TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem);
	struct FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem);
	TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem);
	bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem);
	TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem);
};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayInt32
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int32>                                IntData;                                           // 0x48(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayInt32* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayUInt8
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
public:
	TArray<uint8>                                InternalIntData;                                   // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayUInt8* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayBool
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                 BoolData;                                          // 0x48(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayBool* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraID>                    IntData;                                           // 0x48(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayNiagaraID* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSubmix* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScopeInMilliseconds;                               // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioOscilloscope* GetDefaultObj();

};

// 0x3E0 (0x408 - 0x28)
// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
public:
	bool                                         bOverrideConcurrency;                              // 0x28(0x1)(EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_57C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundConcurrency*                     Concurrency;                                       // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideAttenuationSettings;                      // 0x38(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_57D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundAttenuationSettings             AttenuationSettings;                               // 0x40(0x3C8)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayerSettings* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioPlayer
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          ParameterNames;                                    // 0x50(0x10)(ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraUserParameterBinding          ConfigurationUserParameter;                        // 0x60(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLimitPlaysPerTick;                                // 0x80(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_57E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxPlaysPerTick;                                   // 0x84(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x88(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowLoopingOneShotSounds;                        // 0x89(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_580[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayer* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataInterfaceAudioSpectrum
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x44(0x4)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x48(0x4)(Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        NoiseFloorDb;                                      // 0x4C(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSpectrum* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int32                                        PlayerControllerIndex;                             // 0x38(0x4)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRequireCurrentFrameData;                          // 0x3C(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_582[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCamera* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_584[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                ShaderLUT;                                         // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LUTMinTime;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LUTMaxTime;                                        // 0x4C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LUTInvTimeRange;                                   // 0x50(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LUTNumSamplesMinusOne;                             // 0x54(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x5C(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bExposeCurve : 1;                                  // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_57 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5A6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ExposedName;                                       // 0x60(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            ExposedTexture;                                    // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            RedCurve;                                          // 0x70(0x80)(ExportObject, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            GreenCurve;                                        // 0xF0(0x80)(ConstParm, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            BlueCurve;                                         // 0x170(0x80)(BlueprintVisible, ExportObject, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            AlphaCurve;                                        // 0x1F0(0x80)(ConstParm, BlueprintVisible, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceCubeTexture
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCubeTexture* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5A9[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class INiagaraParticleCallbackHandler : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraParticleCallbackHandler* GetDefaultObj();

	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          CallbackHandlerParameter;                          // 0x38(0x20)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDIExport_GPUAllocationMode      GPUAllocationMode;                                 // 0x58(0x1)(ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        GPUAllocationFixedSize;                            // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GPUAllocationPerParticleSize;                      // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B7[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceExport* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumCellsX;                                         // 0x3C(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumCellsY;                                         // 0x40(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumCellsMaxAxis;                                   // 0x44(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumAttributes;                                     // 0x48(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         SetGridFromMaxAxis;                                // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             WorldBBoxSize;                                     // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2D* GetDefaultObj();

};

// 0xC8 (0x128 - 0x60)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x60(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x80(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x81(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_5E : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5CA[0x56];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0xD8(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollection* GetDefaultObj();

	class UNiagaraComponent* GetTextureSize(int32* SizeX, int32* SizeY);
	class UNiagaraComponent* GetRawTextureSize(int32* SizeX, int32* SizeY);
	bool FillTexture2D(class UTextureRenderTarget2D** Dest, int32* AttributeIndex);
	bool FillRawTexture2D(class UTextureRenderTarget2D** Dest, int32* TilesX, int32 TilesY);
};

// 0x20 (0x148 - 0x128)
// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	class FString                                EmitterName;                                       // 0x128(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DIName;                                            // 0x138(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollectionReader* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            NumCells;                                          // 0x3C(0xC)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CellSize;                                          // 0x48(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	int32                                        NumCellsMaxAxis;                                   // 0x4C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetResolutionMethod              SetResolutionMethod;                               // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WorldBBoxSize;                                     // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3D* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x78(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x98(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x99(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E5[0x56];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollection* GetDefaultObj();

	int32 GetTextureSize(int32* SizeX, int32* SizeY);
	int32 GetRawTextureSize(int32* SizeX, int32* SizeY);
	bool FillVolumeTexture(class UVolumeTexture** Dest, int32* AttributeIndex);
	bool FillRawVolumeTexture(class UVolumeTexture** Dest, int32* TilesX, int32 TilesY, int32* TileZ);
};

// 0x20 (0x110 - 0xF0)
// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	class FString                                EmitterName;                                       // 0xF0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DIName;                                            // 0x100(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollectionReader* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0x60(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceIntRenderTarget2D* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceLandscape
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                SourceLandscape;                                   // 0x38(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDILandscape_SourceMode          SourceMode;                                        // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5EB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UPhysicalMaterial*>             PhysicalMaterials;                                 // 0x48(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceLandscape* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*        MeshRenderer;                                      // 0x38(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DuplicateTransient)
	uint8                                        Pad_5EC[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceMeshRendererInfo* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerCell;                               // 0x70(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate)
	uint8                                        Pad_5ED[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceNeighborGrid3D* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceOcclusion
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceOcclusion* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                EmitterName;                                       // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceParticleRead* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfacePlatformSet
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x38(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePlatformSet* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Precision;                                         // 0x74(0x4)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        ResetValue;                                        // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5EE[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRasterizationGrid3D* GetDefaultObj();

};

// 0xD0 (0x108 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2D
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class ENiagaraMipMapGeneration          MipMapGeneration;                                  // 0x40(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraMipMapGenerationType      MipMapGenerationType;                              // 0x41(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x42(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x43(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_5F : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5EF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F0[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0xB8(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2D* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            Size;                                              // 0x38(0xC)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x44(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x45(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x46(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x46(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_60 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5F1[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0x68(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2DArray* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetCube
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        Size;                                              // 0x38(0x4)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x3C(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x3D(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x3E(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x3E(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_61 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5F3[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<uint64, class UTextureRenderTargetCube*> ManagedRenderTargets;                              // 0x60(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetCube* GetDefaultObj();

};

// 0x88 (0xC0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_5FE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            Size;                                              // 0x40(0xC)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x4C(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x4D(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x4E(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x4E(0x1)(ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_62 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_600[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x50(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<uint64, class UTextureRenderTargetVolume*> ManagedRenderTargets;                              // 0x70(0x50)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetVolume* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
public:
	TArray<class FName>                          ActorTags;                                         // 0x38(0x10)(Edit, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          ComponentTags;                                     // 0x48(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class AActor>>         SourceActors;                                      // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         OnlyUseMoveable;                                   // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         UseComplexCollisions;                              // 0x69(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         GlobalSearchAllowed;                               // 0x6A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         GlobalSearchForced;                                // 0x6B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         GlobalSearchFallback_Unscripted;                   // 0x6C(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_601[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxNumPrimitives;                                  // 0x70(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_602[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRigidMeshCollisionQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDIRigidMeshCollisionFunctionLibrary* GetDefaultObj();

	class FName SetSourceActors(class UNiagaraComponent* NiagaraSystem, TArray<class AActor*>* SourceActors);
};

// 0xC8 (0x100 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode       SourceMode;                                        // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_607[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x30)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          ComponentTags;                                     // 0x70(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x80(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x88(0x20)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0xA8(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_610[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          SamplingRegions;                                   // 0xB0(0x10)(ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        WholeMeshLOD;                                      // 0xC0(0x4)(Edit, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_611[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          FilteredBones;                                     // 0xC8(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	TArray<class FName>                          FilteredSockets;                                   // 0xD8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class FName                                  ExcludeBoneName;                                   // 0xE8(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bExcludeBone : 1;                                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_63 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_612[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        UvSetIndex;                                        // 0xF4(0x4)(Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRequireCurrentFrameData;                          // 0xF8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_613[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj();

	class AActor* OnSourceEndPlay(enum class EEndPlayReason* Reason);
};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FNiagaraUserParameterBinding          SplineUserParameter;                               // 0x40(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLUT;                                           // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_614[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumLUTSteps;                                       // 0x64(0x4)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_615[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpline* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraSpriteRendererProperties*      SpriteRenderer;                                    // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpriteRendererInfo* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceTexture* GetDefaultObj();

};

// 0x100 (0x170 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(ConstParm, BlueprintVisible, Net, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(ConstParm, BlueprintVisible, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(ConstParm, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            WCurve;                                            // 0x1F0(0x80)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj();

};

// 0x180 (0x1F0 - 0x70)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(ConstParm, BlueprintVisible, Net, Parm, InstancedReference, SubobjectReference)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(ConstParm, Net, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x38(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bTileX;                                            // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTileY;                                            // 0x41(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTileZ;                                            // 0x42(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_620[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeCache
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
public:
	class UVolumeCache*                          VolumeCache;                                       // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_623[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeCache* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeTexture* GetDefaultObj();

};

// 0x258 (0x280 - 0x28)
// Class Niagara.NiagaraDebugHUDSettings
class UNiagaraDebugHUDSettings : public UObject
{
public:
	uint8                                        Pad_624[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraDebugHUDSettingsData          Data;                                              // 0x48(0x238)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraDebugHUDSettings* GetDefaultObj();

};

// 0x368 (0x448 - 0xE0)
// Class Niagara.NiagaraDecalRendererProperties
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FNiagaraParameterBinding              MaterialParameterBinding;                          // 0xE8(0xC)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xF4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_628[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RendererVisibility;                                // 0xF8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DecalScreenSizeFade;                               // 0xFC(0x4)(Edit, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x100(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalOrientationBinding;                           // 0x158(0x58)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalSizeBinding;                                  // 0x1B0(0x58)(ConstParm, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalFadeBinding;                                  // 0x208(0x58)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalSortOrderBinding;                             // 0x260(0x58)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalColorBinding;                                 // 0x2B8(0x58)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DecalVisibleBinding;                               // 0x310(0x58)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x368(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x3C0(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_629[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDecalRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorParametersAdapterBase
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorParametersAdapterBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandler
class UNiagaraSignificanceHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerDistance
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerDistance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerAge
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerAge* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public UObject
{
public:
	bool                                         bAllowCullingForLocalPlayers;                      // 0x28(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_62E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;                                   // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraCullReaction              CullReaction;                                      // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_62F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraSignificanceHandler*           SignificanceHandler;                               // 0x38(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                    // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                         // 0x50(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                        // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_631[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraBaselineController*            PerformanceBaselineController;                     // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraPerfBaselineStats             PerfBaselineStats;                                 // 0x80(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGuid                                 PerfBaselineVersion;                               // 0x90(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraEffectType* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	uint8                                        Pad_633[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 ExposedVersion;                                    // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVersioningEnabled;                                // 0x40(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_635[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVersionedNiagaraEmitterData>  VersionData;                                       // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_636[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UniqueEmitterName;                                 // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x90(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0xA0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_638[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraFunctionLibrary* GetDefaultObj();

	class UNiagaraComponent* SpawnSystemAttachedWithParams();
	class UNiagaraComponent* SpawnSystemAttached(class USceneComponent* AttachToComponent, struct FVector* Location, struct FRotator* Rotation, bool bAutoDestroy);
	class UNiagaraComponent* SpawnSystemAtLocationWithParams();
	class UNiagaraComponent* SpawnSystemAtLocation(struct FVector* Location, struct FRotator* Rotation, const struct FVector& Scale, bool bAutoDestroy);
	class UVolumeTexture* SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem);
	class UTexture* SetTextureObject(class UNiagaraComponent* NiagaraSystem);
	class UTexture2DArray* SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem);
	TArray<class FName> SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem);
	TArray<class FName> SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem);
	TArray<class FName> SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem);
	int32 SetComponentNiagaraGPURayTracedCollisionGroup(class UPrimitiveComponent* Primitive);
	int32 SetActorNiagaraGPURayTracedCollisionGroup(class AActor** Actor);
	int32 ReleaseNiagaraGPURayTracedCollisionGroup();
	class UStaticMeshComponent* OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem);
	class FString OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, class UStaticMesh** StaticMesh);
	class FString OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection();
	int32 AcquireNiagaraGPURayTracedCollisionGroup();
};

// 0x88 (0x560 - 0x4D8)
// Class Niagara.NiagaraLensEffectBase
class ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	uint8                                        Pad_64A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DesiredRelativeTransform;                          // 0x4E0(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BaseAuthoredFOV;                                   // 0x540(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x1, PropSize: 0x10x544(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bResetWhenRetriggered : 1;                         // Mask: 0x2, PropSize: 0x10x544(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_64 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_64B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        EmittersToTreatAsSame;                             // 0x548(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class APlayerCameraManager*                  OwningCameraManager;                               // 0x558(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANiagaraLensEffectBase* GetDefaultObj();

};

// 0x320 (0x400 - 0xE0)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_64D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10xE4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAlphaScalesBrightness : 1;                        // Mask: 0x4, PropSize: 0x10xE4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideInverseExposureBlend : 1;                 // Mask: 0x8, PropSize: 0x10xE4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCastSampledLightShadows : 1;                      // Mask: 0x10, PropSize: 0x10xE4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_65 : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_64E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        RadiusScale;                                       // 0xE8(0x4)(Edit, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        DefaultExponent;                                   // 0xEC(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector3f                             ColorAdd;                                          // 0xF0(0xC)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InverseExposureBlend;                              // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        RendererVisibility;                                // 0x100(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_64F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      LightRenderingEnabledBinding;                      // 0x108(0x58)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SampledLightShadowsEnabledBinding;                 // 0x160(0x58)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      LightExponentBinding;                              // 0x1B8(0x58)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x210(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x268(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x2C0(0x58)(Edit, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      VolumetricScatteringBinding;                       // 0x318(0x58)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x370(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_651[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraLightRendererProperties* GetDefaultObj();

};

// 0x8B8 (0x998 - 0xE0)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;                                            // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xF0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xF1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_653[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10xF4(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseHeterogeneousVolumes : 1;                      // Mask: 0x2, PropSize: 0x10xF4(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xF4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_66 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_654[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0xF8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0xF9(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_655[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10xFC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableFrustumCulling : 1;                         // Mask: 0x2, PropSize: 0x10xFC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x4, PropSize: 0x10xFC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableMeshFlipbook : 1;                           // Mask: 0x8, PropSize: 0x10xFC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_67 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_656[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraMeshMaterialOverride>  OverrideMaterials;                                 // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FNiagaraMeshMICOverride>       MICOverrideMaterials;                              // 0x110(0x10)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             SubImageSize;                                      // 0x120(0x10)(Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x130(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_657[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bLockedAxisEnable : 1;                             // Mask: 0x1, PropSize: 0x10x134(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_68 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_658[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LockedAxis;                                        // 0x138(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	enum class ENiagaraMeshLockedAxisSpace       LockedAxisSpace;                                   // 0x150(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_659[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MeshBoundsScale;                                   // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinCameraDistance;                                 // 0x170(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxCameraDistance;                                 // 0x174(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       RendererVisibility;                                // 0x178(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_65A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x180(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1D8(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x230(0x58)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x288(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x2E0(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x338(0x58)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x390(0x58)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x3E8(0x58)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x440(0x58)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x498(0x58)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x4F0(0x58)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x548(0x58)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x5A0(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x5F8(0x58)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x650(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      MeshIndexBinding;                                  // 0x6A8(0x58)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x700(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x750(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevScaleBinding;                                  // 0x7A8(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevMeshOrientationBinding;                        // 0x800(0x58)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x858(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x8B0(0x58)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_65F[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           ParticleMesh;                                      // 0x970(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               PivotOffset;                                       // 0x978(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x990(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_660[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraMeshRendererProperties* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0x88)(Edit, ConstParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_66F[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraParameterCollectionInstance* GetDefaultObj();

	struct FVector SetVectorParameter();
	struct FVector4 SetVector4Parameter();
	struct FVector2D SetVector2DParameter();
	struct FQuat SetQuatParameter();
	int32 SetIntParameter();
	float SetFloatParameter();
	struct FLinearColor SetColorParameter();
	bool SetBoolParameter();
	struct FVector GetVectorParameter();
	struct FVector4 GetVector4Parameter();
	struct FVector2D GetVector2DParameter();
	struct FQuat GetQuatParameter();
	int32 GetIntParameter();
	float GetFloatParameter();
	struct FLinearColor GetColorParameter();
	bool GetBoolParameter();
};

// 0x38 (0x60 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, InstancedReference)
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialParameterCollection*          SourceMaterialCollection;                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm)
	struct FGuid                                 CompileId;                                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollection* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Niagara.NiagaraBaselineController
class UNiagaraBaselineController : public UObject
{
public:
	float                                        TestDuration;                                      // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_67D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraEffectType*                    EffectType;                                        // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference)
	class ANiagaraPerfBaselineActor*             Owner;                                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x40(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController* GetDefaultObj();

	bool OnTickTest();
	void OnOwnerTick(float* DeltaTime);
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
	void OnBeginTest();
	class UNiagaraSystem* GetSystem();
};

// 0x18 (0x88 - 0x70)
// Class Niagara.NiagaraBaselineController_Basic
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int32                                        NumInstances;                                      // 0x70(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_683[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UNiagaraComponent*>             SpawnedComponents;                                 // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController_Basic* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class Niagara.NiagaraPerfBaselineActor
class ANiagaraPerfBaselineActor : public AActor
{
public:
	class UNiagaraBaselineController*            Controller;                                        // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UTextRenderComponent*                  Label;                                             // 0x4D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANiagaraPerfBaselineActor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                Scripts;                                           // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraSystem*                        System;                                            // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UNiagaraPrecompileContainer* GetDefaultObj();

};

// 0x0 (0x4C8 - 0x4C8)
// Class Niagara.NiagaraPreviewBase
class ANiagaraPreviewBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANiagaraPreviewBase* GetDefaultObj();

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText InXAxisText, class FText InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis* GetDefaultObj();

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, const class FString& OutLabelText);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, EditConst)
	int32                                        Count;                                             // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	uint8                                        Pad_6A5[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        Max;                                               // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamInt32* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamFloat* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                             Min;                                               // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector2D                             Max;                                               // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector2D* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                               Min;                                               // 0x38(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Max;                                               // 0x50(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	uint8                                        Pad_6A9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Min;                                               // 0x40(0x20)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector4                              Max;                                               // 0x60(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector4* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                          Min;                                               // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FLinearColor                          Max;                                               // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamLinearColor* GetDefaultObj();

};

// 0x50 (0x518 - 0x4C8)
// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x4C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x4D0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6AC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x4E0(0x8)(Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                PreviewClass;                                      // 0x4E8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SpacingX;                                          // 0x4F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SpacingY;                                          // 0x4F4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumX;                                              // 0x4F8(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumY;                                              // 0x4FC(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x500(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6AF[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANiagaraPreviewGrid* GetDefaultObj();

	void SetPaused(bool bPaused);
	void GetPreviews(const TArray<class UNiagaraComponent*>& OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool* bReset);
};

// 0x9C0 (0xAA0 - 0xE0)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x108(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6B1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraRibbonUVSettings              UV0Settings;                                       // 0x110(0x38)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraRibbonUVSettings              UV1Settings;                                       // 0x148(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxNumRibbons;                                     // 0x180(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseGPUInit;                                       // 0x184(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x185(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRibbonShapeMode           Shape;                                             // 0x186(0x1)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bEnableAccurateGeometry;                           // 0x187(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        WidthSegmentationCount;                            // 0x188(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MultiPlaneCount;                                   // 0x18C(0x4)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TubeSubdivisions;                                  // 0x190(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6B3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;                                    // 0x198(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0x1A8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6B4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CurveTension;                                      // 0x1AC(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TessellationFactor;                                // 0x1B0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseConstantFactor;                                // 0x1B4(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6B6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TessellationAngle;                                 // 0x1B8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bScreenSpaceTessellation;                          // 0x1BC(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6B7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x1C0(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x218(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x270(0x58)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x2C8(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x320(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x378(0x58)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x3D0(0x58)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x428(0x58)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x480(0x58)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x4D8(0x58)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x530(0x58)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x588(0x58)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x5E0(0x58)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x638(0x58)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RibbonUVDistance;                                  // 0x690(0x58)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      U0OverrideBinding;                                 // 0x6E8(0x58)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      V0RangeOverrideBinding;                            // 0x740(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      U1OverrideBinding;                                 // 0x798(0x58)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      V1RangeOverrideBinding;                            // 0x7F0(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x848(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x898(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevRibbonWidthBinding;                            // 0x8F0(0x58)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevRibbonFacingBinding;                           // 0x948(0x58)(EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevRibbonTwistBinding;                            // 0x9A0(0x58)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6BD[0xA8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraRibbonRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraScratchPadContainer
class UNiagaraScratchPadContainer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraScratchPadContainer* GetDefaultObj();

};

// 0x380 (0x3A8 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	uint8                                        Pad_6BE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraScriptUsage               Usage;                                             // 0x30(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6BF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 UsageId;                                           // 0x34(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x48(0x88)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xD0(0xA8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraBoundParameter>        ScriptExecutionBoundParameters;                    // 0x178(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x188(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C1[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x1F0(0x190)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x380(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                       // 0x390(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C2[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraScript* GetDefaultObj();

	void RaiseOnGPUCompilationComplete();
};

// 0x1D8 (0x200 - 0x28)
// Class Niagara.NiagaraSimCache
class UNiagaraSimCache : public UObject
{
public:
	struct FGuid                                 CacheGuid;                                         // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UNiagaraSystem>         SoftNiagaraSystem;                                 // 0x38(0x30)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StartSeconds;                                      // 0x68(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DurationSeconds;                                   // 0x6C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x70(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bNeedsReadComponentMappingRecache;                 // 0xC8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6E4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraSimCacheLayout                CacheLayout;                                       // 0xD0(0xC8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraSimCacheFrame>         CacheFrames;                                       // 0x198(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<struct FNiagaraVariableBase, class UObject*> DataInterfaceStorage;                              // 0x1A8(0x50)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6E5[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraSimCache* GetDefaultObj();

	void ReadVectorAttribute(const TArray<struct FVector>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector4Attribute(const TArray<struct FVector4>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector2Attribute(const TArray<struct FVector2D>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttributeWithRebase(const TArray<struct FQuat>& OutValues, struct FQuat* Quat, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttribute(const TArray<struct FQuat>& OutValues, class FName* AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadPositionAttributeWithRebase(const TArray<struct FVector>& OutValues, struct FTransform* Transform, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadPositionAttribute(const TArray<struct FVector>& OutValues, class FName* AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadIntAttribute(const TArray<int32>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadFloatAttribute(const TArray<float>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadColorAttribute(const TArray<struct FLinearColor>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex);
	bool IsEmpty();
	bool IsCacheValid();
	float GetStartSeconds();
	int32 GetNumFrames();
	int32 GetNumEmitters();
	TArray<class FName> GetEmitterNames();
	class FName GetEmitterName(int32 EmitterIndex);
	enum class ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
};

// 0xD8 (0x108 - 0x30)
// Class Niagara.AsyncNiagaraCaptureSimCache
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
{
public:
	class UNiagaraSimCache*                      CaptureSimCache;                                   // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraComponent*                     CaptureComponent;                                  // 0x38(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            CaptureComplete;                                   // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6F5[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAsyncNiagaraCaptureSimCache* GetDefaultObj();

	bool OnCaptureComplete__DelegateSignature();
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, int32 NumFrames);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheFunctionLibrary
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSimCacheFunctionLibrary* GetDefaultObj();

	class UNiagaraSimCache* CreateNiagaraSimCache();
	bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                        Script;                                            // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SimulationStageName;                               // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_6FF[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageBase* GetDefaultObj();

};

// 0x268 (0x2A8 - 0x40)
// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x40(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraIterationSource           IterationSource;                                   // 0x98(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_703[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Iterations;                                        // 0x9C(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      NumIterationsBinding;                              // 0xA0(0x58)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0xF8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_704[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDisablePartialParticleUpdate : 1;                 // Mask: 0x1, PropSize: 0x10xFC(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_6D : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_705[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableDataInterfaceBinding  DataInterface;                                     // 0x100(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6E : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_706[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      ParticleIterationStateBinding;                     // 0x128(0x58)(ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x180(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGpuDispatchForceLinear : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideGpuDispatchNumThreads : 1;                // Mask: 0x2, PropSize: 0x10x188(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_6F : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_707[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            OverrideGpuDispatchNumThreads;                     // 0x18C(0xC)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraGpuDispatchType           DirectDispatchType;                                // 0x198(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraDirectDispatchElementType DirectDispatchElementType;                         // 0x199(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_708[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      ElementCountXBinding;                              // 0x1A0(0x58)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElementCountYBinding;                              // 0x1F8(0x58)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElementCountZBinding;                              // 0x250(0x58)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageGeneric* GetDefaultObj();

};

// 0xA98 (0xB78 - 0xE0)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xE8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_70B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xF0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0x110(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0x111(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_70F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PivotInUVSpace;                                    // 0x118(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MacroUVRadius;                                     // 0x128(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x12C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_710[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SubImageSize;                                      // 0x130(0x10)(Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10x140(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10x140(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10x140(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_70 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_711[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0x144(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0x145(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode;                                 // 0x146(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_712[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PixelCoverageBlend;                                // 0x148(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinFacingCameraBlendDistance;                      // 0x14C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxFacingCameraBlendDistance;                      // 0x150(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x1, PropSize: 0x10x154(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_71 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_714[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinCameraDistance;                                 // 0x158(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxCameraDistance;                                 // 0x15C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       RendererVisibility;                                // 0x160(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_716[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x168(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1C0(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x218(0x58)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x270(0x58)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x2C8(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x320(0x58)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x378(0x58)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x3D0(0x58)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x428(0x58)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x480(0x58)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x4D8(0x58)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x530(0x58)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x588(0x58)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x5E0(0x58)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PivotOffsetBinding;                                // 0x638(0x58)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x690(0x58)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x6E8(0x58)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x740(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x798(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x7F0(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x840(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x898(0x58)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevSpriteRotationBinding;                         // 0x8F0(0x58)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevSpriteSizeBinding;                             // 0x948(0x58)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevSpriteFacingBinding;                           // 0x9A0(0x58)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevSpriteAlignmentBinding;                        // 0x9F8(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0xA50(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PrevPivotOffsetBinding;                            // 0xAA8(0x58)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_719[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraSpriteRendererProperties* GetDefaultObj();

};

// 0x4C8 (0x538 - 0x70)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset
{
public:
	uint8                                        bSupportLargeWorldCoordinates : 1;                 // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideCastShadow : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideReceivesDecals : 1;                       // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideRenderCustomDepth : 1;                    // Mask: 0x8, PropSize: 0x10x70(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideCustomDepthStencilValue : 1;              // Mask: 0x10, PropSize: 0x10x70(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideCustomDepthStencilWriteMask : 1;          // Mask: 0x20, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideTranslucencySortPriority : 1;             // Mask: 0x40, PropSize: 0x10x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideTranslucencySortDistanceOffset : 1;       // Mask: 0x80, PropSize: 0x10x70(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x71(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableExperimentalVM : 1;                        // Mask: 0x8, PropSize: 0x10x71(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_72 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x72(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_71B[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TranslucencySortPriority;                          // 0x78(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TranslucencySortDistanceOffset;                    // 0x7C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDumpDebugSystemInfo;                              // 0x80(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDumpDebugEmitterInfo;                             // 0x81(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_71D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bRequireCurrentFrameData;                          // 0x83(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x84(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_73 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_71E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraEffectType*                    EffectType;                                        // 0x88(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference)
	bool                                         bOverrideScalabilitySettings;                      // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_721[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bOverrideAllowCullingForLocalPlayers : 1;          // Mask: 0x1, PropSize: 0x10x94(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowCullingForLocalPlayersOverride : 1;          // Mask: 0x2, PropSize: 0x10x94(0x1)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_74 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_722[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;                              // 0x98(0x10)(Edit, ConstParm, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraSystemScalabilityOverrides    SystemScalabilityOverrides;                        // 0xA8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0xB8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0xC8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0xD8(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0xE0(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_723[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraSystemCompiledData            SystemCompiledData;                                // 0xF8(0x240)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x338(0xD8)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  FixedBounds;                                       // 0x410(0x38)(Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoDeactivate;                                   // 0x448(0x1)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeterminism;                                      // 0x449(0x1)(Edit, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_724[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RandomSeed;                                        // 0x44C(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WarmupTime;                                        // 0x450(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	int32                                        WarmupTickCount;                                   // 0x454(0x4)(ConstParm, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        WarmupTickDelta;                                   // 0x458(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFixedTickDelta;                                   // 0x45C(0x1)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_725[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        FixedTickDeltaTime;                                // 0x460(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasSystemScriptDIsWithPerInstanceData;            // 0x464(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsGPUContextInitForDataInterfaces;             // 0x465(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_726[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          UserDINamesReadInSystemScripts;                    // 0x468(0x10)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNiagaraDataChannelDefinitions*> ReferencedDataChannelDefinitions;                  // 0x478(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_727[0xB0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraValidationRule
class UNiagaraValidationRule : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraValidationRule* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Niagara.VolumeCache
class UVolumeCache : public UObject
{
public:
	class FString                                FilePath;                                          // 0x28(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EVolumeCacheType                  CacheType;                                         // 0x38(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_72C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            Resolution;                                        // 0x3C(0xC)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameRangeStart;                                   // 0x48(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        FrameRangeEnd;                                     // 0x4C(0x4)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_72D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVolumeCache* GetDefaultObj();

};

}


