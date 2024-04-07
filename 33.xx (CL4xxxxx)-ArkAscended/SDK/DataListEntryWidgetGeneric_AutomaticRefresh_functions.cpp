#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_AutomaticRefresh.DataListEntryWidgetGeneric_AutomaticRefresh_C
// (None)

class UClass* UDataListEntryWidgetGeneric_AutomaticRefresh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetGeneric_AutomaticRefresh_C");

	return Clss;
}


// DataListEntryWidgetGeneric_AutomaticRefresh_C DataListEntryWidgetGeneric_AutomaticRefresh.Default__DataListEntryWidgetGeneric_AutomaticRefresh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetGeneric_AutomaticRefresh_C* UDataListEntryWidgetGeneric_AutomaticRefresh_C::GetDefaultObj()
{
	static class UDataListEntryWidgetGeneric_AutomaticRefresh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetGeneric_AutomaticRefresh_C*>(UDataListEntryWidgetGeneric_AutomaticRefresh_C::StaticClass()->DefaultObject);

	return Default;
}

}


