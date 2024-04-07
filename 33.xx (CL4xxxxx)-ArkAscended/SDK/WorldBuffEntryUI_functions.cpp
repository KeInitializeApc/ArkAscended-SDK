#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WorldBuffEntryUI.WorldBuffEntryUI_C
// (None)

class UClass* UWorldBuffEntryUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldBuffEntryUI_C");

	return Clss;
}


// WorldBuffEntryUI_C WorldBuffEntryUI.Default__WorldBuffEntryUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorldBuffEntryUI_C* UWorldBuffEntryUI_C::GetDefaultObj()
{
	static class UWorldBuffEntryUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldBuffEntryUI_C*>(UWorldBuffEntryUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


