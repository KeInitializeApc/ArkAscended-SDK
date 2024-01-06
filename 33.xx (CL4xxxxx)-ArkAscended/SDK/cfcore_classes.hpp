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

	class FString MakeUpdateModRequest(class FString* Name, const class FString& Summary, enum class ECFCoreMakrupType* Description_type, int64* Primary_category_id, TArray<int64>* Game_category_ids, bool* Is_experimental, struct FUpdateModRequest* ReturnValue);
	void MakeSettingsFromProjectConfig(struct FCFCoreSettings* ReturnValue);
	int32 MakeSettings(struct FCFCoreSettings* ReturnValue);
	int32 MakeSearchModsFilter(struct FCFCoreSearchModsFilter* ReturnValue);
	int32 MakeGetCategoriesFilter(struct FCFCoreGetCategoriesFilter* ReturnValue);
	struct FDateTime MakeExternalAuthAdditionalInfo(struct FExternalAuthAdditionalInfo* ReturnValue);
	class FString MakeCreateModRequest(class FString* Name, const class FString& Summary, enum class ECFCoreMakrupType* Description_type, int64* Primary_category_id, TArray<int64>* Game_category_ids, bool* Is_experimental, struct FCreateModRequest* ReturnValue);
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
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	class FString                                ApiKey;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_337[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_339[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	bool                                         IsServer;                                          // 0x80(0x1)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33A[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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

	FDelegateProperty_ UpdateMod();
	FDelegateProperty_ Unitialize();
	FDelegateProperty_ UninstallMod();
	FDelegateProperty_ SynchronizeWithServer();
	FDelegateProperty_ SendSecurityCode();
	FDelegateProperty_ Logout();
	FDelegateProperty_ IsAuthenticated();
	FDelegateProperty_ InstallMod(const struct FCFCoreMod& Mod);
	FDelegateProperty_ Initialize();
	FDelegateProperty_ GetModsDirInfo();
	FDelegateProperty_ GetInstalledMods();
	FDelegateProperty_ GetAuthTerms();
	FDelegateProperty_ GenerateAuthTokenByExternalProvider();
	FDelegateProperty_ GenerateAuthToken();
	FDelegateProperty_ CreateModFile(int64* ModId, struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CreateMod();
	FDelegateProperty_ CreateCookedModFile(int64* ModId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CancelInstallation();
	FDelegateProperty_ AssureServerModsUpdated();
	FDelegateProperty_ AssureClientModsUpdated();
	FDelegateProperty_ ApiUpdateRating(int64* ModId);
	FDelegateProperty_ ApiUnblockMods();
	FDelegateProperty_ ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination);
	FDelegateProperty_ ApiReportMod(int64* ModId);
	FDelegateProperty_ ApiRemoveRating(int64* ModId);
	FDelegateProperty_ ApiGetVersionTypes();
	FDelegateProperty_ ApiGetVersions();
	FDelegateProperty_ ApiGetReportingReasons();
	FDelegateProperty_ ApiGetMyRatings();
	FDelegateProperty_ ApiGetMyMods();
	FDelegateProperty_ ApiGetMods(TArray<int64>* ModIds);
	FDelegateProperty_ ApiGetModDescription(int64* ModId);
	FDelegateProperty_ ApiGetMod(int64* ModId);
	FDelegateProperty_ ApiGetMe();
	FDelegateProperty_ ApiGetGame();
	FDelegateProperty_ ApiGetFiles();
	FDelegateProperty_ ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter);
	FDelegateProperty_ ApiGetBlockedModsDetails();
	FDelegateProperty_ ApiGetActiveCookingVersion();
	FDelegateProperty_ ApiGenerateTempToken();
};

}


