#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosDebugDrawComponent
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	uint8                                        Pad_1DA1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_1DA5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x260 (0x320 - 0xC0)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_1DA7[0x110];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x1D0(0x50)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x220(0x50)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x270(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x2C0(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DAB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosGameplayEventDispatcher* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
class IChaosNotifyHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChaosNotifyHandlerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj();

	void ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo* PhysicsCollision, const struct FHitResult& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UChaosSolver* GetDefaultObj();

};

// 0xF8 (0x5C0 - 0x4C8)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration             Properties;                                        // 0x4C8(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeStepMultiplier;                                // 0x530(0x4)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CollisionIterations;                               // 0x534(0x4)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PushOutIterations;                                 // 0x538(0x4)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PushOutPairIterations;                             // 0x53C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ClusterConnectionFactor;                           // 0x540(0x4)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x544(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateCollisionData;                           // 0x545(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DC6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x548(0x10)(Edit, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateBreakingData;                            // 0x558(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DC7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x55C(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateTrailingData;                            // 0x56C(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x570(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MassScale;                                         // 0x580(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bHasFloor;                                         // 0x584(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DCE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FloorHeight;                                       // 0x588(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x58C(0x3)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DD1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x590(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1DD2[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x5B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DD3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AChaosSolverActor* GetDefaultObj();

	bool SetSolverActive();
	void SetAsCurrentWorldSolver();
};

// 0x28 (0x60 - 0x38)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_1DDC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x40(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


