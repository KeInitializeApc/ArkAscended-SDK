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

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.BindButtonSystem.SetViewState
struct UBindButtonSystem_SetViewState_Params
{
public:
	enum class EViewState                        NewState;                                          // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.BindButtonSystem.ControllerAction
struct UBindButtonSystem_ControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne
struct UCFCoreMathHelperFunctionLibrary_Int64_SubOne_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne
struct UCFCoreMathHelperFunctionLibrary_Int64_AddOne_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne
struct UCFCoreMathHelperFunctionLibrary_Int32_SubOne_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne
struct UCFCoreMathHelperFunctionLibrary_Int32_AddOne_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap
struct UCFCoreRichTextBlockImageDecorator_SetImageToMap_Params
{
public:
	class UTexture2DDynamic*                     Image;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class FString                                ImageUrl;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function cfcore_ui.CFCoreThemeSettings.CommitThemeData
struct UCFCoreThemeSettings_CommitThemeData_Params
{
public:
	class UDataTable*                            ThemeDataTable;                                    // 0x0(0x8)(BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                ThemeName;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FCFCoreThemeRowData                   Data;                                              // 0x18(0x100)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress
struct ICFCoreUIBaseModel_OnEventReceived_LibraryProgress_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLibraryProgress                      Progress;                                          // 0x8(0x40)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20C3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed
struct ICFCoreUIBaseModel_OnEventReceived_Installed_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstalledMod>                 InModsList;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20C6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived
struct ICFCoreUIBaseModel_OnEventReceived_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCFCoreMod>                    InModsList;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20C9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted
struct ICFCoreUIBaseView_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20CD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x188 (0x188 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UpdateMod
struct UCFCoreUISubsystem_UpdateMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents
struct UCFCoreUISubsystem_UnsubscribeViewFromEvents_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent
struct UCFCoreUISubsystem_UnsubscribeViewFromEvent_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	enum class EGameModsEvent                    Evt;                                               // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20D0[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass
struct UCFCoreUISubsystem_UnregisterModelClass_Params
{
public:
	class UClass*                                ModelClass;                                        // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20D5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x188 (0x188 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UninstallMod
struct UCFCoreUISubsystem_UninstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents
struct UCFCoreUISubsystem_SubscribeViewToEvents_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         InitializeView;                                    // 0x18(0x1)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20E9[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent
struct UCFCoreUISubsystem_SubscribeViewToEvent_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	enum class EGameModsEvent                    Evt;                                               // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         InitializeView;                                    // 0x9(0x1)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20EB[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8D8 (0x8D8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SetMod
struct UCFCoreUISubsystem_SetMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FInstalledMod                         InInstalledMod;                                    // 0x188(0x3A8)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FInstalledMod                         OutInstalledMod;                                   // 0x530(0x3A8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SearchMods
struct UCFCoreUISubsystem_SearchMods_Params
{
public:
	struct FCFCoreSearchModsFilter               Filter;                                            // 0x0(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
	struct FCFCoreApiRequestPagination           Pagination;                                        // 0x30(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterPurchaseModsDelegate
struct UCFCoreUISubsystem_RegisterPurchaseModsDelegate_Params
{
public:
	FDelegateProperty_                           PurchaseModsDelegate;                              // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterPurchaseModDelegate
struct UCFCoreUISubsystem_RegisterPurchaseModDelegate_Params
{
public:
	FDelegateProperty_                           PurchaseModDelegate;                               // 0x0(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass
struct UCFCoreUISubsystem_RegisterModelClass_Params
{
public:
	class UClass*                                ModelClass;                                        // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_20F7[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate
struct UCFCoreUISubsystem_RegisterErrorDelegate_Params
{
public:
	FDelegateProperty_                           ErrorDelegate;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.PurchaseMods
struct UCFCoreUISubsystem_PurchaseMods_Params
{
public:
	TArray<int64>                                ModsId;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.PurchaseMod
struct UCFCoreUISubsystem_PurchaseMod_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x3A8 (0x3A8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnUninstall
struct UCFCoreUISubsystem_OnUninstall_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3A8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError
struct UCFCoreUISubsystem_OnSearchModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x20 (0x20 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnSearchMods
struct UCFCoreUISubsystem_OnSearchMods_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x10(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnMyModsError
struct UCFCoreUISubsystem_OnMyModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnMyMods
struct UCFCoreUISubsystem_OnMyMods_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError
struct UCFCoreUISubsystem_OnModUninstallError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x1C0 (0x1C0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnModInstallError
struct UCFCoreUISubsystem_OnModInstallError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
	struct FCFCoreMod                            InstallingMod;                                     // 0x38(0x188)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress
struct UCFCoreUISubsystem_OnInstallProgress_Params
{
public:
	struct FLibraryProgress                      Progress;                                          // 0x0(0x40)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds
struct UCFCoreUISubsystem_OnGetModsByIds_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError
struct UCFCoreUISubsystem_OnGetInstalledModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods
struct UCFCoreUISubsystem_OnGetInstalledMods_Params
{
public:
	TArray<struct FInstalledMod>                 InstalledMods;                                     // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3A8 (0x3A8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating
struct UCFCoreUISubsystem_OnFinishedUpdating_Params
{
public:
	struct FInstalledMod                         UpdatedMod;                                        // 0x0(0x3A8)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x3A8 (0x3A8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling
struct UCFCoreUISubsystem_OnFinishedInstalling_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3A8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation
struct UCFCoreUISubsystem_OnCancelModInstallation_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x488 (0x488 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID
struct UCFCoreUISubsystem_MakeFInstallProgressModFromID_Params
{
public:
	int64                                        ID;                                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FInstallProgressMod                   ReturnValue;                                       // 0x8(0x480)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x608 (0x608 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod
struct UCFCoreUISubsystem_MakeFInstallProgressMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ReturnValue;                                       // 0x188(0x480)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling
struct UCFCoreUISubsystem_IsAnyModInstalling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x188 (0x188 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.InstallMod
struct UCFCoreUISubsystem_InstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x198 (0x198 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.InitializeModView
struct UCFCoreUISubsystem_InitializeModView_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	struct FCFCoreMod                            Mod;                                               // 0x8(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x190(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_211C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x490 (0x490 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.GetModById
struct UCFCoreUISubsystem_GetModById_Params
{
public:
	struct FInstallProgressMod                   OutMod;                                            // 0x0(0x480)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        ID;                                                // 0x480(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x488(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_211D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x188 (0x188 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation
struct UCFCoreUISubsystem_CancelModInstallation_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById
struct UCFCoreUISubsystem_ApiGetModsById_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
struct UCFCoreVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor
struct UCFCoreVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor
struct UCFCoreVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

}
}


