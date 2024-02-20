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

	void K2_GetCollectionsContainingAsset(struct FSoftObjectPath* AssetPath, const TArray<class FName>& ReturnValue);
	class UObject* GetCollectionsContainingAssetPtr(const TArray<class FName>& ReturnValue);
	struct FAssetData GetCollectionsContainingAssetData(const TArray<class FName>& ReturnValue);
	class FName GetCollectionsContainingAsset(const TArray<class FName>& ReturnValue);
	void GetCollections(const TArray<class FName>& ReturnValue);
	void GetAssetsInCollection(class FName* Name, const TArray<struct FAssetData>& ReturnValue);
	void CollectionExists(class FName* Name, bool ReturnValue);
};

}


