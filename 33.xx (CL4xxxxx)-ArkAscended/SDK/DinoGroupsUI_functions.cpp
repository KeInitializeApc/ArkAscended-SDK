#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoGroupsUI.DinoGroupsUI_C
// (None)

class UClass* UDinoGroupsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoGroupsUI_C");

	return Clss;
}


// DinoGroupsUI_C DinoGroupsUI.Default__DinoGroupsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoGroupsUI_C* UDinoGroupsUI_C::GetDefaultObj()
{
	static class UDinoGroupsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoGroupsUI_C*>(UDinoGroupsUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


