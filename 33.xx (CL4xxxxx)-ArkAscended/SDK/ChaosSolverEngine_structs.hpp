#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClusterConnectionTypeEnum : uint8
{
	Chaos_PointImplicit            = 0,
	Chaos_DelaunayTriangulation    = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
	Chaos_None                     = 5,
	Chaos_EClsuterCreationParameters_Max = 6,
	Chaos_MAX                      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x8(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Normal;                                            // 0x28(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FVector                               AccumulatedImpulse;                                // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Velocity;                                          // 0x58(0x18)(Edit, ReturnParm, Config, EditConst, SubobjectReference)
	struct FVector                               OtherVelocity;                                     // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularVelocity;                                   // 0x88(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               OtherAngularVelocity;                              // 0xA0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0xB8(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OtherMass;                                         // 0xBC(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x20(0x18)(Edit, ReturnParm, Config, EditConst, SubobjectReference)
	struct FVector                               AngularVelocity;                                   // 0x38(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Extents;                                           // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	float                                        Mass;                                              // 0x68(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x6C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bFromCrumble;                                      // 0x70(0x1)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D0D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosCrumblingEvent
struct FChaosCrumblingEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FQuat                                 Orientation;                                       // 0x20(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               LinearVelocity;                                    // 0x40(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularVelocity;                                   // 0x58(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x70(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D0E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  LocalBounds;                                       // 0x78(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                Children;                                          // 0xB0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
struct FChaosRemovalEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Mass;                                              // 0x20(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D0F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
struct FBreakEventCallbackWrapper
{
public:
	uint8                                        Pad_2D10[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
struct FRemovalEventCallbackWrapper
{
public:
	uint8                                        Pad_2D11[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.CrumblingEventCallbackWrapper
struct FCrumblingEventCallbackWrapper
{
public:
	uint8                                        Pad_2D12[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet
{
public:
	uint8                                        Pad_2D13[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class UObject*>                         ChaosHandlers;                                     // 0x8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSubstep;                                          // 0x1(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStep;                                             // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

}


