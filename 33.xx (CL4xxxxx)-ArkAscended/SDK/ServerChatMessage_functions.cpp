#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C
// (None)

class UClass* UServerChatMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerChatMessage_C");

	return Clss;
}


// ServerChatMessage_C ServerChatMessage.Default__ServerChatMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerChatMessage_C* UServerChatMessage_C::GetDefaultObj()
{
	static class UServerChatMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerChatMessage_C*>(UServerChatMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


