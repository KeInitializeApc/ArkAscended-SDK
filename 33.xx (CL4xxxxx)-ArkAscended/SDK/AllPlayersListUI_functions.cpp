#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C
// (None)

class UClass* UAllPlayersListUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllPlayersListUI_C");

	return Clss;
}


// AllPlayersListUI_C AllPlayersListUI.Default__AllPlayersListUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAllPlayersListUI_C* UAllPlayersListUI_C::GetDefaultObj()
{
	static class UAllPlayersListUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAllPlayersListUI_C*>(UAllPlayersListUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


