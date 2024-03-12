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
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Normal;                                            // 0x28(0x18)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               AccumulatedImpulse;                                // 0x40(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               Velocity;                                          // 0x58(0x18)(Config, EditConst, GlobalConfig)
	struct FVector                               OtherVelocity;                                     // 0x70(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               AngularVelocity;                                   // 0x88(0x18)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               OtherAngularVelocity;                              // 0xA0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        OtherMass;                                         // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x20(0x18)(Config, EditConst, GlobalConfig)
	struct FVector                               AngularVelocity;                                   // 0x38(0x18)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               Extents;                                           // 0x50(0x18)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config)
	float                                        Mass;                                              // 0x68(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x6C(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bFromCrumble;                                      // 0x70(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A39[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosCrumblingEvent
struct FChaosCrumblingEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FQuat                                 Orientation;                                       // 0x20(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig)
	struct FVector                               LinearVelocity;                                    // 0x40(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               AngularVelocity;                                   // 0x58(0x18)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x70(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A56[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  LocalBounds;                                       // 0x78(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<int32>                                Children;                                          // 0xB0(0x10)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
struct FChaosRemovalEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Mass;                                              // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A67[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
struct FBreakEventCallbackWrapper
{
public:
	uint8                                        Pad_A68[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
struct FRemovalEventCallbackWrapper
{
public:
	uint8                                        Pad_A69[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.CrumblingEventCallbackWrapper
struct FCrumblingEventCallbackWrapper
{
public:
	uint8                                        Pad_A6B[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet
{
public:
	uint8                                        Pad_A6C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class UObject*>                         ChaosHandlers;                                     // 0x8(0x50)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSubstep;                                          // 0x1(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStep;                                             // 0x2(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


