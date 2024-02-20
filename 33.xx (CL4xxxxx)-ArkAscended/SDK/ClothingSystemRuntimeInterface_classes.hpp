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
	class FString                                ImportedFilePath;                                  // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 AssetGuid;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_209F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingInteractor* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;                               // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20B5[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothingSimulationInteractor* GetDefaultObj();

	int32 SetNumSubsteps();
	int32 SetNumIterations();
	int32 SetMaxNumIterations();
	float SetAnimDriveSpringStiffness();
	void PhysicsAssetUpdated();
	void GetSimulationTime(float ReturnValue);
	void GetNumSubsteps(int32 ReturnValue);
	void GetNumKinematicParticles(int32 ReturnValue);
	void GetNumIterations(int32 ReturnValue);
	void GetNumDynamicParticles(int32 ReturnValue);
	void GetNumCloths(int32 ReturnValue);
	class FString GetClothingInteractor(class UClothingInteractor* ReturnValue);
	void EnableGravityOverride(const struct FVector& InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// 0xB8 (0xE0 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x28(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x38(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x48(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x68(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0x7C(0x4)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20C3[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj();

};

}


