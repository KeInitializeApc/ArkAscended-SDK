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
	bool ToggleChannel(bool* Enabled);
	bool StopTracing();
	bool StartTraceToFile();
	bool StartTraceSendTo();
	bool ResumeTracing();
	bool PauseTracing();
	bool IsTracing();
	bool IsChannelEnabled();
	TArray<class FString> GetEnabledChannels();
	TArray<class FString> GetAllChannels();
};

}


