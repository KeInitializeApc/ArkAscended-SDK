#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAsset
class UHoudiniAsset : public UObject
{
public:
	class FString                                AssetFileName;                                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<uint8>                                AssetBytes;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       AssetBytesCount;                                   // 0x48(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssetLimitedCommercial;                           // 0x4C(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssetNonCommercial;                               // 0x4D(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssetExpanded;                                    // 0x4E(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_946[0x1];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAsset* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class HoudiniEngineRuntime.HoudiniAssetActor
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                HoudiniAssetComponent;                             // 0x4C8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AHoudiniAssetActor* GetDefaultObj();

};

// 0x518 (0xBB0 - 0x698)
// Class HoudiniEngineRuntime.HoudiniAssetComponent
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_94F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x6A0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bCookOnParameterChange;                            // 0x6A8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUploadTransformsToHoudiniEngine;                  // 0x6A9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bCookOnTransformChange;                            // 0x6AA(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCookOnAssetInputCook;                             // 0x6AB(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOutputless;                                       // 0x6AC(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOutputTemplateGeos;                               // 0x6AD(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseOutputNodes;                                   // 0x6AE(0x1)(OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_955[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        TemporaryCookFolder;                               // 0x6B0(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FDirectoryPath                        BakeFolder;                                        // 0x6C0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniStaticMeshMethod          StaticMeshMethod;                                  // 0x6D0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_958[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;                    // 0x6D8(0x1A0)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FMeshBuildSettings                    StaticMeshBuildSettings;                           // 0x878(0x48)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOverrideGlobalProxyStaticMeshSettings;            // 0x8C0(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshOverride;                    // 0x8C1(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementByTimerOverride;   // 0x8C2(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_95B[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ProxyMeshAutoRefineTimeoutSecondsOverride;         // 0x8C4(0x4)(Edit, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x8C8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x8C9(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_95D[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        AssetId;                                           // 0x8CC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                NodeIdsToCook;                                     // 0x8D0(0x10)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<int32, int32>                           OutputNodeCookCounts;                              // 0x8E0(0x50)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<class UHoudiniAssetComponent*>          DownstreamHoudiniAssets;                           // 0x930(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ComponentGUID;                                     // 0x980(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 HapiGUID;                                          // 0x990(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HapiAssetName;                                     // 0x9A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniAssetState                AssetState;                                        // 0x9B0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniAssetState                DebugLastAssetState;                               // 0x9B1(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniAssetStateResult          AssetStateResult;                                  // 0x9B2(0x1)(ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_969[0xD];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LastComponentTransform;                            // 0x9C0(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       SubAssetIndex;                                     // 0xA20(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AssetCookCount;                                    // 0xA24(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenLoaded;                                    // 0xA28(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenDuplicated;                                // 0xA29(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPendingDelete;                                    // 0xA2A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecookRequested;                                  // 0xA2B(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRebuildRequested;                                 // 0xA2C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCooking;                                    // 0xA2D(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bForceNeedUpdate;                                  // 0xA2E(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLastCookSuccess;                                  // 0xA2F(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParameterDefinitionUpdateNeeded;                  // 0xA30(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlueprintStructureModified;                       // 0xA31(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlueprintModified;                                // 0xA32(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_96E[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameter*>             Parameters;                                        // 0xA38(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0xA48(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniOutput*>                Outputs;                                           // 0xA58(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0xA68(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditConst, GlobalConfig, SubobjectReference)
	TArray<TWeakObjectPtr<class AActor>>         UntrackedOutputs;                                  // 0xA78(0x10)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UHoudiniHandleComponent*>       HandleComponents;                                  // 0xA88(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasComponentTransformChanged;                     // 0xA98(0x1)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bFullyLoaded;                                      // 0xA99(0x1)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_972[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniPDGAssetLink*                  PDGAssetLink;                                      // 0xAA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTimerHandle                          RefineMeshesTimer;                                 // 0xAA8(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_974[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNoProxyMeshNextCookRequested;                     // 0xAC8(0x1)(Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBakeAfterNextCook;                                // 0xAC9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniBakeAfterNextCook         BakeAfterNextCook;                                 // 0xACA(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_975[0xAD];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bCachedIsPreview;                                  // 0xB78(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_977[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       LastTickTime;                                      // 0xB80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_978[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent* GetDefaultObj();

};

// 0x100 (0xCB0 - 0xBB0)
// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	uint8                                        Pad_992[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         FauxBPProperty;                                    // 0xBF8(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHoudiniAssetChanged;                              // 0xBF9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUpdatedFromTemplate;                              // 0xBFA(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsInBlueprintEditor;                              // 0xBFB(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0xBFC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasRegisteredComponentTemplate;                   // 0xBFD(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_995[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes;                                 // 0xC08(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<struct FGuid, struct FGuid>             CachedInputNodes;                                  // 0xC58(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_996[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetBlueprintComponent* GetDefaultObj();

	void SetToggleValueAt(class FString* Name, bool* Value, int32* Index);
	void SetFloatParameter(class FString* Name, float* Value, int32* Index);
	void HasParameter(class FString* Name, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniEngineCopyPropertiesInterface* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class HoudiniEngineRuntime.HoudiniEngineEditorSettings
class UHoudiniEngineEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UHoudiniEngineEditorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HoudiniEngineRuntime.HoudiniHandleParameter
class UHoudiniHandleParameter : public UObject
{
public:
	class UHoudiniParameter*                     AssetParameter;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TupleIndex;                                        // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_99C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniHandleParameter* GetDefaultObj();

};

// 0x38 (0x300 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent
class UHoudiniHandleComponent : public USceneComponent
{
public:
	TArray<class UHoudiniHandleParameter*>       XformParms;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniHandleParameter*               RSTParm;                                           // 0x2D8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniHandleParameter*               RotOrderParm;                                      // 0x2E0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniHandleType                HandleType;                                        // 0x2E8(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                HandleName;                                        // 0x2F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent* GetDefaultObj();

};

// 0x248 (0x270 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInput
class UHoudiniInput : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
	class FString                                Label;                                             // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniInputType                 Type;                                              // 0x48(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	enum class EHoudiniInputType                 PreviousType;                                      // 0x49(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A7[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        AssetNodeId;                                       // 0x4C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InputNodeId;                                       // 0x50(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InputIndex;                                        // 0x54(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ParmId;                                            // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsObjectPathParameter;                            // 0x5C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9AB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                CreatedDataNodeIds;                                // 0x60(0x10)(Edit, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasChanged;                                       // 0x70(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x71(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9AD[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0x78(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                Help;                                              // 0xB0(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniXformType                 KeepWorldTransform;                                // 0xC0(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPackBeforeMerge;                                  // 0xC1(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bImportAsReference;                                // 0xC2(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0xC3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0xC4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0xC5(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportLODs;                                       // 0xC6(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportSockets;                                    // 0xC7(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xC8(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportColliders;                                  // 0xC9(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportMaterialParameters;                         // 0xCA(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDirectlyConnectHdas;                              // 0xCB(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportOptionsMenuExpanded;                        // 0xCC(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bGeometryInputsMenuExpanded;                       // 0xCD(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLandscapeOptionsMenuExpanded;                     // 0xCE(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bWorldInputsMenuExpanded;                          // 0xCF(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurveInputsMenuExpanded;                          // 0xD0(0x1)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurvePointSelectionMenuExpanded;                  // 0xD1(0x1)(Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurvePointSelectionUseAbsLocation;                // 0xD2(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurvePointSelectionUseAbsRotation;                // 0xD3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCookOnCurveChanged;                               // 0xD4(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           GeometryInputObjects;                              // 0xD8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bStaticMeshChanged;                                // 0xE8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           AssetInputObjects;                                 // 0xF0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInputAssetConnectedInHoudini;                     // 0x100(0x1)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9BB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           CurveInputObjects;                                 // 0x108(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultCurveOffset;                                // 0x118(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x11C(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLegacyInputCurves;                             // 0x11D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9BD[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           LandscapeInputObjects;                             // 0x120(0x10)(ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLandscapeHasExportTypeChanged;                    // 0x130(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9BE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           WorldInputObjects;                                 // 0x138(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        WorldInputBoundSelectorObjects;                    // 0x148(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsWorldInputBoundSelector;                        // 0x158(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bWorldInputBoundSelectorAutoUpdate;                // 0x159(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        UnrealSplineResolution;                            // 0x15C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniInputObject*>           SkeletalInputObjects;                              // 0x160(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputObject*>           GeometryCollectionInputObjects;                    // 0x170(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<class ULandscapeComponent*>             LandscapeSelectedComponents;                       // 0x180(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<int32>                                  InputNodesPendingDelete;                           // 0x1D0(0x50)(Edit, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                // 0x220(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputObject*>           LastUndoDeletedInputs;                             // 0x230(0x10)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUpdateInputLandscape;                             // 0x240(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniLandscapeExportType       LandscapeExportType;                               // 0x241(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportSelectionOnly;                     // 0x242(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeControlVisiblity;                        // 0x243(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLandscapeAutoSelectComponent;                     // 0x244(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportMaterials;                         // 0x245(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportLighting;                          // 0x246(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportNormalizedUVs;                     // 0x247(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportTileUVs;                           // 0x248(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x249(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLandscapeAutoSelectSplines;                       // 0x24A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportOptionsMenuExpanded;        // 0x24B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLandscapeSplinesExportControlPoints;              // 0x24C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportLeftRightCurves;            // 0x24D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportSplineMeshComponents;       // 0x24E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMergeSplineMeshComponents;                        // 0x24F(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FHoudiniInputObjectSettings           InputSettings;                                     // 0x250(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInput* GetDefaultObj();

};

// 0x190 (0x1B8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInputObject
class UHoudiniInputObject : public UObject
{
public:
	TSoftObjectPtr<class UObject>                InputObject;                                       // 0x28(0x30)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniInputObjectType           Type;                                              // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 Guid;                                              // 0x5C(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	uint8                                        Pad_9CF[0xA4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasChanged;                                       // 0x110(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x111(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTransformChanged;                                 // 0x112(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D4[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        MaterialReferences;                                // 0x118(0x10)(BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FHoudiniInputObjectSettings           CachedInputSettings;                               // 0x128(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x148(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInputNodeHandleOverridesNodeIds;                  // 0x149(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D7[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	int32                                        InputNodeId;                                       // 0x1B0(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InputObjectNodeId;                                 // 0x1B4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputObject* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9DA[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputStaticMesh* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9DB[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMesh* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputAnimation
class UHoudiniInputAnimation : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9DE[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputAnimation* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9E0[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollection* GetDefaultObj();

};

// 0x70 (0x228 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9E4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ActorTransform;                                    // 0x1C0(0x60)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniInputActor*                    ParentInputActor;                                  // 0x220(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputSceneComponent* GetDefaultObj();

};

// 0x30 (0x258 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x228(0x30)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)

	static class UClass* StaticClass();
	static class UHoudiniInputMeshComponent* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
public:
	TArray<struct FTransform>                    InstanceTransforms;                                // 0x258(0x10)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9EA[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputInstancedMeshComponent* GetDefaultObj();

};

// 0x28 (0x250 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
public:
	int32                                        NumberOfSplineControlPoints;                       // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SplineLength;                                      // 0x22C(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SplineResolution;                                  // 0x230(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         SplineClosed;                                      // 0x234(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9ED[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    SplineControlPoints;                               // 0x238(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9EE[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputSplineComponent* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
public:
	uint8                                        Pad_9F0[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollectionComponent* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
public:
	uint8                                        Pad_9F1[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMeshComponent* GetDefaultObj();

};

// 0x18 (0x1D0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
public:
	enum class EHoudiniCurveType                 CurveType;                                         // 0x1B8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x1B9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Reversed;                                          // 0x1BA(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9F5[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniSplineComponent*               CachedComponent;                                   // 0x1C0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9F6[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniSplineComponent* GetDefaultObj();

};

// 0x18 (0x240 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
public:
	float                                        FOV;                                               // 0x228(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	float                                        AspectRatio;                                       // 0x22C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsOrthographic;                                   // 0x230(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9FA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OrthoWidth;                                        // 0x234(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OrthoNearClipPlane;                                // 0x238(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OrthoFarClipPlane;                                 // 0x23C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputCameraComponent* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
public:
	int32                                        AssetOutputIndex;                                  // 0x1B8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        AssetId;                                           // 0x1BC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniAsset* GetDefaultObj();

};

// 0x138 (0x2F0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputActor
class UHoudiniInputActor : public UHoudiniInputObject
{
public:
	int32                                        SplinesMeshObjectNodeId;                           // 0x1B8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SplinesMeshNodeId;                                 // 0x1BC(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9FE[0xA0];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputSceneComponent*>   ActorComponents;                                   // 0x260(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<TSoftObjectPtr<class UObject>>          ActorSceneComponents;                              // 0x270(0x50)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x2C0(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x2C4(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSplineMeshComponents;                           // 0x2C8(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 GeneratedSplinesMeshPackageGuid;                   // 0x2CC(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A03[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           GeneratedSplinesMesh;                              // 0x2E0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsedMergeSplinesMeshAtLastTranslate;              // 0x2E8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A05[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputActor* GetDefaultObj();

};

// 0x60 (0x350 - 0x2F0)
// Class HoudiniEngineRuntime.HoudiniInputLevelInstance
class UHoudiniInputLevelInstance : public UHoudiniInputActor
{
public:
	TMap<TSoftObjectPtr<class AActor>, class UHoudiniInputObject*> TrackedActorObjects;                               // 0x2F0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumActorsAddedLastUpdate;                          // 0x340(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumActorsRemovedLastUpdate;                        // 0x344(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0C[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputLevelInstance* GetDefaultObj();

};

// 0x10 (0x300 - 0x2F0)
// Class HoudiniEngineRuntime.HoudiniInputLandscape
class UHoudiniInputLandscape : public UHoudiniInputActor
{
public:
	int32                                        CachedNumLandscapeComponents;                      // 0x2F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0F[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputLandscape* GetDefaultObj();

};

// 0x20 (0x310 - 0x2F0)
// Class HoudiniEngineRuntime.HoudiniInputBrush
class UHoudiniInputBrush : public UHoudiniInputActor
{
public:
	TArray<struct FHoudiniBrushInfo>             BrushesInfo;                                       // 0x2F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UModel*                                CombinedModel;                                     // 0x300(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreInputObject;                                // 0x308(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBrushType                        CachedInputBrushType;                              // 0x309(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A14[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputBrush* GetDefaultObj();

};

// 0x8 (0x1C0 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputDataTable
class UHoudiniInputDataTable : public UHoudiniInputObject
{
public:
	uint8                                        Pad_A15[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputDataTable* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x68 (0x220 - 0x1B8)
// Class HoudiniEngineRuntime.HoudiniInputBlueprint
class UHoudiniInputBlueprint : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   BPComponents;                                      // 0x1B8(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<TSoftObjectPtr<class UObject>>          BPSceneComponents;                                 // 0x1C8(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x218(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x21C(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputBlueprint* GetDefaultObj();

};

// 0x10 (0x300 - 0x2F0)
// Class HoudiniEngineRuntime.HoudiniInputPackedLevelActor
class UHoudiniInputPackedLevelActor : public UHoudiniInputActor
{
public:
	class UHoudiniInputBlueprint*                BlueprintInputObject;                              // 0x2F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A22[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputPackedLevelActor* GetDefaultObj();

};

// 0x0 (0x2F0 - 0x2F0)
// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineActor
class UHoudiniInputLandscapeSplineActor : public UHoudiniInputActor
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputLandscapeSplineActor* GetDefaultObj();

};

// 0x78 (0x2A0 - 0x228)
// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplinesComponent
class UHoudiniInputLandscapeSplinesComponent : public UHoudiniInputSceneComponent
{
public:
	TArray<struct FHoudiniLandscapeSplineControlPointData> CachedControlPoints;                               // 0x228(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FHoudiniLandscapeSplineSegmentData> CachedSegments;                                    // 0x238(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<TSoftObjectPtr<class ULandscapeSplineControlPoint>, int32> ControlPointIdMap;                                 // 0x248(0x50)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NextControlPointId;                                // 0x298(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2B[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputLandscapeSplinesComponent* GetDefaultObj();

};

// 0xF8 (0x350 - 0x258)
// Class HoudiniEngineRuntime.HoudiniInputSplineMeshComponent
class UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent
{
public:
	struct FGuid                                 MeshPackageGuid;                                   // 0x258(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UStaticMesh*                           GeneratedMesh;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESplineMeshAxis                   CachedForwardAxis;                                 // 0x270(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A32[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSplineMeshParams                     CachedSplineParams;                                // 0x278(0xB0)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               CachedSplineUpDir;                                 // 0x328(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CachedSplineBoundaryMax;                           // 0x340(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CachedSplineBoundaryMin;                           // 0x344(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        CachedbSmoothInterpRollScale : 1;                  // Mask: 0x1, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A33[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputSplineMeshComponent* GetDefaultObj();

};

// 0x18 (0x2E0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	class UObject*                               InstancedObject;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        InstancedActors;                                   // 0x2D0(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	TArray<class UStaticMeshComponent*>          Instances;                                         // 0x2C8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x2D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UStaticMesh*                           InstancedMesh;                                     // 0x2E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapePtr
class UHoudiniLandscapePtr : public UObject
{
public:
	TSoftObjectPtr<class ALandscapeProxy>        LandscapeSoftPtr;                                  // 0x28(0x30)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniLandscapeOutputBakeType   BakeType;                                          // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A42[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  EditLayerName;                                     // 0x5C(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A43[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniLandscapePtr* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
class UHoudiniLandscapeTargetLayerOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                BakedEditLayer;                                    // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                CookedEditLayer;                                   // 0x48(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                TargetLayer;                                       // 0x58(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FHoudiniExtents                       Extents;                                           // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config)
	bool                                         bClearLayer;                                       // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCreatedLandscape;                                 // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCookedLayerRequiresBaking;                        // 0x7A(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A49[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                BakedLandscapeName;                                // 0x80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class ULandscapeLayerInfoObject*>     LayerInfoObjects;                                  // 0x90(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                BakeOutlinerFolder;                                // 0xA0(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                BakeFolder;                                        // 0xB0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaterialInstance;                                  // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bWriteLockedLayers;                                // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLockLayer;                                        // 0xC9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A4A[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHoudiniGenericAttribute>      PropertyAttributes;                                // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeTargetLayerOutput* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
class UHoudiniLandscapeOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config)
	class FString                                BakedName;                                         // 0x30(0x10)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UHoudiniLandscapeTargetLayerOutput*> Layers;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCreated;                                          // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A53[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniLandscapeOutput* GetDefaultObj();

};

// 0x18 (0xF8 - 0xE0)
// Class HoudiniEngineRuntime.HoudiniLandscapeSplineTargetLayerOutput
class UHoudiniLandscapeSplineTargetLayerOutput : public UHoudiniLandscapeTargetLayerOutput
{
public:
	class FName                                  AfterEditLayer;                                    // 0xE0(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0xE8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeSplineTargetLayerOutput* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeSplinesOutput
class UHoudiniLandscapeSplinesOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class ALandscapeSplineActor*                 LandscapeSplineActor;                              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class ULandscapeSplinesComponent*            LandscapeSplinesComponent;                         // 0x40(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TMap<class FName, class UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs;                                      // 0x48(0x50)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeSplinesOutput* GetDefaultObj();

};

// 0x228 (0x250 - 0x28)
// Class HoudiniEngineRuntime.HoudiniOutput
class UHoudiniOutput : public UObject
{
public:
	enum class EHoudiniOutputType                Type;                                              // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_A5F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHoudiniGeoPartObject>         HoudiniGeoPartObjects;                             // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                     // 0x40(0x50)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                  // 0x90(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class UMaterialInterface*> AssignementMaterials;                              // 0xE0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniMaterialIdentifier, class UMaterialInterface*> AssignmentMaterialsById;                           // 0x130(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class UMaterialInterface*> ReplacementMaterials;                              // 0x180(0x50)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniMaterialIdentifier, class UMaterialInterface*> ReplacementMaterialsById;                          // 0x1D0(0x50)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A64[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bLandscapeWorldComposition;                        // 0x224(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A66[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        HoudiniCreatedSocketActors;                        // 0x228(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        HoudiniAttachedSocketActors;                       // 0x238(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsEditableNode;                                   // 0x248(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasEditableNodeBuilt;                             // 0x249(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsUpdating;                                       // 0x24A(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x24B(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6A[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniOutput* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameter
class UHoudiniParameter : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
	class FString                                Label;                                             // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniParameterType             ParmType;                                          // 0x48(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       TupleSize;                                         // 0x4C(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NodeID;                                            // 0x50(0x4)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParmId;                                            // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ParentParmId;                                      // 0x58(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ChildIndex;                                        // 0x5C(0x4)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bIsVisible;                                        // 0x60(0x1)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsParentFolderVisible;                            // 0x61(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsDisabled;                                       // 0x62(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasChanged;                                       // 0x63(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x64(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsDefault;                                        // 0x65(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsSpare;                                          // 0x66(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bJoinNext;                                         // 0x67(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfMultiParm;                               // 0x68(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsDirectChildOfMultiParm;                         // 0x69(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPendingRevertToDefault;                           // 0x6A(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A73[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                TuplePendingRevertToDefault;                       // 0x70(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                Help;                                              // 0x80(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       TagCount;                                          // 0x90(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ValueIndex;                                        // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasExpression;                                    // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowExpression;                                   // 0x99(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A77[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ParamExpression;                                   // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           Tags;                                              // 0xB0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	bool                                         bAutoUpdate;                                       // 0x100(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A78[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameter* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButton
class UHoudiniParameterButton : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterButton* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
public:
	int32                                        Count;                                             // 0x108(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_A7B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Labels;                                            // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                Values;                                            // 0x120(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

	static class UClass* StaticClass();
	static class UHoudiniParameterButtonStrip* GetDefaultObj();

};

// 0x70 (0x178 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterChoice
class UHoudiniParameterChoice : public UHoudiniParameter
{
public:
	int32                                        IntValue;                                          // 0x108(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        DefaultIntValue;                                   // 0x10C(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                StringValue;                                       // 0x110(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FString                                DefaultStringValue;                                // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringChoiceValues;                                // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringChoiceLabels;                                // 0x140(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A80[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsChildOfRamp;                                    // 0x160(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A81[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                IntValuesArray;                                    // 0x168(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterChoice* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterColor
class UHoudiniParameterColor : public UHoudiniParameter
{
public:
	struct FLinearColor                          Color;                                             // 0x108(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FLinearColor                          DefaultColor;                                      // 0x118(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfRamp;                                    // 0x128(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A87[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterColor* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFile
class UHoudiniParameterFile : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                Filters;                                           // 0x128(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x138(0x1)(ExportObject, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A8B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFile* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFloat
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:
	TArray<float>                                Values;                                            // 0x108(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<float>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                Unit;                                              // 0x128(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNoSwap;                                           // 0x138(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasMin;                                           // 0x139(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasMax;                                           // 0x13A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasUIMin;                                         // 0x13B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasUIMax;                                         // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsLogarithmic;                                    // 0x13D(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A95[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Min;                                               // 0x140(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        UIMin;                                             // 0x148(0x4)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        UIMax;                                             // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfRamp;                                    // 0x150(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A97[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFloat* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolder
class UHoudiniParameterFolder : public UHoudiniParameter
{
public:
	enum class EHoudiniFolderParameterType       FolderType;                                        // 0x108(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExpanded;                                         // 0x109(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bChosen;                                           // 0x10A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA7[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ChildCounter;                                      // 0x10C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsContentShown;                                   // 0x110(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA9[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFolder* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolderList
class UHoudiniParameterFolderList : public UHoudiniParameter
{
public:
	bool                                         bIsTabMenu;                                        // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsTabsShown;                                      // 0x109(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AAB[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterFolder*>       TabFolders;                                        // 0x110(0x10)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterFolderList* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterInt
class UHoudiniParameterInt : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                Unit;                                              // 0x128(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasMin;                                           // 0x138(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasMax;                                           // 0x139(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasUIMin;                                         // 0x13A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasUIMax;                                         // 0x13B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsLogarithmic;                                    // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Min;                                               // 0x140(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	int32                                        Max;                                               // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	int32                                        UIMin;                                             // 0x148(0x4)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        UIMax;                                             // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterInt* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterLabel
class UHoudiniParameterLabel : public UHoudiniParameter
{
public:
	TArray<class FString>                        LabelStrings;                                      // 0x108(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterLabel* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
class UHoudiniParameterMultiParm : public UHoudiniParameter
{
public:
	bool                                         bIsShown;                                          // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Value;                                             // 0x10C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	class FString                                TemplateName;                                      // 0x110(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst)
	int32                                        MultiparmValue;                                    // 0x120(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceNum;                              // 0x124(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceLength;                           // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceCount;                            // 0x12C(0x4)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       InstanceStartOffset;                               // 0x130(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;                  // 0x138(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DefaultInstanceCount;                              // 0x148(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC1[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterMultiParm* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
public:
	TWeakObjectPtr<class UHoudiniInput>          HoudiniInput;                                      // 0x108(0x8)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UHoudiniParameterOperatorPath* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
class UHoudiniParameterRampModificationEvent : public UObject
{
public:
	bool                                         bIsInsertEvent;                                    // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsFloatRamp;                                      // 0x29(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACB[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        DeleteInstanceIndex;                               // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InsertPosition;                                    // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InsertFloat;                                       // 0x34(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          InsertColor;                                       // 0x38(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniRampInterpolationType     InsertInterpolation;                               // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD3[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterRampModificationEvent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
class UHoudiniParameterRampFloatPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Value;                                             // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, DuplicateTransient)
	uint8                                        Pad_AD7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InstanceIndex;                                     // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x38(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniParameterFloat*                ValueParentParm;                                   // 0x40(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloatPoint* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
class UHoudiniParameterRampColorPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FLinearColor                          Value;                                             // 0x2C(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, DuplicateTransient)
	uint8                                        Pad_AE2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InstanceIndex;                                     // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AE4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x48(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniParameterColor*                ValueParentParm;                                   // 0x50(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColorPoint* GetDefaultObj();

};

// 0x68 (0x1B8 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampFloatPoint*> Points;                                            // 0x150(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;                                      // 0x160(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultPositions;                                  // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultValues;                                     // 0x180(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                DefaultChoices;                                    // 0x190(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumDefaultPoints;                                  // 0x1A0(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCaching;                                          // 0x1A4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloat* GetDefaultObj();

};

// 0x70 (0x1C0 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampColor
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampColorPoint*> Points;                                            // 0x150(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bCaching;                                          // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AED[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;                                      // 0x168(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultPositions;                                  // 0x178(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  DefaultValues;                                     // 0x188(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                DefaultChoices;                                    // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumDefaultPoints;                                  // 0x1A8(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColor* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterSeparator
class UHoudiniParameterSeparator : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterSeparator* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterString
class UHoudiniParameterString : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ChosenAssets;                                      // 0x128(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsAssetRef;                                       // 0x138(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterString* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterToggle
class UHoudiniParameterToggle : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterToggle* GetDefaultObj();

};

// 0x3C8 (0x3F0 - 0x28)
// Class HoudiniEngineRuntime.TOPNode
class UTOPNode : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B06[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NodePath;                                          // 0x40(0x10)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ParentName;                                        // 0x50(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               WorkResultParent;                                  // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FTOPWorkResult>                WorkResult;                                        // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHidden;                                           // 0x78(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Config)
	bool                                         bAutoLoad;                                         // 0x79(0x1)(Edit, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPDGNodeState                     NodeState;                                         // 0x7A(0x1)(Edit, ConstParm, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCachedHaveNotLoadedWorkResults;                   // 0x7B(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCachedHaveLoadedWorkResults;                      // 0x7C(0x1)(Edit, ConstParm, Net, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasChildNodes;                                    // 0x7D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B0C[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          ClearedLandscapeLayers;                            // 0x80(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	struct FHoudiniClearedEditLayers             ClearedLayers;                                     // 0xD0(0x50)(Edit, ConstParm, BlueprintVisible, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShow;                                             // 0x120(0x1)(Edit, ConstParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B0E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                      // 0x128(0x50)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FWorkItemTally                        WorkItemTally;                                     // 0x178(0x238)(Net, Config)
	struct FAggregatedWorkItemTally              AggregatedWorkItemTally;                           // 0x3B0(0x28)(ExportObject, Net, Config)
	bool                                         bHasReceivedCookCompleteEvent;                     // 0x3D8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B10[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x3E0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)

	static class UClass* StaticClass();
	static class UTOPNode* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class HoudiniEngineRuntime.TOPNetwork
class UTOPNetwork : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B16[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NodePath;                                          // 0x40(0x10)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTOPNode*>                      AllTOPNodes;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SelectedTOPIndex;                                  // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B19[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ParentName;                                        // 0x68(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowResults;                                      // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoLoadResults;                                  // 0x79(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B1B[0x1E];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTOPNetwork* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
class UHoudiniPDGAssetLink : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
	class FString                                AssetNodePath;                                     // 0x38(0x10)(BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        AssetId;                                           // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B1F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UTOPNetwork*>                   AllTOPNetworks;                                    // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SelectedTOPNetworkIndex;                           // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPDGLinkState                     LinkState;                                         // 0x64(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoCook;                                         // 0x65(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseTOPNodeFilter;                                 // 0x66(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseTOPOutputFilter;                               // 0x67(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                TOPNodeFilter;                                     // 0x68(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                TOPOutputFilter;                                   // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumWorkItems;                                      // 0x88(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B22[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FAggregatedWorkItemTally              WorkItemTally;                                     // 0x90(0x28)(Net, Config)
	class FString                                OutputCachePath;                                   // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsUIRefresh;                                   // 0xC8(0x1)(BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B25[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                OutputParentActor;                                 // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDirectoryPath                        BakeFolder;                                        // 0xD8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B26[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumAttemptedNodeAutoBakes;                         // 0x130(0x4)(BlueprintVisible, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSuccessfulNodeAutoBakes;                        // 0x134(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniPDGAssetLink* GetDefaultObj();

};

// 0x2E8 (0x310 - 0x28)
// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
class UHoudiniRuntimeSettings : public UObject
{
public:
	enum class EHoudiniRuntimeSettingsSessionType SessionType;                                       // 0x28(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B29[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ServerHost;                                        // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        ServerPort;                                        // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B2A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ServerPipeName;                                    // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bStartAutomaticServer;                             // 0x58(0x1)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B2C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AutomaticServerTimeout;                            // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bSyncWithHoudiniCook;                              // 0x60(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCookUsingHoudiniTime;                             // 0x61(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSyncViewport;                                     // 0x62(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSyncHoudiniViewport;                              // 0x63(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSyncUnrealViewport;                               // 0x64(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowMultiAssetDialog;                             // 0x65(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bPreferHdaMemoryCopyOverHdaSourceFile;             // 0x66(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPauseCookingOnStart;                              // 0x67(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDisplaySlateCookingNotifications;                 // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B30[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultTemporaryCookFolder;                        // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                DefaultBakeFolder;                                 // 0x80(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableTheReferenceCountedInputSystem;             // 0x90(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         MarshallingLandscapesUseDefaultUnrealScaling;      // 0x91(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         MarshallingLandscapesUseFullResolution;            // 0x92(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         MarshallingLandscapesForceMinMaxValues;            // 0x93(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        MarshallingLandscapesForcedMinValue;               // 0x94(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        MarshallingLandscapesForcedMaxValue;               // 0x98(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x9C(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLegacyInputCurves;                             // 0x9D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B37[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MarshallingSplineResolution;                       // 0xA0(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bEnableProxyStaticMesh;                            // 0xA4(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowDefaultMesh;                                  // 0xA5(0x1)(BlueprintVisible, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xA6(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementByTimer;           // 0xA7(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ProxyMeshAutoRefineTimeoutSeconds;                 // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorld;    // 0xAC(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIE;     // 0xAD(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B3A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDoubleSidedGeometry : 1;                          // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        BitPad_7F : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_B3C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0xB8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0xC0(0x150)(ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x210(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B41[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LightMapResolution;                                // 0x214(0x4)(ConstParm, ExportObject, Parm, ReturnParm)
	float                                        LpvBiasMultiplier;                                 // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x21C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0x220(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst)
	int32                                        LightMapCoordinateIndex;                           // 0x230(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        bUseMaximumStreamingTexelRatio : 1;                // Mask: 0x1, PropSize: 0x10x234(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        BitPad_80 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_B43[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StreamingDistanceMultiplier;                       // 0x238(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B44[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UFoliageType_InstancedStaticMesh*      FoliageDefaultSettings;                            // 0x240(0x8)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x248(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bUseFullPrecisionUVs;                              // 0x258(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B46[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SrcLightmapIndex;                                  // 0x25C(0x4)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        DstLightmapIndex;                                  // 0x260(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        MinLightmapResolution;                             // 0x264(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bRemoveDegenerates;                                // 0x268(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag;                           // 0x269(0x1)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag;                              // 0x26A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag;                             // 0x26B(0x1)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bUseMikkTSpace;                                    // 0x26C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bBuildAdjacencyBuffer;                             // 0x26D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x1, PropSize: 0x10x26E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bBuildReversedIndexBuffer : 1;                     // Mask: 0x2, PropSize: 0x10x26E(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x4, PropSize: 0x10x26E(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_83 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_B4D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DistanceFieldResolutionScale;                      // 0x270(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGenerateDistanceFieldAsIfTwoSided : 1;            // Mask: 0x1, PropSize: 0x10x274(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSupportFaceRemap : 1;                             // Mask: 0x2, PropSize: 0x10x274(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_85 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	bool                                         bPDGAsyncCommandletImportEnabled;                  // 0x275(0x1)(BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B53[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        HoudiniToolsSearchPath;                            // 0x278(0x10)(BlueprintVisible, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseCustomHoudiniLocation;                         // 0x288(0x1)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B56[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        CustomHoudiniLocation;                             // 0x290(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EHoudiniExecutableType            HoudiniExecutable;                                 // 0x2A0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B57[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        CustomHoudiniHomeLocation;                         // 0x2A8(0x10)(BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        CookingThreadStackSize;                            // 0x2B8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B5A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                HoudiniEnvironmentFiles;                           // 0x2C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                OtlSearchPath;                                     // 0x2D0(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                DsoSearchPath;                                     // 0x2E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                ImageDsoSearchPath;                                // 0x2F0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                AudioDsoSearchPath;                                // 0x300(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniRuntimeSettings* GetDefaultObj();

};

// 0x328 (0x5F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent
class UHoudiniSplineComponent : public USceneComponent
{
public:
	uint8                                        Pad_B5F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    CurvePoints;                                       // 0x2D0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector3d>                     DisplayPoints;                                     // 0x2E0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x2F0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HoudiniSplineName;                                 // 0x300(0x10)(Edit, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClosed;                                           // 0x310(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReversed;                                         // 0x311(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B63[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CurveOrder;                                        // 0x314(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsHoudiniSplineVisible;                           // 0x318(0x1)(ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x319(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x31A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;                   // 0x31B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsOutputCurve;                                    // 0x31C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCookOnCurveChanged;                               // 0x31D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsLegacyInputCurve;                               // 0x31E(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B65[0x2B1];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasChanged;                                       // 0x5D0(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x5D1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsInputCurve;                                     // 0x5D2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsEditableOutputCurve;                            // 0x5D3(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NodeID;                                            // 0x5D4(0x4)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PartName;                                          // 0x5D8(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B6B[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniStaticMesh
class UHoudiniStaticMesh : public UObject
{
public:
	bool                                         bHasNormals;                                       // 0x28(0x1)(ConstParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasTangents;                                      // 0x29(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bHasColors;                                        // 0x2A(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_C0A[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       NumUVLayers;                                       // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHasPerFaceMaterials;                              // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C0B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     VertexPositions;                                   // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FIntVector>                    TriangleIndices;                                   // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FColor>                        VertexInstanceColors;                              // 0x58(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceNormals;                             // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceUTangents;                           // 0x78(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceVTangents;                           // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector2f>                     VertexInstanceUVs;                                 // 0x98(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                MaterialIDsPerTriangle;                            // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FStaticMaterial>               StaticMaterials;                                   // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniStaticMesh* GetDefaultObj();

	void SetVertexPosition(uint32* InVertexIndex, struct FVector3f* InPosition);
	void SetTriangleVertexVTangent(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InVTangent);
	void SetTriangleVertexUV(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, uint8* InUVLayer, struct FVector2f* InUV);
	void SetTriangleVertexUTangent(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InUTangent);
	void SetTriangleVertexNormal(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FVector3f* InNormal);
	void SetTriangleVertexIndices(uint32* InTriangleIndex, struct FIntVector* InTriangleVertexIndices);
	void SetTriangleVertexColor(uint32* InTriangleIndex, uint8* InTriangleVertexIndex, struct FColor* InColor);
	void SetTriangleMaterialID(uint32* InTriangleIndex, int32* InMaterialID);
	void SetStaticMaterial(uint32 InMaterialIndex, const struct FStaticMaterial& InStaticMaterial);
	void SetNumUVLayers(uint32* InNumUVLayers);
	void SetNumStaticMaterials(uint32* InNumStaticMaterials);
	void SetHasTangents(bool bInHasTangents);
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
	void SetHasNormals(bool bInHasNormals);
	void SetHasColors(bool bInHasColors);
	void Optimize();
	void IsValid(bool* bInSkipVertexIndicesCheck, bool ReturnValue);
	void Initialize(uint32* InNumVertices, uint32* InNumTriangles, uint32* InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
	void HasTangents(bool ReturnValue);
	void HasPerFaceMaterials(bool ReturnValue);
	void HasNormals(bool ReturnValue);
	void HasColors(bool ReturnValue);
	void GetVertexPositions(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceVTangents(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceUVs(const TArray<struct FVector2f>& ReturnValue);
	void GetVertexInstanceUTangents(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceNormals(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceColors(const TArray<struct FColor>& ReturnValue);
	void GetTriangleIndices(const TArray<struct FIntVector>& ReturnValue);
	void GetStaticMaterials(const TArray<struct FStaticMaterial>& ReturnValue);
	void GetNumVertices(uint32 ReturnValue);
	void GetNumVertexInstances(uint32 ReturnValue);
	void GetNumUVLayers(uint32 ReturnValue);
	void GetNumTriangles(uint32 ReturnValue);
	void GetNumStaticMaterials(uint32 ReturnValue);
	void GetMaterialIndex(class FName InMaterialSlotName, int32 ReturnValue);
	void GetMaterialIDsPerTriangle(const TArray<int32>& ReturnValue);
	void GetMaterial(int32 InMaterialIndex, class UMaterialInterface* ReturnValue);
	void CalculateTangents(bool bInComputeWeightedNormals);
	void CalculateNormals(bool bInComputeWeightedNormals);
	void CalcBounds(const struct FBox& ReturnValue);
	void AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial, uint32 ReturnValue);
};

// 0x48 (0x720 - 0x6D8)
// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
class UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	class UHoudiniStaticMesh*                    Mesh;                                              // 0x6D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  LocalBounds;                                       // 0x6E0(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bHoudiniIconVisible;                               // 0x718(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C25[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniStaticMeshComponent* GetDefaultObj();

	class UHoudiniStaticMesh* SetMesh();
	bool SetHoudiniIconVisible();
	void NotifyMeshUpdated();
	void IsHoudiniIconVisible(bool ReturnValue);
	void GetMesh(class UHoudiniStaticMesh* ReturnValue);
};

// 0x88 (0xB0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniToolData
class UHoudiniToolData : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
	class FString                                Tooltip;                                           // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	struct FHImageData                           IconImageData;                                     // 0x48(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FFilePath                             IconSourcePath;                                    // 0x78(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                HelpURL;                                           // 0x88(0x10)(EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniToolType                  Type;                                              // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	bool                                         DefaultTool;                                       // 0x99(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniToolSelectionType         SelectionType;                                     // 0x9A(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C34[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFilePath                             SourceAssetPath;                                   // 0xA0(0x10)(BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniToolData* GetDefaultObj();

	class FString SaveToJSONFile(bool ReturnValue);
	class FString PopulateFromJSONFile(bool ReturnValue);
	class FString PopulateFromJSONData(bool ReturnValue);
	class FString ConvertToJSONData(bool ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class HoudiniEngineRuntime.HoudiniToolsPackageAsset
class UHoudiniToolsPackageAsset : public UObject
{
public:
	TMap<class FString, struct FCategoryRules>   Categories;                                        // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FDirectoryPath                        ExternalPackageDir;                                // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bReimportPackageDescription;                       // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportPackageDescription;                         // 0x89(0x1)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bReimportToolsDescription;                         // 0x8A(0x1)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportToolsDescription;                           // 0x8B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C37[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniToolsPackageAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
class IHoudiniAssetStateEvents : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniAssetStateEvents* GetDefaultObj();

};

}


