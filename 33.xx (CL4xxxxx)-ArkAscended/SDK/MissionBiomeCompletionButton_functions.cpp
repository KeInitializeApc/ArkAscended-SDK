#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionBiomeCompletionButton.MissionBiomeCompletionButton_C
// (None)

class UClass* UMissionBiomeCompletionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionBiomeCompletionButton_C");

	return Clss;
}


// MissionBiomeCompletionButton_C MissionBiomeCompletionButton.Default__MissionBiomeCompletionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionBiomeCompletionButton_C* UMissionBiomeCompletionButton_C::GetDefaultObj()
{
	static class UMissionBiomeCompletionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionBiomeCompletionButton_C*>(UMissionBiomeCompletionButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


