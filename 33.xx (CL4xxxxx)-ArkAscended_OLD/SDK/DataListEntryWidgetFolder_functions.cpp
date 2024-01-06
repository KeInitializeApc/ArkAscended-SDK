#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetFolder.DataListEntryWidgetFolder_C
// (None)

class UClass* UDataListEntryWidgetFolder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetFolder_C");

	return Clss;
}


// DataListEntryWidgetFolder_C DataListEntryWidgetFolder.Default__DataListEntryWidgetFolder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetFolder_C* UDataListEntryWidgetFolder_C::GetDefaultObj()
{
	static class UDataListEntryWidgetFolder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetFolder_C*>(UDataListEntryWidgetFolder_C::StaticClass()->DefaultObject);

	return Default;
}

}


