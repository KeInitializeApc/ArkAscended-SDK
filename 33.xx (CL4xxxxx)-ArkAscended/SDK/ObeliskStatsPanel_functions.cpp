#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C
// (None)

class UClass* UObeliskStatsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObeliskStatsPanel_C");

	return Clss;
}


// ObeliskStatsPanel_C ObeliskStatsPanel.Default__ObeliskStatsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UObeliskStatsPanel_C* UObeliskStatsPanel_C::GetDefaultObj()
{
	static class UObeliskStatsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UObeliskStatsPanel_C*>(UObeliskStatsPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


