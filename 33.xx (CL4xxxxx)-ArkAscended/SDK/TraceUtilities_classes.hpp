#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TraceUtilities.TraceUtilLibrary
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTraceUtilLibrary* GetDefaultObj();

	void TraceMarkRegionStart(class FString* Name);
	void TraceMarkRegionEnd(class FString* Name);
	void TraceBookmark(class FString* Name);
	void ToggleChannel(const class FString& ChannelName, bool* Enabled, bool ReturnValue);
	void StopTracing(bool ReturnValue);
	class FString StartTraceToFile(TArray<class FString>* Channels, bool ReturnValue);
	void StartTraceSendTo(const class FString& Target, TArray<class FString>* Channels, bool ReturnValue);
	void ResumeTracing(bool ReturnValue);
	void PauseTracing(bool ReturnValue);
	void IsTracing(bool ReturnValue);
	void IsChannelEnabled(const class FString& ChannelName, bool ReturnValue);
	void GetEnabledChannels(const TArray<class FString>& ReturnValue);
	void GetAllChannels(const TArray<class FString>& ReturnValue);
};

}


