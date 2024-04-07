#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TribeWarButton.TribeWarButton_C
// (None)

class UClass* UTribeWarButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TribeWarButton_C");

	return Clss;
}


// TribeWarButton_C TribeWarButton.Default__TribeWarButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribeWarButton_C* UTribeWarButton_C::GetDefaultObj()
{
	static class UTribeWarButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribeWarButton_C*>(UTribeWarButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


