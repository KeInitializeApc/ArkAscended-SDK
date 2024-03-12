#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_QuickItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_QuickItem_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_QuickItem_C DataListEntryWidgetPrimalItem_QuickItem.Default__DataListEntryWidgetPrimalItem_QuickItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_QuickItem_C* UDataListEntryWidgetPrimalItem_QuickItem_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_QuickItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_QuickItem_C*>(UDataListEntryWidgetPrimalItem_QuickItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


