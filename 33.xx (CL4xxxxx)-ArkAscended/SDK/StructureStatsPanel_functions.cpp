#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StructureStatsPanel.StructureStatsPanel_C
// (None)

class UClass* UStructureStatsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureStatsPanel_C");

	return Clss;
}


// StructureStatsPanel_C StructureStatsPanel.Default__StructureStatsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructureStatsPanel_C* UStructureStatsPanel_C::GetDefaultObj()
{
	static class UStructureStatsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructureStatsPanel_C*>(UStructureStatsPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


