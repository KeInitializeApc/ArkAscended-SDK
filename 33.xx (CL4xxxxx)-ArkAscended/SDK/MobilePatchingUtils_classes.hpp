#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MobilePatchingUtils.MobileInstalledContent
class UMobileInstalledContent : public UObject
{
public:
	uint8                                        Pad_ED7[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMobileInstalledContent* GetDefaultObj();

	void Mount(int32 PakOrder, const class FString& MountPoint, bool ReturnValue);
	void GetInstalledContentSize(float ReturnValue);
	void GetDiskFreeSpace(float ReturnValue);
};

// 0x40 (0x88 - 0x48)
// Class MobilePatchingUtils.MobilePendingContent
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	uint8                                        Pad_F84[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMobilePendingContent* GetDefaultObj();

	void StartInstall(FDelegateProperty_ OnSucceeded, FDelegateProperty_* OnFailed);
	void GetTotalDownloadedSize(float ReturnValue);
	void GetRequiredDiskSpace(float ReturnValue);
	void GetInstallProgress(float ReturnValue);
	void GetDownloadStatusText(class FText ReturnValue);
	void GetDownloadSpeed(float ReturnValue);
	void GetDownloadSize(float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MobilePatchingUtils.MobilePatchingLibrary
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMobilePatchingLibrary* GetDefaultObj();

	void RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, FDelegateProperty_ OnSucceeded, FDelegateProperty_* OnFailed);
	void HasActiveWiFiConnection(bool ReturnValue);
	void GetSupportedPlatformNames(const TArray<class FString>& ReturnValue);
	void GetInstalledContent(const class FString& InstallDirectory, class UMobileInstalledContent* ReturnValue);
	void GetActiveDeviceProfileName(const class FString& ReturnValue);
};

}


