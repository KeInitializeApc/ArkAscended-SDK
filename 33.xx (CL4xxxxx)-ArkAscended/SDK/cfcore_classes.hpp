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

	bool MakeUpdateModRequest(class FString* Name, const class FString& Summary, const class FString& Description, const struct FUpdateModRequest& ReturnValue);
	void MakeSettingsFromProjectConfig(const struct FCFCoreSettings& ReturnValue);
	int32 MakeSettings(const struct FCFCoreSettings& ReturnValue);
	int32 MakeSearchModsFilter(const struct FCFCoreSearchModsFilter& ReturnValue);
	int32 MakeGetCategoriesFilter(const struct FCFCoreGetCategoriesFilter& ReturnValue);
	struct FDateTime MakeExternalAuthAdditionalInfo(const struct FExternalAuthAdditionalInfo& ReturnValue);
	bool MakeCreateModRequest(class FString* Name, const class FString& Summary, const class FString& Description, const struct FCreateModRequest& ReturnValue);
	struct FModFileCookingOptions MakeCreateModFileRequest(const struct FCreateModFileRequest& ReturnValue);
	TArray<int64> MakeAssureServerModsUpdatedParams(TArray<int64>* ModIds, const struct FAssureServerModsUpdatedParams& ReturnValue);
	int32 MakeApiRequestPagination(const struct FCFCoreApiRequestPagination& ReturnValue);
	int64 FormatFileSize(const class FString& ReturnValue);
	int64 BreakFileSize(const struct FCFCoreFileSize& ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                ApiKey;                                            // 0x40(0x10)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         IsServer;                                          // 0x80(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AC[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
	FDelegateProperty_ CreateModFile(int64 ModId, struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CreateMod();
	FDelegateProperty_ CreateCookedModFile(int64 ModId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_ OnSuccess);
	FDelegateProperty_ CancelInstallation();
	FDelegateProperty_ AssureServerModsUpdated();
	FDelegateProperty_ AssureClientModsUpdated();
	FDelegateProperty_ ApiUpdateRating(int64 ModId);
	FDelegateProperty_ ApiUnblockMods();
	FDelegateProperty_ ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination);
	FDelegateProperty_ ApiReportMod(int64 ModId);
	FDelegateProperty_ ApiRemoveRating(int64 ModId);
	FDelegateProperty_ ApiGetVersionTypes();
	FDelegateProperty_ ApiGetVersions();
	FDelegateProperty_ ApiGetReportingReasons();
	FDelegateProperty_ ApiGetMyRatings();
	FDelegateProperty_ ApiGetMyMods();
	FDelegateProperty_ ApiGetMods(TArray<int64>* ModIds);
	FDelegateProperty_ ApiGetModDescription(int64 ModId);
	FDelegateProperty_ ApiGetMod(int64 ModId);
	FDelegateProperty_ ApiGetMe();
	FDelegateProperty_ ApiGetGame();
	FDelegateProperty_ ApiGetFiles();
	FDelegateProperty_ ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter);
	FDelegateProperty_ ApiGetBlockedModsDetails();
	FDelegateProperty_ ApiGetActiveCookingVersion();
	FDelegateProperty_ ApiGenerateTempToken();
};

}


