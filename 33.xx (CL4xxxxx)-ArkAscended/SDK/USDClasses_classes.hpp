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
	TMap<class FString, class UObject*>          TransientStorage;                                  // 0x28(0x50)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UObject*>          PersistentStorage;                                 // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowPersistentStorage;                           // 0xC8(0x1)(ConstParm, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<TWeakObjectPtr<class UObject>>          OwnedAssets;                                       // 0xD0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, TWeakObjectPtr<class UObject>> PrimPathToAssets;                                  // 0x120(0x50)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5C[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAssetCache* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class USDClasses.UsdAssetCache2
class UUsdAssetCache2 : public UObject
{
public:
	double                                       UnreferencedAssetStorageSizeMB;                    // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       PersistentAssetStorageSizeMB;                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UObject*>          AssetStorage;                                      // 0x38(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B74[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAssetCache2* GetDefaultObj();

	void Reset();
	class UObject* RemoveAssetReference(bool ReturnValue);
	class FString RemoveAsset(class UObject* ReturnValue);
	class UObject* RemoveAllAssetReferences(bool ReturnValue);
	void RefreshStorage();
	void IsAssetOwnedByCache(class FString* AssetPath, bool ReturnValue);
	void GetNumAssets(int32 ReturnValue);
	class UObject* GetHashForAsset(const class FString& ReturnValue);
	class FString GetCachedAsset(class UObject* ReturnValue);
	void GetAllLoadedAssets(const TArray<class UObject*>& ReturnValue);
	void GetAllCachedAssetPaths(const TArray<class FString>& ReturnValue);
	void GetAllAssetHashes(const TArray<class FString>& ReturnValue);
	class FString CanRemoveAsset(bool ReturnValue);
	class UObject* CacheAsset();
	class UObject* AddAssetReference(bool ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class USDClasses.UsdAssetImportData
class UUsdAssetImportData : public UAssetImportData
{
public:
	class FString                                PrimPath;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               ImportOptions;                                     // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdAssetImportData* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class USDClasses.UsdAnimSequenceAssetImportData
class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData
{
public:
	float                                        LayerStartOffsetSeconds;                           // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B78[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdAnimSequenceAssetImportData* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class USDClasses.UsdMeshAssetImportData
class UUsdMeshAssetImportData : public UUsdAssetImportData
{
public:
	TMap<int32, struct FUsdPrimPathList>         MaterialSlotToPrimPaths;                           // 0x40(0x50)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdMeshAssetImportData* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class USDClasses.UsdProjectSettings
class UUsdProjectSettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                AdditionalPluginDirectories;                       // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          AdditionalMaterialPurposes;                        // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       DefaultAssetCache;                                 // 0x58(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowCreateDefaultAssetCacheDialog;                // 0x78(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowConfirmationWhenClearingLayers;               // 0x79(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowConfirmationWhenMutingDirtyLayers;            // 0x7A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowOverriddenOpinionsWarning;                    // 0x7B(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowWarningOnIncompleteDuplication;               // 0x7C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowTransformTrackOnCameraComponentWarning;       // 0x7D(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenSaving;                    // 0x7E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenClosing;                   // 0x7F(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceMaterial;                   // 0x80(0x20)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentMaterial;        // 0xA0(0x20)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedMaterial;           // 0xC0(0x20)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedMaterial; // 0xE0(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceVTMaterial;                 // 0x100(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentVTMaterial;      // 0x120(0x20)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedVTMaterial;         // 0x140(0x20)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial; // 0x160(0x20)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorMaterial;                     // 0x180(0x20)(Edit, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityMaterial;           // 0x1A0(0x20)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorTwoSidedMaterial;             // 0x1C0(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityTwoSidedMaterial;   // 0x1E0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdProjectSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class USDClasses.UsdReferenceOptions
class UUsdReferenceOptions : public UObject
{
public:
	bool                                         bInternalReference;                                // 0x28(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFilePath                             TargetFile;                                        // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseDefaultPrim;                                   // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                TargetPrimPath;                                    // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimeCodeOffset;                                    // 0x58(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimeCodeScale;                                     // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUsdReferenceOptions* GetDefaultObj();

};

}


