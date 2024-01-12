#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingAssetBase
class UClothingAssetBase : public UObject
{
public:
	class FString                                ImportedFilePath;                                  // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 AssetGuid;                                         // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClothingAssetBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothConfigBase
class UClothConfigBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothConfigBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
class UClothSharedSimConfigBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothSharedSimConfigBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
class UClothingSimulationFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactory* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingInteractor
class UClothingInteractor : public UObject
{
public:
	uint8                                        Pad_2E45[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingInteractor* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;                               // 0x28(0x50)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E4F[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingSimulationInteractor* GetDefaultObj();

	int32 SetNumSubsteps();
	void SetNumIterations(int32* NumIterations);
	int32 SetMaxNumIterations();
	float SetAnimDriveSpringStiffness();
	void PhysicsAssetUpdated();
	float GetSimulationTime();
	int32 GetNumSubsteps();
	int32 GetNumKinematicParticles();
	int32 GetNumIterations();
	int32 GetNumDynamicParticles();
	int32 GetNumCloths();
	class UClothingInteractor* GetClothingInteractor();
	struct FVector EnableGravityOverride();
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// 0xB8 (0xE0 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x38(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x58(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0x7C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0x80(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E52[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj();

};

}


