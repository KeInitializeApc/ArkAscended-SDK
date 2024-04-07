#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C
// (None)

class UClass* UHUDPointsOfInterestContainerWidgetBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDPointsOfInterestContainerWidgetBP_C");

	return Clss;
}


// HUDPointsOfInterestContainerWidgetBP_C HUDPointsOfInterestContainerWidgetBP.Default__HUDPointsOfInterestContainerWidgetBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDPointsOfInterestContainerWidgetBP_C* UHUDPointsOfInterestContainerWidgetBP_C::GetDefaultObj()
{
	static class UHUDPointsOfInterestContainerWidgetBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDPointsOfInterestContainerWidgetBP_C*>(UHUDPointsOfInterestContainerWidgetBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


