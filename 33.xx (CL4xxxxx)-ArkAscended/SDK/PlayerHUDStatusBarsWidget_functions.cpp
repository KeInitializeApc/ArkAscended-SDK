#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C
// (None)

class UClass* UPlayerHUDStatusBarsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerHUDStatusBarsWidget_C");

	return Clss;
}


// PlayerHUDStatusBarsWidget_C PlayerHUDStatusBarsWidget.Default__PlayerHUDStatusBarsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerHUDStatusBarsWidget_C* UPlayerHUDStatusBarsWidget_C::GetDefaultObj()
{
	static class UPlayerHUDStatusBarsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerHUDStatusBarsWidget_C*>(UPlayerHUDStatusBarsWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


