#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C
// (None)

class UClass* UContextMenuItem_SimpleButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenuItem_SimpleButton_C");

	return Clss;
}


// ContextMenuItem_SimpleButton_C ContextMenuItem_SimpleButton.Default__ContextMenuItem_SimpleButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenuItem_SimpleButton_C* UContextMenuItem_SimpleButton_C::GetDefaultObj()
{
	static class UContextMenuItem_SimpleButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenuItem_SimpleButton_C*>(UContextMenuItem_SimpleButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


