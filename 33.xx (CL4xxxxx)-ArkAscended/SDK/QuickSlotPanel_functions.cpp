#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuickSlotPanel.QuickSlotPanel_C
// (None)

class UClass* UQuickSlotPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuickSlotPanel_C");

	return Clss;
}


// QuickSlotPanel_C QuickSlotPanel.Default__QuickSlotPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuickSlotPanel_C* UQuickSlotPanel_C::GetDefaultObj()
{
	static class UQuickSlotPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuickSlotPanel_C*>(UQuickSlotPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


