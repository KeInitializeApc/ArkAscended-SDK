#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Install.UI_Button_Ark_Global_Install_C
// (None)

class UClass* UUI_Button_Ark_Global_Install_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Global_Install_C");

	return Clss;
}


// UI_Button_Ark_Global_Install_C UI_Button_Ark_Global_Install.Default__UI_Button_Ark_Global_Install_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Global_Install_C* UUI_Button_Ark_Global_Install_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Global_Install_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Global_Install_C*>(UUI_Button_Ark_Global_Install_C::StaticClass()->DefaultObject);

	return Default;
}

}


