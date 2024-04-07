#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C
// (None)

class UClass* UDataListEntryWidgetGeneric_SimpleTextDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetGeneric_SimpleTextDisplay_C");

	return Clss;
}


// DataListEntryWidgetGeneric_SimpleTextDisplay_C DataListEntryWidgetGeneric_SimpleTextDisplay.Default__DataListEntryWidgetGeneric_SimpleTextDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetGeneric_SimpleTextDisplay_C* UDataListEntryWidgetGeneric_SimpleTextDisplay_C::GetDefaultObj()
{
	static class UDataListEntryWidgetGeneric_SimpleTextDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetGeneric_SimpleTextDisplay_C*>(UDataListEntryWidgetGeneric_SimpleTextDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


