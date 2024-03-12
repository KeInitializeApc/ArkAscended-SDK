#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GenericButtonEntryWidget.GenericButtonEntryWidget_C
// (None)

class UClass* UGenericButtonEntryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericButtonEntryWidget_C");

	return Clss;
}


// GenericButtonEntryWidget_C GenericButtonEntryWidget.Default__GenericButtonEntryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericButtonEntryWidget_C* UGenericButtonEntryWidget_C::GetDefaultObj()
{
	static class UGenericButtonEntryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericButtonEntryWidget_C*>(UGenericButtonEntryWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


