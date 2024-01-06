#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C
// (None)

class UClass* UUI_Button_Ark_Global_Purchase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Global_Purchase_C");

	return Clss;
}


// UI_Button_Ark_Global_Purchase_C UI_Button_Ark_Global_Purchase.Default__UI_Button_Ark_Global_Purchase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Global_Purchase_C* UUI_Button_Ark_Global_Purchase_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Global_Purchase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Global_Purchase_C*>(UUI_Button_Ark_Global_Purchase_C::StaticClass()->DefaultObject);

	return Default;
}

}


