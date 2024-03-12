#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionsUI_Entry.MissionsUI_Entry_C
// (None)

class UClass* UMissionsUI_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionsUI_Entry_C");

	return Clss;
}


// MissionsUI_Entry_C MissionsUI_Entry.Default__MissionsUI_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionsUI_Entry_C* UMissionsUI_Entry_C::GetDefaultObj()
{
	static class UMissionsUI_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionsUI_Entry_C*>(UMissionsUI_Entry_C::StaticClass()->DefaultObject);

	return Default;
}

}


