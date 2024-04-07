#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WidgetBuffPanel.WidgetBuffPanel_C
// (None)

class UClass* UWidgetBuffPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBuffPanel_C");

	return Clss;
}


// WidgetBuffPanel_C WidgetBuffPanel.Default__WidgetBuffPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidgetBuffPanel_C* UWidgetBuffPanel_C::GetDefaultObj()
{
	static class UWidgetBuffPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBuffPanel_C*>(UWidgetBuffPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


