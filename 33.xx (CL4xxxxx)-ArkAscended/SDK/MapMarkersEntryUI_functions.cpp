#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapMarkersEntryUI.MapMarkersEntryUI_C
// (None)

class UClass* UMapMarkersEntryUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapMarkersEntryUI_C");

	return Clss;
}


// MapMarkersEntryUI_C MapMarkersEntryUI.Default__MapMarkersEntryUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapMarkersEntryUI_C* UMapMarkersEntryUI_C::GetDefaultObj()
{
	static class UMapMarkersEntryUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapMarkersEntryUI_C*>(UMapMarkersEntryUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


