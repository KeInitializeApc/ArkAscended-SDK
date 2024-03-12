#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetFolder_New.DataListEntryWidgetFolder_New_C
// (None)

class UClass* UDataListEntryWidgetFolder_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetFolder_New_C");

	return Clss;
}


// DataListEntryWidgetFolder_New_C DataListEntryWidgetFolder_New.Default__DataListEntryWidgetFolder_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetFolder_New_C* UDataListEntryWidgetFolder_New_C::GetDefaultObj()
{
	static class UDataListEntryWidgetFolder_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetFolder_New_C*>(UDataListEntryWidgetFolder_New_C::StaticClass()->DefaultObject);

	return Default;
}

}


