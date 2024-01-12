#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x1E8 - 0x28)
// Class USDClasses.UsdAssetCache
class UUsdAssetCache : public UObject
{
public:
	TMap<class FString, class UObject*>          TransientStorage;                                  // 0x28(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UObject*>          PersistentStorage;                                 // 0x78(0x50)(ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowPersistentStorage;                           // 0xC8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D86[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<TWeakObjectPtr<class UObject>>          OwnedAssets;                                       // 0xD0(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, TWeakObjectPtr<class UObject>> PrimPathToAssets;                                  // 0x120(0x50)(EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D87[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAssetCache* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class USDClasses.UsdAssetCache2
class UUsdAssetCache2 : public UObject
{
public:
	double                                       UnreferencedAssetStorageSizeMB;                    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       PersistentAssetStorageSizeMB;                      // 0x30(0x8)(ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UObject*>          AssetStorage;                                      // 0x38(0x50)(ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D8F[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAssetCache2* GetDefaultObj();

	void Reset();
	bool RemoveAssetReference(class UObject** Asset, class UObject** Referencer);
	class UObject* RemoveAsset(const class FString& Hash);
	bool RemoveAllAssetReferences(class UObject** Referencer);
	void RefreshStorage();
	bool IsAssetOwnedByCache();
	int32 GetNumAssets();
	class FString GetHashForAsset(class UObject** Asset);
	class UObject* GetCachedAsset(const class FString& Hash);
	TArray<class UObject*> GetAllLoadedAssets();
	TArray<class FString> GetAllCachedAssetPaths();
	TArray<class FString> GetAllAssetHashes();
	bool CanRemoveAsset(const class FString& Hash);
	void CacheAsset(const class FString& Hash, class UObject** Asset, class UObject** Referencer);
	bool AddAssetReference(class UObject** Asset, class UObject** Referencer);
};

// 0x18 (0x40 - 0x28)
// Class USDClasses.UsdAssetImportData
class UUsdAssetImportData : public UAssetImportData
{
public:
	class FString                                PrimPath;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               ImportOptions;                                     // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdAssetImportData* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class USDClasses.UsdAnimSequenceAssetImportData
class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData
{
public:
	float                                        LayerStartOffsetSeconds;                           // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D90[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAnimSequenceAssetImportData* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class USDClasses.UsdMeshAssetImportData
class UUsdMeshAssetImportData : public UUsdAssetImportData
{
public:
	TMap<int32, struct FUsdPrimPathList>         MaterialSlotToPrimPaths;                           // 0x40(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdMeshAssetImportData* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class USDClasses.UsdProjectSettings
class UUsdProjectSettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                AdditionalPluginDirectories;                       // 0x38(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          AdditionalMaterialPurposes;                        // 0x48(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       DefaultAssetCache;                                 // 0x58(0x20)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowCreateDefaultAssetCacheDialog;                // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowConfirmationWhenClearingLayers;               // 0x79(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowConfirmationWhenMutingDirtyLayers;            // 0x7A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowOverriddenOpinionsWarning;                    // 0x7B(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowWarningOnIncompleteDuplication;               // 0x7C(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowTransformTrackOnCameraComponentWarning;       // 0x7D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenSaving;                    // 0x7E(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenClosing;                   // 0x7F(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceMaterial;                   // 0x80(0x20)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentMaterial;        // 0xA0(0x20)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedMaterial;           // 0xC0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedMaterial; // 0xE0(0x20)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceVTMaterial;                 // 0x100(0x20)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentVTMaterial;      // 0x120(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedVTMaterial;         // 0x140(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial; // 0x160(0x20)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorMaterial;                     // 0x180(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityMaterial;           // 0x1A0(0x20)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorTwoSidedMaterial;             // 0x1C0(0x20)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityTwoSidedMaterial;   // 0x1E0(0x20)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdProjectSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class USDClasses.UsdReferenceOptions
class UUsdReferenceOptions : public UObject
{
public:
	bool                                         bInternalReference;                                // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D99[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFilePath                             TargetFile;                                        // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseDefaultPrim;                                   // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D9B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                TargetPrimPath;                                    // 0x48(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimeCodeOffset;                                    // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimeCodeScale;                                     // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdReferenceOptions* GetDefaultObj();

};

}


