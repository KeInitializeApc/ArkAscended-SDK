#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECollectionAttributeEnum : uint8
{
	Chaos_Active                   = 0,
	Chaos_DynamicState             = 1,
	Chaos_CollisionGroup           = 2,
	Chaos_Max                      = 3,
};

enum class ECollectionGroupEnum : uint8
{
	Chaos_Traansform               = 0,
	Chaos_Max                      = 1,
};

enum class EChaosBreakingSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosBreakingSortMethod_MAX   = 5,
};

enum class EChaosCollisionSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByHighestImpulse           = 3,
	SortByNearestFirst             = 4,
	Count                          = 5,
	EChaosCollisionSortMethod_MAX  = 6,
};

enum class EChaosRemovalSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByNearestFirst             = 2,
	Count                          = 3,
	EChaosRemovalSortMethod_MAX    = 4,
};

enum class EChaosTrailingSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosTrailingSortMethod_MAX   = 5,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8
{
	HideNone                       = 0,
	HideWithCollision              = 1,
	HideSelected                   = 2,
	HideWholeCollection            = 3,
	HideAll                        = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x18(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        Mass;                                              // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2657[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Normal;                                            // 0x18(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Velocity1;                                         // 0x30(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Velocity2;                                         // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass1;                                             // 0x60(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass2;                                             // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Impulse;                                           // 0x68(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventData
struct FChaosRemovalEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Mass;                                              // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0x1C(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x18(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x48(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
struct FGeometryCollectionRepData
{
public:
	uint8                                        Pad_2659[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters
{
public:
	enum class EGeometryCollectionCacheType      CacheMode;                                         // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_265C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollectionCache*              TargetCache;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReverseCacheBeginTime;                             // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SaveCollisionData;                                 // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateCollisionData;                           // 0x15(0x1)(ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_265D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CollisionDataSizeMax;                              // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoCollisionDataSpatialHash;                        // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_265E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CollisionDataSpatialHashRadius;                    // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxCollisionPerCell;                               // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SaveBreakingData;                                  // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateBreakingData;                            // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_265F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        BreakingDataSizeMax;                               // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoBreakingDataSpatialHash;                         // 0x30(0x1)(ConstParm, BlueprintVisible, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2660[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BreakingDataSpatialHashRadius;                     // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxBreakingPerCell;                                // 0x38(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SaveTrailingData;                                  // 0x3C(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateTrailingData;                            // 0x3D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2661[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TrailingDataSizeMax;                               // 0x40(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	float                                        TrailingMinSpeedThreshold;                         // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	float                                        TrailingMinVolumeThreshold;                        // 0x48(0x4)(BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2662[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDamagePropagationData
struct FGeometryCollectionDamagePropagationData
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_2663[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BreakDamagePropagationFactor;                      // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	float                                        ShockDamagePropagationFactor;                      // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
struct FGeometryCollectionAutoInstanceMesh
{
public:
	struct FSoftObjectPath                       StaticMesh;                                        // 0x0(0x20)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
struct FGeometryCollectionSource
{
public:
	struct FSoftObjectPath                       SourceGeometryObject;                              // 0x0(0x20)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x20(0x60)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TArray<class UMaterialInterface*>            SourceMaterial;                                    // 0x80(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bAddInternalMaterials;                             // 0x90(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSplitComponents;                                  // 0x91(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2669[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinRadius;                                         // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MinMass;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x10(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_266A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings
{
public:
	int32                                        MaxNumberResults;                                  // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinMass;                                           // 0x4(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MinImpulse;                                        // 0xC(0x4)(BlueprintVisible, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x10(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_266C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
struct FChaosRemovalEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinMass;                                           // 0x4(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x8(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EChaosRemovalSortMethod           SortMethod;                                        // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_266E[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinMass;                                           // 0x4(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MinAngularSpeed;                                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x10(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2670[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
struct FGeometryCollectionDebugDrawWarningMessage
{
public:
	uint8                                        Pad_2671[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_2675[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AChaosSolverActor*                     Solver;                                            // 0x8(0x8)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class AGeometryCollectionActor*              GeometryCollection;                                // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
struct FGeometryCollectionEmbeddedExemplar
{
public:
	struct FSoftObjectPath                       StaticMeshExemplar;                                // 0x0(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        StartCullDistance;                                 // 0x20(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        EndCullDistance;                                   // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        InstanceCount;                                     // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2677[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionLevelSetData
struct FGeometryCollectionLevelSetData
{
public:
	int32                                        MinLevelSetResolution;                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxLevelSetResolution;                             // 0x4(0x4)(ConstParm, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MinClusterLevelSetResolution;                      // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxClusterLevelSetResolution;                      // 0xC(0x4)(BlueprintVisible, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
struct FGeometryCollectionCollisionParticleData
{
public:
	float                                        CollisionParticlesFraction;                        // 0x0(0x4)(ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaximumCollisionParticles;                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
struct FGeometryCollectionCollisionTypeData
{
public:
	enum class ECollisionTypeEnum                CollisionType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_267A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionLevelSetData       LevelSet;                                          // 0x4(0x10)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FGeometryCollectionCollisionParticleData CollisionParticles;                                // 0x14(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        CollisionObjectReductionPercentage;                // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionMarginFraction;                           // 0x20(0x4)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData
{
public:
	float                                        MaxSize;                                           // 0x0(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_267B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes;                                   // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DamageThreshold;                                   // 0x18(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_267C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


