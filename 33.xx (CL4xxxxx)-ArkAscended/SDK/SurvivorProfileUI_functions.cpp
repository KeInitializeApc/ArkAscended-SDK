#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SurvivorProfileUI.SurvivorProfileUI_C
// (None)

class UClass* USurvivorProfileUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SurvivorProfileUI_C");

	return Clss;
}


// SurvivorProfileUI_C SurvivorProfileUI.Default__SurvivorProfileUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USurvivorProfileUI_C* USurvivorProfileUI_C::GetDefaultObj()
{
	static class USurvivorProfileUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USurvivorProfileUI_C*>(USurvivorProfileUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


