#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WoodHarvestComponent.WoodHarvestComponent_C
// (None)

class UClass* UWoodHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WoodHarvestComponent_C");

	return Clss;
}


// WoodHarvestComponent_C WoodHarvestComponent.Default__WoodHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWoodHarvestComponent_C* UWoodHarvestComponent_C::GetDefaultObj()
{
	static class UWoodHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWoodHarvestComponent_C*>(UWoodHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


