#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Disabled.DataListEntryWidgetPrimalItem_Disabled_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_Disabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_Disabled_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_Disabled_C DataListEntryWidgetPrimalItem_Disabled.Default__DataListEntryWidgetPrimalItem_Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_Disabled_C* UDataListEntryWidgetPrimalItem_Disabled_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_Disabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_Disabled_C*>(UDataListEntryWidgetPrimalItem_Disabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


