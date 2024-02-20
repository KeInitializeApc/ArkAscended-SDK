#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenuItem_CosmeticEntry.ContextMenuItem_CosmeticEntry_C
// (None)

class UClass* UContextMenuItem_CosmeticEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenuItem_CosmeticEntry_C");

	return Clss;
}


// ContextMenuItem_CosmeticEntry_C ContextMenuItem_CosmeticEntry.Default__ContextMenuItem_CosmeticEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenuItem_CosmeticEntry_C* UContextMenuItem_CosmeticEntry_C::GetDefaultObj()
{
	static class UContextMenuItem_CosmeticEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenuItem_CosmeticEntry_C*>(UContextMenuItem_CosmeticEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


