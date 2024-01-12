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
	uint8                                        Pad_2BE5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_2BE6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x260 (0x320 - 0xC0)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_2BE9[0x110];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x1D0(0x50)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x220(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x270(0x50)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x2C0(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BEA[0x10];                                    // Fixing Size Of Struct > TateDumper <

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

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo* PhysicsCollision);
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
	struct FChaosSolverConfiguration             Properties;                                        // 0x4C8(0x68)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        TimeStepMultiplier;                                // 0x530(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionIterations;                               // 0x534(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        PushOutIterations;                                 // 0x538(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        PushOutPairIterations;                             // 0x53C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ClusterConnectionFactor;                           // 0x540(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x544(0x1)(Edit, ConstParm, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         DoGenerateCollisionData;                           // 0x545(0x1)(ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BFA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x548(0x10)(ConstParm, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         DoGenerateBreakingData;                            // 0x558(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BFB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x55C(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         DoGenerateTrailingData;                            // 0x56C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BFC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x570(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MassScale;                                         // 0x580(0x4)(ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasFloor;                                         // 0x584(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C00[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FloorHeight;                                       // 0x588(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x58C(0x3)(OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_2C02[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x590(0x8)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2C04[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x5B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C05[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AChaosSolverActor* GetDefaultObj();

	void SetSolverActive(bool* bActive);
	void SetAsCurrentWorldSolver();
};

// 0x28 (0x60 - 0x38)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_2C07[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x40(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


