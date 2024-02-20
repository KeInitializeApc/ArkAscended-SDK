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

	bool MakeUpdateModRequest(class FString* Name, const struct FUpdateModRequest& ReturnValue);
	void MakeSettingsFromProjectConfig(const struct FCFCoreSettings& ReturnValue);
	int32 MakeSettings(const struct FCFCoreSettings& ReturnValue);
	int32 MakeSearchModsFilter(const struct FCFCoreSearchModsFilter& ReturnValue);
	int32 MakeGetCategoriesFilter(const struct FCFCoreGetCategoriesFilter& ReturnValue);
	struct FDateTime MakeExternalAuthAdditionalInfo(const struct FExternalAuthAdditionalInfo& ReturnValue);
	bool MakeCreateModRequest(class FString* Name, const struct FCreateModRequest& ReturnValue);
	struct FModFileCookingOptions MakeCreateModFileRequest(enum class ECFCoreFileReleaseType ReleaseType, const struct FCreateModFileRequest& ReturnValue);
	TArray<int64> MakeAssureServerModsUpdatedParams(const struct FAssureServerModsUpdatedParams& ReturnValue);
	int32 MakeApiRequestPagination(int32* Index, const struct FCFCoreApiRequestPagination& ReturnValue);
	void FormatFileSize(int64 Bytes, const class FString& ReturnValue);
	void BreakFileSize(int64 Bytes, const struct FCFCoreFileSize& ReturnValue);
};

// 0x88 (0xB0 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                ApiKey;                                            // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_370[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_373[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         IsServer;                                          // 0x80(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_374[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettingsPremiumMods            PremiumMods;                                       // 0x90(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettingsLogger                 Logger;                                            // 0xA0(0xC)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_377[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreEditorSettings* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class cfcore.CFCoreSubsystem
class UCFCoreSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnAuthenticatedEvent;                              // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreSubsystem* GetDefaultObj();

	FDelegateProperty_ UpdateMod();
	FDelegateProperty_ Unitialize();
	FDelegateProperty_ UninstallMod();
	FDelegateProperty_ SynchronizeWithServer();
	FDelegateProperty_ SendSecurityCode(const class FString& Email);
	FDelegateProperty_ PremiumModsCheck(FDelegateProperty_* OnSuccess);
	FDelegateProperty_ OverridePublicKey(FDelegateProperty_* OnSuccess);
	FDelegateProperty_ Logout();
	FDelegateProperty_ IsAuthenticated();
	FDelegateProperty_ InstallModExtended();
	FDelegateProperty_ InstallMod();
	FDelegateProperty_ Initialize(const struct FCFCoreSettings& Settings, FDelegateProperty_ OnInitialized);
	FDelegateProperty_ GetMyPremiumMods(FDelegateProperty_* OnSuccess);
	FDelegateProperty_ GetModsDirInfo();
	FDelegateProperty_ GetInstalledMods();
	FDelegateProperty_ GetAuthTerms();
	FDelegateProperty_ GenerateAuthTokenByExternalProvider();
	FDelegateProperty_ GenerateAuthToken(const class FString& Email);
	FDelegateProperty_ CreateModFile(struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_* OnSuccess);
	FDelegateProperty_ CreateMod();
	FDelegateProperty_ CreateCookedModFile(struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_* OnSuccess);
	FDelegateProperty_ CancelInstallation();
	FDelegateProperty_ AssureServerModsUpdated();
	FDelegateProperty_ AssureClientModsUpdated();
	FDelegateProperty_ ApiUpdateRating();
	FDelegateProperty_ ApiUnblockMods();
	FDelegateProperty_ ApiSearchMods();
	FDelegateProperty_ ApiReportMod();
	FDelegateProperty_ ApiRemoveRating();
	FDelegateProperty_ ApiMatchPlatformFiles();
	FDelegateProperty_ ApiGetVersionTypes();
	FDelegateProperty_ ApiGetVersions();
	FDelegateProperty_ ApiGetReportingReasons();
	FDelegateProperty_ ApiGetMyRatings();
	FDelegateProperty_ ApiGetMyMods();
	FDelegateProperty_ ApiGetMods();
	FDelegateProperty_ ApiGetModDescription();
	FDelegateProperty_ ApiGetMod();
	FDelegateProperty_ ApiGetMe();
	FDelegateProperty_ ApiGetGame();
	FDelegateProperty_ ApiGetFiles();
	FDelegateProperty_ ApiGetCategories();
	FDelegateProperty_ ApiGetBlockedModsDetails();
	FDelegateProperty_ ApiGetActiveCookingVersion();
	FDelegateProperty_ ApiGenerateTempToken();
	FDelegateProperty_ ApiGeneratePremiumCheckoutUrl(FDelegateProperty_* OnSuccess);
};

}


