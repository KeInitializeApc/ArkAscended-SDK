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

	struct FUpdateModRequest MakeUpdateModRequest(int64 Class_id, class FString* Name, enum class ECFCoreMakrupType Description_type, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental);
	struct FCFCoreSettings MakeSettingsFromProjectConfig();
	struct FCFCoreSettings MakeSettings(const class FString& Default_language, int64 Game_id, const class FString& Api_key, const class FString& Mods_directory, const class FString& User_data_directory, int32 Max_concurrent_installations);
	struct FCFCoreSearchModsFilter MakeSearchModsFilter(int32 Class_id, int32 Category_id, const class FString& Game_version, const class FString& Search_filter, enum class ECFCoreModsSearchSortField Sort_field, enum class ECFCoreSortOrder Sort_order, enum class ECFCoreModLoaderType Mod_loader_type, int32 Game_version_type_id);
	struct FCFCoreGetCategoriesFilter MakeGetCategoriesFilter(int32 Class_id);
	struct FExternalAuthAdditionalInfo MakeExternalAuthAdditionalInfo(struct FDateTime* EulaAcceptTime);
	struct FCreateModRequest MakeCreateModRequest(int64 Class_id, class FString* Name, enum class ECFCoreMakrupType Description_type, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental);
	struct FCreateModFileRequest MakeCreateModFileRequest(enum class ECFCoreChangelogMarkupType Changelog_type, class FString* Changelog, TArray<int64>* GameVersionIds, enum class ECFCoreFileReleaseType* ReleaseType, struct FModFileCookingOptions* CookingOptions);
	struct FAssureServerModsUpdatedParams MakeAssureServerModsUpdatedParams(const TArray<int64>& DevModIds);
	struct FCFCoreApiRequestPagination MakeApiRequestPagination(int32 Page_size);
	class FString FormatFileSize(int64 Bytes);
	struct FCFCoreFileSize BreakFileSize(int64 Bytes);
};

// 0x68 (0x90 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	class FString                                ApiKey;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4D8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4D9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	bool                                         IsServer;                                          // 0x80(0x1)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4DA[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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

	void UpdateMod(int64* Mod_id, struct FUpdateModRequest* Update_mod_request, class FString* Avatar_image_filename, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void Unitialize(FDelegateProperty_* OnUninitialized, FDelegateProperty_* OnError);
	void UninstallMod(int64* Mod_id, FDelegateProperty_* On_uninstalled, FDelegateProperty_ On_error);
	void SynchronizeWithServer(FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void SendSecurityCode(const class FString& Email, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void Logout(FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void IsAuthenticated(FDelegateProperty_* On_is_auth);
	struct FCFCoreMod InstallMod(FDelegateProperty_* On_progress, FDelegateProperty_* On_installed, FDelegateProperty_ On_error);
	FDelegateProperty_ Initialize(struct FCFCoreSettings* Settings, FDelegateProperty_* OnError);
	void GetModsDirInfo(FDelegateProperty_* OnModsDirInfo, FDelegateProperty_* OnError);
	void GetInstalledMods(FDelegateProperty_* On_installed_mods, FDelegateProperty_ On_error);
	void GetAuthTerms(FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void GenerateAuthTokenByExternalProvider(enum class ECFCoreExternalAuthProvider* Provider, class FString* External_token, struct FExternalAuthAdditionalInfo* Additional_info, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void GenerateAuthToken(const class FString& Email, int32* Security_code, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	FDelegateProperty_ CreateModFile(struct FCreateModFileRequest* CreateModFileRequest, class FString* LocalFilenameToUpload, FDelegateProperty_* OnCreateModFileRequestId, FDelegateProperty_* OnProgress, FDelegateProperty_* OnError);
	void CreateMod(struct FCreateModRequest* Create_mod_request, class FString* Avatar_image_filename, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	FDelegateProperty_ CreateCookedModFile(int64* SourceFileId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, class FString* LocalFilenameToUpload, FDelegateProperty_* OnCreateModFileRequestId, FDelegateProperty_* OnProgress, FDelegateProperty_* OnError);
	void CancelInstallation(int64* Mod_id, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, FDelegateProperty_* OnProgress, FDelegateProperty_* OnUpdated, FDelegateProperty_* OnError);
	void AssureClientModsUpdated(TArray<int64>* ServerFileIds, FDelegateProperty_* OnProgress, FDelegateProperty_* OnUpdated, FDelegateProperty_* OnError);
	int64 ApiUpdateRating(enum class ECFCoreRatingVoteDirection* Direction, FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void ApiUnblockMods(struct FUnblockModsRequest* Request, FDelegateProperty_* OnResult, FDelegateProperty_* OnError);
	struct FCFCoreApiRequestPagination ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	int64 ApiReportMod(int64* ReasonId, class FString* Report, FDelegateProperty_* On_reasons, FDelegateProperty_ On_error);
	int64 ApiRemoveRating(FDelegateProperty_* On_success, FDelegateProperty_ On_error);
	void ApiGetVersionTypes(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetVersions(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetReportingReasons(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetMyRatings(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetMyMods(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	TArray<int64> ApiGetMods(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	int64 ApiGetModDescription(FDelegateProperty_* On_mod_desc, FDelegateProperty_ On_error);
	int64 ApiGetMod(FDelegateProperty_* On_mod, FDelegateProperty_ On_error);
	void ApiGetMe(FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetGame(FDelegateProperty_* On_game, FDelegateProperty_ On_error);
	void ApiGetFiles(TArray<int64>* FileIds, FDelegateProperty_* OnResults, FDelegateProperty_* OnError);
	void ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter, FDelegateProperty_* On_results, FDelegateProperty_ On_error);
	void ApiGetBlockedModsDetails(FDelegateProperty_* On_result, FDelegateProperty_ On_error);
	void ApiGetActiveCookingVersion(FDelegateProperty_* OnVersion, FDelegateProperty_* OnError);
	void ApiGenerateTempToken(FDelegateProperty_* On_result, FDelegateProperty_ On_error);
};

}


