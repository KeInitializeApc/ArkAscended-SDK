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

// 0x88 (0x88 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReturnValue;                                       // 0x68(0x20)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2B0 (0x2B0 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FTagAndValue>                  InTagsAndValues;                                   // 0x150(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FARFilter                             ReturnValue;                                       // 0x160(0x150)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistryHelpers_IsValid_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E87[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistryHelpers_IsUAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E89[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistryHelpers_IsRedirector_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E8B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E8C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistryHelpers_GetTagValue_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  InTagName;                                         // 0x68(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                OutTagValue;                                       // 0x70(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E8E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistryHelpers_GetFullName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x68(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistryHelpers_GetExportTextName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x68(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistryHelpers_GetClass_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x68(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
struct UAssetRegistryHelpers_GetBlueprintAssets_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
public:
	TScriptInterface<class IAssetRegistry>       ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistryHelpers_GetAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x68(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
struct UAssetRegistryHelpers_FindAssetNativeClass_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UClass*                                ReturnValue;                                       // 0x68(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistryHelpers_CreateAssetData_Params
{
public:
	class UObject*                               InAsset;                                           // 0x0(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowBlueprintClass;                              // 0x8(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E93[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            ReturnValue;                                       // 0x10(0x68)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.WaitForPackage
struct IAssetRegistry_WaitForPackage_Params
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct IAssetRegistry_UseFilterToExcludeAssets_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct IAssetRegistry_SearchAllAssets_Params
{
public:
	bool                                         bSynchronousSearch;                                // 0x0(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct IAssetRegistry_ScanPathsSynchronous_Params
{
public:
	TArray<class FString>                        InPaths;                                           // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceRescan;                                      // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIgnoreDenyListScanFilters;                        // 0x11(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2E95[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct IAssetRegistry_ScanModifiedAssetFiles_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct IAssetRegistry_ScanFilesSynchronous_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceRescan;                                      // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E96[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct IAssetRegistry_RunAssetsThroughFilter_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct IAssetRegistry_PrioritizeSearchPath_Params
{
public:
	class FString                                PathToPrioritize;                                  // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct IAssetRegistry_K2_GetReferencers_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FAssetRegistryDependencyOptions       ReferenceOptions;                                  // 0x8(0x5)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E9F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          OutReferencers;                                    // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EA0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct IAssetRegistry_K2_GetDependencies_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FAssetRegistryDependencyOptions       DependencyOptions;                                 // 0x8(0x5)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          OutDependencies;                                   // 0x10(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EA4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
struct IAssetRegistry_K2_GetAssetByObjectPath_Params
{
public:
	struct FSoftObjectPath                       ObjectPath;                                        // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x20(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            ReturnValue;                                       // 0x28(0x68)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAsync
struct IAssetRegistry_IsSearchAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
struct IAssetRegistry_IsSearchAllAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct IAssetRegistry_IsLoadingAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AssetRegistry.AssetRegistry.HasAssets
struct IAssetRegistry_HasAssets_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRecursive;                                        // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EAD[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetSubPaths
struct IAssetRegistry_GetSubPaths_Params
{
public:
	class FString                                InBasePath;                                        // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FString>                        OutPathList;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bInRecurse;                                        // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EB2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
struct IAssetRegistry_GetDerivedClassNames_Params
{
public:
	TArray<struct FTopLevelAssetPath>            ClassNames;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TSet<struct FTopLevelAssetPath>              ExcludedClassNames;                                // 0x10(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<struct FTopLevelAssetPath>              OutDerivedClassNames;                              // 0x60(0x50)(ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
struct IAssetRegistry_GetAssetsByPaths_Params
{
public:
	TArray<class FName>                          PackagePaths;                                      // 0x0(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRecursive;                                        // 0x20(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x21(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x22(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EBC[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct IAssetRegistry_GetAssetsByPath_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRecursive;                                        // 0x18(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x19(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EC3[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct IAssetRegistry_GetAssetsByPackageName_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x18(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSkipARFilteredAssets;                             // 0x19(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EC5[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct IAssetRegistry_GetAssetsByClass_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSearchSubClasses;                                 // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EC7[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x168 (0x168 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssets
struct IAssetRegistry_GetAssets_Params
{
public:
	struct FARFilter                             Filter;                                            // 0x0(0x150)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSkipARFilteredAssets;                             // 0x160(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x161(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2EC9[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct IAssetRegistry_GetAssetByObjectPath_Params
{
public:
	class FName                                  ObjectPath;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x8(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2ECB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            ReturnValue;                                       // 0x10(0x68)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
struct IAssetRegistry_GetAncestorClassNames_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FTopLevelAssetPath>            OutAncestorClassNames;                             // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2ECC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct IAssetRegistry_GetAllCachedPaths_Params
{
public:
	TArray<class FString>                        OutPathList;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllAssets
struct IAssetRegistry_GetAllAssets_Params
{
public:
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x10(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2ECE[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


