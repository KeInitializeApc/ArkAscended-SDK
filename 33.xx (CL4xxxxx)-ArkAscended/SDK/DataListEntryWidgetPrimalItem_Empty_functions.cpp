#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_Empty_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_Empty_C DataListEntryWidgetPrimalItem_Empty.Default__DataListEntryWidgetPrimalItem_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_Empty_C* UDataListEntryWidgetPrimalItem_Empty_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_Empty_C*>(UDataListEntryWidgetPrimalItem_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


