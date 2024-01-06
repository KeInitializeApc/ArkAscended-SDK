#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class cfcore.CFCoreBPLibrary
class UCFCoreBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreBPLibrary* GetDefaultObj();

	void MakeUpdateModRequest(int64* Class_id, class FString* Name, const class FString& Summary, enum class ECFCoreMakrupType* Description_type, const class FString& Description, int64* Primary_category_id, TArray<int64>* Game_category_ids, bool* Is_experimental, struct FUpdateModRequest* ReturnValue);
	void MakeSettingsFromProjectConfig(struct FCFCoreSettings* ReturnValue);
	void MakeSettings(class FString* Default_language, int64* Game_id, class FString* Api_key, class FString* Mods_directory, class FString* User_data_directory, int32* Max_concurrent_installations, struct FCFCoreSettings* ReturnValue);
	void MakeSearchModsFilter(int32* Class_id, int32* Category_id, class FString* Game_version, class FString* Search_filter, enum class ECFCoreModsSearchSortField* Sort_field, enum class ECFCoreSortOrder* Sort_order, enum class ECFCoreModLoaderType* Mod_loader_type, int32* Game_version_type_id, struct FCFCoreSearchModsFilter* ReturnValue);
	void MakeGetCategoriesFilter(int32* Class_id, struct FCFCoreGetCategoriesFilter* ReturnValue);
	struct FDateTime MakeExternalAuthAdditionalInfo(struct FExternalAuthAdditionalInfo* ReturnValue);
	void MakeCreateModRequest(int64* Class_id, class FString* Name, const class FString& Summary, enum class ECFCoreMakrupType* Description_type, const class FString& Description, int64* Primary_category_id, TArray<int64>* Game_category_ids, bool* Is_experimental, struct FCreateModRequest* ReturnValue);
	struct FModFileCookingOptions MakeCreateModFileRequest(enum class ECFCoreChangelogMarkupType* Changelog_type, struct FCreateModFileRequest* ReturnValue);
	TArray<int64> MakeAssureServerModsUpdatedParams(TArray<int64>* ModIds, struct FAssureServerModsUpdatedParams* ReturnValue);
	int32 MakeApiRequestPagination(int32* Page_size, struct FCFCoreApiRequestPagination* ReturnValue);
	int64 FormatFileSize(class FString* ReturnValue);
	int64 BreakFileSize(struct FCFCoreFileSize* ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class FString                                ApiKey;                                            // 0x40(0x10)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_424[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_425[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	bool                                         IsServer;                                          // 0x80(0x1)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_427[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreEditorSettings* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class cfcore.CFCoreSubsystem
class UCFCoreSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass();
	static class UCFCoreSubsystem* GetDefaultObj();

	FDelegateProperty_ UpdateMod(FDelegateProperty_* On_error);
	FDelegateProperty_ Unitialize();
	FDelegateProperty_ UninstallMod(FDelegateProperty_* On_error);
	FDelegateProperty_ SynchronizeWithServer(FDelegateProperty_* On_error);
	FDelegateProperty_ SendSecurityCode(FDelegateProperty_* On_error);
	FDelegateProperty_ Logout(FDelegateProperty_* On_error);
	FDelegateProperty_ IsAuthenticated();
	FDelegateProperty_ InstallMod(const struct FCFCoreMod& Mod, FDelegateProperty_* On_error);
	FDelegateProperty_ Initialize();
	FDelegateProperty_ GetModsDirInfo();
	FDelegateProperty_ GetInstalledMods(FDelegateProperty_* On_error);
	FDelegateProperty_ GetAuthTerms(FDelegateProperty_* On_error);
	FDelegateProperty_ GenerateAuthTokenByExternalProvider(FDelegateProperty_* On_error);
	FDelegateProperty_ GenerateAuthToken(FDelegateProperty_* On_error);
	FDelegateProperty_ CreateModFile(int64 ModId, struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CreateMod(FDelegateProperty_* On_error);
	FDelegateProperty_ CreateCookedModFile(int64 ModId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CancelInstallation(FDelegateProperty_* On_error);
	FDelegateProperty_ AssureServerModsUpdated();
	FDelegateProperty_ AssureClientModsUpdated();
	FDelegateProperty_ ApiUpdateRating(int64 ModId, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiUnblockMods();
	FDelegateProperty_ ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiReportMod(int64 ModId, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiRemoveRating(int64 ModId, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetVersionTypes(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetVersions(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetReportingReasons(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetMyRatings(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetMyMods(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetMods(TArray<int64>* ModIds, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetModDescription(int64 ModId, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetMod(int64 ModId, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetMe(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetGame(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetFiles();
	FDelegateProperty_ ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter, FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetBlockedModsDetails(FDelegateProperty_* On_error);
	FDelegateProperty_ ApiGetActiveCookingVersion();
	FDelegateProperty_ ApiGenerateTempToken(FDelegateProperty_* On_error);
};

}


