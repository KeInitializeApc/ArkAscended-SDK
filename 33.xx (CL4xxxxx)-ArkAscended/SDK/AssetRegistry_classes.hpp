#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistryHelpers
class UAssetRegistryHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAssetRegistryHelpers* GetDefaultObj();

	struct FSoftObjectPath ToSoftObjectPath();
	struct FARFilter SetFilterTagsAndValues();
	bool IsValid();
	bool IsUAsset();
	bool IsRedirector();
	bool IsAssetLoaded();
	bool GetTagValue();
	class FString GetFullName();
	class FString GetExportTextName();
	class UClass* GetClass();
	TArray<struct FAssetData> GetBlueprintAssets();
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset();
	class UClass* FindAssetNativeClass();
	struct FAssetData CreateAssetData(class UObject** InAsset);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	class FString WaitForPackage();
	void WaitForCompletion();
	struct FARFilter UseFilterToExcludeAssets();
	bool SearchAllAssets();
	bool ScanPathsSynchronous(bool bIgnoreDenyListScanFilters);
	TArray<class FString> ScanModifiedAssetFiles();
	bool ScanFilesSynchronous();
	struct FARFilter RunAssetsThroughFilter();
	class FString PrioritizeSearchPath();
	bool K2_GetReferencers();
	bool K2_GetDependencies();
	struct FAssetData K2_GetAssetByObjectPath(struct FSoftObjectPath* ObjectPath, bool bIncludeOnlyOnDiskAssets);
	bool IsSearchAsync();
	bool IsSearchAllAssets();
	bool IsLoadingAssets();
	bool HasAssets(class FName* PackagePath, bool bRecursive);
	bool GetSubPaths();
	TSet<struct FTopLevelAssetPath> GetDerivedClassNames(TArray<struct FTopLevelAssetPath>* ClassNames);
	bool GetAssetsByPaths(TArray<class FName>* PackagePaths, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPath(class FName* PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByClass();
	bool GetAssets();
	struct FAssetData GetAssetByObjectPath(class FName* ObjectPath, bool bIncludeOnlyOnDiskAssets);
	bool GetAncestorClassNames();
	TArray<class FString> GetAllCachedPaths();
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets);
};

// 0xB90 (0xBB8 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_25EF[0xB90];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


