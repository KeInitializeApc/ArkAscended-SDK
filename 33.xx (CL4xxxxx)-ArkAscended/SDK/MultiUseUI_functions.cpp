#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiUseUI.MultiUseUI_C
// (None)

class UClass* UMultiUseUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiUseUI_C");

	return Clss;
}


// MultiUseUI_C MultiUseUI.Default__MultiUseUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiUseUI_C* UMultiUseUI_C::GetDefaultObj()
{
	static class UMultiUseUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiUseUI_C*>(UMultiUseUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


