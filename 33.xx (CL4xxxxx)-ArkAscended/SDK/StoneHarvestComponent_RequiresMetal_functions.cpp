#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C
// (None)

class UClass* UStoneHarvestComponent_RequiresMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoneHarvestComponent_RequiresMetal_C");

	return Clss;
}


// StoneHarvestComponent_RequiresMetal_C StoneHarvestComponent_RequiresMetal.Default__StoneHarvestComponent_RequiresMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoneHarvestComponent_RequiresMetal_C* UStoneHarvestComponent_RequiresMetal_C::GetDefaultObj()
{
	static class UStoneHarvestComponent_RequiresMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoneHarvestComponent_RequiresMetal_C*>(UStoneHarvestComponent_RequiresMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


