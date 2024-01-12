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

	TArray<class FName> K2_GetCollectionsContainingAsset();
	TArray<class FName> GetCollectionsContainingAssetPtr();
	TArray<class FName> GetCollectionsContainingAssetData();
	TArray<class FName> GetCollectionsContainingAsset();
	TArray<class FName> GetCollections();
	TArray<struct FAssetData> GetAssetsInCollection(class FName* Name);
	bool CollectionExists(class FName* Name);
};

}


