#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDCustomProgressWidget.HUDCustomProgressWidget_C
// (None)

class UClass* UHUDCustomProgressWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDCustomProgressWidget_C");

	return Clss;
}


// HUDCustomProgressWidget_C HUDCustomProgressWidget.Default__HUDCustomProgressWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDCustomProgressWidget_C* UHUDCustomProgressWidget_C::GetDefaultObj()
{
	static class UHUDCustomProgressWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDCustomProgressWidget_C*>(UHUDCustomProgressWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


