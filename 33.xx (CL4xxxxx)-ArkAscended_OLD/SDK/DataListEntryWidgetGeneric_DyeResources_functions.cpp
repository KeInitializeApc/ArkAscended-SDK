#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C
// (None)

class UClass* UDataListEntryWidgetGeneric_DyeResources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetGeneric_DyeResources_C");

	return Clss;
}


// DataListEntryWidgetGeneric_DyeResources_C DataListEntryWidgetGeneric_DyeResources.Default__DataListEntryWidgetGeneric_DyeResources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetGeneric_DyeResources_C* UDataListEntryWidgetGeneric_DyeResources_C::GetDefaultObj()
{
	static class UDataListEntryWidgetGeneric_DyeResources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetGeneric_DyeResources_C*>(UDataListEntryWidgetGeneric_DyeResources_C::StaticClass()->DefaultObject);

	return Default;
}

}


