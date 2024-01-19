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
	class UClass*                                AttachedComponentClass;                            // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UInstancedStaticMeshComponent*         ForMeshComp;                                       // 0x8(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               InstancePosition;                                  // 0x10(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              InstanceRotation;                                  // 0x28(0x18)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InstanceIndex;                                     // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_243C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitDirection;                                      // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Damage;                                            // 0x60(0x4)(Edit, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TotalHealth;                                       // 0x64(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection
struct APrimalDestructibleActor_SetGeoCollection_Params
{
public:
	class UGeometryCollection*                   GeoCollection;                                     // 0x0(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction
struct APrimalDestructibleActor_BPStartDestruction_Params
{
public:
	class UGeometryCollection*                   DestructionAsset;                                  // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               HitDirection;                                      // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Damage;                                            // 0x20(0x4)(Edit, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TotalHealth;                                       // 0x24(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
public:
	TArray<struct FChaosTrailingEventData>       TrailingEvents;                                    // 0x0(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2440[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
struct UChaosDestructionListener_SortRemovalEvents_Params
{
public:
	TArray<struct FChaosRemovalEventData>        RemovalEvents;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EChaosRemovalSortMethod           SortMethod;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2441[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
public:
	TArray<struct FChaosCollisionEventData>      CollisionEvents;                                   // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2442[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
public:
	TArray<struct FChaosBreakingEventData>       BreakingEvents;                                    // 0x0(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2443[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
public:
	struct FChaosTrailingEventRequestSettings    InSettings;                                        // 0x0(0x18)(Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
{
public:
	struct FChaosRemovalEventRequestSettings     InSettings;                                        // 0x0(0x10)(Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
struct UChaosDestructionListener_SetRemovalEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
public:
	struct FChaosCollisionEventRequestSettings   InSettings;                                        // 0x0(0x18)(Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
public:
	struct FChaosBreakingEventRequestSettings    InSettings;                                        // 0x0(0x18)(Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FHitResult                            OutHit;                                            // 0x30(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2448[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
struct UGeometryCollectionComponent_SetRestCollection_Params
{
public:
	class UGeometryCollection*                   RestCollectionIn;                                  // 0x0(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
struct UGeometryCollectionComponent_SetNotifyRemovals_Params
{
public:
	bool                                         bNewNotifyRemovals;                                // 0x0(0x1)(ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
struct UGeometryCollectionComponent_SetNotifyCrumblings_Params
{
public:
	bool                                         bNewNotifyCrumblings;                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNewCrumblingEventIncludesChildren;                // 0x1(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
public:
	bool                                         bNewNotifyBreaks;                                  // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
struct UGeometryCollectionComponent_SetEnableDamageFromCollision_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
struct UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	uint8                                        Pad_2454[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bAnchored;                                         // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2456[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLevel;                                          // 0xA4(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2457[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
struct UGeometryCollectionComponent_SetAnchoredByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bAnchored;                                         // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2458[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
struct UGeometryCollectionComponent_SetAnchoredByBox_Params
{
public:
	struct FBox                                  WorldSpaceBox;                                     // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAnchored;                                         // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_245B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxLevel;                                          // 0x3C(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0xC0)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
struct UGeometryCollectionComponent_GetRootIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
struct UGeometryCollectionComponent_GetMassAndExtents_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        OutMass;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  OutExtents;                                        // 0x8(0x38)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
struct UGeometryCollectionComponent_GetLocalBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
struct UGeometryCollectionComponent_GetInitialLevel_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
struct UGeometryCollectionComponent_GetDebugInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
struct UGeometryCollectionComponent_CrumbleCluster_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex
struct UGeometryCollectionComponent_BPGetMaxIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EGeometryCollectionPhysicsTypeEnum Target;                                            // 0x1(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2467[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
struct UGeometryCollectionComponent_ApplyLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2469[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_246B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
struct UGeometryCollectionComponent_ApplyInternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_246E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Radius;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PropagationFactor;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Strain;                                            // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
struct UGeometryCollectionComponent_ApplyExternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2470[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Radius;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PropagationFactor;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Strain;                                            // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
struct UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2472[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
struct UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2474[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
struct UGeometryCollectionComponent_ApplyAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2475[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


