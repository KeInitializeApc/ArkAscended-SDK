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
	bool ToggleChannel(bool ReturnValue);
	void StopTracing(bool ReturnValue);
	class FString StartTraceToFile(const TArray<class FString>& Channels, bool ReturnValue);
	class FString StartTraceSendTo(const TArray<class FString>& Channels, bool ReturnValue);
	void ResumeTracing(bool ReturnValue);
	void PauseTracing(bool ReturnValue);
	void IsTracing(bool ReturnValue);
	class FString IsChannelEnabled(bool ReturnValue);
	void GetEnabledChannels(const TArray<class FString>& ReturnValue);
	void GetAllChannels(const TArray<class FString>& ReturnValue);
};

}


