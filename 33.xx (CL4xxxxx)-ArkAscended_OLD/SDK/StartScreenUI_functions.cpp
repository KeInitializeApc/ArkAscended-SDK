#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StartScreenUI.StartScreenUI_C
// (None)

class UClass* UStartScreenUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StartScreenUI_C");

	return Clss;
}


// StartScreenUI_C StartScreenUI.Default__StartScreenUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStartScreenUI_C* UStartScreenUI_C::GetDefaultObj()
{
	static class UStartScreenUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStartScreenUI_C*>(UStartScreenUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


