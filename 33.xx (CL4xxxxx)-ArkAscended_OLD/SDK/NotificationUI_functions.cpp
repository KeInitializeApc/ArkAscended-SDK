#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NotificationUI.NotificationUI_C
// (None)

class UClass* UNotificationUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationUI_C");

	return Clss;
}


// NotificationUI_C NotificationUI.Default__NotificationUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationUI_C* UNotificationUI_C::GetDefaultObj()
{
	static class UNotificationUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationUI_C*>(UNotificationUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


