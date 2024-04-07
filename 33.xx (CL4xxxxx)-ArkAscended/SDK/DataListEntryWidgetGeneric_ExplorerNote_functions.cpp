#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C
// (None)

class UClass* UDataListEntryWidgetGeneric_ExplorerNote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetGeneric_ExplorerNote_C");

	return Clss;
}


// DataListEntryWidgetGeneric_ExplorerNote_C DataListEntryWidgetGeneric_ExplorerNote.Default__DataListEntryWidgetGeneric_ExplorerNote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetGeneric_ExplorerNote_C* UDataListEntryWidgetGeneric_ExplorerNote_C::GetDefaultObj()
{
	static class UDataListEntryWidgetGeneric_ExplorerNote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetGeneric_ExplorerNote_C*>(UDataListEntryWidgetGeneric_ExplorerNote_C::StaticClass()->DefaultObject);

	return Default;
}

}


