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
	class FString                                ImportedFilePath;                                  // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 AssetGuid;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2F19[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingInteractor* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;                               // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2B[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingSimulationInteractor* GetDefaultObj();

	int32 SetNumSubsteps();
	int32 SetNumIterations();
	void SetMaxNumIterations(int32* MaxNumIterations);
	void SetAnimDriveSpringStiffness(float* InStiffness);
	void PhysicsAssetUpdated();
	void GetSimulationTime(float ReturnValue);
	void GetNumSubsteps(int32 ReturnValue);
	void GetNumKinematicParticles(int32 ReturnValue);
	void GetNumIterations(int32 ReturnValue);
	void GetNumDynamicParticles(int32 ReturnValue);
	void GetNumCloths(int32 ReturnValue);
	void GetClothingInteractor(class FString* ClothingAssetName, class UClothingInteractor* ReturnValue);
	void EnableGravityOverride(struct FVector* InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// 0xB8 (0xE0 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x38(0x10)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x48(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x68(0x10)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0x7C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F31[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj();

};

}


