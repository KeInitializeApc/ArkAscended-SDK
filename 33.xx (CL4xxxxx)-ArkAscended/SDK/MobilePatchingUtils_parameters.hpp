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

// 0x20 (0x20 - 0x0)
// Function MobilePatchingUtils.MobileInstalledContent.Mount
struct UMobileInstalledContent_Mount_Params
{
public:
	int32                                        PakOrder;                                          // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EC1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MountPoint;                                        // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_EC2[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
struct UMobileInstalledContent_GetInstalledContentSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
struct UMobileInstalledContent_GetDiskFreeSpace_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.StartInstall
struct UMobilePendingContent_StartInstall_Params
{
public:
	FDelegateProperty_                           OnSucceeded;                                       // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnFailed;                                          // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
struct UMobilePendingContent_GetTotalDownloadedSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
struct UMobilePendingContent_GetRequiredDiskSpace_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
struct UMobilePendingContent_GetInstallProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
struct UMobilePendingContent_GetDownloadStatusText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
struct UMobilePendingContent_GetDownloadSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
struct UMobilePendingContent_GetDownloadSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
struct UMobilePatchingLibrary_RequestContent_Params
{
public:
	class FString                                RemoteManifestURL;                                 // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                CloudURL;                                          // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                InstallDirectory;                                  // 0x20(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnSucceeded;                                       // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnFailed;                                          // 0x40(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
struct UMobilePatchingLibrary_HasActiveWiFiConnection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
struct UMobilePatchingLibrary_GetSupportedPlatformNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
struct UMobilePatchingLibrary_GetInstalledContent_Params
{
public:
	class FString                                InstallDirectory;                                  // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMobileInstalledContent*               ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
struct UMobilePatchingLibrary_GetActiveDeviceProfileName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


