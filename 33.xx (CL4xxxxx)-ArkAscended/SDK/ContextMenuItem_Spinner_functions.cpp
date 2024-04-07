#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenuItem_Spinner.ContextMenuItem_Spinner_C
// (None)

class UClass* UContextMenuItem_Spinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenuItem_Spinner_C");

	return Clss;
}


// ContextMenuItem_Spinner_C ContextMenuItem_Spinner.Default__ContextMenuItem_Spinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenuItem_Spinner_C* UContextMenuItem_Spinner_C::GetDefaultObj()
{
	static class UContextMenuItem_Spinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenuItem_Spinner_C*>(UContextMenuItem_Spinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


