#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TribeManagerListButtonWidget.TribeManagerListButtonWidget_C
// (None)

class UClass* UTribeManagerListButtonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TribeManagerListButtonWidget_C");

	return Clss;
}


// TribeManagerListButtonWidget_C TribeManagerListButtonWidget.Default__TribeManagerListButtonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribeManagerListButtonWidget_C* UTribeManagerListButtonWidget_C::GetDefaultObj()
{
	static class UTribeManagerListButtonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribeManagerListButtonWidget_C*>(UTribeManagerListButtonWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


