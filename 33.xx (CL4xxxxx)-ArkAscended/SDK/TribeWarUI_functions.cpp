#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TribeWarUI.TribeWarUI_C
// (None)

class UClass* UTribeWarUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TribeWarUI_C");

	return Clss;
}


// TribeWarUI_C TribeWarUI.Default__TribeWarUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribeWarUI_C* UTribeWarUI_C::GetDefaultObj()
{
	static class UTribeWarUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribeWarUI_C*>(UTribeWarUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


