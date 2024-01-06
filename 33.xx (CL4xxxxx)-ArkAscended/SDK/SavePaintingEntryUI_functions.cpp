#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C
// (None)

class UClass* USavePaintingEntryUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SavePaintingEntryUI_C");

	return Clss;
}


// SavePaintingEntryUI_C SavePaintingEntryUI.Default__SavePaintingEntryUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USavePaintingEntryUI_C* USavePaintingEntryUI_C::GetDefaultObj()
{
	static class USavePaintingEntryUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USavePaintingEntryUI_C*>(USavePaintingEntryUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


