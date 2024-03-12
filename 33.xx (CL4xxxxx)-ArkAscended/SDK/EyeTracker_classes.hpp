#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class EyeTracker.EyeTrackerFunctionLibrary
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEyeTrackerFunctionLibrary* GetDefaultObj();

	class APlayerController* SetEyeTrackedPlayer();
	bool IsStereoGazeDataAvailable();
	bool IsEyeTrackerConnected();
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};

}


