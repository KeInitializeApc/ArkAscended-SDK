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

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.RemoveAssetReference
struct UUsdAssetCache2_RemoveAssetReference_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x8(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B6B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.RemoveAsset
struct UUsdAssetCache2_RemoveAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
struct UUsdAssetCache2_RemoveAllAssetReferences_Params
{
public:
	class UObject*                               Referencer;                                        // 0x0(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B6E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache
struct UUsdAssetCache2_IsAssetOwnedByCache_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B6F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function USDClasses.UsdAssetCache2.GetNumAssets
struct UUsdAssetCache2_GetNumAssets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.GetHashForAsset
struct UUsdAssetCache2_GetHashForAsset_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.GetCachedAsset
struct UUsdAssetCache2_GetCachedAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
struct UUsdAssetCache2_GetAllLoadedAssets_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
struct UUsdAssetCache2_GetAllCachedAssetPaths_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllAssetHashes
struct UUsdAssetCache2_GetAllAssetHashes_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.CanRemoveAsset
struct UUsdAssetCache2_CanRemoveAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B73[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function USDClasses.UsdAssetCache2.CacheAsset
struct UUsdAssetCache2_CacheAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UObject*                               Asset;                                             // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x18(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.AddAssetReference
struct UUsdAssetCache2_AddAssetReference_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x8(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B78[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}

