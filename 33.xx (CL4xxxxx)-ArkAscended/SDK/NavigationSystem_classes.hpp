#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC8 - 0xB8)
// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                        TileGenerationRadius;                              // 0xB8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TileRemovalRadius;                                 // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0xC0(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_27A7[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavigationInvokerComponent* GetDefaultObj();

};

// 0x1510 (0x1538 - 0x28)
// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                       MainNavData;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       AbstractNavData;                                   // 0x30(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, EditConst, GlobalConfig)
	class FName                                  DefaultAgentName;                                  // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DuplicateTransient)
	TSoftClassPtr<class UCrowdManagerBase>       CrowdManagerClass;                                 // 0x40(0x30)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAutoCreateNavigationData : 1;                     // Mask: 0x1, PropSize: 0x10x70(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x2, PropSize: 0x10x70(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAllowClientSideNavigation : 1;                    // Mask: 0x4, PropSize: 0x10x70(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldDiscardSubLevelNavData : 1;                 // Mask: 0x8, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DuplicateTransient)
	uint8                                        bTickWhilePaused : 1;                              // Mask: 0x10, PropSize: 0x10x70(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSupportRebuilding : 1;                            // Mask: 0x20, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bInitialBuildingLocked : 1;                        // Mask: 0x40, PropSize: 0x10x70(0x1)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        BitPad_1FD : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bSkipAgentHeightCheckWhenPickingNavData : 1;       // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        BitPad_1FE : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2815[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        GeometryExportTriangleCountWarningThreshold;       // 0x74(0x4)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bGenerateNavigationOnlyAroundNavigationInvokers : 1; // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DuplicateTransient)
	uint8                                        BitPad_1FF : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2817[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ActiveTilesUpdateInterval;                         // 0x7C(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ENavDataGatheringModeConfig       DataGatheringMode;                                 // 0x80(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DuplicateTransient)
	uint8                                        Pad_281A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DirtyAreaWarningSizeThreshold;                     // 0x84(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        GatheringNavModifiersWarningLimitTime;             // 0x88(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_281B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNavDataConfig>                SupportedAgents;                                   // 0x90(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	struct FNavAgentSelector                     SupportedAgentsMask;                               // 0xA0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_281C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  BuildBounds;                                       // 0xA8(0x38)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class ANavigationData*>               NavDataSet;                                        // 0xE0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class ANavigationData*>               NavDataRegistrationQueue;                          // 0xF0(0x10)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_281E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnNavDataRegisteredEvent;                          // 0x110(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNavigationGenerationFinishedDelegate;            // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2821[0xE0];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EFNavigationSystemRunMode         OperationMode;                                     // 0x210(0x1)(ConstParm, ExportObject, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2822[0x1327];                                  // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavigationSystemV1* GetDefaultObj();

	class AActor* UnregisterNavigationInvoker();
	int32 SetMaxSimultaneousTileGenerationJobsCount();
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	float RegisterNavigationInvoker();
	struct FVector ProjectPointToNavigationEx(class UObject* WorldContext, class ANavigationData** NavData);
	class ANavMeshBoundsVolume* OnNavigationBoundsUpdated();
	bool NavigationRaycast();
	bool K2_ReplaceAreaInOctreeData(class UObject** Object);
	bool K2_ProjectPointToNavigation(class ANavigationData** NavData);
	bool K2_GetRandomReachablePointInRadius(struct FVector* Origin, class ANavigationData** NavData);
	bool K2_GetRandomPointInNavigableRadius(struct FVector* Origin, class ANavigationData** NavData);
	bool K2_GetRandomLocationInNavigableRadius(struct FVector* Origin, class ANavigationData** NavData);
	bool IsNavigationBeingBuiltOrLocked();
	bool IsNavigationBeingBuilt();
	struct FVector GetRandomReachablePointInMinMaxRadius(class UObject* WorldContext, struct FVector* Origin, class ANavigationData** NavData);
	enum class ENavigationQueryResult GetPathLength(class ANavigationData** NavData);
	enum class ENavigationQueryResult GetPathCost(class ANavigationData** NavData);
	class UNavigationSystemV1* GetNavigationSystem();
	class UNavigationPath* FindPathToLocationSynchronously();
	class UNavigationPath* FindPathToActorSynchronously();
};

// 0x8 (0x60 - 0x58)
// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                        bStrictlyStatic : 1;                               // Mask: 0x1, PropSize: 0x10x58(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAutoSpawnMissingNavData : 1;                      // Mask: 0x4, PropSize: 0x10x58(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x8, PropSize: 0x10x58(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2828[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavigationSystemModuleConfig* GetDefaultObj();

};

// 0x50 (0x108 - 0xB8)
// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                        Pad_282C[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAttachToOwnersRoot : 1;                           // Mask: 0x1, PropSize: 0x10xF8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_200 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_282E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CachedNavParent;                                   // 0x100(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNavRelevantComponent* GetDefaultObj();

	bool SetNavigationRelevancy();
};

// 0xB8 (0x1C0 - 0x108)
// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                AreaClass;                                         // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               FailsafeExtent;                                    // 0x110(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIncludeAgentHeight : 1;                           // Mask: 0x1, PropSize: 0x10x128(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2831[0x97];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavModifierComponent* GetDefaultObj();

	class UClass* SetAreaClass();
};

// 0x228 (0x6F0 - 0x4C8)
// Class NavigationSystem.NavigationData
class ANavigationData : public AActor
{
public:
	uint8                                        Pad_2835[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   RenderingComp;                                     // 0x4D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	struct FNavDataConfig                        NavDataConfig;                                     // 0x4D8(0x98)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst)
	uint8                                        bEnableDrawing : 1;                                // Mask: 0x1, PropSize: 0x10x570(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bForceRebuildOnLoad : 1;                           // Mask: 0x2, PropSize: 0x10x570(0x1)(Edit, ConstParm, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAutoDestroyWhenNoNavigation : 1;                  // Mask: 0x4, PropSize: 0x10x570(0x1)(BlueprintVisible, BlueprintReadOnly, Net, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCanBeMainNavData : 1;                             // Mask: 0x8, PropSize: 0x10x570(0x1)(ConstParm, ExportObject, Net, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCanSpawnOnRebuild : 1;                            // Mask: 0x10, PropSize: 0x10x570(0x1)(Net, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bRebuildAtRuntime : 1;                             // Mask: 0x20, PropSize: 0x10x570(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_201 : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_283A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERuntimeGenerationType            RuntimeGeneration;                                 // 0x574(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_283B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ObservedPathsTickInterval;                         // 0x578(0x4)(ExportObject, GlobalConfig, InstancedReference, SubobjectReference)
	uint32                                       DataVersion;                                       // 0x57C(0x4)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_283C[0x108];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSupportedAreaData>            SupportedAreas;                                    // 0x688(0x10)(GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_283D[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANavigationData* GetDefaultObj();

};

// 0x100 (0x7F0 - 0x6F0)
// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData
{
public:
	uint8                                        bDrawTriangleEdges : 1;                            // Mask: 0x1, PropSize: 0x10x6F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawPolyEdges : 1;                                // Mask: 0x2, PropSize: 0x10x6F0(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawFilledPolys : 1;                              // Mask: 0x4, PropSize: 0x10x6F0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawNavMeshEdges : 1;                             // Mask: 0x8, PropSize: 0x10x6F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawTileBounds : 1;                               // Mask: 0x10, PropSize: 0x10x6F0(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawTileResolutions : 1;                          // Mask: 0x20, PropSize: 0x10x6F0(0x1)(ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawPathCollidingGeometry : 1;                    // Mask: 0x40, PropSize: 0x10x6F0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawTileLabels : 1;                               // Mask: 0x80, PropSize: 0x10x6F0(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawTileBuildTimes : 1;                           // Mask: 0x1, PropSize: 0x10x6F1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawTileBuildTimesHeatMap : 1;                    // Mask: 0x2, PropSize: 0x10x6F1(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawPolygonLabels : 1;                            // Mask: 0x4, PropSize: 0x10x6F1(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawDefaultPolygonCost : 1;                       // Mask: 0x8, PropSize: 0x10x6F1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawPolygonFlags : 1;                             // Mask: 0x10, PropSize: 0x10x6F1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawLabelsOnPathNodes : 1;                        // Mask: 0x20, PropSize: 0x10x6F1(0x1)(Edit, ConstParm, Net, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawNavLinks : 1;                                 // Mask: 0x40, PropSize: 0x10x6F1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawFailedNavLinks : 1;                           // Mask: 0x80, PropSize: 0x10x6F1(0x1)(BlueprintReadOnly, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawClusters : 1;                                 // Mask: 0x1, PropSize: 0x10x6F2(0x1)(ExportObject, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawOctree : 1;                                   // Mask: 0x2, PropSize: 0x10x6F2(0x1)(Edit, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawOctreeDetails : 1;                            // Mask: 0x4, PropSize: 0x10x6F2(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawMarkedForbiddenPolys : 1;                     // Mask: 0x8, PropSize: 0x10x6F2(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDistinctlyDrawTilesBeingBuilt : 1;                // Mask: 0x10, PropSize: 0x10x6F2(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_203 : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2852[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DrawOffset;                                        // 0x6F4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRecastNavMeshTileGenerationDebug     TileGenerationDebug;                               // 0x6F8(0x1C)(ExportObject, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x1, PropSize: 0x10x714(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_204 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2853[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TilePoolSize;                                      // 0x718(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TileSizeUU;                                        // 0x71C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        CellSize;                                          // 0x720(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        CellHeight;                                        // 0x724(0x4)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	struct FNavMeshResolutionParam               NavMeshResolutionParams[0x3];                      // 0x728(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AgentRadius;                                       // 0x740(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        AgentHeight;                                       // 0x744(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        AgentMaxSlope;                                     // 0x748(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        AgentMaxStepHeight;                                // 0x74C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        MinRegionArea;                                     // 0x750(0x4)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        MergeRegionSize;                                   // 0x754(0x4)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        MaxSimplificationError;                            // 0x758(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxSimultaneousTileGenerationJobsCount;            // 0x75C(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        TileNumberHardLimit;                               // 0x760(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        PolyRefTileBits;                                   // 0x764(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PolyRefNavPolyBits;                                // 0x768(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PolyRefSaltBits;                                   // 0x76C(0x4)(Edit, ConstParm, ExportObject, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               NavMeshOriginOffset;                               // 0x770(0x18)(OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DefaultDrawDistance;                               // 0x788(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        DefaultMaxSearchNodes;                             // 0x78C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DefaultMaxHierarchicalSearchNodes;                 // 0x790(0x4)(ConstParm, Net, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x794(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x795(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2859[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RegionChunkSplits;                                 // 0x798(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LayerChunkSplits;                                  // 0x79C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x7A0(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsWorldPartitioned : 1;                           // Mask: 0x2, PropSize: 0x10x7A0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DuplicateTransient)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x4, PropSize: 0x10x7A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x8, PropSize: 0x10x7A0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x10, PropSize: 0x10x7A0(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x20, PropSize: 0x10x7A0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x40, PropSize: 0x10x7A0(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bDoFullyAsyncNavDataGathering : 1;                 // Mask: 0x80, PropSize: 0x10x7A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DuplicateTransient)
	uint8                                        bUseBetterOffsetsFromCorners : 1;                  // Mask: 0x1, PropSize: 0x10x7A1(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        bStoreEmptyTileLayers : 1;                         // Mask: 0x2, PropSize: 0x10x7A1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseVirtualFilters : 1;                            // Mask: 0x4, PropSize: 0x10x7A1(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseVirtualGeometryFilteringAndDirtying : 1;       // Mask: 0x8, PropSize: 0x10x7A1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAllowNavLinkAsPathEnd : 1;                        // Mask: 0x10, PropSize: 0x10x7A1(0x1)(Edit, ConstParm, ExportObject, Net, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_205 : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2861[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TimeSliceFilterLedgeSpansMaxYProcess;              // 0x7A4(0x4)(ExportObject, BlueprintReadOnly, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       TimeSliceLongDurationDebug;                        // 0x7A8(0x8)(ConstParm, ExportObject, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseVoxelCache : 1;                                // Mask: 0x1, PropSize: 0x10x7B0(0x1)(ConstParm, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_206 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2862[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TileSetUpdateInterval;                             // 0x7B4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        HeuristicScale;                                    // 0x7B8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VerticalDeviationFromGroundCompensation;           // 0x7BC(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2863[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ARecastNavMesh* GetDefaultObj();

	bool K2_ReplaceAreaInTileBounds(struct FBox* Bounds, bool ReplaceLinks);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.CrowdManagerBase
class UCrowdManagerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCrowdManagerBase* GetDefaultObj();

};

// 0x0 (0x4C8 - 0x4C8)
// Class NavigationSystem.NavigationGraphNode
class ANavigationGraphNode : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraphNode* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                         Node;                                              // 0x2C8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class UNavigationGraphNodeComponent*         NextNodeComponent;                                 // 0x2E0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UNavigationGraphNodeComponent*         PrevNodeComponent;                                 // 0x2E8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNavigationGraphNodeComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavigationPathGenerator
class INavigationPathGenerator : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavigationPathGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkCustomInterface
class INavLinkCustomInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkCustomInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkHostInterface
class INavLinkHostInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkHostInterface* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class NavigationSystem.NavLinkTrivial
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static class UClass* StaticClass();
	static class UNavLinkTrivial* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavNodeInterface
class INavNodeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavNodeInterface* GetDefaultObj();

};

// 0x0 (0x6F0 - 0x6F0)
// Class NavigationSystem.AbstractNavData
class AAbstractNavData : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class AAbstractNavData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase
{
public:
	float                                        DefaultCost;                                       // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FixedAreaEnteringCost;                             // 0x34(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x3C(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x40(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x40(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x40(0x1)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x40(0x1)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x40(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x41(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x41(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x41(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x41(0x1)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x41(0x1)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x41(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x41(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x41(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2874[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavArea* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavAreaMeta
class UNavAreaMeta : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavAreaMeta* GetDefaultObj();

};

// 0x80 (0xC8 - 0x48)
// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                Agent0Area;                                        // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent1Area;                                        // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent2Area;                                        // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent3Area;                                        // 0x60(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent4Area;                                        // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent5Area;                                        // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent6Area;                                        // 0x78(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent7Area;                                        // 0x80(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent8Area;                                        // 0x88(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent9Area;                                        // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent10Area;                                       // 0x98(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent11Area;                                       // 0xA0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent12Area;                                       // 0xA8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent13Area;                                       // 0xB0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent14Area;                                       // 0xB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Agent15Area;                                       // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNavAreaMeta_SwitchByAgent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Default
class UNavArea_Default : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Default* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_LowHeight
class UNavArea_LowHeight : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_LowHeight* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Null
class UNavArea_Null : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Null* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Obstacle
class UNavArea_Obstacle : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Obstacle* GetDefaultObj();

};

// 0x60 (0xD0 - 0x70)
// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase
{
public:
	uint8                                        Pad_287B[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNavCollisionCylinder>         CylinderCollision;                                 // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FNavCollisionBox>              BoxCollision;                                      // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                AreaClass;                                         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bGatherConvexGeometry : 1;                         // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_287C[0x27];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavCollision* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>         Areas;                                             // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FNavigationFilterFlags                IncludeFlags;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FNavigationFilterFlags                ExcludeFlags;                                      // 0x3C(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2880[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavigationQueryFilter* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.RecastFilter_UseDefaultArea
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class URecastFilter_UseDefaultArea* GetDefaultObj();

};

// 0x0 (0x6F0 - 0x6F0)
// Class NavigationSystem.NavigationGraph
class ANavigationGraph : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraph* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class NavigationSystem.NavigationPath
class UNavigationPath : public UObject
{
public:
	FMulticastInlineDelegateProperty_            PathUpdatedNotifier;                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENavigationOptionFlag             RecalculateOnInvalidation;                         // 0x48(0x1)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_288C[0x3F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavigationPath* GetDefaultObj();

	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	double GetPathLength();
	double GetPathCost();
	class FString GetDebugString();
	enum class ENavigationOptionFlag EnableRecalculationOnInvalidation();
	struct FLinearColor EnableDebugDrawing();
};

// 0x128 (0x5F0 - 0x4C8)
// Class NavigationSystem.NavigationTestingActor
class ANavigationTestingActor : public AActor
{
public:
	uint8                                        Pad_288E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class UNavigationInvokerComponent*           InvokerComponent;                                  // 0x4E0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bActAsNavigationInvoker : 1;                       // Mask: 0x1, PropSize: 0x10x4E8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_207 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_288F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x4F0(0x38)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               QueryingExtent;                                    // 0x528(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ANavigationData*                       MyNavData;                                         // 0x540(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ProjectedLocation;                                 // 0x548(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bProjectedLocationValid : 1;                       // Mask: 0x1, PropSize: 0x10x560(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x2, PropSize: 0x10x560(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_208 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2891[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CostLimitFactor;                                   // 0x564(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinimumCostLimit;                                  // 0x568(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bBacktracking : 1;                                 // Mask: 0x1, PropSize: 0x10x56C(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseHierarchicalPathfinding : 1;                   // Mask: 0x2, PropSize: 0x10x56C(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bGatherDetailedInfo : 1;                           // Mask: 0x4, PropSize: 0x10x56C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bRequireNavigableEndLocation : 1;                  // Mask: 0x8, PropSize: 0x10x56C(0x1)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawDistanceToWall : 1;                           // Mask: 0x10, PropSize: 0x10x56C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShowNodePool : 1;                                 // Mask: 0x20, PropSize: 0x10x56C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShowBestPath : 1;                                 // Mask: 0x40, PropSize: 0x10x56C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShowDiffWithPreviousStep : 1;                     // Mask: 0x80, PropSize: 0x10x56C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x1, PropSize: 0x10x56D(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_209 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2894[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ENavCostDisplay                   CostDisplayMode;                                   // 0x570(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2895[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             TextCanvasOffset;                                  // 0x578(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x588(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x588(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bPathSearchOutOfNodes : 1;                         // Mask: 0x4, PropSize: 0x10x588(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_20A : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2896[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PathfindingTime;                                   // 0x58C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       PathCost;                                          // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PathfindingSteps;                                  // 0x598(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2898[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationTestingActor*               OtherActor;                                        // 0x5A0(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x5A8(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        ShowStepIndex;                                     // 0x5B0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OffsetFromCornersDistance;                         // 0x5B4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2899[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANavigationTestingActor* GetDefaultObj();

};

// 0x18 (0x6B0 - 0x698)
// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_289C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNavigationLink>               Links;                                             // 0x6A0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UNavLinkComponent* GetDefaultObj();

};

// 0xE0 (0x1E8 - 0x108)
// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_289F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       NavLinkUserId;                                     // 0x110(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_28A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                EnabledAreaClass;                                  // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                DisabledAreaClass;                                 // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x128(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_28A1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinkRelativeStart;                                 // 0x130(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               LinkRelativeEnd;                                   // 0x148(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENavLinkDirection                 LinkDirection;                                     // 0x160(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bLinkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x164(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bNotifyWhenEnabled : 1;                            // Mask: 0x2, PropSize: 0x10x164(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bNotifyWhenDisabled : 1;                           // Mask: 0x4, PropSize: 0x10x164(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCreateBoxObstacle : 1;                            // Mask: 0x8, PropSize: 0x10x164(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_20B : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_28A4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ObstacleOffset;                                    // 0x168(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ObstacleExtent;                                    // 0x180(0x18)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ObstacleAreaClass;                                 // 0x198(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BroadcastRadius;                                   // 0x1A0(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BroadcastInterval;                                 // 0x1A4(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 BroadcastChannel;                                  // 0x1A8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28A7[0x3F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavLinkCustomComponent* GetDefaultObj();

};

// 0x8 (0x6A0 - 0x698)
// Class NavigationSystem.NavLinkRenderingComponent
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_28A8[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavLinkRenderingComponent* GetDefaultObj();

};

// 0x8 (0x520 - 0x518)
// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x518(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_28AA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANavMeshBoundsVolume* GetDefaultObj();

};

// 0x10 (0x700 - 0x6F0)
// Class NavigationSystem.NavMeshRenderingComponent
class UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_28AB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavMeshRenderingComponent* GetDefaultObj();

};

// 0x0 (0x6F0 - 0x6F0)
// Class NavigationSystem.NavTestRenderingComponent
class UNavTestRenderingComponent : public UDebugDrawComponent
{
public:

	static class UClass* StaticClass();
	static class UNavTestRenderingComponent* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class NavigationSystem.RecastNavMeshDataChunk
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	uint8                                        Pad_28AD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecastNavMeshDataChunk* GetDefaultObj();

};

// 0x28 (0x540 - 0x518)
// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume
{
public:
	uint8                                        Pad_28AF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AreaClass;                                         // 0x520(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMaskFillCollisionUnderneathForNavmesh;            // 0x528(0x1)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENavigationDataResolution         NavMeshResolution;                                 // 0x529(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_28B0[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANavModifierVolume* GetDefaultObj();

	class UClass* SetAreaClass();
};

// 0x10 (0x4D8 - 0x4C8)
// Class NavigationSystem.NavSystemConfigOverride
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*               NavigationSystemConfig;                            // 0x4C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, GlobalConfig)
	enum class ENavSystemOverridePolicy          OverridePolicy;                                    // 0x4D0(0x1)(Edit, ConstParm, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bLoadOnClient : 1;                                 // Mask: 0x1, PropSize: 0x10x4D1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28B1[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ANavSystemConfigOverride* GetDefaultObj();

};

}


