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
	class UGeometryCollectionComponent*          GeoCollectionComponent;                            // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceDisableClustering;                           // 0x4D0(0x1)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseBPStartDestruction;                            // 0x4D1(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLifespan;                                 // 0x4D2(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25D2[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APrimalDestructibleActor* GetDefaultObj();

	float StaticBPPreDestructionHandleAttachedComponentClass(class UInstancedStaticMeshComponent* ForMeshComp);
	class UGeometryCollection* SetGeoCollection();
	float BPStartDestruction();
};

// 0x2A8 (0x570 - 0x2C8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2C8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1D6 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_25DE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2CC(0x18)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2E4(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2FC(0x18)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x314(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25DF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x328(0x50)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x378(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3C8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3D8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3E8(0x10)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3F8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25E1[0x168];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	enum class EChaosTrailingSortMethod SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents);
	enum class EChaosRemovalSortMethod SortRemovalEvents(TArray<struct FChaosRemovalEventData>* RemovalEvents);
	enum class EChaosCollisionSortMethod SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents);
	enum class EChaosBreakingSortMethod SortBreakingEvents(const TArray<struct FChaosBreakingEventData>& BreakingEvents);
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
	bool IsEventListening();
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

	bool RaycastSingle(struct FVector* Start, const struct FVector& End, const struct FHitResult& OutHit);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x578 (0xC50 - 0x6D8)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2615[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x6E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_2617[0xE0];                                    // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollection*                   RestCollection;                                    // 0x7C8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x7D0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Simulating;                                        // 0x7E0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2619[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x7E2(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bForceMotionBlur;                                  // 0x7E3(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableClustering;                                  // 0x7E4(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_261A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x7E8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x7EC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageThreshold;                                   // 0x7F0(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x800(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_261B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x804(0xC)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableDamageFromCollision;                        // 0x810(0x1)(ConstParm, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnSleep;                              // 0x811(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnBreak;                              // 0x812(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPrimalForceStartSleepRemoval;                     // 0x813(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventGameplayVelocitiesAndForces;               // 0x814(0x1)(Edit, ExportObject, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_261C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                PrimalForceSleepIndices;                           // 0x818(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x828(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_261D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CollisionGroup;                                    // 0x82C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        CollisionSampleFraction;                           // 0x830(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x834(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x838(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_261E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x840(0x8)(Edit, ConstParm, ReturnParm, Transient, Config, GlobalConfig)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x848(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2621[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InitialLinearVelocity;                             // 0x850(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               InitialAngularVelocity;                            // 0x868(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x880(0x8)(Edit, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x888(0x50)(ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x8D8(0x10)(ExportObject, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x8E8(0x10)(ConstParm, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8F8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2622[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x920(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x930(0x10)(Edit, ConstParm, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x940(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	float                                        DesiredCacheTime;                                  // 0x950(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CachePlayback;                                     // 0x954(0x1)(ConstParm, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2623[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x958(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyBreaks;                                     // 0x968(0x1)(Edit, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCollisions;                                 // 0x969(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyTrailing;                                   // 0x96A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyRemovals;                                   // 0x96B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCrumblings;                                 // 0x96C(0x1)(Edit, ConstParm, ExportObject, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x96D(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStoreVelocities;                                  // 0x96E(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowBoneColors;                                   // 0x96F(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseRootProxyForNavigation;                        // 0x970(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUpdateNavigationInTick;                           // 0x971(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2625[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x978(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2627[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReplication;                                // 0x988(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableAbandonAfterLevel;                          // 0x989(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2628[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReplicationAbandonClusterLevel;                    // 0x98C(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x990(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_262A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionRepData            RepData;                                           // 0x998(0x28)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_262C[0x250];                                   // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            DummyBodySetup;                                    // 0xC10(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_262E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xC20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_262F[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	class UGeometryCollection* SetRestCollection();
	bool SetNotifyRemovals();
	bool SetNotifyCrumblings();
	bool SetNotifyBreaks();
	void SetEnableDamageFromCollision(bool* bValue);
	int32 SetAnchoredByTransformedBox(struct FBox* Box, struct FTransform* Transform);
	bool SetAnchoredByIndex();
	int32 SetAnchoredByBox();
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	class UGeometryCollectionComponent* NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	class UGeometryCollectionComponent* NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	int32 GetRootIndex();
	struct FBox GetMassAndExtents(int32 ItemIndex);
	struct FBox GetLocalBounds();
	int32 GetInitialLevel(int32 ItemIndex);
	class FString GetDebugInfo();
	void CrumbleCluster(int32 ItemIndex);
	void CrumbleActiveClusters();
	int32 BPGetMaxIndex();
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData** MetaData);
	void ApplyLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity);
	float ApplyKinematicField(const struct FVector& Position);
	float ApplyInternalStrain(int32 ItemIndex, struct FVector* Location);
	float ApplyExternalStrain(int32 ItemIndex, struct FVector* Location);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity);
	struct FVector ApplyBreakingAngularVelocity(int32 ItemIndex);
	struct FVector ApplyAngularVelocity(int32 ItemIndex);
};

// 0xC0 (0x588 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x4C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2634[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x4D0(0x18)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawWholeCollection;                         // 0x4E8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawHierarchy;                               // 0x4E9(0x1)(ConstParm, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawClustering;                              // 0x4EA(0x1)(Edit, ConstParm, BlueprintVisible, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x4EB(0x1)(DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyId;                                  // 0x4EC(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyCollision;                           // 0x4ED(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCollisionAtOrigin;                                // 0x4EE(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyTransform;                           // 0x4EF(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInertia;                             // 0x4F0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyVelocity;                            // 0x4F1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyForce;                               // 0x4F2(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInfos;                               // 0x4F3(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransformIndex;                               // 0x4F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransform;                                    // 0x4F5(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowParent;                                       // 0x4F6(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowLevel;                                        // 0x4F7(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowConnectivityEdges;                            // 0x4F8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryIndex;                                // 0x4F9(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryTransform;                            // 0x4FA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowBoundingBox;                                  // 0x4FB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaces;                                        // 0x4FC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceIndices;                                  // 0x4FD(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceNormals;                                  // 0x4FE(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowSingleFace;                                   // 0x4FF(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SingleFaceIndex;                                   // 0x500(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertices;                                     // 0x504(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexIndices;                                // 0x505(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexNormals;                                // 0x506(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseActiveVisualization;                           // 0x507(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PointThickness;                                    // 0x508(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x50C(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bTextShadow;                                       // 0x510(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_263C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TextScale;                                         // 0x514(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        NormalScale;                                       // 0x518(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AxisScale;                                         // 0x51C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ArrowScale;                                        // 0x520(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyIdColor;                                  // 0x524(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RigidBodyTransformScale;                           // 0x528(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyCollisionColor;                           // 0x52C(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInertiaColor;                             // 0x530(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyVelocityColor;                            // 0x534(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyForceColor;                               // 0x538(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInfoColor;                                // 0x53C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                TransformIndexColor;                               // 0x540(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TransformScale;                                    // 0x544(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                LevelColor;                                        // 0x548(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                ParentColor;                                       // 0x54C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ConnectivityEdgeThickness;                         // 0x550(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                GeometryIndexColor;                                // 0x554(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        GeometryTransformScale;                            // 0x558(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                BoundingBoxColor;                                  // 0x55C(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceColor;                                         // 0x560(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceIndexColor;                                    // 0x564(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceNormalColor;                                   // 0x568(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                SingleFaceColor;                                   // 0x56C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexColor;                                       // 0x570(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                VertexIndexColor;                                  // 0x574(0x4)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexNormalColor;                                 // 0x578(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_263E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x580(0x8)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
	uint8                                        Pad_2641[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xB8 (0x380 - 0x2C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_2643[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_2644[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         EnableClustering;                                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2645[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2646[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x50(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2647[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x54(0xC)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x60(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2648[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x64(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x78(0x10)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseFullPrecisionUVs;                              // 0x88(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	uint8                                        Pad_2649[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0x90(0x10)(Edit, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       RootProxy;                                         // 0xA0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bStripOnCook;                                      // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableNanite;                                      // 0xC1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMassAsDensity;                                    // 0xC2(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Mass;                                              // 0xC4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumMassClamp;                                  // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bImportCollisionFromSource;                        // 0xCC(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRemoveOnMaxSleep;                                 // 0xCD(0x1)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MaximumSleepTime;                                  // 0xD0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             RemovalDuration;                                   // 0xE0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSlowMovingAsSleeping;                             // 0xF0(0x1)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SlowMovingVelocityThreshold;                       // 0xF4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xF8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x110(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UDataflow*                             DataflowAsset;                                     // 0x120(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DataflowTerminal;                                  // 0x128(0x10)(Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 PersistentGuid;                                    // 0x138(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 StateGuid;                                         // 0x148(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        BoneSelectedMaterialIndex;                         // 0x158(0x4)(BlueprintVisible, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264E[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xF8 (0x5C0 - 0x4C8)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterial*                             RayMarchMaterial;                                  // 0x4D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SurfaceTolerance;                                  // 0x4D8(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Isovalue;                                          // 0x4DC(0x4)(ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Enabled;                                           // 0x4E0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RenderVolumeBoundingBox;                           // 0x4E1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2655[0xDE];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

}


