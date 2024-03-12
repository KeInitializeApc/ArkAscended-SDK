#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_CraftQueue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_CraftQueue_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_CraftQueue_C DataListEntryWidgetPrimalItem_CraftQueue.Default__DataListEntryWidgetPrimalItem_CraftQueue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_CraftQueue_C* UDataListEntryWidgetPrimalItem_CraftQueue_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_CraftQueue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_CraftQueue_C*>(UDataListEntryWidgetPrimalItem_CraftQueue_C::StaticClass()->DefaultObject);

	return Default;
}

}


