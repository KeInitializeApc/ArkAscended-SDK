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
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3C[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.RemoveAsset
struct UUsdAssetCache2_RemoveAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
struct UUsdAssetCache2_RemoveAllAssetReferences_Params
{
public:
	class UObject*                               Referencer;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_45[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache
struct UUsdAssetCache2_IsAssetOwnedByCache_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_47[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function USDClasses.UsdAssetCache2.GetNumAssets
struct UUsdAssetCache2_GetNumAssets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.GetHashForAsset
struct UUsdAssetCache2_GetHashForAsset_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.GetCachedAsset
struct UUsdAssetCache2_GetCachedAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
struct UUsdAssetCache2_GetAllLoadedAssets_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
struct UUsdAssetCache2_GetAllCachedAssetPaths_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDClasses.UsdAssetCache2.GetAllAssetHashes
struct UUsdAssetCache2_GetAllAssetHashes_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.CanRemoveAsset
struct UUsdAssetCache2_CanRemoveAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4C[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function USDClasses.UsdAssetCache2.CacheAsset
struct UUsdAssetCache2_CacheAsset_Params
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               Asset;                                             // 0x10(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x18(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDClasses.UsdAssetCache2.AddAssetReference
struct UUsdAssetCache2_AddAssetReference_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class UObject*                               Referencer;                                        // 0x8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4F[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

}
}


