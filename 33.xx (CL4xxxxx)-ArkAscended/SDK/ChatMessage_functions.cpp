#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatMessage.ChatMessage_C
// (None)

class UClass* UChatMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatMessage_C");

	return Clss;
}


// ChatMessage_C ChatMessage.Default__ChatMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatMessage_C* UChatMessage_C::GetDefaultObj()
{
	static class UChatMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatMessage_C*>(UChatMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


