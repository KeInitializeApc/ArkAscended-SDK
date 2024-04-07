#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4D0 - 0x4C0)
// Class GeometryCollectionEngine.PrimalDestructibleActor
class APrimalDestructibleActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeoCollectionComponent;                            // 0x4C0(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceDisableClustering;                           // 0x4C8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseBPStartDestruction;                            // 0x4C9(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLifespan;                                 // 0x4CA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_243B[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APrimalDestructibleActor* GetDefaultObj();

	float StaticBPPreDestructionHandleAttachedComponentClass();
	class UGeometryCollection* SetGeoCollection();
	float BPStartDestruction();
};

// 0x2A8 (0x570 - 0x2C8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2C8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_151 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2481[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2CC(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2E4(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2FC(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x314(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2483[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x328(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x378(0x50)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3C8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3D8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3F8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2484[0x168];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	TArray<struct FChaosTrailingEventData> SortTrailingEvents(enum class EChaosTrailingSortMethod* SortMethod);
	void SortRemovalEvents(TArray<struct FChaosRemovalEventData>* RemovalEvents, enum class EChaosRemovalSortMethod* SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, enum class EChaosCollisionSortMethod* SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, enum class EChaosBreakingSortMethod* SortMethod);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	bool SetTrailingEventEnabled();
	void SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings);
	bool SetRemovalEventEnabled();
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	bool SetCollisionEventEnabled();
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	bool SetBreakingEventEnabled();
	class AGeometryCollectionActor* RemoveGeometryCollectionActor();
	void RemoveChaosSolverActor(class AChaosSolverActor** ChaosSolverActor);
	bool IsEventListening();
	class AGeometryCollectionActor* AddGeometryCollectionActor();
	void AddChaosSolverActor(class AChaosSolverActor** ChaosSolverActor);
};

// 0x10 (0x4D0 - 0x4C0)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x4C8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	bool RaycastSingle(struct FVector* Start, struct FVector* End);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(Edit, ConstParm, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ExportObject, BlueprintReadOnly, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(ConstParm, ExportObject, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x580 (0xC50 - 0x6D0)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2554[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x6D8(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_2555[0xE0];                                    // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollection*                   RestCollection;                                    // 0x7C0(0x8)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x7C8(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Simulating;                                        // 0x7D8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, EditConst, SubobjectReference)
	uint8                                        Pad_2557[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x7DA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bForceMotionBlur;                                  // 0x7DB(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         EnableClustering;                                  // 0x7DC(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_255A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x7E0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x7E4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageThreshold;                                   // 0x7E8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x7F8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_255D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x7FC(0xC)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableDamageFromCollision;                        // 0x808(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnSleep;                              // 0x809(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowRemovalOnBreak;                              // 0x80A(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPrimalForceStartSleepRemoval;                     // 0x80B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bPreventGameplayVelocitiesAndForces;               // 0x80C(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2560[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                PrimalForceSleepIndices;                           // 0x810(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x820(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2561[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CollisionGroup;                                    // 0x824(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        CollisionSampleFraction;                           // 0x828(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x82C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x830(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2562[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x838(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x840(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2564[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InitialLinearVelocity;                             // 0x848(0x18)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               InitialAngularVelocity;                            // 0x860(0x18)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x878(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x880(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x8D0(0x10)(ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x8E0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8F0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2568[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x918(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x928(0x10)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x938(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        DesiredCacheTime;                                  // 0x948(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CachePlayback;                                     // 0x94C(0x1)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_256C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x950(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyBreaks;                                     // 0x960(0x1)(Edit, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCollisions;                                 // 0x961(0x1)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyTrailing;                                   // 0x962(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyRemovals;                                   // 0x963(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bNotifyCrumblings;                                 // 0x964(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x965(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bStoreVelocities;                                  // 0x966(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bShowBoneColors;                                   // 0x967(0x1)(ExportObject, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseRootProxyForNavigation;                        // 0x968(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUpdateNavigationInTick;                           // 0x969(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2570[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x970(0x8)(ExportObject, Net, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2571[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReplication;                                // 0x980(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bEnableAbandonAfterLevel;                          // 0x981(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2572[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReplicationAbandonClusterLevel;                    // 0x984(0x4)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x988(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2574[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionRepData            RepData;                                           // 0x990(0x28)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2576[0x250];                                   // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            DummyBodySetup;                                    // 0xC08(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2578[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xC18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2579[0x28];                                    // Fixing Size Of Struct > TateDumper <

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
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, class UFieldSystemMetaData* MetaData);
	void ApplyLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity);
	struct FVector ApplyKinematicField(float Radius);
	float ApplyInternalStrain(int32 ItemIndex, struct FVector* Location, float Radius);
	float ApplyExternalStrain(int32 ItemIndex, struct FVector* Location, float Radius);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, struct FVector* LinearVelocity);
	void ApplyBreakingAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
	void ApplyAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
};

// 0xC0 (0x580 - 0x4C0)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x4C0(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2588[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x4C8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawWholeCollection;                         // 0x4E0(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawHierarchy;                               // 0x4E1(0x1)(Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugDrawClustering;                              // 0x4E2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x4E3(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyId;                                  // 0x4E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyCollision;                           // 0x4E5(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCollisionAtOrigin;                                // 0x4E6(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyTransform;                           // 0x4E7(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInertia;                             // 0x4E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyVelocity;                            // 0x4E9(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyForce;                               // 0x4EA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowRigidBodyInfos;                               // 0x4EB(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransformIndex;                               // 0x4EC(0x1)(ExportObject, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowTransform;                                    // 0x4ED(0x1)(Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowParent;                                       // 0x4EE(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowLevel;                                        // 0x4EF(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowConnectivityEdges;                            // 0x4F0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryIndex;                                // 0x4F1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowGeometryTransform;                            // 0x4F2(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowBoundingBox;                                  // 0x4F3(0x1)(ExportObject, Net, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaces;                                        // 0x4F4(0x1)(ConstParm, Net, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceIndices;                                  // 0x4F5(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFaceNormals;                                  // 0x4F6(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowSingleFace;                                   // 0x4F7(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SingleFaceIndex;                                   // 0x4F8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertices;                                     // 0x4FC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexIndices;                                // 0x4FD(0x1)(BlueprintVisible, ExportObject, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowVertexNormals;                                // 0x4FE(0x1)(ConstParm, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseActiveVisualization;                           // 0x4FF(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PointThickness;                                    // 0x500(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x504(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bTextShadow;                                       // 0x508(0x1)(ConstParm, BlueprintVisible, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_258F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TextScale;                                         // 0x50C(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NormalScale;                                       // 0x510(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AxisScale;                                         // 0x514(0x4)(OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ArrowScale;                                        // 0x518(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyIdColor;                                  // 0x51C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RigidBodyTransformScale;                           // 0x520(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyCollisionColor;                           // 0x524(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInertiaColor;                             // 0x528(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyVelocityColor;                            // 0x52C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyForceColor;                               // 0x530(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                RigidBodyInfoColor;                                // 0x534(0x4)(ConstParm, ExportObject, Net, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                TransformIndexColor;                               // 0x538(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TransformScale;                                    // 0x53C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                LevelColor;                                        // 0x540(0x4)(Edit, BlueprintReadOnly, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                ParentColor;                                       // 0x544(0x4)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ConnectivityEdgeThickness;                         // 0x548(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                GeometryIndexColor;                                // 0x54C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        GeometryTransformScale;                            // 0x550(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                BoundingBoxColor;                                  // 0x554(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceColor;                                         // 0x558(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceIndexColor;                                    // 0x55C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                FaceNormalColor;                                   // 0x560(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                SingleFaceColor;                                   // 0x564(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexColor;                                       // 0x568(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FColor                                VertexIndexColor;                                  // 0x56C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                VertexNormalColor;                                 // 0x570(0x4)(ConstParm, ExportObject, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2596[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x578(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xC0(0x8)(Net, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_2599[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x4C0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xB8 (0x380 - 0x2C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_259F[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_25A1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         EnableClustering;                                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25A4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x50(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x51(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25AA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x54(0xC)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x60(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25AE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x64(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseFullPrecisionUVs;                              // 0x88(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	uint8                                        Pad_25B0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       RootProxy;                                         // 0xA0(0x20)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bStripOnCook;                                      // 0xC0(0x1)(ConstParm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableNanite;                                      // 0xC1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMassAsDensity;                                    // 0xC2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Mass;                                              // 0xC4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MinimumMassClamp;                                  // 0xC8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bImportCollisionFromSource;                        // 0xCC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRemoveOnMaxSleep;                                 // 0xCD(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MaximumSleepTime;                                  // 0xD0(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             RemovalDuration;                                   // 0xE0(0x10)(EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSlowMovingAsSleeping;                             // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SlowMovingVelocityThreshold;                       // 0xF4(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x108(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UDataflow*                             DataflowAsset;                                     // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DataflowTerminal;                                  // 0x128(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 PersistentGuid;                                    // 0x138(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 StateGuid;                                         // 0x148(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        BoneSelectedMaterialIndex;                         // 0x158(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B9[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xF0 (0x5B0 - 0x4C0)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterial*                             RayMarchMaterial;                                  // 0x4C8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SurfaceTolerance;                                  // 0x4D0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Isovalue;                                          // 0x4D4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Enabled;                                           // 0x4D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         RenderVolumeBoundingBox;                           // 0x4D9(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BF[0xD6];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

}


