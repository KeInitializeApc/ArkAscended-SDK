#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_MainMenu.DataListButton_MainMenu_C
// (None)

class UClass* UDataListButton_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_MainMenu_C");

	return Clss;
}


// DataListButton_MainMenu_C DataListButton_MainMenu.Default__DataListButton_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_MainMenu_C* UDataListButton_MainMenu_C::GetDefaultObj()
{
	static class UDataListButton_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_MainMenu_C*>(UDataListButton_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


