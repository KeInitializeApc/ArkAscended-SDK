#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothConfigCommon
class UClothConfigCommon : public UClothConfigBase
{
public:

	static class UClass* StaticClass();
	static class UClothConfigCommon* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:

	static class UClass* StaticClass();
	static class UClothSharedConfigCommon* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
class UClothingAssetCustomData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothingAssetCustomData* GetDefaultObj();

};

// 0xA8 (0xF0 - 0x48)
// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	TMap<class FName, class UClothConfigBase*>   ClothConfigs;                                      // 0x50(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FClothLODDataCommon>           LODData;                                           // 0xA0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                LodMap;                                            // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          UsedBoneNames;                                     // 0xC0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<int32>                                UsedBoneIndices;                                   // 0xD0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReferenceBoneIndex;                                // 0xE0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2232[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClothingAssetCustomData*              CustomData;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UClothingAssetCommon* GetDefaultObj();

};

// 0x140 (0x168 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*     PhysicalMeshData;                                  // 0x28(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothPhysicalMeshData                ClothPhysicalMeshData;                             // 0x30(0xD8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst)
	struct FClothCollisionData                   CollisionData;                                     // 0x108(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2236[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClothLODDataCommon_Legacy* GetDefaultObj();

};

}


