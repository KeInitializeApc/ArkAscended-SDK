#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PhysicsCore.PhysicalMaterialPropertyBase
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPhysicalMaterialPropertyBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PhysicsCore.BodySetupCore
class UBodySetupCore : public UObject
{
public:
	class FName                                  BoneName;                                          // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	enum class EPhysicsType                      PhysicsType;                                       // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x31(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	enum class EBodyCollisionResponse            CollisionReponse;                                  // 0x32(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bReallyUseTriangleMeshCollisions : 1;              // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseLastLODInsteadOfFirstForCollisionMesh : 1;     // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSecondToLastLODInsteadOfFirstForCollisionMesh : 1; // Mask: 0x4, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsesSkelCustomIgnore : 1;                         // Mask: 0x8, PropSize: 0x10x34(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bOneWayCollision : 1;                              // Mask: 0x10, PropSize: 0x10x34(0x1)(ExportObject, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A7[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBodySetupCore* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PhysicsCore.ChaosPhysicalMaterial
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Restitution;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x34(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x38(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        SleepingLinearVelocityThreshold;                   // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SleepingAngularVelocityThreshold;                  // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22AA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosPhysicalMaterial* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class PhysicsCore.PhysicalMaterial
class UPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	bool                                         bOverrideFrictionCombineMode;                      // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22B0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Restitution;                                       // 0x34(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOverrideRestitutionCombineMode;                   // 0x39(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22B2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Density;                                           // 0x3C(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SleepLinearVelocityThreshold;                      // 0x40(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SleepAngularVelocityThreshold;                     // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SleepCounterThreshold;                             // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RaiseMassToPower;                                  // 0x4C(0x4)(ConstParm, BlueprintVisible, Net, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DestructibleDamageThresholdScale;                  // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22BA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterialPropertyBase*         PhysicalMaterialProperty;                          // 0x58(0x8)(ExportObject, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x60(0x1)(Edit, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22BD[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bCanDigForWater;                                   // 0x80(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaterRichness;                                     // 0x84(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESoilType                         SoilType;                                          // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_22C0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPhysicalMaterial* GetDefaultObj();

};

// 0xA8 (0xE0 - 0x38)
// Class PhysicsCore.PhysicsSettingsCore
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                        DefaultGravityZ;                                   // 0x38(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig)
	float                                        DefaultTerminalVelocity;                           // 0x3C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	float                                        DefaultFluidFriction;                              // 0x40(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	int32                                        SimulateScratchMemorySize;                         // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        RagdollAggregateThreshold;                         // 0x48(0x4)(ExportObject, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TriangleMeshTriangleMinAreaThreshold;              // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableEnhancedDeterminism;                        // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableShapeSharing;                               // 0x51(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnablePCM;                                        // 0x52(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableStabilization;                              // 0x53(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWarnMissingLocks;                                 // 0x54(0x1)(Edit, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnable2DPhysics;                                  // 0x55(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig)
	bool                                         bDefaultHasComplexCollision;                       // 0x56(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BounceThresholdVelocity;                           // 0x58(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x5C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x5D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22CA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAngularVelocity;                                // 0x60(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MaxDepenetrationVelocity;                          // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	float                                        ContactOffsetMultiplier;                           // 0x68(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinContactOffset;                                  // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxContactOffset;                                  // 0x70(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSimulateSkeletalMeshOnDedicatedServer;            // 0x74(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	enum class ECollisionTraceFlag               DefaultShapeComplexity;                            // 0x75(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	uint8                                        Pad_22CF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosSolverConfiguration             SolverOptions;                                     // 0x78(0x68)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class UPhysicsSettingsCore* GetDefaultObj();

};

}


