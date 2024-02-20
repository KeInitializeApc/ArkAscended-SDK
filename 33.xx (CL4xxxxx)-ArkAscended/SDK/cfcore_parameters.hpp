#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
struct UCFCoreBPLibrary_MakeUpdateModRequest_Params
{
public:
	int64                                        Class_id;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	class FString                                Summary;                                           // 0x18(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ECFCoreMakrupType                 Description_type;                                  // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Description;                                       // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	int64                                        Primary_category_id;                               // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<int64>                                Game_category_ids;                                 // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         Is_experimental;                                   // 0x58(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ED[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FUpdateModRequest                     ReturnValue;                                       // 0x60(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
struct UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params
{
public:
	struct FCFCoreSettings                       ReturnValue;                                       // 0x0(0x88)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSettings
struct UCFCoreBPLibrary_MakeSettings_Params
{
public:
	class FString                                Default_language;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int64                                        Game_id;                                           // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Api_key;                                           // 0x18(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Mods_directory;                                    // 0x28(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                User_data_directory;                               // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        Max_concurrent_installations;                      // 0x48(0x4)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSettings                       ReturnValue;                                       // 0x50(0x88)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
struct UCFCoreBPLibrary_MakeSearchModsFilter_Params
{
public:
	int32                                        Class_id;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        Category_id;                                       // 0x4(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Game_version;                                      // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Search_filter;                                     // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        Sort_field;                                        // 0x28(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ECFCoreSortOrder                  Sort_order;                                        // 0x29(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ECFCoreModLoaderType              Mod_loader_type;                                   // 0x2A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_315[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Game_version_type_id;                              // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreSearchModsFilter               ReturnValue;                                       // 0x30(0x30)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
struct UCFCoreBPLibrary_MakeGetCategoriesFilter_Params
{
public:
	int32                                        Class_id;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreGetCategoriesFilter            ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
struct UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params
{
public:
	struct FDateTime                             EulaAcceptTime;                                    // 0x0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FExternalAuthAdditionalInfo           ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
struct UCFCoreBPLibrary_MakeCreateModRequest_Params
{
public:
	int64                                        Class_id;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	class FString                                Summary;                                           // 0x18(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ECFCoreMakrupType                 Description_type;                                  // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Description;                                       // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	int64                                        Primary_category_id;                               // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<int64>                                Game_category_ids;                                 // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         Is_experimental;                                   // 0x58(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_32F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCreateModRequest                     ReturnValue;                                       // 0x60(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
struct UCFCoreBPLibrary_MakeCreateModFileRequest_Params
{
public:
	enum class ECFCoreChangelogMarkupType        Changelog_type;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_33D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Changelog;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Filename;                                          // 0x18(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                DisplayName;                                       // 0x28(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
	TArray<int64>                                GameVersionIds;                                    // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECFCoreFileReleaseType            ReleaseType;                                       // 0x48(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FModFileCookingOptions                CookingOptions;                                    // 0x49(0x2)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33E[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCreateModFileRequest                 ReturnValue;                                       // 0x50(0x58)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
struct UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<int64>                                DevModIds;                                         // 0x10(0x10)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FAssureServerModsUpdatedParams        ReturnValue;                                       // 0x20(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
struct UCFCoreBPLibrary_MakeApiRequestPagination_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Page_size;                                         // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiRequestPagination           ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function cfcore.CFCoreBPLibrary.FormatFileSize
struct UCFCoreBPLibrary_FormatFileSize_Params
{
public:
	int64                                        Bytes;                                             // 0x0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function cfcore.CFCoreBPLibrary.BreakFileSize
struct UCFCoreBPLibrary_BreakFileSize_Params
{
public:
	int64                                        Bytes;                                             // 0x0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	struct FCFCoreFileSize                       ReturnValue;                                       // 0x8(0xC)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_360[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0x98 - 0x0)
// Function cfcore.CFCoreSubsystem.UpdateMod
struct UCFCoreSubsystem_UpdateMod_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FUpdateModRequest                     Update_mod_request;                                // 0x8(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Avatar_image_filename;                             // 0x68(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.Unitialize
struct UCFCoreSubsystem_Unitialize_Params
{
public:
	FDelegateProperty_                           OnUninitialized;                                   // 0x0(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.UninstallMod
struct UCFCoreSubsystem_UninstallMod_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_uninstalled;                                    // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.SynchronizeWithServer
struct UCFCoreSubsystem_SynchronizeWithServer_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.SendSecurityCode
struct UCFCoreSubsystem_SendSecurityCode_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.PremiumModsCheck
struct UCFCoreSubsystem_PremiumModsCheck_Params
{
public:
	TArray<int64>                                InModIds;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSuccess;                                         // 0x10(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.OverridePublicKey
struct UCFCoreSubsystem_OverridePublicKey_Params
{
public:
	class FString                                InPublicKeyPem;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSuccess;                                         // 0x10(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.Logout
struct UCFCoreSubsystem_Logout_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore.CFCoreSubsystem.IsAuthenticated
struct UCFCoreSubsystem_IsAuthenticated_Params
{
public:
	FDelegateProperty_                           On_is_auth;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x318 (0x318 - 0x0)
// Function cfcore.CFCoreSubsystem.InstallModExtended
struct UCFCoreSubsystem_InstallModExtended_Params
{
public:
	struct FCFCoreMod                            InMod;                                             // 0x0(0x1A0)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FFile                                 InFile;                                            // 0x1A0(0xF8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FInstallModAdditionalParams           InAdditionalParams;                                // 0x298(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnProgress;                                        // 0x2E8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnInstalled;                                       // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x308(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x1D0 (0x1D0 - 0x0)
// Function cfcore.CFCoreSubsystem.InstallMod
struct UCFCoreSubsystem_InstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x1A0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_progress;                                       // 0x1A0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_installed;                                      // 0x1B0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function cfcore.CFCoreSubsystem.Initialize
struct UCFCoreSubsystem_Initialize_Params
{
public:
	struct FCFCoreSettings                       Settings;                                          // 0x0(0x88)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           OnInitialized;                                     // 0x88(0x10)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst)
	FDelegateProperty_                           OnError;                                           // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetMyPremiumMods
struct UCFCoreSubsystem_GetMyPremiumMods_Params
{
public:
	FDelegateProperty_                           OnSuccess;                                         // 0x0(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetModsDirInfo
struct UCFCoreSubsystem_GetModsDirInfo_Params
{
public:
	FDelegateProperty_                           OnModsDirInfo;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetInstalledMods
struct UCFCoreSubsystem_GetInstalledMods_Params
{
public:
	FDelegateProperty_                           On_installed_mods;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetAuthTerms
struct UCFCoreSubsystem_GetAuthTerms_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
struct UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params
{
public:
	enum class ECFCoreExternalAuthProvider       Provider;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_44B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                External_token;                                    // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FExternalAuthAdditionalInfo           Additional_info;                                   // 0x18(0x18)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function cfcore.CFCoreSubsystem.GenerateAuthToken
struct UCFCoreSubsystem_GenerateAuthToken_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Security_code;                                     // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x24(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_45F[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateModFile
struct UCFCoreSubsystem_CreateModFile_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FCreateModFileRequest                 CreateModFileRequest;                              // 0x8(0x58)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient)
	class FString                                LocalFilenameToUpload;                             // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnCreateModFileRequestId;                          // 0x70(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnProgress;                                        // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSuccess;                                         // 0x90(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateMod
struct UCFCoreSubsystem_CreateMod_Params
{
public:
	struct FCreateModRequest                     Create_mod_request;                                // 0x0(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Avatar_image_filename;                             // 0x60(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateCookedModFile
struct UCFCoreSubsystem_CreateCookedModFile_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int64                                        SourceFileId;                                      // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FCreateCookedModFileRequest           CreateCookedModFileRequest;                        // 0x10(0x10)(Edit, ExportObject, Parm, OutParm, Transient)
	class FString                                LocalFilenameToUpload;                             // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnCreateModFileRequestId;                          // 0x30(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnProgress;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSuccess;                                         // 0x50(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.CancelInstallation
struct UCFCoreSubsystem_CancelInstallation_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
struct UCFCoreSubsystem_AssureServerModsUpdated_Params
{
public:
	struct FAssureServerModsUpdatedParams        Params;                                            // 0x0(0x20)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           OnProgress;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdated;                                         // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
struct UCFCoreSubsystem_AssureClientModsUpdated_Params
{
public:
	TArray<int64>                                ServerFileIds;                                     // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnProgress;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdated;                                         // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiUpdateRating
struct UCFCoreSubsystem_ApiUpdateRating_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class ECFCoreRatingVoteDirection        Direction;                                         // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4D4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           On_success;                                        // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x1C(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4D6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiUnblockMods
struct UCFCoreSubsystem_ApiUnblockMods_Params
{
public:
	struct FUnblockModsRequest                   Request;                                           // 0x0(0x40)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnResult;                                          // 0x40(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiSearchMods
struct UCFCoreSubsystem_ApiSearchMods_Params
{
public:
	struct FCFCoreSearchModsFilter               Filter;                                            // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	struct FCFCoreApiRequestPagination           Pagination;                                        // 0x30(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_results;                                        // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiReportMod
struct UCFCoreSubsystem_ApiReportMod_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int64                                        ReasonId;                                          // 0x8(0x8)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                Report;                                            // 0x10(0x10)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_reasons;                                        // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiRemoveRating
struct UCFCoreSubsystem_ApiRemoveRating_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_success;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiMatchPlatformFiles
struct UCFCoreSubsystem_ApiMatchPlatformFiles_Params
{
public:
	struct FMatchPlatformFilesFilter             Filter;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	FDelegateProperty_                           OnResults;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
struct UCFCoreSubsystem_ApiGetVersionTypes_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetVersions
struct UCFCoreSubsystem_ApiGetVersions_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
struct UCFCoreSubsystem_ApiGetReportingReasons_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMyRatings
struct UCFCoreSubsystem_ApiGetMyRatings_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMyMods
struct UCFCoreSubsystem_ApiGetMyMods_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMods
struct UCFCoreSubsystem_ApiGetMods_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_results;                                        // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetModDescription
struct UCFCoreSubsystem_ApiGetModDescription_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_mod_desc;                                       // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMod
struct UCFCoreSubsystem_ApiGetMod_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           On_mod;                                            // 0x8(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMe
struct UCFCoreSubsystem_ApiGetMe_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetGame
struct UCFCoreSubsystem_ApiGetGame_Params
{
public:
	FDelegateProperty_                           On_game;                                           // 0x0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetFiles
struct UCFCoreSubsystem_ApiGetFiles_Params
{
public:
	TArray<int64>                                FileIds;                                           // 0x0(0x10)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnResults;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetCategories
struct UCFCoreSubsystem_ApiGetCategories_Params
{
public:
	struct FCFCoreGetCategoriesFilter            Filter;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	FDelegateProperty_                           On_results;                                        // 0x4(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x14(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
struct UCFCoreSubsystem_ApiGetBlockedModsDetails_Params
{
public:
	FDelegateProperty_                           On_result;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
struct UCFCoreSubsystem_ApiGetActiveCookingVersion_Params
{
public:
	FDelegateProperty_                           OnVersion;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
struct UCFCoreSubsystem_ApiGenerateTempToken_Params
{
public:
	FDelegateProperty_                           On_result;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGeneratePremiumCheckoutUrl
struct UCFCoreSubsystem_ApiGeneratePremiumCheckoutUrl_Params
{
public:
	struct FGenPremiumCheckoutUrlRequest         Request;                                           // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSuccess;                                         // 0x10(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

}
}


