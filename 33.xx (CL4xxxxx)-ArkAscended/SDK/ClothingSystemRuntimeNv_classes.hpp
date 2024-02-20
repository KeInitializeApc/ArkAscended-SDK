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
	enum class EClothingWindMethodNv             ClothingWindMethod;                                // 0x28(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2237[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetupNv               VerticalConstraint;                                // 0x2C(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FClothConstraintSetupNv               HorizontalConstraint;                              // 0x3C(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FClothConstraintSetupNv               BendConstraint;                                    // 0x4C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetupNv               ShearConstraint;                                   // 0x5C(0x10)(ExportObject, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Damping;                                           // 0x78(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Friction;                                          // 0x90(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	float                                        WindDragCoefficient;                               // 0x94(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WindLiftCoefficient;                               // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_223F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearDrag;                                        // 0xA0(0x18)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularDrag;                                       // 0xB8(0x18)(ConstParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LinearInertiaScale;                                // 0xD0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularInertiaScale;                               // 0xE8(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CentrifugalInertiaScale;                           // 0x100(0x18)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SolverFrequency;                                   // 0x118(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StiffnessFrequency;                                // 0x11C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GravityScale;                                      // 0x120(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2241[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x128(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGravityOverride;                               // 0x140(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2243[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TetherStiffness;                                   // 0x144(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        TetherLimit;                                       // 0x148(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CollisionThickness;                                // 0x14C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnimDriveSpringStiffness;                          // 0x150(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnimDriveDamperStiffness;                          // 0x154(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2245[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x15C(0x10)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x16C(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x17C(0x10)(ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x18C(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2246[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj();

};

}


