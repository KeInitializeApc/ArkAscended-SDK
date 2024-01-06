#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OilHarvestComponent.OilHarvestComponent_C
// (None)

class UClass* UOilHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OilHarvestComponent_C");

	return Clss;
}


// OilHarvestComponent_C OilHarvestComponent.Default__OilHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOilHarvestComponent_C* UOilHarvestComponent_C::GetDefaultObj()
{
	static class UOilHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOilHarvestComponent_C*>(UOilHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


