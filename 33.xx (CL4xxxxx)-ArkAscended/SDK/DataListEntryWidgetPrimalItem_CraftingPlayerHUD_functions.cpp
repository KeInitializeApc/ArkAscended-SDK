#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftingPlayerHUD.DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C DataListEntryWidgetPrimalItem_CraftingPlayerHUD.Default__DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C* UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C*>(UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C::StaticClass()->DefaultObject);

	return Default;
}

}


