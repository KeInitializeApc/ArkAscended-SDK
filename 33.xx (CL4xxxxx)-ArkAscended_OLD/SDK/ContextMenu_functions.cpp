#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenu.ContextMenu_C
// (None)

class UClass* UContextMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenu_C");

	return Clss;
}


// ContextMenu_C ContextMenu.Default__ContextMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenu_C* UContextMenu_C::GetDefaultObj()
{
	static class UContextMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenu_C*>(UContextMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


