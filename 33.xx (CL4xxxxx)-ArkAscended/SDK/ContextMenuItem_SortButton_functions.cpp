#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C
// (None)

class UClass* UContextMenuItem_SortButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenuItem_SortButton_C");

	return Clss;
}


// ContextMenuItem_SortButton_C ContextMenuItem_SortButton.Default__ContextMenuItem_SortButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenuItem_SortButton_C* UContextMenuItem_SortButton_C::GetDefaultObj()
{
	static class UContextMenuItem_SortButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenuItem_SortButton_C*>(UContextMenuItem_SortButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


