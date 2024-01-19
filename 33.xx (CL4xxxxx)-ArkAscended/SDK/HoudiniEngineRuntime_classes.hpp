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
	class FString                                AssetFileName;                                     // 0x28(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<uint8>                                AssetBytes;                                        // 0x38(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       AssetBytesCount;                                   // 0x48(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssetLimitedCommercial;                           // 0x4C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssetNonCommercial;                               // 0x4D(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssetExpanded;                                    // 0x4E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_932[0x1];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAsset* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class HoudiniEngineRuntime.HoudiniAssetActor
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                HoudiniAssetComponent;                             // 0x4C8(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AHoudiniAssetActor* GetDefaultObj();

};

// 0x518 (0xBB0 - 0x698)
// Class HoudiniEngineRuntime.HoudiniAssetComponent
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_93D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x6A0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bCookOnParameterChange;                            // 0x6A8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUploadTransformsToHoudiniEngine;                  // 0x6A9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bCookOnTransformChange;                            // 0x6AA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCookOnAssetInputCook;                             // 0x6AB(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOutputless;                                       // 0x6AC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOutputTemplateGeos;                               // 0x6AD(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseOutputNodes;                                   // 0x6AE(0x1)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_941[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        TemporaryCookFolder;                               // 0x6B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FDirectoryPath                        BakeFolder;                                        // 0x6C0(0x10)(ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniStaticMeshMethod          StaticMeshMethod;                                  // 0x6D0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_946[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;                    // 0x6D8(0x1A0)(Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMeshBuildSettings                    StaticMeshBuildSettings;                           // 0x878(0x48)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideGlobalProxyStaticMeshSettings;            // 0x8C0(0x1)(ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshOverride;                    // 0x8C1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementByTimerOverride;   // 0x8C2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_949[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ProxyMeshAutoRefineTimeoutSecondsOverride;         // 0x8C4(0x4)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x8C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x8C9(0x1)(Edit, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeUseTempLayers;                           // 0x8CA(0x1)(BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_94B[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        AssetId;                                           // 0x8CC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                NodeIdsToCook;                                     // 0x8D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<int32, int32>                           OutputNodeCookCounts;                              // 0x8E0(0x50)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class UHoudiniAssetComponent*>          DownstreamHoudiniAssets;                           // 0x930(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGuid                                 ComponentGUID;                                     // 0x980(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 HapiGUID;                                          // 0x990(0x10)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HapiAssetName;                                     // 0x9A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniAssetState                AssetState;                                        // 0x9B0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniAssetState                DebugLastAssetState;                               // 0x9B1(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniAssetStateResult          AssetStateResult;                                  // 0x9B2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_951[0xD];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LastComponentTransform;                            // 0x9C0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       SubAssetIndex;                                     // 0xA20(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AssetCookCount;                                    // 0xA24(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenLoaded;                                    // 0xA28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenDuplicated;                                // 0xA29(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPendingDelete;                                    // 0xA2A(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecookRequested;                                  // 0xA2B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRebuildRequested;                                 // 0xA2C(0x1)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCooking;                                    // 0xA2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bForceNeedUpdate;                                  // 0xA2E(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLastCookSuccess;                                  // 0xA2F(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParameterDefinitionUpdateNeeded;                  // 0xA30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBlueprintStructureModified;                       // 0xA31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBlueprintModified;                                // 0xA32(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_955[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameter*>             Parameters;                                        // 0xA38(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0xA48(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniOutput*>                Outputs;                                           // 0xA58(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0xA68(0x10)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TWeakObjectPtr<class AActor>>         UntrackedOutputs;                                  // 0xA78(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniHandleComponent*>       HandleComponents;                                  // 0xA88(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasComponentTransformChanged;                     // 0xA98(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFullyLoaded;                                      // 0xA99(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_959[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniPDGAssetLink*                  PDGAssetLink;                                      // 0xAA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTimerHandle                          RefineMeshesTimer;                                 // 0xAA8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_95A[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNoProxyMeshNextCookRequested;                     // 0xAC8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_95C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class UObject*, int32>                  InputPresets;                                      // 0xAD0(0x50)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBakeAfterNextCook;                                // 0xB20(0x1)(Edit, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_95E[0x5F];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bCachedIsPreview;                                  // 0xB80(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_95F[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       LastTickTime;                                      // 0xB90(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_960[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent* GetDefaultObj();

};

// 0x100 (0xCB0 - 0xBB0)
// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	uint8                                        Pad_96B[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         FauxBPProperty;                                    // 0xBF8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHoudiniAssetChanged;                              // 0xBF9(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdatedFromTemplate;                              // 0xBFA(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsInBlueprintEditor;                              // 0xBFB(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0xBFC(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasRegisteredComponentTemplate;                   // 0xBFD(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_96F[0xA];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes;                                 // 0xC08(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<struct FGuid, struct FGuid>             CachedInputNodes;                                  // 0xC58(0x50)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_970[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetBlueprintComponent* GetDefaultObj();

	int32 SetToggleValueAt(class FString* Name, bool Value);
	int32 SetFloatParameter(class FString* Name, float Value);
	void HasParameter(class FString* Name, bool ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetParameter
class UHoudiniAssetParameter : public UObject
{
public:
	uint8                                        Pad_971[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameter* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterButton* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_974[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterChoice* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_977[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterColor* GetDefaultObj();

};

// 0x28 (0xA8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_97A[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFile* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_97D[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFloat* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFolder* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFolderList* GetDefaultObj();

};

// 0x30 (0xB0 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_986[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterInt* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterLabel* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_989[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterMultiparm* GetDefaultObj();

};

// 0x18 (0x98 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_98C[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterRamp* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterSeparator* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterString
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_990[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterString* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_992[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterToggle* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
class UHoudiniAssetComponentMaterials_V1 : public UObject
{
public:
	uint8                                        Pad_996[0xA0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetComponentMaterials_V1* GetDefaultObj();

};

// 0x98 (0x360 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
class UHoudiniHandleComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_997[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent_V1* GetDefaultObj();

};

// 0x128 (0x3F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
class UHoudiniSplineComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_99A[0x128];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent_V1* GetDefaultObj();

};

// 0x160 (0x1E0 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetInput
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_99D[0x160];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetInput* GetDefaultObj();

};

// 0x110 (0x190 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_99F[0x110];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetInstanceInput* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
class UHoudiniAssetInstanceInputField : public UObject
{
public:
	uint8                                        Pad_9A2[0x198];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetInstanceInputField* GetDefaultObj();

};

// 0x518 (0xBB0 - 0x698)
// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x698(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6B : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_9A7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x6A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x6A8(0x150)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x7F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9AA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        GeneratedLightMapResolution;                       // 0x7FC(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x800(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x804(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x814(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x818(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_9AD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x81C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x820(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x828(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  BakeFolder;                                        // 0x838(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  TempCookFolder;                                    // 0x850(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B0[0x348];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent_V1* GetDefaultObj();

};

// 0x18 (0x2E0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_9B3[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent_V1* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_9B6[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent_V1* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniEngineCopyPropertiesInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HoudiniEngineRuntime.HoudiniHandleParameter
class UHoudiniHandleParameter : public UObject
{
public:
	class UHoudiniParameter*                     AssetParameter;                                    // 0x28(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TupleIndex;                                        // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9BD[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniHandleParameter* GetDefaultObj();

};

// 0x38 (0x300 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent
class UHoudiniHandleComponent : public USceneComponent
{
public:
	TArray<class UHoudiniHandleParameter*>       XformParms;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniHandleParameter*               RSTParm;                                           // 0x2D8(0x8)(Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniHandleParameter*               RotOrderParm;                                      // 0x2E0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniHandleType                HandleType;                                        // 0x2E8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                HandleName;                                        // 0x2F0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInput
class UHoudiniInput : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
	class FString                                Label;                                             // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniInputType                 Type;                                              // 0x48(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	enum class EHoudiniInputType                 PreviousType;                                      // 0x49(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CC[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        AssetNodeId;                                       // 0x4C(0x4)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InputNodeId;                                       // 0x50(0x4)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InputIndex;                                        // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ParmId;                                            // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsObjectPathParameter;                            // 0x5C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                CreatedDataNodeIds;                                // 0x60(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasChanged;                                       // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x71(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D5[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0x78(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Help;                                              // 0xB0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniXformType                 KeepWorldTransform;                                // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPackBeforeMerge;                                  // 0xC1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReference;                                // 0xC2(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0xC3(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0xC4(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0xC5(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExportLODs;                                       // 0xC6(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExportSockets;                                    // 0xC7(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xC8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExportColliders;                                  // 0xC9(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExportMaterialParameters;                         // 0xCA(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCookOnCurveChanged;                               // 0xCB(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9DF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           GeometryInputObjects;                              // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStaticMeshChanged;                                // 0xE0(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           AssetInputObjects;                                 // 0xE8(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInputAssetConnectedInHoudini;                     // 0xF8(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           CurveInputObjects;                                 // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DefaultCurveOffset;                                // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x114(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLegacyInputCurves;                             // 0x115(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E6[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           LandscapeInputObjects;                             // 0x118(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeHasExportTypeChanged;                    // 0x128(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniInputObject*>           WorldInputObjects;                                 // 0x130(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        WorldInputBoundSelectorObjects;                    // 0x140(0x10)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsWorldInputBoundSelector;                        // 0x150(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWorldInputBoundSelectorAutoUpdate;                // 0x151(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        UnrealSplineResolution;                            // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputObject*>           SkeletalInputObjects;                              // 0x158(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputObject*>           GeometryCollectionInputObjects;                    // 0x168(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class ULandscapeComponent*>             LandscapeSelectedComponents;                       // 0x178(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<int32>                                  InputNodesPendingDelete;                           // 0x1C8(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                // 0x218(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniInputObject*>           LastUndoDeletedInputs;                             // 0x228(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInputLandscape;                             // 0x238(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniLandscapeExportType       LandscapeExportType;                               // 0x239(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeExportSelectionOnly;                     // 0x23A(0x1)(Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeControlVisiblity;                        // 0x23B(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeAutoSelectComponent;                     // 0x23C(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeExportMaterials;                         // 0x23D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeExportLighting;                          // 0x23E(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeExportNormalizedUVs;                     // 0x23F(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLandscapeExportTileUVs;                           // 0x240(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x241(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F0[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInput* GetDefaultObj();

};

// 0x100 (0x128 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInputObject
class UHoudiniInputObject : public UObject
{
public:
	TSoftObjectPtr<class UObject>                InputObject;                                       // 0x28(0x30)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x60(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EHoudiniInputObjectType           Type;                                              // 0xC0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_9F3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InputNodeId;                                       // 0xC4(0x4)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InputObjectNodeId;                                 // 0xC8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGuid                                 Guid;                                              // 0xCC(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_9F4[0x2C];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasChanged;                                       // 0x108(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x109(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTransformChanged;                                 // 0x10A(0x1)(BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReference;                                // 0x10B(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0x10C(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0x10D(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0x10E(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F7[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        MaterialReferences;                                // 0x110(0x10)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x120(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F8[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputObject* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9FC[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputStaticMesh* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_9FF[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMesh* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
public:
	uint8                                        Pad_A02[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollection* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
public:
	uint8                                        Pad_A07[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ActorTransform;                                    // 0x130(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputSceneComponent* GetDefaultObj();

};

// 0x30 (0x1C0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x190(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)

	static class UClass* StaticClass();
	static class UHoudiniInputMeshComponent* GetDefaultObj();

};

// 0x10 (0x1D0 - 0x1C0)
// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
public:
	TArray<struct FTransform>                    InstanceTransforms;                                // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputInstancedMeshComponent* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
public:
	int32                                        NumberOfSplineControlPoints;                       // 0x190(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SplineLength;                                      // 0x194(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SplineResolution;                                  // 0x198(0x4)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         SplineClosed;                                      // 0x19C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A11[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    SplineControlPoints;                               // 0x1A0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputSplineComponent* GetDefaultObj();

};

// 0x0 (0x190 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollectionComponent* GetDefaultObj();

};

// 0x0 (0x190 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMeshComponent* GetDefaultObj();

};

// 0x18 (0x140 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
public:
	enum class EHoudiniCurveType                 CurveType;                                         // 0x128(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x129(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Reversed;                                          // 0x12A(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1A[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniSplineComponent*               CachedComponent;                                   // 0x130(0x8)(ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1B[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniSplineComponent* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
public:
	float                                        FOV;                                               // 0x190(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        AspectRatio;                                       // 0x194(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsOrthographic;                                   // 0x198(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OrthoWidth;                                        // 0x19C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OrthoNearClipPlane;                                // 0x1A0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OrthoFarClipPlane;                                 // 0x1A4(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputCameraComponent* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
public:
	int32                                        AssetOutputIndex;                                  // 0x128(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A23[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniAsset* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputActor
class UHoudiniInputActor : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   ActorComponents;                                   // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<TSoftObjectPtr<class UObject>>          ActorSceneComponents;                              // 0x138(0x50)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x188(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x18C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputActor* GetDefaultObj();

};

// 0x10 (0x1A0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputLandscape
class UHoudiniInputLandscape : public UHoudiniInputActor
{
public:
	int32                                        CachedNumLandscapeComponents;                      // 0x190(0x4)(EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2B[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputLandscape* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputBrush
class UHoudiniInputBrush : public UHoudiniInputActor
{
public:
	TArray<struct FHoudiniBrushInfo>             BrushesInfo;                                       // 0x190(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UModel*                                CombinedModel;                                     // 0x1A0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIgnoreInputObject;                                // 0x1A8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBrushType                        CachedInputBrushType;                              // 0x1A9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2F[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputBrush* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputDataTable
class UHoudiniInputDataTable : public UHoudiniInputObject
{
public:
	uint8                                        Pad_A31[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniInputDataTable* GetDefaultObj();

};

// 0x0 (0x130 - 0x130)
// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputBlueprint
class UHoudiniInputBlueprint : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   BPComponents;                                      // 0x128(0x10)(Edit, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<TSoftObjectPtr<class UObject>>          BPSceneComponents;                                 // 0x138(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x188(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x18C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInputBlueprint* GetDefaultObj();

};

// 0x18 (0x2E0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	class UObject*                               InstancedObject;                                   // 0x2C8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        InstancedActors;                                   // 0x2D0(0x10)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	TArray<class UStaticMeshComponent*>          Instances;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x2D8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UStaticMesh*                           InstancedMesh;                                     // 0x2E8(0x8)(ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapePtr
class UHoudiniLandscapePtr : public UObject
{
public:
	TSoftObjectPtr<class ALandscapeProxy>        LandscapeSoftPtr;                                  // 0x28(0x30)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniLandscapeOutputBakeType   BakeType;                                          // 0x58(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A4E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  EditLayerName;                                     // 0x5C(0x8)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A4F[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniLandscapePtr* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
class UHoudiniLandscapeTargetLayerOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                BakedEditLayer;                                    // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                CookedEditLayer;                                   // 0x48(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                TargetLayer;                                       // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FHoudiniExtents                       Extents;                                           // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	bool                                         bClearLayer;                                       // 0x78(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCreatedLandscape;                                 // 0x79(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCookedLayerRequiresBaking;                        // 0x7A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5B[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                BakedLandscapeName;                                // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class ULandscapeLayerInfoObject*>     LayerInfoObjects;                                  // 0x90(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                BakeOutlinerFolder;                                // 0xA0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MaterialInstance;                                  // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeTargetLayerOutput* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
class UHoudiniLandscapeOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	class FString                                BakedName;                                         // 0x30(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UHoudiniLandscapeTargetLayerOutput*> Layers;                                            // 0x40(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCreated;                                          // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5D[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniLandscapeOutput* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniOutput
class UHoudiniOutput : public UObject
{
public:
	enum class EHoudiniOutputType                Type;                                              // 0x28(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_A63[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHoudiniGeoPartObject>         HoudiniGeoPartObjects;                             // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                     // 0x40(0x50)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                  // 0x90(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UMaterialInterface*> AssignementMaterials;                              // 0xE0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UMaterialInterface*> ReplacementMaterials;                              // 0x130(0x50)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A66[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bLandscapeWorldComposition;                        // 0x184(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A67[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        HoudiniCreatedSocketActors;                        // 0x188(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        HoudiniAttachedSocketActors;                       // 0x198(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsEditableNode;                                   // 0x1A8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasEditableNodeBuilt;                             // 0x1A9(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsUpdating;                                       // 0x1AA(0x1)(Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x1AB(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A68[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniOutput* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameter
class UHoudiniParameter : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
	class FString                                Label;                                             // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHoudiniParameterType             ParmType;                                          // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       TupleSize;                                         // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NodeID;                                            // 0x50(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ParmId;                                            // 0x54(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ParentParmId;                                      // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ChildIndex;                                        // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsVisible;                                        // 0x60(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsParentFolderVisible;                            // 0x61(0x1)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDisabled;                                       // 0x62(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasChanged;                                       // 0x63(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x64(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDefault;                                        // 0x65(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsSpare;                                          // 0x66(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bJoinNext;                                         // 0x67(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfMultiParm;                               // 0x68(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDirectChildOfMultiParm;                         // 0x69(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPendingRevertToDefault;                           // 0x6A(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A71[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                TuplePendingRevertToDefault;                       // 0x70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Help;                                              // 0x80(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       TagCount;                                          // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ValueIndex;                                        // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasExpression;                                    // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowExpression;                                   // 0x99(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A75[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ParamExpression;                                   // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           Tags;                                              // 0xB0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)
	bool                                         bAutoUpdate;                                       // 0x100(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A76[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	int32                                        Count;                                             // 0x108(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Labels;                                            // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                Values;                                            // 0x120(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

	static class UClass* StaticClass();
	static class UHoudiniParameterButtonStrip* GetDefaultObj();

};

// 0x70 (0x178 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterChoice
class UHoudiniParameterChoice : public UHoudiniParameter
{
public:
	int32                                        IntValue;                                          // 0x108(0x4)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        DefaultIntValue;                                   // 0x10C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                StringValue;                                       // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	class FString                                DefaultStringValue;                                // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringChoiceValues;                                // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringChoiceLabels;                                // 0x140(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7C[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsChildOfRamp;                                    // 0x160(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                IntValuesArray;                                    // 0x168(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterChoice* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterColor
class UHoudiniParameterColor : public UHoudiniParameter
{
public:
	struct FLinearColor                          Color;                                             // 0x108(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FLinearColor                          DefaultColor;                                      // 0x118(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfRamp;                                    // 0x128(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7F[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterColor* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFile
class UHoudiniParameterFile : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Filters;                                           // 0x128(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x138(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A85[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFile* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFloat
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:
	TArray<float>                                Values;                                            // 0x108(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<float>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Unit;                                              // 0x128(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNoSwap;                                           // 0x138(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMin;                                           // 0x139(0x1)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMax;                                           // 0x13A(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasUIMin;                                         // 0x13B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasUIMax;                                         // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLogarithmic;                                    // 0x13D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A88[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Min;                                               // 0x140(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x144(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        UIMin;                                             // 0x148(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        UIMax;                                             // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsChildOfRamp;                                    // 0x150(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A89[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFloat* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolder
class UHoudiniParameterFolder : public UHoudiniParameter
{
public:
	enum class EHoudiniFolderParameterType       FolderType;                                        // 0x108(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExpanded;                                         // 0x109(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bChosen;                                           // 0x10A(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8C[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ChildCounter;                                      // 0x10C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsContentShown;                                   // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8D[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterFolder* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolderList
class UHoudiniParameterFolderList : public UHoudiniParameter
{
public:
	bool                                         bIsTabMenu;                                        // 0x108(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsTabsShown;                                      // 0x109(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8E[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterFolder*>       TabFolders;                                        // 0x110(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterFolderList* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterInt
class UHoudiniParameterInt : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Unit;                                              // 0x128(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMin;                                           // 0x138(0x1)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMax;                                           // 0x139(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasUIMin;                                         // 0x13A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasUIMax;                                         // 0x13B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLogarithmic;                                    // 0x13C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A91[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Min;                                               // 0x140(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        Max;                                               // 0x144(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        UIMin;                                             // 0x148(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UIMax;                                             // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterInt* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterLabel
class UHoudiniParameterLabel : public UHoudiniParameter
{
public:
	TArray<class FString>                        LabelStrings;                                      // 0x108(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterLabel* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
class UHoudiniParameterMultiParm : public UHoudiniParameter
{
public:
	bool                                         bIsShown;                                          // 0x108(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A97[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Value;                                             // 0x10C(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	class FString                                TemplateName;                                      // 0x110(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst)
	int32                                        MultiparmValue;                                    // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceNum;                              // 0x124(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceLength;                           // 0x128(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       MultiParmInstanceCount;                            // 0x12C(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       InstanceStartOffset;                               // 0x130(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A9B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;                  // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        DefaultInstanceCount;                              // 0x148(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A9D[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterMultiParm* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
public:
	TWeakObjectPtr<class UHoudiniInput>          HoudiniInput;                                      // 0x108(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UHoudiniParameterOperatorPath* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
class UHoudiniParameterRampModificationEvent : public UObject
{
public:
	bool                                         bIsInsertEvent;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsFloatRamp;                                      // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA4[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        DeleteInstanceIndex;                               // 0x2C(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InsertPosition;                                    // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InsertFloat;                                       // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          InsertColor;                                       // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniRampInterpolationType     InsertInterpolation;                               // 0x48(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA5[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterRampModificationEvent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
class UHoudiniParameterRampFloatPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Value;                                             // 0x2C(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        Pad_AA8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InstanceIndex;                                     // 0x34(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniParameterFloat*                ValueParentParm;                                   // 0x40(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloatPoint* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
class UHoudiniParameterRampColorPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FLinearColor                          Value;                                             // 0x2C(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x3C(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        Pad_AAA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InstanceIndex;                                     // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AAB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniParameterColor*                ValueParentParm;                                   // 0x50(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColorPoint* GetDefaultObj();

};

// 0x68 (0x1B8 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampFloatPoint*> Points;                                            // 0x150(0x10)(ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;                                      // 0x160(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultPositions;                                  // 0x170(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultValues;                                     // 0x180(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                DefaultChoices;                                    // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumDefaultPoints;                                  // 0x1A0(0x4)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCaching;                                          // 0x1A4(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1A8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloat* GetDefaultObj();

};

// 0x70 (0x1C0 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampColor
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampColorPoint*> Points;                                            // 0x150(0x10)(ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCaching;                                          // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;                                      // 0x168(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                DefaultPositions;                                  // 0x178(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  DefaultValues;                                     // 0x188(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                DefaultChoices;                                    // 0x198(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumDefaultPoints;                                  // 0x1A8(0x4)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1B0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	TArray<class FString>                        Values;                                            // 0x108(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ChosenAssets;                                      // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsAssetRef;                                       // 0x138(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB6[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniParameterString* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterToggle
class UHoudiniParameterToggle : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniParameterToggle* GetDefaultObj();

};

// 0x378 (0x3A0 - 0x28)
// Class HoudiniEngineRuntime.TOPNode
class UTOPNode : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                NodePath;                                          // 0x40(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ParentName;                                        // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               WorkResultParent;                                  // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTOPWorkResult>                WorkResult;                                        // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHidden;                                           // 0x78(0x1)(ConstParm, ExportObject, OutParm, Config)
	bool                                         bAutoLoad;                                         // 0x79(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPDGNodeState                     NodeState;                                         // 0x7A(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCachedHaveNotLoadedWorkResults;                   // 0x7B(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCachedHaveLoadedWorkResults;                      // 0x7C(0x1)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasChildNodes;                                    // 0x7D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABD[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          ClearedLandscapeLayers;                            // 0x80(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShow;                                             // 0xD0(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                      // 0xD8(0x50)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FWorkItemTally                        WorkItemTally;                                     // 0x128(0x238)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
	struct FAggregatedWorkItemTally              AggregatedWorkItemTally;                           // 0x360(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
	bool                                         bHasReceivedCookCompleteEvent;                     // 0x388(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x390(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)

	static class UClass* StaticClass();
	static class UTOPNode* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class HoudiniEngineRuntime.TOPNetwork
class UTOPNetwork : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                NodePath;                                          // 0x40(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTOPNode*>                      AllTOPNodes;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SelectedTOPIndex;                                  // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ParentName;                                        // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowResults;                                      // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoLoadResults;                                  // 0x79(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC5[0x1E];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTOPNetwork* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
class UHoudiniPDGAssetLink : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                AssetNodePath;                                     // 0x38(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        AssetId;                                           // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AC6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UTOPNetwork*>                   AllTOPNetworks;                                    // 0x50(0x10)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SelectedTOPNetworkIndex;                           // 0x60(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPDGLinkState                     LinkState;                                         // 0x64(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoCook;                                         // 0x65(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseTOPNodeFilter;                                 // 0x66(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseTOPOutputFilter;                               // 0x67(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                TOPNodeFilter;                                     // 0x68(0x10)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                TOPOutputFilter;                                   // 0x78(0x10)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumWorkItems;                                      // 0x88(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FAggregatedWorkItemTally              WorkItemTally;                                     // 0x90(0x28)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
	class FString                                OutputCachePath;                                   // 0xB8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsUIRefresh;                                   // 0xC8(0x1)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                OutputParentActor;                                 // 0xD0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FDirectoryPath                        BakeFolder;                                        // 0xD8(0x10)(ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC9[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniPDGAssetLink* GetDefaultObj();

};

// 0x2D8 (0x300 - 0x28)
// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
class UHoudiniRuntimeSettings : public UObject
{
public:
	enum class EHoudiniRuntimeSettingsSessionType SessionType;                                       // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ACA[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ServerHost;                                        // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        ServerPort;                                        // 0x40(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ACC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ServerPipeName;                                    // 0x48(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bStartAutomaticServer;                             // 0x58(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ACD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AutomaticServerTimeout;                            // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bSyncWithHoudiniCook;                              // 0x60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCookUsingHoudiniTime;                             // 0x61(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSyncViewport;                                     // 0x62(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSyncHoudiniViewport;                              // 0x63(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSyncUnrealViewport;                               // 0x64(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowMultiAssetDialog;                             // 0x65(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bPreferHdaMemoryCopyOverHdaSourceFile;             // 0x66(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPauseCookingOnStart;                              // 0x67(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisplaySlateCookingNotifications;                 // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ACF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultTemporaryCookFolder;                        // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                DefaultBakeFolder;                                 // 0x80(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableTheReferenceCountedInputSystem;             // 0x90(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         MarshallingLandscapesUseDefaultUnrealScaling;      // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         MarshallingLandscapesUseFullResolution;            // 0x92(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         MarshallingLandscapesForceMinMaxValues;            // 0x93(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        MarshallingLandscapesForcedMinValue;               // 0x94(0x4)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        MarshallingLandscapesForcedMaxValue;               // 0x98(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x9C(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLegacyInputCurves;                             // 0x9D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MarshallingSplineResolution;                       // 0xA0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bEnableProxyStaticMesh;                            // 0xA4(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDefaultMesh;                                  // 0xA5(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xA6(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementByTimer;           // 0xA7(0x1)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ProxyMeshAutoRefineTimeoutSeconds;                 // 0xA8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorld;    // 0xAC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIE;     // 0xAD(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD4[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDoubleSidedGeometry : 1;                          // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        BitPad_74 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_AD5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0xC0(0x150)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x210(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_AD6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LightMapResolution;                                // 0x214(0x4)(ConstParm, ExportObject, Parm, ReturnParm)
	float                                        LpvBiasMultiplier;                                 // 0x218(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x21C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0x220(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst)
	int32                                        LightMapCoordinateIndex;                           // 0x230(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bUseMaximumStreamingTexelRatio : 1;                // Mask: 0x1, PropSize: 0x10x234(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        BitPad_75 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_AD8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StreamingDistanceMultiplier;                       // 0x238(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_AD9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UFoliageType_InstancedStaticMesh*      FoliageDefaultSettings;                            // 0x240(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x248(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bUseFullPrecisionUVs;                              // 0x258(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ADA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SrcLightmapIndex;                                  // 0x25C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        DstLightmapIndex;                                  // 0x260(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        MinLightmapResolution;                             // 0x264(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bRemoveDegenerates;                                // 0x268(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag;                           // 0x269(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag;                              // 0x26A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag;                             // 0x26B(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bUseMikkTSpace;                                    // 0x26C(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bBuildAdjacencyBuffer;                             // 0x26D(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x1, PropSize: 0x10x26E(0x1)(Edit, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bBuildReversedIndexBuffer : 1;                     // Mask: 0x2, PropSize: 0x10x26E(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x4, PropSize: 0x10x26E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_76 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_ADE[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DistanceFieldResolutionScale;                      // 0x270(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bGenerateDistanceFieldAsIfTwoSided : 1;            // Mask: 0x1, PropSize: 0x10x274(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportFaceRemap : 1;                             // Mask: 0x2, PropSize: 0x10x274(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_77 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	bool                                         bPDGAsyncCommandletImportEnabled;                  // 0x275(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableBackwardCompatibility;                      // 0x276(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutomaticLegacyHDARebuild;                        // 0x277(0x1)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseCustomHoudiniLocation;                         // 0x278(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_AE0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        CustomHoudiniLocation;                             // 0x280(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EHoudiniExecutableType            HoudiniExecutable;                                 // 0x290(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        CustomHoudiniHomeLocation;                         // 0x298(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CookingThreadStackSize;                            // 0x2A8(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_AE3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                HoudiniEnvironmentFiles;                           // 0x2B0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                OtlSearchPath;                                     // 0x2C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                DsoSearchPath;                                     // 0x2D0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                ImageDsoSearchPath;                                // 0x2E0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                AudioDsoSearchPath;                                // 0x2F0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniRuntimeSettings* GetDefaultObj();

};

// 0x308 (0x5D0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent
class UHoudiniSplineComponent : public USceneComponent
{
public:
	uint8                                        Pad_AE6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    CurvePoints;                                       // 0x2D0(0x10)(Edit, ConstParm, BlueprintVisible, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector3d>                     DisplayPoints;                                     // 0x2E0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x2F0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                HoudiniSplineName;                                 // 0x300(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bClosed;                                           // 0x310(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReversed;                                         // 0x311(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AEB[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CurveOrder;                                        // 0x314(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsHoudiniSplineVisible;                           // 0x318(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x319(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x31A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;                   // 0x31B(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsOutputCurve;                                    // 0x31C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCookOnCurveChanged;                               // 0x31D(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLegacyInputCurve;                               // 0x31E(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF0[0x291];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasChanged;                                       // 0x5B0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNeedsToTriggerUpdate;                             // 0x5B1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsInputCurve;                                     // 0x5B2(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsEditableOutputCurve;                            // 0x5B3(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NodeID;                                            // 0x5B4(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                PartName;                                          // 0x5B8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AF3[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniStaticMesh
class UHoudiniStaticMesh : public UObject
{
public:
	bool                                         bHasNormals;                                       // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasTangents;                                      // 0x29(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasColors;                                        // 0x2A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B64[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       NumUVLayers;                                       // 0x2C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasPerFaceMaterials;                              // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B66[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector3f>                     VertexPositions;                                   // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FIntVector>                    TriangleIndices;                                   // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FColor>                        VertexInstanceColors;                              // 0x58(0x10)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceNormals;                             // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceUTangents;                           // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     VertexInstanceVTangents;                           // 0x88(0x10)(ConstParm, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector2f>                     VertexInstanceUVs;                                 // 0x98(0x10)(ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                MaterialIDsPerTriangle;                            // 0xA8(0x10)(BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FStaticMaterial>               StaticMaterials;                                   // 0xB8(0x10)(Edit, ConstParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoudiniStaticMesh* GetDefaultObj();

	struct FVector3f SetVertexPosition();
	struct FVector3f SetTriangleVertexVTangent();
	struct FVector2f SetTriangleVertexUV();
	struct FVector3f SetTriangleVertexUTangent();
	struct FVector3f SetTriangleVertexNormal();
	struct FIntVector SetTriangleVertexIndices();
	struct FColor SetTriangleVertexColor();
	int32 SetTriangleMaterialID();
	struct FStaticMaterial SetStaticMaterial();
	uint32 SetNumUVLayers();
	uint32 SetNumStaticMaterials();
	bool SetHasTangents();
	bool SetHasPerFaceMaterials();
	bool SetHasNormals();
	bool SetHasColors();
	void Optimize();
	bool IsValid(bool ReturnValue);
	bool Initialize();
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
	class FName GetMaterialIndex(int32 ReturnValue);
	void GetMaterialIDsPerTriangle(const TArray<int32>& ReturnValue);
	int32 GetMaterial(class UMaterialInterface* ReturnValue);
	bool CalculateTangents();
	bool CalculateNormals();
	void CalcBounds(const struct FBox& ReturnValue);
	struct FStaticMaterial AddStaticMaterial(uint32 ReturnValue);
};

// 0x48 (0x720 - 0x6D8)
// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
class UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	class UHoudiniStaticMesh*                    Mesh;                                              // 0x6D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  LocalBounds;                                       // 0x6E0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHoudiniIconVisible;                               // 0x718(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B77[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoudiniStaticMeshComponent* GetDefaultObj();

	void SetMesh(class UHoudiniStaticMesh* InMesh);
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
	void NotifyMeshUpdated();
	void IsHoudiniIconVisible(bool ReturnValue);
	void GetMesh(class UHoudiniStaticMesh* ReturnValue);
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


