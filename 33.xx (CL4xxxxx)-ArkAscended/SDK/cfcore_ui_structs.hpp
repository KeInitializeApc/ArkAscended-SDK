#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EViewState : uint8
{
	Store                          = 0,
	ModPage                        = 1,
	ScreenShot                     = 2,
	Dropdown                       = 3,
	ServerMods                     = 4,
	Popup                          = 5,
	EViewState_MAX                 = 6,
};

enum class EGameModsEvent : uint8
{
	EGameModsEvent_ViewRegister    = 0,
	EGameModsEvent_FinishInstalling = 1,
	EGameModsEvent_Uninstalling    = 2,
	EGameModsEvent_InstallingProgress = 3,
	EGameModsEvent_InitInstalling  = 4,
	EGameModsEvent_InitUninstalling = 5,
	EGameModsEvent_AlreadyInstalled = 6,
	EGameModsEvent_FinishUpdating  = 7,
	EGameModsEvent_SearchMods      = 8,
	EGameModsEvent_MyMods          = 9,
	EGameModsEvent_CancelInstalling = 10,
	EGameModsEvent_MAX             = 11,
};

enum class EInstallStatus : uint8
{
	EInstallStatus_Default         = 0,
	EInstallStatus_Installing      = 1,
	EInstallStatus_Installed       = 2,
	EInstallStatus_InstalledButNeedsUpdate = 3,
	EInstallStatus_Updating        = 4,
	EInstallStatus_Uninstalling    = 5,
	EInstallStatus_InstalledButNeedsUpdateMyMods = 6,
	EInstallStatus_MAX             = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x100 - 0x8)
// ScriptStruct cfcore_ui.CFCoreThemeRowData
struct FCFCoreThemeRowData : public FTableRowBase
{
public:
	bool                                         RoundedMode;                                       // 0x8(0x1)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A9D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          MainFont;                                          // 0xC(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SecondaryFont;                                     // 0x1C(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x2C(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ClassUnderline;                                    // 0x3C(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Button_SignIn;                                     // 0x4C(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SideBar;                                           // 0x5C(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Button_SideMenu;                                   // 0x6C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Search_SideMenu;                                   // 0x7C(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          ModWindow;                                         // 0x8C(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Button_Install;                                    // 0x9C(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Button_Uninstall;                                  // 0xAC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Button_Update;                                     // 0xBC(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          ExamineBackground;                                 // 0xCC(0x10)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          InfoBackground;                                    // 0xDC(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          NotificationBackground;                            // 0xEC(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore_ui.ModIdentification
struct FModIdentification
{
public:
	int64                                        ID;                                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int64                                        MainFileId;                                        // 0x8(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore_ui.ScreenshotInfo
struct FScreenshotInfo
{
public:
	TArray<class UTexture2DDynamic*>             Screenshots;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Descriptions;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x480 (0x480 - 0x0)
// ScriptStruct cfcore_ui.InstallProgressMod
struct FInstallProgressMod
{
public:
	struct FInstalledMod                         Mod;                                               // 0x0(0x3A8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FLibraryProgress                      Progress;                                          // 0x3A8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AA2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EInstallStatus                    InstallStatus;                                     // 0x3E9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     DynamicImage;                                      // 0x3F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class UTexture2D*, class FText>         ShowcaseImages;                                    // 0x3F8(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FScreenshotInfo                       Screenshots_Info;                                  // 0x448(0x20)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FCategory>                     Categories;                                        // 0x468(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	class UWidget*                               ModSlotRef;                                        // 0x478(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


