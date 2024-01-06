#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_QuickItemDyeUI_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_QuickItemDyeUI_C DataListEntryWidgetPrimalItem_QuickItemDyeUI.Default__DataListEntryWidgetPrimalItem_QuickItemDyeUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C* UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C*>(UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


