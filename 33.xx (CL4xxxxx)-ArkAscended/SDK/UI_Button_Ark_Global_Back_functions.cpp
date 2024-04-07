#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Back.UI_Button_Ark_Global_Back_C
// (None)

class UClass* UUI_Button_Ark_Global_Back_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Global_Back_C");

	return Clss;
}


// UI_Button_Ark_Global_Back_C UI_Button_Ark_Global_Back.Default__UI_Button_Ark_Global_Back_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Global_Back_C* UUI_Button_Ark_Global_Back_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Global_Back_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Global_Back_C*>(UUI_Button_Ark_Global_Back_C::StaticClass()->DefaultObject);

	return Default;
}

}


