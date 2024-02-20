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
	void SetFilterTagsAndValues(struct FARFilter* InFilter, TArray<struct FTagAndValue>* InTagsAndValues, const struct FARFilter& ReturnValue);
	void IsValid(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsUAsset(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsRedirector(const struct FAssetData& InAssetData, bool ReturnValue);
	void IsAssetLoaded(const struct FAssetData& InAssetData, bool ReturnValue);
	void GetTagValue(const struct FAssetData& InAssetData, class FName* InTagName, class FString* OutTagValue, bool ReturnValue);
	void GetFullName(const struct FAssetData& InAssetData, const class FString& ReturnValue);
	void GetExportTextName(const struct FAssetData& InAssetData, const class FString& ReturnValue);
	void GetClass(const struct FAssetData& InAssetData, class UClass* ReturnValue);
	void GetBlueprintAssets(struct FARFilter* InFilter, TArray<struct FAssetData>* OutAssetData);
	void GetAssetRegistry(TScriptInterface<class IAssetRegistry> ReturnValue);
	void GetAsset(const struct FAssetData& InAssetData, class UObject* ReturnValue);
	struct FAssetData FindAssetNativeClass(class UClass* ReturnValue);
	class UObject* CreateAssetData(bool bAllowBlueprintClass, const struct FAssetData& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	void WaitForPackage(class FString* PackageName);
	void WaitForCompletion();
	struct FARFilter UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList);
	void SearchAllAssets(bool* bSynchronousSearch);
	bool ScanPathsSynchronous(TArray<class FString>* InPaths, bool* bForceRescan);
	void ScanModifiedAssetFiles(TArray<class FString>* InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>* InFilePaths, bool* bForceRescan);
	struct FARFilter RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList);
	void PrioritizeSearchPath(class FString* PathToPrioritize);
	void K2_GetReferencers(class FName* PackageName, struct FAssetRegistryDependencyOptions* ReferenceOptions, TArray<class FName>* OutReferencers, bool ReturnValue);
	void K2_GetDependencies(class FName* PackageName, struct FAssetRegistryDependencyOptions* DependencyOptions, TArray<class FName>* OutDependencies, bool ReturnValue);
	bool K2_GetAssetByObjectPath(struct FSoftObjectPath* ObjectPath, const struct FAssetData& ReturnValue);
	void IsSearchAsync(bool ReturnValue);
	void IsSearchAllAssets(bool ReturnValue);
	void IsLoadingAssets(bool ReturnValue);
	bool HasAssets(class FName* PackagePath, bool ReturnValue);
	void GetSubPaths(class FString* InBasePath, TArray<class FString>* OutPathList, bool* bInRecurse);
	void GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames, TSet<struct FTopLevelAssetPath>* ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames);
	bool GetAssetsByPaths(TArray<class FName>* PackagePaths, TArray<struct FAssetData>* OutAssetData, bool ReturnValue);
	bool GetAssetsByPath(class FName* PackagePath, TArray<struct FAssetData>* OutAssetData, bool ReturnValue);
	bool GetAssetsByPackageName(class FName* PackageName, TArray<struct FAssetData>* OutAssetData, bool* bSkipARFilteredAssets, bool ReturnValue);
	void GetAssetsByClass(struct FTopLevelAssetPath* ClassPathName, TArray<struct FAssetData>* OutAssetData, bool* bSearchSubClasses, bool ReturnValue);
	struct FARFilter GetAssets(TArray<struct FAssetData>* OutAssetData, bool* bSkipARFilteredAssets, bool ReturnValue);
	bool GetAssetByObjectPath(class FName* ObjectPath, const struct FAssetData& ReturnValue);
	void GetAncestorClassNames(struct FTopLevelAssetPath* ClassPathName, TArray<struct FTopLevelAssetPath>* OutAncestorClassNames, bool ReturnValue);
	void GetAllCachedPaths(TArray<class FString>* OutPathList);
	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool ReturnValue);
};

// 0xB90 (0xBB8 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_218C[0xB90];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


