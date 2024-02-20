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
	class FName                                  BoneName;                                          // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	enum class EPhysicsType                      PhysicsType;                                       // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x31(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	enum class EBodyCollisionResponse            CollisionReponse;                                  // 0x32(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bReallyUseTriangleMeshCollisions : 1;              // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bUseLastLODInsteadOfFirstForCollisionMesh : 1;     // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bUseSecondToLastLODInsteadOfFirstForCollisionMesh : 1; // Mask: 0x4, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bUsesSkelCustomIgnore : 1;                         // Mask: 0x8, PropSize: 0x10x34(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBodySetupCore* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PhysicsCore.ChaosPhysicalMaterial
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Restitution;                                       // 0x30(0x4)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearEtherDrag;                                   // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AngularEtherDrag;                                  // 0x38(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        SleepingLinearVelocityThreshold;                   // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SleepingAngularVelocityThreshold;                  // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UChaosPhysicalMaterial* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class PhysicsCore.PhysicalMaterial
class UPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	float                                        StaticFriction;                                    // 0x2C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x30(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         bOverrideFrictionCombineMode;                      // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D03[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Restitution;                                       // 0x34(0x4)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideRestitutionCombineMode;                   // 0x39(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D05[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Density;                                           // 0x3C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SleepLinearVelocityThreshold;                      // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SleepAngularVelocityThreshold;                     // 0x44(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        SleepCounterThreshold;                             // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RaiseMassToPower;                                  // 0x4C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DestructibleDamageThresholdScale;                  // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterialPropertyBase*         PhysicalMaterialProperty;                          // 0x58(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x60(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0D[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bCanDigForWater;                                   // 0x80(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaterRichness;                                     // 0x84(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ESoilType                         SoilType;                                          // 0x88(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D0F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPhysicalMaterial* GetDefaultObj();

};

// 0xA8 (0xE0 - 0x38)
// Class PhysicsCore.PhysicsSettingsCore
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                        DefaultGravityZ;                                   // 0x38(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        DefaultTerminalVelocity;                           // 0x3C(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        DefaultFluidFriction;                              // 0x40(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	int32                                        SimulateScratchMemorySize;                         // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        RagdollAggregateThreshold;                         // 0x48(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TriangleMeshTriangleMinAreaThreshold;              // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableEnhancedDeterminism;                        // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableShapeSharing;                               // 0x51(0x1)(BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnablePCM;                                        // 0x52(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableStabilization;                              // 0x53(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWarnMissingLocks;                                 // 0x54(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnable2DPhysics;                                  // 0x55(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         bDefaultHasComplexCollision;                       // 0x56(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D23[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BounceThresholdVelocity;                           // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x5C(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x5D(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D28[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAngularVelocity;                                // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        MaxDepenetrationVelocity;                          // 0x64(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        ContactOffsetMultiplier;                           // 0x68(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MinContactOffset;                                  // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxContactOffset;                                  // 0x70(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSimulateSkeletalMeshOnDedicatedServer;            // 0x74(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, SubobjectReference)
	enum class ECollisionTraceFlag               DefaultShapeComplexity;                            // 0x75(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_1D2F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FChaosSolverConfiguration             SolverOptions;                                     // 0x78(0x68)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPhysicsSettingsCore* GetDefaultObj();

};

}


