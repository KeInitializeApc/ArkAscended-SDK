#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenu_InventorySort.ContextMenu_InventorySort_C
// (None)

class UClass* UContextMenu_InventorySort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenu_InventorySort_C");

	return Clss;
}


// ContextMenu_InventorySort_C ContextMenu_InventorySort.Default__ContextMenu_InventorySort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenu_InventorySort_C* UContextMenu_InventorySort_C::GetDefaultObj()
{
	static class UContextMenu_InventorySort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenu_InventorySort_C*>(UContextMenu_InventorySort_C::StaticClass()->DefaultObject);

	return Default;
}

}


