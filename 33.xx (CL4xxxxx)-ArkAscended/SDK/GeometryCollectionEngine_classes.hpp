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
	class UGeometryCollectionComponent*          GeoCollectionComponent;                            // 0x4C8(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceDisableClustering;                           // 0x4D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseBPStartDestruction;                            // 0x4D1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLifespan;                                 // 0x4D2(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14A1[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APrimalDestructibleActor* GetDefaultObj();

	struct FRotator StaticBPPreDestructionHandleAttachedComponentClass(class UInstancedStaticMeshComponent* ForMeshComp, int32* InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth);
	class UGeometryCollection* SetGeoCollection();
	class UGeometryCollection* BPStartDestruction(const struct FVector& HitDirection, float Damage, float TotalHealth);
};

// 0x2A8 (0x570 - 0x2C8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2C8(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_B7 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14CF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2CC(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2E4(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2FC(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x314(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x328(0x50)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x378(0x50)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3D8(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3E8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3F8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D3[0x168];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	enum class EChaosTrailingSortMethod SortTrailingEvents();
	enum class EChaosRemovalSortMethod SortRemovalEvents();
	enum class EChaosCollisionSortMethod SortCollisionEvents();
	enum class EChaosBreakingSortMethod SortBreakingEvents();
	struct FChaosTrailingEventRequestSettings SetTrailingEventRequestSettings();
	void SetTrailingEventEnabled(bool* bIsEnabled);
	struct FChaosRemovalEventRequestSettings SetRemovalEventRequestSettings();
	void SetRemovalEventEnabled(bool* bIsEnabled);
	struct FChaosCollisionEventRequestSettings SetCollisionEventRequestSettings();
	void SetCollisionEventEnabled(bool* bIsEnabled);
	struct FChaosBreakingEventRequestSettings SetBreakingEventRequestSettings();
	void SetBreakingEventEnabled(bool* bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor);
	class AChaosSolverActor* RemoveChaosSolverActor();
	void IsEventListening(bool ReturnValue);
	void AddGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor);
	class AChaosSolverActor* AddChaosSolverActor();
};

// 0x10 (0x4D8 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x4C8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	struct FHitResult RaycastSingle(bool ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x578 (0xC50 - 0x6D8)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1556[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x6E0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1557[0xE0];                                    // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollection*                   RestCollection;                                    // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x7D0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Simulating;                                        // 0x7E0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_155C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x7E2(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bForceMotionBlur;                                  // 0x7E3(0x1)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         EnableClustering;                                  // 0x7E4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1560[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x7E8(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x7EC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageThreshold;                                   // 0x7F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x800(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1561[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x804(0xC)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableDamageFromCollision;                        // 0x810(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnSleep;                              // 0x811(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnBreak;                              // 0x812(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPrimalForceStartSleepRemoval;                     // 0x813(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPreventGameplayVelocitiesAndForces;               // 0x814(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1567[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                PrimalForceSleepIndices;                           // 0x818(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x828(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1568[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CollisionGroup;                                    // 0x82C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        CollisionSampleFraction;                           // 0x830(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x834(0x4)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x838(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_156B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x840(0x8)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x848(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_156C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InitialLinearVelocity;                             // 0x850(0x18)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               InitialAngularVelocity;                            // 0x868(0x18)(Edit, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x880(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x888(0x50)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x8D8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x8E8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8F8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1570[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x920(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x930(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x940(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        DesiredCacheTime;                                  // 0x950(0x4)(Edit, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CachePlayback;                                     // 0x954(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1572[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x958(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyBreaks;                                     // 0x968(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCollisions;                                 // 0x969(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyTrailing;                                   // 0x96A(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyRemovals;                                   // 0x96B(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCrumblings;                                 // 0x96C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x96D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bStoreVelocities;                                  // 0x96E(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bShowBoneColors;                                   // 0x96F(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseRootProxyForNavigation;                        // 0x970(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUpdateNavigationInTick;                           // 0x971(0x1)(Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1576[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x978(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1577[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReplication;                                // 0x988(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableAbandonAfterLevel;                          // 0x989(0x1)(BlueprintVisible, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1578[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReplicationAbandonClusterLevel;                    // 0x98C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x990(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_157A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionRepData            RepData;                                           // 0x998(0x28)(Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_157C[0x250];                                   // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            DummyBodySetup;                                    // 0xC10(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_157D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xC20(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_157E[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetRestCollection(class UGeometryCollection** RestCollectionIn);
	void SetNotifyRemovals(bool* bNewNotifyRemovals);
	void SetNotifyCrumblings(bool* bNewNotifyCrumblings, bool* bNewCrumblingEventIncludesChildren);
	void SetNotifyBreaks(bool* bNewNotifyBreaks);
	void SetEnableDamageFromCollision(bool* bValue);
	void SetAnchoredByTransformedBox(struct FBox* Box, struct FTransform* Transform, bool* bAnchored, int32* MaxLevel);
	void SetAnchoredByIndex(int32* Index, bool* bAnchored);
	void SetAnchoredByBox(struct FBox* WorldSpaceBox, bool* bAnchored, int32* MaxLevel);
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent);
	void GetRootIndex(int32 ReturnValue);
	int32 GetMassAndExtents(float* OutMass, struct FBox* OutExtents);
	void GetLocalBounds(const struct FBox& ReturnValue);
	int32 GetInitialLevel(int32 ReturnValue);
	void GetDebugInfo(const class FString& ReturnValue);
	int32 CrumbleCluster();
	void CrumbleActiveClusters();
	void BPGetMaxIndex(int32 ReturnValue);
	class UFieldSystemMetaData* ApplyPhysicsField(class UFieldNodeBase* Field);
	struct FVector ApplyLinearVelocity();
	void ApplyKinematicField(float* Radius, struct FVector* Position);
	int32 ApplyInternalStrain(struct FVector* Location, float* Radius, int32* PropagationDepth, float* PropagationFactor, float* Strain);
	int32 ApplyExternalStrain(struct FVector* Location, float* Radius, int32* PropagationDepth, float* PropagationFactor, float* Strain);
	struct FVector ApplyBreakingLinearVelocity();
	int32 ApplyBreakingAngularVelocity(const struct FVector& AngularVelocity);
	int32 ApplyAngularVelocity(const struct FVector& AngularVelocity);
};

// 0xC0 (0x588 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x4C8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1588[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x4D0(0x18)(Edit, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawWholeCollection;                         // 0x4E8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawHierarchy;                               // 0x4E9(0x1)(ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawClustering;                              // 0x4EA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x4EB(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyId;                                  // 0x4EC(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyCollision;                           // 0x4ED(0x1)(Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCollisionAtOrigin;                                // 0x4EE(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyTransform;                           // 0x4EF(0x1)(Edit, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInertia;                             // 0x4F0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyVelocity;                            // 0x4F1(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyForce;                               // 0x4F2(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInfos;                               // 0x4F3(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowTransformIndex;                               // 0x4F4(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowTransform;                                    // 0x4F5(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowParent;                                       // 0x4F6(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowLevel;                                        // 0x4F7(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowConnectivityEdges;                            // 0x4F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryIndex;                                // 0x4F9(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryTransform;                            // 0x4FA(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowBoundingBox;                                  // 0x4FB(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowFaces;                                        // 0x4FC(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowFaceIndices;                                  // 0x4FD(0x1)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowFaceNormals;                                  // 0x4FE(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowSingleFace;                                   // 0x4FF(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        SingleFaceIndex;                                   // 0x500(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowVertices;                                     // 0x504(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowVertexIndices;                                // 0x505(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowVertexNormals;                                // 0x506(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseActiveVisualization;                           // 0x507(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PointThickness;                                    // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x50C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bTextShadow;                                       // 0x510(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_159E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TextScale;                                         // 0x514(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NormalScale;                                       // 0x518(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AxisScale;                                         // 0x51C(0x4)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ArrowScale;                                        // 0x520(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyIdColor;                                  // 0x524(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RigidBodyTransformScale;                           // 0x528(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyCollisionColor;                           // 0x52C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInertiaColor;                             // 0x530(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyVelocityColor;                            // 0x534(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyForceColor;                               // 0x538(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInfoColor;                                // 0x53C(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                TransformIndexColor;                               // 0x540(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TransformScale;                                    // 0x544(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                LevelColor;                                        // 0x548(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                ParentColor;                                       // 0x54C(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ConnectivityEdgeThickness;                         // 0x550(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                GeometryIndexColor;                                // 0x554(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        GeometryTransformScale;                            // 0x558(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                BoundingBoxColor;                                  // 0x55C(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                FaceColor;                                         // 0x560(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                FaceIndexColor;                                    // 0x564(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                FaceNormalColor;                                   // 0x568(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                SingleFaceColor;                                   // 0x56C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                VertexColor;                                       // 0x570(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                VertexIndexColor;                                  // 0x574(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                VertexNormalColor;                                 // 0x578(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x580(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xC0(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_15B8[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x4C8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xB8 (0x380 - 0x2C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_15C2[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_15C8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         EnableClustering;                                  // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15C9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15CA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x51(0x1)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15CD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x54(0xC)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x60(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15D0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x78(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseFullPrecisionUVs;                              // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_15D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       RootProxy;                                         // 0xA0(0x20)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStripOnCook;                                      // 0xC0(0x1)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableNanite;                                      // 0xC1(0x1)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bMassAsDensity;                                    // 0xC2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Mass;                                              // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        MinimumMassClamp;                                  // 0xC8(0x4)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bImportCollisionFromSource;                        // 0xCC(0x1)(BlueprintVisible, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemoveOnMaxSleep;                                 // 0xCD(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MaximumSleepTime;                                  // 0xD0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             RemovalDuration;                                   // 0xE0(0x10)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSlowMovingAsSleeping;                             // 0xF0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15DA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SlowMovingVelocityThreshold;                       // 0xF4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xF8(0x10)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataflow*                             DataflowAsset;                                     // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                DataflowTerminal;                                  // 0x128(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 PersistentGuid;                                    // 0x138(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 StateGuid;                                         // 0x148(0x10)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        BoneSelectedMaterialIndex;                         // 0x158(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E1[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xF8 (0x5C0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterial*                             RayMarchMaterial;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SurfaceTolerance;                                  // 0x4D8(0x4)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Isovalue;                                          // 0x4DC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Enabled;                                           // 0x4E0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RenderVolumeBoundingBox;                           // 0x4E1(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E7[0xDE];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

}


