#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C
// (None)

class UClass* UContextMenuItem_SimpleCaption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenuItem_SimpleCaption_C");

	return Clss;
}


// ContextMenuItem_SimpleCaption_C ContextMenuItem_SimpleCaption.Default__ContextMenuItem_SimpleCaption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenuItem_SimpleCaption_C* UContextMenuItem_SimpleCaption_C::GetDefaultObj()
{
	static class UContextMenuItem_SimpleCaption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenuItem_SimpleCaption_C*>(UContextMenuItem_SimpleCaption_C::StaticClass()->DefaultObject);

	return Default;
}

}


