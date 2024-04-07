#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DedicatedUI.DedicatedUI_C
// (None)

class UClass* UDedicatedUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DedicatedUI_C");

	return Clss;
}


// DedicatedUI_C DedicatedUI.Default__DedicatedUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDedicatedUI_C* UDedicatedUI_C::GetDefaultObj()
{
	static class UDedicatedUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDedicatedUI_C*>(UDedicatedUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


