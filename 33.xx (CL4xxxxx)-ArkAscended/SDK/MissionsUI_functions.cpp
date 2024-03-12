#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionsUI.MissionsUI_C
// (None)

class UClass* UMissionsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionsUI_C");

	return Clss;
}


// MissionsUI_C MissionsUI.Default__MissionsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionsUI_C* UMissionsUI_C::GetDefaultObj()
{
	static class UMissionsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionsUI_C*>(UMissionsUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


