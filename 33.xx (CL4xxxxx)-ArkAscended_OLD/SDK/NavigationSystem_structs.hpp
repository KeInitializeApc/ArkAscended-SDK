#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERuntimeGenerationType : uint8
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4,
};

enum class ENavCostDisplay : uint8
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3,
};

enum class ERecastPartitioning : uint8
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3,
};

enum class EHeightFieldRenderMode : uint8
{
	Solid                          = 0,
	Walkable                       = 1,
	EHeightFieldRenderMode_MAX     = 2,
};

enum class ENavSystemOverridePolicy : uint8
{
	Override                       = 0,
	Append                         = 1,
	Skip                           = 2,
	ENavSystemOverridePolicy_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	float                                        Radius;                                            // 0x18(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	float                                        Height;                                            // 0x1C(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	struct FVector                               Extent;                                            // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea
{
public:
	class UClass*                                AreaClass;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TravelCostOverride;                                // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EnteringCostOverride;                              // 0xC(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsExcluded : 1;                                   // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideTravelCost : 1;                           // Mask: 0x2, PropSize: 0x10x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideEnteringCost : 1;                         // Mask: 0x4, PropSize: 0x10x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_21FC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags
{
public:
	uint8                                        bNavFlag0 : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag1 : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag2 : 1;                                     // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag3 : 1;                                     // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag4 : 1;                                     // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag5 : 1;                                     // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag6 : 1;                                     // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag7 : 1;                                     // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag8 : 1;                                     // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag9 : 1;                                     // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag10 : 1;                                    // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag11 : 1;                                    // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag12 : 1;                                    // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag13 : 1;                                    // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag14 : 1;                                    // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bNavFlag15 : 1;                                    // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2205[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphEdge
struct FNavGraphEdge
{
public:
	uint8                                        Pad_2206[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_2209[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData
{
public:
	class FString                                AreaClassName;                                     // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        AreaID;                                            // 0x10(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_220A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AreaClass;                                         // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
public:
	uint32                                       NavLinkUserId;                                     // 0x68(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_220C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
struct FRecastNavMeshGenerationProperties
{
public:
	int32                                        TilePoolSize;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TileSizeUU;                                        // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        CellSize;                                          // 0x8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        CellHeight;                                        // 0xC(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        AgentRadius;                                       // 0x10(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        AgentHeight;                                       // 0x14(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        AgentMaxSlope;                                     // 0x18(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        AgentMaxStepHeight;                                // 0x1C(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        MinRegionArea;                                     // 0x20(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        MergeRegionSize;                                   // 0x24(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        MaxSimplificationError;                            // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TileNumberHardLimit;                               // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x30(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x31(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2211[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RegionChunkSplits;                                 // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LayerChunkSplits;                                  // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x2, PropSize: 0x10x3C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x4, PropSize: 0x10x3C(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x8, PropSize: 0x10x3C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x10, PropSize: 0x10x3C(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x20, PropSize: 0x10x3C(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x40, PropSize: 0x10x3C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsWorldPartitioned : 1;                           // Mask: 0x80, PropSize: 0x10x3C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2219[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
struct FRecastNavMeshTileGenerationDebug
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        BitPad_160 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_221D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            TileCoordinate;                                    // 0x4(0xC)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bGenerateDebugTileOnly : 1;                        // Mask: 0x1, PropSize: 0x10x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCollisionGeometry : 1;                            // Mask: 0x2, PropSize: 0x10x10(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_161 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_221E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EHeightFieldRenderMode            HeightFieldRenderMode;                             // 0x14(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2220[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bHeightfieldFromRasterization : 1;                 // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHeightfieldPostInclusionBoundsFiltering : 1;      // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHeightfieldPostHeightFiltering : 1;               // Mask: 0x4, PropSize: 0x10x18(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHeightfieldBounds : 1;                            // Mask: 0x8, PropSize: 0x10x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bCompactHeightfield : 1;                           // Mask: 0x10, PropSize: 0x10x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCompactHeightfieldEroded : 1;                     // Mask: 0x20, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCompactHeightfieldRegions : 1;                    // Mask: 0x40, PropSize: 0x10x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCompactHeightfieldDistances : 1;                  // Mask: 0x80, PropSize: 0x10x18(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTileCacheLayerAreas : 1;                          // Mask: 0x1, PropSize: 0x10x19(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTileCacheLayerRegions : 1;                        // Mask: 0x2, PropSize: 0x10x19(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTileCacheContours : 1;                            // Mask: 0x4, PropSize: 0x10x19(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTileCachePolyMesh : 1;                            // Mask: 0x8, PropSize: 0x10x19(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTileCacheDetailMesh : 1;                          // Mask: 0x10, PropSize: 0x10x19(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2227[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NavigationSystem.NavMeshResolutionParam
struct FNavMeshResolutionParam
{
public:
	float                                        CellSize;                                          // 0x0(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        CellHeight;                                        // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
};

}


