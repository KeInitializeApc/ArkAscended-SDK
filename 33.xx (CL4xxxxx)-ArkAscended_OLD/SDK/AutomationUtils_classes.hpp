#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AutomationUtils.AutomationUtilsBlueprintLibrary
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAutomationUtilsBlueprintLibrary* GetDefaultObj();

	void TakeGameplayAutomationScreenshot(class FString* ScreenshotName, float* MaxGlobalError, float* MaxLocalError, class FString* MapNameOverride);
};

}


