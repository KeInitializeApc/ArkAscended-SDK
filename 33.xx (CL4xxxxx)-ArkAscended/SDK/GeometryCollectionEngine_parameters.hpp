#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// Function GeometryCollectionEngine.PrimalDestructibleActor.StaticBPPreDestructionHandleAttachedComponentClass
struct APrimalDestructibleActor_StaticBPPreDestructionHandleAttachedComponentClass_Params
{
public:
	class UClass*                                AttachedComponentClass;                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UInstancedStaticMeshComponent*         ForMeshComp;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               InstancePosition;                                  // 0x10(0x18)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              InstanceRotation;                                  // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        InstanceIndex;                                     // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1490[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitDirection;                                      // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Damage;                                            // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	float                                        TotalHealth;                                       // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection
struct APrimalDestructibleActor_SetGeoCollection_Params
{
public:
	class UGeometryCollection*                   GeoCollection;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction
struct APrimalDestructibleActor_BPStartDestruction_Params
{
public:
	class UGeometryCollection*                   DestructionAsset;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               HitDirection;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Damage;                                            // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	float                                        TotalHealth;                                       // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
public:
	TArray<struct FChaosTrailingEventData>       TrailingEvents;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14A8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
struct UChaosDestructionListener_SortRemovalEvents_Params
{
public:
	TArray<struct FChaosRemovalEventData>        RemovalEvents;                                     // 0x0(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class EChaosRemovalSortMethod           SortMethod;                                        // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14AB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
public:
	TArray<struct FChaosCollisionEventData>      CollisionEvents;                                   // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14AE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
public:
	TArray<struct FChaosBreakingEventData>       BreakingEvents;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
public:
	struct FChaosTrailingEventRequestSettings    InSettings;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
{
public:
	struct FChaosRemovalEventRequestSettings     InSettings;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
struct UChaosDestructionListener_SetRemovalEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
public:
	struct FChaosCollisionEventRequestSettings   InSettings;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
public:
	struct FChaosBreakingEventRequestSettings    InSettings;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x128 (0x128 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FHitResult                            OutHit;                                            // 0x30(0xF0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x120(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_14DB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
struct UGeometryCollectionComponent_SetRestCollection_Params
{
public:
	class UGeometryCollection*                   RestCollectionIn;                                  // 0x0(0x8)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
struct UGeometryCollectionComponent_SetNotifyRemovals_Params
{
public:
	bool                                         bNewNotifyRemovals;                                // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
struct UGeometryCollectionComponent_SetNotifyCrumblings_Params
{
public:
	bool                                         bNewNotifyCrumblings;                              // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNewCrumblingEventIncludesChildren;                // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
public:
	bool                                         bNewNotifyBreaks;                                  // 0x0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
struct UGeometryCollectionComponent_SetEnableDamageFromCollision_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
struct UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	uint8                                        Pad_14F5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bAnchored;                                         // 0xA0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLevel;                                          // 0xA4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14F7[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
struct UGeometryCollectionComponent_SetAnchoredByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bAnchored;                                         // 0x4(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14FA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
struct UGeometryCollectionComponent_SetAnchoredByBox_Params
{
public:
	struct FBox                                  WorldSpaceBox;                                     // 0x0(0x38)(Edit, ExportObject, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAnchored;                                         // 0x38(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLevel;                                          // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0xC0)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
struct UGeometryCollectionComponent_GetRootIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
struct UGeometryCollectionComponent_GetMassAndExtents_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        OutMass;                                           // 0x4(0x4)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FBox                                  OutExtents;                                        // 0x8(0x38)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
struct UGeometryCollectionComponent_GetLocalBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
struct UGeometryCollectionComponent_GetInitialLevel_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
struct UGeometryCollectionComponent_GetDebugInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
struct UGeometryCollectionComponent_CrumbleCluster_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex
struct UGeometryCollectionComponent_BPGetMaxIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EGeometryCollectionPhysicsTypeEnum Target;                                            // 0x1(0x1)(Edit, ConstParm, ReturnParm, Transient, Config)
	uint8                                        Pad_1520[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
struct UGeometryCollectionComponent_ApplyLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1524[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_152A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
struct UGeometryCollectionComponent_ApplyInternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1534[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PropagationFactor;                                 // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Strain;                                            // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
struct UGeometryCollectionComponent_ApplyExternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1541[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PropagationFactor;                                 // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Strain;                                            // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
struct UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1549[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
struct UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_154F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
struct UGeometryCollectionComponent_ApplyAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1554[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
};

}
}


