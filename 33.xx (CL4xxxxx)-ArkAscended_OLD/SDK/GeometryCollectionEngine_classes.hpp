#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4D8 - 0x4C8)
// Class GeometryCollectionEngine.PrimalDestructibleActor
class APrimalDestructibleActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeoCollectionComponent;                            // 0x4C8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceDisableClustering;                           // 0x4D0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseBPStartDestruction;                            // 0x4D1(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLifespan;                                 // 0x4D2(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E1B[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APrimalDestructibleActor* GetDefaultObj();

	class UInstancedStaticMeshComponent* StaticBPPreDestructionHandleAttachedComponentClass(class UClass** AttachedComponentClass, struct FVector* InstancePosition, struct FRotator* InstanceRotation, int32 InstanceIndex, struct FVector* HitDirection, float* Damage, float* TotalHealth);
	void SetGeoCollection(class UGeometryCollection** GeoCollection);
	void BPStartDestruction(class UGeometryCollection** DestructionAsset, struct FVector* HitDirection, float* Damage, float* TotalHealth);
};

// 0x2A8 (0x570 - 0x2C8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2C8(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2C8(0x1)(Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_134 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E5A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2CC(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2E4(0x18)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2FC(0x18)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x314(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x328(0x50)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x378(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3C8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3D8(0x10)(ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E5F[0x168];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	TArray<struct FChaosTrailingEventData> SortTrailingEvents(enum class EChaosTrailingSortMethod SortMethod);
	TArray<struct FChaosRemovalEventData> SortRemovalEvents(enum class EChaosRemovalSortMethod SortMethod);
	TArray<struct FChaosCollisionEventData> SortCollisionEvents(enum class EChaosCollisionSortMethod SortMethod);
	TArray<struct FChaosBreakingEventData> SortBreakingEvents(enum class EChaosBreakingSortMethod SortMethod);
	struct FChaosTrailingEventRequestSettings SetTrailingEventRequestSettings();
	bool SetTrailingEventEnabled();
	struct FChaosRemovalEventRequestSettings SetRemovalEventRequestSettings();
	bool SetRemovalEventEnabled();
	struct FChaosCollisionEventRequestSettings SetCollisionEventRequestSettings();
	bool SetCollisionEventEnabled();
	struct FChaosBreakingEventRequestSettings SetBreakingEventRequestSettings();
	bool SetBreakingEventEnabled();
	class AGeometryCollectionActor* RemoveGeometryCollectionActor();
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void IsEventListening(bool* ReturnValue);
	class AGeometryCollectionActor* AddGeometryCollectionActor();
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x4D8 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x4D0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	struct FHitResult RaycastSingle(struct FVector* Start, const struct FVector& End, bool* ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x578 (0xC50 - 0x6D8)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1ED4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x6E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1ED5[0xE0];                                    // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollection*                   RestCollection;                                    // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x7D0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Simulating;                                        // 0x7E0(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1ED8[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x7E2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bForceMotionBlur;                                  // 0x7E3(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableClustering;                                  // 0x7E4(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EDA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x7E8(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x7EC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageThreshold;                                   // 0x7F0(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x800(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EDC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x804(0xC)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableDamageFromCollision;                        // 0x810(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnSleep;                              // 0x811(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnBreak;                              // 0x812(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPrimalForceStartSleepRemoval;                     // 0x813(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventGameplayVelocitiesAndForces;               // 0x814(0x1)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EDF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                PrimalForceSleepIndices;                           // 0x818(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x828(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EE0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CollisionGroup;                                    // 0x82C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        CollisionSampleFraction;                           // 0x830(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x834(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x838(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EE2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x840(0x8)(Edit, ConstParm, ReturnParm, Transient, Config, GlobalConfig)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x848(0x1)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EE5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InitialLinearVelocity;                             // 0x850(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               InitialAngularVelocity;                            // 0x868(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x880(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x888(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x8D8(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x8E8(0x10)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8F8(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EEB[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x920(0x10)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x930(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x940(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DesiredCacheTime;                                  // 0x950(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CachePlayback;                                     // 0x954(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EF0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x958(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyBreaks;                                     // 0x968(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCollisions;                                 // 0x969(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyTrailing;                                   // 0x96A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyRemovals;                                   // 0x96B(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCrumblings;                                 // 0x96C(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x96D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStoreVelocities;                                  // 0x96E(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowBoneColors;                                   // 0x96F(0x1)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseRootProxyForNavigation;                        // 0x970(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUpdateNavigationInTick;                           // 0x971(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x978(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReplication;                                // 0x988(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableAbandonAfterLevel;                          // 0x989(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReplicationAbandonClusterLevel;                    // 0x98C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x990(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F00[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionRepData            RepData;                                           // 0x998(0x28)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F01[0x250];                                   // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            DummyBodySetup;                                    // 0xC10(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F03[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xC20(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F05[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetRestCollection(class UGeometryCollection** RestCollectionIn);
	void SetNotifyRemovals(bool bNewNotifyRemovals);
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
	void SetNotifyBreaks(bool bNewNotifyBreaks);
	bool SetEnableDamageFromCollision();
	void SetAnchoredByTransformedBox(struct FBox* Box, struct FTransform* Transform, bool bAnchored, int32 MaxLevel);
	int32 SetAnchoredByIndex(bool bAnchored);
	void SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel);
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void GetRootIndex(int32* ReturnValue);
	int32 GetMassAndExtents(float OutMass, const struct FBox& OutExtents);
	void GetLocalBounds(struct FBox* ReturnValue);
	int32 GetInitialLevel(int32* ReturnValue);
	void GetDebugInfo(class FString* ReturnValue);
	int32 CrumbleCluster();
	void CrumbleActiveClusters();
	void BPGetMaxIndex(int32* ReturnValue);
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData** MetaData);
	struct FVector ApplyLinearVelocity();
	void ApplyKinematicField(float Radius, const struct FVector& Position);
	int32 ApplyInternalStrain(struct FVector* Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	int32 ApplyExternalStrain(struct FVector* Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	struct FVector ApplyBreakingLinearVelocity();
	int32 ApplyBreakingAngularVelocity(struct FVector* AngularVelocity);
	int32 ApplyAngularVelocity(struct FVector* AngularVelocity);
};

// 0xC0 (0x588 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x4C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x4D0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawWholeCollection;                         // 0x4E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawHierarchy;                               // 0x4E9(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawClustering;                              // 0x4EA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x4EB(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyId;                                  // 0x4EC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyCollision;                           // 0x4ED(0x1)(ConstParm, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCollisionAtOrigin;                                // 0x4EE(0x1)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyTransform;                           // 0x4EF(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInertia;                             // 0x4F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyVelocity;                            // 0x4F1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyForce;                               // 0x4F2(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInfos;                               // 0x4F3(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransformIndex;                               // 0x4F4(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransform;                                    // 0x4F5(0x1)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowParent;                                       // 0x4F6(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowLevel;                                        // 0x4F7(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowConnectivityEdges;                            // 0x4F8(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryIndex;                                // 0x4F9(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryTransform;                            // 0x4FA(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowBoundingBox;                                  // 0x4FB(0x1)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaces;                                        // 0x4FC(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceIndices;                                  // 0x4FD(0x1)(Edit, ConstParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceNormals;                                  // 0x4FE(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowSingleFace;                                   // 0x4FF(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SingleFaceIndex;                                   // 0x500(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertices;                                     // 0x504(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexIndices;                                // 0x505(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexNormals;                                // 0x506(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseActiveVisualization;                           // 0x507(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PointThickness;                                    // 0x508(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x50C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bTextShadow;                                       // 0x510(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F35[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TextScale;                                         // 0x514(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        NormalScale;                                       // 0x518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AxisScale;                                         // 0x51C(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ArrowScale;                                        // 0x520(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyIdColor;                                  // 0x524(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RigidBodyTransformScale;                           // 0x528(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyCollisionColor;                           // 0x52C(0x4)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInertiaColor;                             // 0x530(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyVelocityColor;                            // 0x534(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyForceColor;                               // 0x538(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInfoColor;                                // 0x53C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                TransformIndexColor;                               // 0x540(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TransformScale;                                    // 0x544(0x4)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                LevelColor;                                        // 0x548(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                ParentColor;                                       // 0x54C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ConnectivityEdgeThickness;                         // 0x550(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                GeometryIndexColor;                                // 0x554(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        GeometryTransformScale;                            // 0x558(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                BoundingBoxColor;                                  // 0x55C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceColor;                                         // 0x560(0x4)(Edit, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceIndexColor;                                    // 0x564(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceNormalColor;                                   // 0x568(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                SingleFaceColor;                                   // 0x56C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexColor;                                       // 0x570(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                VertexIndexColor;                                  // 0x574(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexNormalColor;                                 // 0x578(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F3F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x580(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xC0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1F44[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xB8 (0x380 - 0x2C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_1F4B[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_1F4C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         EnableClustering;                                  // 0x30(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F4D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F4E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x51(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F50[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x54(0xC)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x60(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F53[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x64(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(ConstParm, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x78(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseFullPrecisionUVs;                              // 0x88(0x1)(Edit, ConstParm, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	uint8                                        Pad_1F56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0x90(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       RootProxy;                                         // 0xA0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bStripOnCook;                                      // 0xC0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableNanite;                                      // 0xC1(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMassAsDensity;                                    // 0xC2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F59[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Mass;                                              // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumMassClamp;                                  // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bImportCollisionFromSource;                        // 0xCC(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRemoveOnMaxSleep;                                 // 0xCD(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MaximumSleepTime;                                  // 0xD0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             RemovalDuration;                                   // 0xE0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSlowMovingAsSleeping;                             // 0xF0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SlowMovingVelocityThreshold;                       // 0xF4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xF8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x110(0x10)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UDataflow*                             DataflowAsset;                                     // 0x120(0x8)(Edit, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DataflowTerminal;                                  // 0x128(0x10)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 PersistentGuid;                                    // 0x138(0x10)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 StateGuid;                                         // 0x148(0x10)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        BoneSelectedMaterialIndex;                         // 0x158(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F68[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xF8 (0x5C0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterial*                             RayMarchMaterial;                                  // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SurfaceTolerance;                                  // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Isovalue;                                          // 0x4DC(0x4)(ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Enabled;                                           // 0x4E0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RenderVolumeBoundingBox;                           // 0x4E1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F70[0xDE];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

}


