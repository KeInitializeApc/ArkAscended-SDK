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

	struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);
	struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues);
	bool IsValid(const struct FAssetData& InAssetData);
	bool IsUAsset(const struct FAssetData& InAssetData);
	bool IsRedirector(const struct FAssetData& InAssetData);
	bool IsAssetLoaded(const struct FAssetData& InAssetData);
	bool GetTagValue(const struct FAssetData& InAssetData, class FName InTagName, const class FString& OutTagValue);
	class FString GetFullName(const struct FAssetData& InAssetData);
	class FString GetExportTextName(const struct FAssetData& InAssetData);
	class UClass* GetClass(const struct FAssetData& InAssetData);
	void GetBlueprintAssets(const struct FARFilter& InFilter, const TArray<struct FAssetData>& OutAssetData);
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(const struct FAssetData& InAssetData);
	class UClass* FindAssetNativeClass();
	struct FAssetData CreateAssetData(bool bAllowBlueprintClass);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	void WaitForPackage(const class FString& PackageName);
	void WaitForCompletion();
	void UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, struct FARFilter* Filter);
	void SearchAllAssets(bool* bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>* InPaths, bool* bForceRescan, bool bIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(TArray<class FString>* InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>* InFilePaths, bool* bForceRescan);
	void RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, struct FARFilter* Filter);
	void PrioritizeSearchPath(class FString* PathToPrioritize);
	bool K2_GetReferencers(class FName PackageName, struct FAssetRegistryDependencyOptions* ReferenceOptions, TArray<class FName>* OutReferencers);
	bool K2_GetDependencies(class FName PackageName, struct FAssetRegistryDependencyOptions* DependencyOptions, TArray<class FName>* OutDependencies);
	struct FAssetData K2_GetAssetByObjectPath(bool* bIncludeOnlyOnDiskAssets);
	bool IsSearchAsync();
	bool IsSearchAllAssets();
	bool IsLoadingAssets();
	bool HasAssets(bool bRecursive);
	void GetSubPaths(class FString* InBasePath, const TArray<class FString>& OutPathList, bool* bInRecurse);
	TArray<struct FTopLevelAssetPath> GetDerivedClassNames(TSet<struct FTopLevelAssetPath>* ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames);
	bool GetAssetsByPaths(const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool* bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPath(const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool* bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(class FName PackageName, const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets, bool* bSkipARFilteredAssets);
	bool GetAssetsByClass(struct FTopLevelAssetPath* ClassPathName, const TArray<struct FAssetData>& OutAssetData, bool* bSearchSubClasses);
	bool GetAssets(struct FARFilter* Filter, const TArray<struct FAssetData>& OutAssetData, bool* bSkipARFilteredAssets);
	struct FAssetData GetAssetByObjectPath(bool* bIncludeOnlyOnDiskAssets);
	bool GetAncestorClassNames(struct FTopLevelAssetPath* ClassPathName, const TArray<struct FTopLevelAssetPath>& OutAncestorClassNames);
	void GetAllCachedPaths(const TArray<class FString>& OutPathList);
	bool GetAllAssets(const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets);
};

// 0xB90 (0xBB8 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_2E5A[0xB90];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


