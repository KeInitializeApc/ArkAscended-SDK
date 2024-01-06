#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PaintingsListUI.PaintingsListUI_C
// (None)

class UClass* UPaintingsListUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaintingsListUI_C");

	return Clss;
}


// PaintingsListUI_C PaintingsListUI.Default__PaintingsListUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPaintingsListUI_C* UPaintingsListUI_C::GetDefaultObj()
{
	static class UPaintingsListUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaintingsListUI_C*>(UPaintingsListUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


