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
	uint8                                        Pad_9D9[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_9DE[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x260 (0x320 - 0xC0)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_9E4[0x110];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x1D0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x220(0x50)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x270(0x50)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x2C0(0x50)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E9[0x10];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FHitResult ConvertPhysicsCollisionToHitResult();
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UChaosSolver* GetDefaultObj();

};

// 0xF8 (0x5B8 - 0x4C0)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration             Properties;                                        // 0x4C0(0x68)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeStepMultiplier;                                // 0x528(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionIterations;                               // 0x52C(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PushOutIterations;                                 // 0x530(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PushOutPairIterations;                             // 0x534(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ClusterConnectionFactor;                           // 0x538(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x53C(0x1)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateCollisionData;                           // 0x53D(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A0E[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x540(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateBreakingData;                            // 0x550(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A11[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x554(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DoGenerateTrailingData;                            // 0x564(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A14[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x568(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MassScale;                                         // 0x578(0x4)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bHasFloor;                                         // 0x57C(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A18[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        FloorHeight;                                       // 0x580(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x584(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst)
	uint8                                        Pad_A1D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UBillboardComponent*                   SpriteComponent;                                   // 0x588(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_A20[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x5A8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A22[0x8];                                      // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_A2B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x40(0x20)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


