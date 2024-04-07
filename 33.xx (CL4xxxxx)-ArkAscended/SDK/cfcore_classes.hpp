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

	struct FUpdateModRequest MakeUpdateModRequest(class FString* Name, class FString* Description);
	struct FCFCoreSettings MakeSettingsFromProjectConfig();
	struct FCFCoreSettings MakeSettings();
	struct FCFCoreSearchModsFilter MakeSearchModsFilter();
	struct FCFCoreGetCategoriesFilter MakeGetCategoriesFilter();
	struct FExternalAuthAdditionalInfo MakeExternalAuthAdditionalInfo(struct FDateTime* EulaAcceptTime);
	struct FCreateModRequest MakeCreateModRequest(class FString* Name, class FString* Description);
	struct FCreateModFileRequest MakeCreateModFileRequest(class FString* Changelog, TArray<int64>* GameVersionIds, enum class ECFCoreFileReleaseType ReleaseType, struct FModFileCookingOptions* CookingOptions);
	struct FAssureServerModsUpdatedParams MakeAssureServerModsUpdatedParams(const TArray<int64>& DevModIds);
	struct FCFCoreApiRequestPagination MakeApiRequestPagination();
	class FString FormatFileSize();
	struct FCFCoreFileSize BreakFileSize();
};

// 0x88 (0xB0 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        GameId;                                            // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	class FString                                ApiKey;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_418[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ModsDirectory;                                     // 0x58(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_419[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	bool                                         IsServer;                                          // 0x80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_41B[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettingsPremiumMods            PremiumMods;                                       // 0x90(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettingsLogger                 Logger;                                            // 0xA0(0xC)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_41C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreEditorSettings* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class cfcore.CFCoreSubsystem
class UCFCoreSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnAuthenticatedEvent;                              // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreSubsystem* GetDefaultObj();

	FDelegateProperty_ UpdateMod();
	FDelegateProperty_ Unitialize();
	FDelegateProperty_ UninstallMod();
	FDelegateProperty_ SynchronizeWithServer();
	FDelegateProperty_ SendSecurityCode();
	FDelegateProperty_ PremiumModsCheck();
	FDelegateProperty_ OverridePublicKey();
	FDelegateProperty_ Logout();
	FDelegateProperty_ IsAuthenticated();
	FDelegateProperty_ InstallModExtended();
	FDelegateProperty_ InstallMod();
	FDelegateProperty_ Initialize(struct FCFCoreSettings* Settings);
	FDelegateProperty_ GetMyPremiumMods();
	FDelegateProperty_ GetModsDirInfo();
	FDelegateProperty_ GetInstalledMods();
	FDelegateProperty_ GetAuthTerms();
	FDelegateProperty_ GenerateAuthTokenByExternalProvider(enum class ECFCoreExternalAuthProvider* Provider);
	FDelegateProperty_ GenerateAuthToken();
	FDelegateProperty_ CreateModFile(int64 ModId, const struct FCreateModFileRequest& CreateModFileRequest);
	FDelegateProperty_ CreateMod();
	FDelegateProperty_ CreateCookedModFile(int64 ModId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest);
	FDelegateProperty_ CancelInstallation();
	FDelegateProperty_ AssureServerModsUpdated();
	FDelegateProperty_ AssureClientModsUpdated();
	FDelegateProperty_ ApiUpdateRating(int64 ModId);
	FDelegateProperty_ ApiUnblockMods();
	FDelegateProperty_ ApiSearchMods();
	FDelegateProperty_ ApiReportMod(int64 ModId);
	FDelegateProperty_ ApiRemoveRating(int64 ModId);
	FDelegateProperty_ ApiMatchPlatformFiles();
	FDelegateProperty_ ApiGetVersionTypes();
	FDelegateProperty_ ApiGetVersions();
	FDelegateProperty_ ApiGetReportingReasons();
	FDelegateProperty_ ApiGetMyRatings();
	FDelegateProperty_ ApiGetMyMods();
	FDelegateProperty_ ApiGetMods();
	FDelegateProperty_ ApiGetModDescription(int64 ModId);
	FDelegateProperty_ ApiGetMod(int64 ModId);
	FDelegateProperty_ ApiGetMe();
	FDelegateProperty_ ApiGetGame();
	FDelegateProperty_ ApiGetFiles(TArray<int64>* FileIds);
	FDelegateProperty_ ApiGetCategories();
	FDelegateProperty_ ApiGetBlockedModsDetails();
	FDelegateProperty_ ApiGetActiveCookingVersion();
	FDelegateProperty_ ApiGenerateTempToken();
	FDelegateProperty_ ApiGeneratePremiumCheckoutUrl();
};

}


