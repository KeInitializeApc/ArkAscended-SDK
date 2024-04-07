#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoneHarvestComponent.StoneHarvestComponent_C
// (None)

class UClass* UStoneHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoneHarvestComponent_C");

	return Clss;
}


// StoneHarvestComponent_C StoneHarvestComponent.Default__StoneHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoneHarvestComponent_C* UStoneHarvestComponent_C::GetDefaultObj()
{
	static class UStoneHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoneHarvestComponent_C*>(UStoneHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


