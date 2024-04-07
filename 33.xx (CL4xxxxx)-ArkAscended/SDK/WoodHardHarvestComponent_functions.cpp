#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WoodHardHarvestComponent.WoodHardHarvestComponent_C
// (None)

class UClass* UWoodHardHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WoodHardHarvestComponent_C");

	return Clss;
}


// WoodHardHarvestComponent_C WoodHardHarvestComponent.Default__WoodHardHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWoodHardHarvestComponent_C* UWoodHardHarvestComponent_C::GetDefaultObj()
{
	static class UWoodHardHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWoodHardHarvestComponent_C*>(UWoodHardHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


