#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class AssetTags.AssetTagsSubsystem
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass();
	static class UAssetTagsSubsystem* GetDefaultObj();

	void K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath, TArray<class FName>* ReturnValue);
	void GetCollectionsContainingAssetPtr(class UObject* AssetPtr, TArray<class FName>* ReturnValue);
	struct FAssetData GetCollectionsContainingAssetData(TArray<class FName>* ReturnValue);
	void GetCollectionsContainingAsset(class FName AssetPathName, TArray<class FName>* ReturnValue);
	void GetCollections(TArray<class FName>* ReturnValue);
	void GetAssetsInCollection(class FName* Name, TArray<struct FAssetData>* ReturnValue);
	void CollectionExists(class FName* Name, bool* ReturnValue);
};

}


