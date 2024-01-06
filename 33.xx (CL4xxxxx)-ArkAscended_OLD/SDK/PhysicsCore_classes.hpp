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
	class FName                                  BoneName;                                          // 0x28(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	enum class EPhysicsType                      PhysicsType;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	enum class EBodyCollisionResponse            CollisionReponse;                                  // 0x32(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_212C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bReallyUseTriangleMeshCollisions : 1;              // Mask: 0x1, PropSize: 0x10x34(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseLastLODInsteadOfFirstForCollisionMesh : 1;     // Mask: 0x2, PropSize: 0x10x34(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSecondToLastLODInsteadOfFirstForCollisionMesh : 1; // Mask: 0x4, PropSize: 0x10x34(0x1)(ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsesSkelCustomIgnore : 1;                         // Mask: 0x8, PropSize: 0x10x34(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_212E[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBodySetupCore* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PhysicsCore.ChaosPhysicalMaterial
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Restitution;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x38(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        SleepingLinearVelocityThreshold;                   // 0x3C(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SleepingAngularVelocityThreshold;                  // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2140[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosPhysicalMaterial* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class PhysicsCore.PhysicalMaterial
class UPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	bool                                         bOverrideFrictionCombineMode;                      // 0x31(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2147[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Restitution;                                       // 0x34(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x38(0x1)(BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOverrideRestitutionCombineMode;                   // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_214A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Density;                                           // 0x3C(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SleepLinearVelocityThreshold;                      // 0x40(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SleepAngularVelocityThreshold;                     // 0x44(0x4)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SleepCounterThreshold;                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RaiseMassToPower;                                  // 0x4C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DestructibleDamageThresholdScale;                  // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2150[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterialPropertyBase*         PhysicalMaterialProperty;                          // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x60(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2151[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bCanDigForWater;                                   // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2152[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaterRichness;                                     // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESoilType                         SoilType;                                          // 0x88(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2153[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPhysicalMaterial* GetDefaultObj();

};

// 0xA8 (0xE0 - 0x38)
// Class PhysicsCore.PhysicsSettingsCore
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                        DefaultGravityZ;                                   // 0x38(0x4)(EditFixedSize, DisableEditOnInstance)
	float                                        DefaultTerminalVelocity;                           // 0x3C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	float                                        DefaultFluidFriction;                              // 0x40(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SimulateScratchMemorySize;                         // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        RagdollAggregateThreshold;                         // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TriangleMeshTriangleMinAreaThreshold;              // 0x4C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableEnhancedDeterminism;                        // 0x50(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableShapeSharing;                               // 0x51(0x1)(Edit, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnablePCM;                                        // 0x52(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableStabilization;                              // 0x53(0x1)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bWarnMissingLocks;                                 // 0x54(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnable2DPhysics;                                  // 0x55(0x1)(Edit, ExportObject, EditFixedSize, DisableEditOnInstance)
	bool                                         bDefaultHasComplexCollision;                       // 0x56(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_215B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BounceThresholdVelocity;                           // 0x58(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x5C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x5D(0x1)(BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_215F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAngularVelocity;                                // 0x60(0x4)(BlueprintVisible, Parm, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxDepenetrationVelocity;                          // 0x64(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	float                                        ContactOffsetMultiplier;                           // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinContactOffset;                                  // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxContactOffset;                                  // 0x70(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSimulateSkeletalMeshOnDedicatedServer;            // 0x74(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	enum class ECollisionTraceFlag               DefaultShapeComplexity;                            // 0x75(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_2166[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosSolverConfiguration             SolverOptions;                                     // 0x78(0x68)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)

	static class UClass* StaticClass();
	static class UPhysicsSettingsCore* GetDefaultObj();

};

}


