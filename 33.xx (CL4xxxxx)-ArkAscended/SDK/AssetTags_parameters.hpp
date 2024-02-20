#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
struct UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	TArray<class FName>                          ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
{
public:
	class UObject*                               AssetPtr;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class FName>                          ReturnValue;                                       // 0x68(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct UAssetTagsSubsystem_GetCollectionsContainingAsset_Params
{
public:
	class FName                                  AssetPathName;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollections
struct UAssetTagsSubsystem_GetCollections_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct UAssetTagsSubsystem_GetAssetsInCollection_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	TArray<struct FAssetData>                    ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct UAssetTagsSubsystem_CollectionExists_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_171D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


