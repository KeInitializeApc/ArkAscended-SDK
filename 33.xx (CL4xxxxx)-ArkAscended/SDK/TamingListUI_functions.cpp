#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TamingListUI.TamingListUI_C
// (None)

class UClass* UTamingListUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TamingListUI_C");

	return Clss;
}


// TamingListUI_C TamingListUI.Default__TamingListUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTamingListUI_C* UTamingListUI_C::GetDefaultObj()
{
	static class UTamingListUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTamingListUI_C*>(UTamingListUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


