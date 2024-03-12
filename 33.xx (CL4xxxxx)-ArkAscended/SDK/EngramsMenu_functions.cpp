#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EngramsMenu.EngramsMenu_C
// (None)

class UClass* UEngramsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramsMenu_C");

	return Clss;
}


// EngramsMenu_C EngramsMenu.Default__EngramsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramsMenu_C* UEngramsMenu_C::GetDefaultObj()
{
	static class UEngramsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramsMenu_C*>(UEngramsMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


