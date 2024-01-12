#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x1A0 - 0x28)
// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigCommon
{
public:
	enum class EClothingWindMethodNv             ClothingWindMethod;                                // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E84[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetupNv               VerticalConstraint;                                // 0x2C(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FClothConstraintSetupNv               HorizontalConstraint;                              // 0x3C(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FClothConstraintSetupNv               BendConstraint;                                    // 0x4C(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FClothConstraintSetupNv               ShearConstraint;                                   // 0x5C(0x10)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Damping;                                           // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Friction;                                          // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        WindDragCoefficient;                               // 0x94(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        WindLiftCoefficient;                               // 0x98(0x4)(Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E86[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearDrag;                                        // 0xA0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               AngularDrag;                                       // 0xB8(0x18)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               LinearInertiaScale;                                // 0xD0(0x18)(Edit, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               AngularInertiaScale;                               // 0xE8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CentrifugalInertiaScale;                           // 0x100(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SolverFrequency;                                   // 0x118(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StiffnessFrequency;                                // 0x11C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GravityScale;                                      // 0x120(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E87[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x128(0x18)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseGravityOverride;                               // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E89[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TetherStiffness;                                   // 0x144(0x4)(Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        TetherLimit;                                       // 0x148(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CollisionThickness;                                // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimDriveSpringStiffness;                          // 0x150(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimDriveDamperStiffness;                          // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x15C(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x16C(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x17C(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x18C(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E90[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothConfigNv* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactoryNv* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationInteractorNv* GetDefaultObj();

	float SetAnimDriveDamperStiffness();
};

// 0x40 (0x120 - 0xE0)
// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj();

};

}


