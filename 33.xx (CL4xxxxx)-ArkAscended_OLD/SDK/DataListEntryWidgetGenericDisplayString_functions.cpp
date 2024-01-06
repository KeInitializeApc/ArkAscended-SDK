#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetGenericDisplayString.DataListEntryWidgetGenericDisplayString_C
// (None)

class UClass* UDataListEntryWidgetGenericDisplayString_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetGenericDisplayString_C");

	return Clss;
}


// DataListEntryWidgetGenericDisplayString_C DataListEntryWidgetGenericDisplayString.Default__DataListEntryWidgetGenericDisplayString_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetGenericDisplayString_C* UDataListEntryWidgetGenericDisplayString_C::GetDefaultObj()
{
	static class UDataListEntryWidgetGenericDisplayString_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetGenericDisplayString_C*>(UDataListEntryWidgetGenericDisplayString_C::StaticClass()->DefaultObject);

	return Default;
}

}


