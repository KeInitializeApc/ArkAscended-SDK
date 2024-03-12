#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C
// (None)

class UClass* UInventoryRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryRadialSelectorBP_C");

	return Clss;
}


// InventoryRadialSelectorBP_C InventoryRadialSelectorBP.Default__InventoryRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryRadialSelectorBP_C* UInventoryRadialSelectorBP_C::GetDefaultObj()
{
	static class UInventoryRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryRadialSelectorBP_C*>(UInventoryRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


