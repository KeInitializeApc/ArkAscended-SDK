#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CosmeticSelectorPanel.CosmeticSelectorPanel_C
// (None)

class UClass* UCosmeticSelectorPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticSelectorPanel_C");

	return Clss;
}


// CosmeticSelectorPanel_C CosmeticSelectorPanel.Default__CosmeticSelectorPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCosmeticSelectorPanel_C* UCosmeticSelectorPanel_C::GetDefaultObj()
{
	static class UCosmeticSelectorPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticSelectorPanel_C*>(UCosmeticSelectorPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


