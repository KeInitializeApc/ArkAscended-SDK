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

	void ToSoftObjectPath(const struct FAssetData& InAssetData, const struct FSoftObjectPath& ReturnValue);
	void SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues, const struct FARFilter& ReturnValue);
	void IsValid(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsUAsset(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsRedirector(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsAssetLoaded(const struct FAssetData& InAssetData, bool ReturnValue);
	void GetTagValue(const struct FAssetData& InAssetData, class FName InTagName, const class FString& OutTagValue, bool ReturnValue);
	void GetFullName(const struct FAssetData& InAssetData, const class FString& ReturnValue);
	void GetExportTextName(const struct FAssetData& InAssetData, const class FString& ReturnValue);
	void GetClass(const struct FAssetData& InAssetData, class UClass* ReturnValue);
	void GetBlueprintAssets(const struct FARFilter& InFilter, const TArray<struct FAssetData>& OutAssetData);
	void GetAssetRegistry(TScriptInterface<class IAssetRegistry> ReturnValue);
	void GetAsset(const struct FAssetData& InAssetData, class UObject* ReturnValue);
	struct FAssetData FindAssetNativeClass(class UClass* ReturnValue);
	void CreateAssetData(class UObject** InAsset, bool bAllowBlueprintClass, const struct FAssetData& ReturnValue);
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
	void UseFilterToExcludeAssets(const TArray<struct FAssetData>& AssetDataList, struct FARFilter* Filter);
	void SearchAllAssets(bool* bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>* InPaths, bool bForceRescan, bool* bIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(TArray<class FString>* InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>* InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(const TArray<struct FAssetData>& AssetDataList, struct FARFilter* Filter);
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	void K2_GetReferencers(class FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, const TArray<class FName>& OutReferencers, bool ReturnValue);
	void K2_GetDependencies(class FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, const TArray<class FName>& OutDependencies, bool ReturnValue);
	void K2_GetAssetByObjectPath(struct FSoftObjectPath* ObjectPath, bool* bIncludeOnlyOnDiskAssets, const struct FAssetData& ReturnValue);
	void IsSearchAsync(bool ReturnValue);
	void IsSearchAllAssets(bool ReturnValue);
	void IsLoadingAssets(bool ReturnValue);
	class FName HasAssets(bool* bRecursive, bool ReturnValue);
	void GetSubPaths(const class FString& InBasePath, const TArray<class FString>& OutPathList, bool bInRecurse);
	void GetDerivedClassNames(TArray<struct FTopLevelAssetPath>* ClassNames, TSet<struct FTopLevelAssetPath> ExcludedClassNames, TSet<struct FTopLevelAssetPath> OutDerivedClassNames);
	void GetAssetsByPaths(TArray<class FName>* PackagePaths, const TArray<struct FAssetData>& OutAssetData, bool* bRecursive, bool* bIncludeOnlyOnDiskAssets, bool ReturnValue);
	class FName GetAssetsByPath(const TArray<struct FAssetData>& OutAssetData, bool* bRecursive, bool* bIncludeOnlyOnDiskAssets, bool ReturnValue);
	void GetAssetsByPackageName(class FName PackageName, const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets, bool ReturnValue);
	void GetAssetsByClass(const struct FTopLevelAssetPath& ClassPathName, const TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses, bool ReturnValue);
	void GetAssets(struct FARFilter* Filter, const TArray<struct FAssetData>& OutAssetData, bool bSkipARFilteredAssets, bool ReturnValue);
	void GetAssetByObjectPath(class FName* ObjectPath, bool* bIncludeOnlyOnDiskAssets, const struct FAssetData& ReturnValue);
	void GetAncestorClassNames(const struct FTopLevelAssetPath& ClassPathName, const TArray<struct FTopLevelAssetPath>& OutAncestorClassNames, bool ReturnValue);
	void GetAllCachedPaths(const TArray<class FString>& OutPathList);
	void GetAllAssets(const TArray<struct FAssetData>& OutAssetData, bool* bIncludeOnlyOnDiskAssets, bool ReturnValue);
};

// 0xB90 (0xBB8 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_2ED0[0xB90];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


