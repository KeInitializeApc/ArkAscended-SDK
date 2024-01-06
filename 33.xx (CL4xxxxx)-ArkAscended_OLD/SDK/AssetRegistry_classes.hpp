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

	struct FAssetData ToSoftObjectPath(struct FSoftObjectPath* ReturnValue);
	TArray<struct FTagAndValue> SetFilterTagsAndValues(struct FARFilter* ReturnValue);
	struct FAssetData IsValid(bool* ReturnValue);
	struct FAssetData IsUAsset(bool* ReturnValue);
	struct FAssetData IsRedirector(bool* ReturnValue);
	struct FAssetData IsAssetLoaded(bool* ReturnValue);
	class FString GetTagValue(bool* ReturnValue);
	struct FAssetData GetFullName(class FString* ReturnValue);
	struct FAssetData GetExportTextName(class FString* ReturnValue);
	struct FAssetData GetClass(class UClass** ReturnValue);
	TArray<struct FAssetData> GetBlueprintAssets();
	void GetAssetRegistry(TScriptInterface<class IAssetRegistry>* ReturnValue);
	struct FAssetData GetAsset(class UObject** ReturnValue);
	struct FAssetData FindAssetNativeClass(class UClass** ReturnValue);
	bool CreateAssetData(class UObject* InAsset, struct FAssetData* ReturnValue);
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
	void UseFilterToExcludeAssets(const TArray<struct FAssetData>& AssetDataList, struct FARFilter* Filter);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(const TArray<class FString>& InPaths, bool bForceRescan, bool* bIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(const TArray<class FString>& InFilePaths);
	void ScanFilesSynchronous(const TArray<class FString>& InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(const TArray<struct FAssetData>& AssetDataList, struct FARFilter* Filter);
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	class FName K2_GetReferencers(const struct FAssetRegistryDependencyOptions& ReferenceOptions, const TArray<class FName>& OutReferencers, bool* ReturnValue);
	class FName K2_GetDependencies(const struct FAssetRegistryDependencyOptions& DependencyOptions, const TArray<class FName>& OutDependencies, bool* ReturnValue);
	bool K2_GetAssetByObjectPath(const struct FSoftObjectPath& ObjectPath, struct FAssetData* ReturnValue);
	void IsSearchAsync(bool* ReturnValue);
	void IsSearchAllAssets(bool* ReturnValue);
	void IsLoadingAssets(bool* ReturnValue);
	void HasAssets(class FName* PackagePath, bool* bRecursive, bool* ReturnValue);
	bool GetSubPaths();
	TSet<struct FTopLevelAssetPath> GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames);
	bool GetAssetsByPaths(const TArray<class FName>& PackagePaths, bool* bRecursive, bool* ReturnValue);
	bool GetAssetsByPath(class FName* PackagePath, bool* bRecursive, bool* ReturnValue);
	bool GetAssetsByPackageName(bool* ReturnValue);
	bool GetAssetsByClass(bool* ReturnValue);
	bool GetAssets(struct FARFilter* Filter, bool* ReturnValue);
	bool GetAssetByObjectPath(class FName ObjectPath, struct FAssetData* ReturnValue);
	TArray<struct FTopLevelAssetPath> GetAncestorClassNames(bool* ReturnValue);
	TArray<class FString> GetAllCachedPaths();
	bool GetAllAssets(bool* ReturnValue);
};

// 0xB90 (0xBB8 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_2506[0xB90];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


