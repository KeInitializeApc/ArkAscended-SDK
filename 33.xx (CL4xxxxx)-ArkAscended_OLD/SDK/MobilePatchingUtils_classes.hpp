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
	uint8                                        Pad_1F3D[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMobileInstalledContent* GetDefaultObj();

	class FString Mount(bool* ReturnValue);
	void GetInstalledContentSize(float* ReturnValue);
	void GetDiskFreeSpace(float* ReturnValue);
};

// 0x40 (0x88 - 0x48)
// Class MobilePatchingUtils.MobilePendingContent
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	uint8                                        Pad_1F6E[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMobilePendingContent* GetDefaultObj();

	FDelegateProperty_ StartInstall(FDelegateProperty_ OnFailed);
	void GetTotalDownloadedSize(float* ReturnValue);
	void GetRequiredDiskSpace(float* ReturnValue);
	void GetInstallProgress(float* ReturnValue);
	void GetDownloadStatusText(class FText* ReturnValue);
	void GetDownloadSpeed(float* ReturnValue);
	void GetDownloadSize(float* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MobilePatchingUtils.MobilePatchingLibrary
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMobilePatchingLibrary* GetDefaultObj();

	FDelegateProperty_ RequestContent(FDelegateProperty_ OnFailed);
	void HasActiveWiFiConnection(bool* ReturnValue);
	void GetSupportedPlatformNames(TArray<class FString>* ReturnValue);
	class FString GetInstalledContent(class UMobileInstalledContent** ReturnValue);
	void GetActiveDeviceProfileName(class FString* ReturnValue);
};

}


